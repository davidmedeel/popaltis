
#include "..\..\script_macros.hpp"

private "_target";
_target = param [0,objNull,[objNull]];

if (isNull _target) exitWith {};
if (!isPlayer _target) exitWith {};
if (player distance _target > 4) exitWith {};
life_knockout = true;
[player,"AwopPercMstpSgthWrflDnon_End2"] remoteexeccall ["life_fnc_animSync",RCLIENT];
sleep 0.08;
[_target,profileName] remoteexec ["life_fnc_knockedOut",_target];

sleep 3;
life_knockout = false;
