
#include "..\..\script_macros.hpp"

private["_unit"];

_unit = cursorObject;
if(isNull _unit) exitWith {}; 
if((player distance _unit > 4)) exitWith {};
if((_unit getVariable "restrained")) exitWith {};
if(player isEqualTo _unit) exitWith {};
if(!isPlayer _unit) exitWith {};

if(life_inv_esposas < 1) exitWith { hint "No tienes esposas"; };

[false,"esposas",1] call life_fnc_handleInv;

_unit say3D "esposas";
_unit setVariable["restrained",true,true];
hint "El objetivo está esposado";
[player] remoteexec ["life_fnc_restrain",_unit];
