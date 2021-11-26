
#include "..\..\script_macros.hpp"

private ["_vehicle","_data"];
_vehicle = cursorObject;
if ((_vehicle isKindOf "Car") || !(_vehicle isKindOf "Air") || !(_vehicle isKindOf "Ship")) then {
    _owners = _vehicle getVariable "vehicle_info_owners";
    if (isNil "_owners") exitWith {hint localize "STR_NOTF_VehCheat"; deleteVehicle _vehicle;};

    life_action_inUse = true;
    hint "Buscando Licencias...";

    sleep 3;
    life_action_inUse = false;

    if (player distance _vehicle > 10 || !alive player || !alive _vehicle) exitWith {hint "No se ha podido identificar el vehículo";};
    _owners = [_owners] call life_fnc_vehicleOwners;

    if (_owners == "any<br/>") then {
        _owners = "No hay dueños del vehiculo<br/>";
    };
    hint parseText format [localize "STR_NOTF_SearchVeh",_owners];
};
