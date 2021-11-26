
#include "..\..\script_macros.hpp"

private ["_unit"];

_unit = param [0,objNull,[objNull]];
if (isNull _unit || !(_unit getVariable ["restrained",false])) exitWith {}; 

[true,"esposas",1] call life_fnc_handleInv;

_unit setVariable ["restrained",false,true];
_unit setVariable ["Escorting",false,true];
_unit setVariable ["transporting",false,true];
detach _unit;
