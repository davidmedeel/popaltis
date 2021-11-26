
disableSerialization;

private["_position","_direction","_className","_displayName","_spCheck","_cfgInfo"];

if(lnbCurSelRow 38101 == -1) exitWith {hint "¡No has seleccionado ningún vehículo para spawnear!"};

_className = lnbData[38101,[(lnbCurSelRow 38101),0]];
_displayName = lnbData[38101,[(lnbCurSelRow 38101),1]];
_position = position player;
_direction = markerDir VVS_SP;

if(isNil "_position") exitWith {hint "The spawn point marker doesn't exist?";};

_spCheck = nearestObjects[_position,["landVehicle","Air","Ship"],12] select 0;
if(!isNil "_spCheck") then {deleteVehicle _spCheck;};

_cfgInfo = [_className] call VVS_fnc_cfgInfo;

_vehicle = _className createVehicle _position;
_vehicle allowDamage false;
_vehicle setPos _position;
_vehicle setDir _direction;

if((_cfgInfo select 4) == "Autonomous") then
{
	createVehicleCrew _vehicle;
};

clearWeaponCargoGlobal _vehicle;
clearMagazineCargoGlobal _vehicle;
clearItemCargoGlobal _vehicle;

_vehicle allowDamage true;
hint format ["Has spawneado: %1",_displayName];
closeDialog 0;
