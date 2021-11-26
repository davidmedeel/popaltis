
#include "..\..\script_macros.hpp"

_fnc_scriptName = "Sincronizacion del Jugador";
if (isNil "life_session_time") then {life_session_time = false;};
if (life_session_time) exitWith {["elegante", "SERVIDOR", "Ya has usado la función de sincronización.<br/>Sólo la puedes usar una vez cada 5 minutos."] spawn medel_fnc_hint;};

[] call SOCK_fnc_updateRequest;
["elegante", "SERVIDOR", "Se están guardando tus datos en la base de datos.<br/>Por favor, espera 20 segundos antes de salir."] spawn medel_fnc_hint;
[] spawn {
    life_session_time = true;
    sleep (5 * 60);
    life_session_time = false;
};
