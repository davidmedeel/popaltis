
#include "..\..\script_macros.hpp"

private["_veh","_classname","_vehicle"];

_veh = _this select 0;
_vehicle = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
_classname = typeOf _veh;

switch (_classname) do {
    case "B_Boat_Armed_01_minigun_F":
    {
        _veh setVehicleAmmo 0;
        _veh setDamage 0;
        _veh allowDamage true;
    };
    
    case "B_Heli_Transport_01_F":
    {
        _veh setVehicleAmmo 0;
        _veh setDamage 0;
        _veh allowDamage true;
    };
	
    case "B_Heli_Attack_01_dynamicLoadout_F":
    {
        _veh setVehicleAmmo 0;
        _veh setDamage 0;
        _veh allowDamage true;
    };
	
    case "O_Heli_Attack_02_dynamicLoadout_F":
    {
        _veh setVehicleAmmo 0;
        _veh setDamage 0;
        _veh allowDamage true;
    };
	
    case "O_T_VTOL_02_infantry_dynamicLoadout_F":
    {
        _veh setVehicleAmmo 0;
        _veh setDamage 0;
        _veh allowDamage true;
    };
	
	case "B_Plane_Fighter_01_Stealth_F":
    {
        _veh setVehicleAmmo 0;
        _veh setDamage 0;
        _veh allowDamage true;
    };
	
	case "O_Plane_Fighter_02_F":
    {
        _veh setVehicleAmmo 0;
        _veh setDamage 0;
        _veh allowDamage true;
    };
	
	case "B_Heli_Light_01_armed_F":
    {
        _veh setVehicleAmmo 0;
        _veh setDamage 0;
        _veh allowDamage true;
    };

	case "I_Plane_Fighter_03_AA_F":
    {
        _veh setVehicleAmmo 0;
        _veh setDamage 0;
        _veh allowDamage true;
    };
};

clearWeaponCargoGlobal _vehicle;
clearMagazineCargoGlobal _vehicle;
clearItemCargoGlobal _vehicle;
