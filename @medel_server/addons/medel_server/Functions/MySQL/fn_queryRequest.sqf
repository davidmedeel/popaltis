
#include "\medel_server\script_macros.hpp"

private ["_uid","_side","_query","_queryResult","_tickTime","_tmp"];
_uid = [_this,0,"",[""]] call BIS_fnc_param;
_side = [_this,1,sideUnknown,[civilian]] call BIS_fnc_param;
_ownerID = [_this,2,objNull,[objNull]] call BIS_fnc_param;

if (isNull _ownerID) exitWith {};
_ownerID = owner _ownerID;

_query = switch (_side) do {

    case west: {format ["SELECT pid, name, cash, bankacc, adminlevel, donorlevel, cop_licenses, coplevel, cop_gear, blacklist, cop_stats, playtime FROM players WHERE pid='%1'",_uid];};

    case civilian: {format ["SELECT pid, name, cash, bankacc, adminlevel, donorlevel, civ_licenses, arrested, civ_gear, civ_stats, civ_alive, civ_position, playtime FROM players WHERE pid='%1'",_uid];};

    case independent: {format ["SELECT pid, name, cash, bankacc, adminlevel, donorlevel, med_licenses, mediclevel, med_gear, med_stats, playtime FROM players WHERE pid='%1'",_uid];};
};

_tickTime = diag_tickTime;
_queryResult = [_query,2] call DB_fnc_asyncCall;

if (EXTDB_SETTING(getNumber,"DebugMode") isEqualTo 1) then {
    diag_log "------------- Solicitud de Consulta del Usuario -------------";
    diag_log format ["QUERY: %1",_query];
    diag_log format ["Tiempo Para Completar: %1 (en segundos)",(diag_tickTime - _tickTime)];
    diag_log format ["Resultado: %1",_queryResult];
    diag_log "------------------------------------------------";
};

if (_queryResult isEqualType "") exitWith {
    [] remoteExecCall ["SOCK_fnc_insertPlayerInfo",_ownerID];
};

if (count _queryResult isEqualTo 0) exitWith {
    [] remoteExecCall ["SOCK_fnc_insertPlayerInfo",_ownerID];
};

_tmp = _queryResult select 2;
_queryResult set[2,[_tmp] call DB_fnc_numberSafe];
_tmp = _queryResult select 3;
_queryResult set[3,[_tmp] call DB_fnc_numberSafe];

_new = [(_queryResult select 6)] call DB_fnc_mresToArray;
if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
_queryResult set[6,_new];

_old = _queryResult select 6;
for "_i" from 0 to (count _old)-1 do {
    _data = _old select _i;
    _old set[_i,[_data select 0, ([_data select 1,1] call DB_fnc_bool)]];
};

_queryResult set[6,_old];

_new = [(_queryResult select 8)] call DB_fnc_mresToArray;
if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
_queryResult set[8,_new];

switch (_side) do {
    case west: {
        _queryResult set[9,([_queryResult select 9,1] call DB_fnc_bool)];

        _new = [(_queryResult select 10)] call DB_fnc_mresToArray;
        if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
        _queryResult set[10,_new];

        _new = [(_queryResult select 11)] call DB_fnc_mresToArray;
        if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
        _index = TON_fnc_playtime_values_request find [_uid, _new];
        if (_index != -1) then {
            TON_fnc_playtime_values_request set[_index,-1];
            TON_fnc_playtime_values_request = TON_fnc_playtime_values_request - [-1];
            TON_fnc_playtime_values_request pushBack [_uid, _new];
        } else {
            TON_fnc_playtime_values_request pushBack [_uid, _new];
        };
        [_uid,_new select 0] call TON_fnc_setPlayTime;
    };

    case civilian: {
        _queryResult set[7,([_queryResult select 7,1] call DB_fnc_bool)];

        _new = [(_queryResult select 9)] call DB_fnc_mresToArray;
        if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
        _queryResult set[9,_new];

        _queryResult set[10,([_queryResult select 10,1] call DB_fnc_bool)];
        _new = [(_queryResult select 11)] call DB_fnc_mresToArray;
        if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
        _queryResult set[11,_new];

        _new = [(_queryResult select 12)] call DB_fnc_mresToArray;
        if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
        _index = TON_fnc_playtime_values_request find [_uid, _new];
        if (_index != -1) then {
            TON_fnc_playtime_values_request set[_index,-1];
            TON_fnc_playtime_values_request = TON_fnc_playtime_values_request - [-1];
            TON_fnc_playtime_values_request pushBack [_uid, _new];
        } else {
            TON_fnc_playtime_values_request pushBack [_uid, _new];
        };
        [_uid,_new select 2] call TON_fnc_setPlayTime;

        _houseData = _uid spawn TON_fnc_fetchPlayerHouses;
        waitUntil {scriptDone _houseData};
        _queryResult pushBack (missionNamespace getVariable [format ["houses_%1",_uid],[]]);
        _gangData = _uid spawn TON_fnc_queryPlayerGang;
        waitUntil{scriptDone _gangData};
        _queryResult pushBack (missionNamespace getVariable [format ["gang_%1",_uid],[]]);
    };

    case independent: {
        _new = [(_queryResult select 9)] call DB_fnc_mresToArray;
        if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
        _queryResult set[9,_new];

        _new = [(_queryResult select 10)] call DB_fnc_mresToArray;
        if (_new isEqualType "") then {_new = call compile format ["%1", _new];};
        _index = TON_fnc_playtime_values_request find [_uid, _new];
        if !(_index isEqualTo -1) then {
            TON_fnc_playtime_values_request set[_index,-1];
            TON_fnc_playtime_values_request = TON_fnc_playtime_values_request - [-1];
            TON_fnc_playtime_values_request pushBack [_uid, _new];
        } else {
            TON_fnc_playtime_values_request pushBack [_uid, _new];
        };
        [_uid,_new select 1] call TON_fnc_setPlayTime;
    };
};

publicVariable "TON_fnc_playtime_values_request";

_keyArr = missionNamespace getVariable [format ["%1_KEYS_%2",_uid,_side],[]];
_queryResult pushBack _keyArr;

_queryResult remoteExec ["SOCK_fnc_requestReceived",_ownerID];
