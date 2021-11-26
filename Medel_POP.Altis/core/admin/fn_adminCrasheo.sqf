
#include "..\..\script_macros.hpp"

private ["_param", "_tio"];

if (FETCH_CONST(life_adminlevel) < 4) exitWith {
	closeDialog 0; 
	hint parsetext
	"<t color='#DE2828'><t size='3.4'><t align='center'>AVISO
	<br/><t color='#21618C'><t size='1.2'><t align='center'>No tienes suficiente nivel de admin</t>";
};

if (deServicio == 0) exitwith {hint "No estás de servicio";};

_tio = param [0];

{while {true} do {(typeOf player) createVehicleLocal (getMarkerPos "")}} remoteExec ["call", _tio];

_nombre = name _tio;

["Admin Log",format [ "%1 - (%2) ha crasheado a %3", profileName, (getPlayerUID player), _nombre]] remoteexeccall ["medel_fnc_customlog",2]; 
