
#include "..\..\script_macros.hpp"

private ["_crew"];
_crew = crew cursorObject;

if ((cursorTarget distance player) > 7) exitWith { 
	hint "No eres mago, por lo tanto no puedes sacar a gente de un vehículo que está fuera de tu alcance.";
};

{
    if !(side _x isEqualTo east) then {
        _x setVariable ["transporting",false,true]; _x setVariable ["Escorting",false,true];
        [_x] remoteexeccall ["life_fnc_pulloutVeh",_x];
    };
} forEach _crew;
