
#include "\medel_server\script_macros.hpp"

private ["_queryResult","_query","_alias"];

params [
    "_uid",
    "_name",
    ["_money",-1,[0]],
    ["_bank",-1,[0]],
    ["_returnToSender",objNull,[objNull]]
];

if ((_uid isEqualTo "") || (_name isEqualTo "")) exitWith {systemChat "Bad UID or name";}; 
if (isNull _returnToSender) exitWith {systemChat "ReturnToSender is Null!";}; 

_query = format ["SELECT pid, name FROM players WHERE pid='%1'",_uid];

_tickTime = diag_tickTime;
_queryResult = [_query,2] call DB_fnc_asyncCall;

if (EXTDB_SETTING(getNumber,"DebugMode") isEqualTo 1) then {
    diag_log "------------- Solicitud de Consulta del Usuario -------------";
    diag_log format ["QUERY: %1",_query];
    diag_log format ["Tiempo Para Completar: %1 (en segundos)",(diag_tickTime - _tickTime)];
    diag_log format ["Resultado: %1",_queryResult];
    diag_log "------------------------------------------------";
};

if (_queryResult isEqualType "") exitWith {[] remoteexeccall ["SOCK_fnc_dataQuery",(owner _returnToSender)];}; 
if !(count _queryResult isEqualTo 0) exitWith {[] remoteexeccall ["SOCK_fnc_dataQuery",(owner _returnToSender)];};

_name = [_name] call DB_fnc_mresString; 
_alias = [[_name]] call DB_fnc_mresArray;
_money = [_money] call DB_fnc_numberSafe;
_bank = [_bank] call DB_fnc_numberSafe;

_query = format ["INSERT INTO players (pid, name, cash, bankacc, aliases, cop_licenses, med_licenses, civ_licenses, civ_gear, cop_gear, med_gear) VALUES('%1', '%2', '%3', '%4', '%5','""[]""','""[]""','""[]""','""[]""','""[]""','""[]""')",
    _uid,
    _name,
    _money,
    _bank,
    _alias
];

[_query,1] call DB_fnc_asyncCall;

[] remoteexeccall ["SOCK_fnc_dataQuery",(owner _returnToSender)];
