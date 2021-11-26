
#include "..\..\script_macros.hpp"

private ["_unit","_unitID","_members"];
disableSerialization;

if ((lbCurSel 2621) isEqualTo -1) exitWith {hint localize "STR_GNOTF_SelectKick"};
_unit = call compile format ["%1",CONTROL_DATA(2621)];

if (isNull _unit) exitWith {}; 
if (_unit == player) exitWith {hint localize "STR_GNOTF_KickSelf"};

_unitID = getPlayerUID _unit;
_members = group player getVariable "gang_members";
if (isNil "_members") exitWith {};
if (!(_members isEqualType [])) exitWith {};

_members = _members - [_unitID];
group player setVariable ["gang_members",_members,true];

[_unit,group player] remoteexec ["TON_fnc_clientGangKick",_unit]; 

if (life_HC_isActive) then {
    [4,group player] remoteexec ["HC_fnc_updateGang",HC_Life]; //Actualiza la db
} else {
    [4,group player] remoteexec ["TON_fnc_updateGang",RSERV]; //Actualiza la db
};

[] call life_fnc_gangMenu;
