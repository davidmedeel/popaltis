
#include "..\..\script_macros.hpp"

private ["_uid","_side","_sender"];

if (life_session_completed) exitWith {};
_sender = player;
_uid = getPlayerUID _sender;
_side = playerSide;
cutText[format [localize "STR_Session_Query",_uid],"BLACK FADED"];
0 cutFadeOut 999999999;

if (life_HC_isActive) then
{
    [_uid,_side,_sender] remoteexec ["HC_fnc_queryRequest",HC_Life];
} else {
    [_uid,_side,_sender] remoteexec ["DB_fnc_queryRequest",RSERV];
};
