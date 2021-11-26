
#include "..\..\script_macros.hpp"

params [
    ["_robber",objNull,[objNull]]
];
if (isNull _robber) exitWith {}; 

if (CASH > 0) then {
    [CASH,player,_robber] remoteexeccall ["life_fnc_robReceive",_robber];

    if (life_HC_isActive) then {
        [getPlayerUID _robber,_robber getVariable ["realname",name _robber],"211"] remoteexeccall ["HC_fnc_wantedAdd",HC_Life];
    } else {
        [getPlayerUID _robber,_robber getVariable ["realname",name _robber],"211"] remoteexeccall ["life_fnc_wantedAdd",RSERV];
    };

    [1,"STR_NOTF_Robbed",true,[_robber getVariable ["realname",name _robber],profileName,[CASH] call life_fnc_numberText]] remoteexeccall ["life_fnc_broadcast",RCLIENT];
    CASH = 0;
    [0] call SOCK_fnc_updatePartial;
} else {
    [2,"STR_NOTF_RobFail",true,[profileName]] remoteexeccall ["life_fnc_broadcast",_robber];
};
