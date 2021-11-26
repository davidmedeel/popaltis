
#include "\medel_server\script_macros.hpp"

private ["_query","_tickTime","_wantedCheck","_wantedQuery"];
params [
    ["_uid","",[""]],
    ["_name","",[""]]
];

if (_uid isEqualTo "" ||  {_name isEqualTo ""}) exitWith {};

_wantedCheck = format ["SELECT wantedName FROM wanted WHERE wantedID='%1'",_uid];
_wantedQuery = [_wantedCheck,2] call DB_fnc_asyncCall;
if (count _wantedQuery isEqualTo 0) exitWith {};

if !(_name isEqualTo (_wantedQuery select 0)) then {
    _query = format ["UPDATE wanted SET wantedName='%1' WHERE wantedID='%2'",_name,_uid];
    [_query,2] call DB_fnc_asyncCall;
};
