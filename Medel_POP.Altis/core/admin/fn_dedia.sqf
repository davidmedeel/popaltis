
#include "..\..\script_macros.hpp"

if (FETCH_CONST(life_adminlevel) < 2) exitWith {
	closeDialog 0; 
	hint parsetext
	"<t color='#DE2828'><t size='3.4'><t align='center'>AVISO
	<br/><t color='#21618C'><t size='1.2'><t align='center'>No tienes suficiente nivel de admin</t>";
};

if (deServicio == 0) exitwith {hint "No estás de servicio";};

[12] remoteexec ["skipTime"];

["Admin Log",format [ "%1 - (%2) ha avanzado el tiempo 12h", profileName, (getPlayerUID player)] ] remoteexeccall ["medel_fnc_customlog",2]; 
