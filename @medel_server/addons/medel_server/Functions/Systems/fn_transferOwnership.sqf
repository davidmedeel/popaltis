
#include "..\..\script_macros.hpp"

_which = param [0,false,[false]];

if (_which) then {

    if (!life_HC_isActive) exitWith {diag_log "ERROR: El servidor está intentando dar propiedad de AI a HC cuando life_HC_isActive esta desactivado";};
    {
        if (!(isPlayer _x)) then {
            _x setOwner HC_Life;  
        };
    } forEach animals;

} else {

    if (life_HC_isActive) exitWith {diag_log "ERROR: El servidor esta intentando devolver la propiedad de Ai asi mismo cuando life_HC_isActive esta activado";};
    {
        if (!(isPlayer _x)) then {
            _x setOwner RSERV;  
        };
    } forEach animals;

};
