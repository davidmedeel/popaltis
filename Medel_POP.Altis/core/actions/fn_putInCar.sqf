
#include "..\..\script_macros.hpp"

private ["_unit"];
_unit = param [0,objNull,[objNull]];
if (isNull _unit || !isPlayer _unit) exitWith {};

_nearestVehicle = nearestObjects[getPosATL player,["Car","Ship","Submarine","Air"],10] select 0;
if (isNil "_nearestVehicle") exitWith {hint localize "STR_NOTF_VehicleNear"};

detach _unit;
[_nearestVehicle] remoteexeccall ["life_fnc_moveIn",_unit];
_unit setVariable ["Escorting",false,true];
_unit setVariable ["transporting",true,true];
