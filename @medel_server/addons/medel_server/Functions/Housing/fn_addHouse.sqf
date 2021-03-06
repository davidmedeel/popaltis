
#include "\medel_server\script_macros.hpp"

private ["_housePos","_query"];

params [
    ["_uid","",[""]],
    ["_house",objNull,[objNull]]
];
if (isNull _house || _uid isEqualTo "") exitWith {};

_housePos = getPosATL _house;

_query = format ["INSERT INTO houses (pid, pos, owned) VALUES('%1', '%2', '1')",_uid,_housePos];
if (EXTDB_SETTING(getNumber,"DebugMode") isEqualTo 1) then {
    diag_log format ["Query: %1",_query];
};

[_query,1] call DB_fnc_asyncCall;

uiSleep 0.3;

_query = format ["SELECT id FROM houses WHERE pos='%1' AND pid='%2' AND owned='1'",_housePos,_uid];
_queryResult = [_query,2] call DB_fnc_asyncCall;
_house setVariable ["house_id",(_queryResult select 0),true];
