
#include "..\..\script_macros.hpp"

private ["_unitID ","_members"];
if (getPlayerUID player isEqualTo (group player getVariable "gang_owner")) exitWith {hint localize "STR_GNOTF_LeaderLeave"};

_unitID = getPlayerUID player;
_members = group player getVariable "gang_members";
if (isNil "_members") exitWith {};
if (!(_members isEqualType [])) exitWith {};

_members = _members - [_unitID];
group player setVariable ["gang_members",_members,true];

[player,group player] remoteexec ["TON_fnc_clientGangLeft",player];

if (life_HC_isActive) then {
    [4,group player] remoteexec ["HC_fnc_updateGang",HC_Life]; //Actualiza la db
} else {
    [4,group player] remoteexec ["TON_fnc_updateGang",RSERV]; //Actualiza la db
};

closeDialog 0;
