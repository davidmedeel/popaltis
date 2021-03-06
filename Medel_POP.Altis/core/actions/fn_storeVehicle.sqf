
#include "..\..\script_macros.hpp"

private ["_nearVehicles","_vehicle"];

if !(isNull objectParent player) then {
    _vehicle = vehicle player;
} else {
    _nearVehicles = nearestObjects[getPos (_this select 0),["Car","Air","Ship"],30];
    if (count _nearVehicles > 0) then {
        {
            if (!isNil "_vehicle") exitWith {}; 
            _vehData = _x getVariable ["vehicle_info_owners",[]];
            if (count _vehData  > 0) then {
                _vehOwner = ((_vehData select 0) select 0);
                if ((getPlayerUID player) == _vehOwner) exitWith {
                    _vehicle = _x;
                };
            };
        } forEach _nearVehicles;
    };
};

if (isNil "_vehicle") exitWith {hint localize "STR_Garage_NoNPC"};
if (isNull _vehicle) exitWith {};
if (!alive _vehicle) exitWith {hint localize "STR_Garage_SQLError_Destroyed"};

_storetext = localize "STR_Garage_Store_Success";

if (life_HC_isActive) then {
    [_vehicle,false,(_this select 1),_storetext] remoteexec ["HC_fnc_vehicleStore",HC_Life];
} else {
    [_vehicle,false,(_this select 1),_storetext] remoteexec ["TON_fnc_vehicleStore",RSERV];
};

hint localize "STR_Garage_Store_Server";

life_garage_store = true;
