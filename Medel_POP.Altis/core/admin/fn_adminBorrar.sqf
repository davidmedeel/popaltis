
#include "..\..\script_macros.hpp"

private ["_curTarget","_nearVehicles"];

_curTarget = cursorTarget;

if (FETCH_CONST(life_adminlevel) < 1) exitWith {
	closeDialog 0; 
	hint parsetext
	"<t color='#DE2828'><t size='3.4'><t align='center'>AVISO
	<br/><t color='#21618C'><t size='1.2'><t align='center'>No tienes suficiente nivel de admin</t>";
};

deleteVehicle _curTarget;
cutText[format["Has borrado ---> %1", _curTarget],"PLAIN DOWN"];

["Admin Log",format ["%1 - (%2) ha borrado %3",profileName,(getPlayerUID player),_curTarget]] remoteexeccall ["medel_fnc_customlog",2];
