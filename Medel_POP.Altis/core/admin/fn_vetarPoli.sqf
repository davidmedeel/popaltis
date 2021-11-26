
/*
por: Medel
*/

#include "..\..\script_macros.hpp"

private ["_param", "_tio"];

_tio = param [0];

if (FETCH_CONST(life_adminlevel) < 4) exitWith {closeDialog 0; 
    hint parsetext
    "<t color='#DE2828'><t size='3.4'><t align='center'>AVISO
    <br/><t color='#21618C'><t size='1.2'><t align='center'>No tienes suficiente nivel de admin</t>";
};

if ((isNull _tio) OR (isNil {_tio})) exitWith {};

if (!isNil "particulaCabeza") then { // tengo las partículas de admin
	deleteVehicle particulaCabeza;
	particulaCabeza = nil;
};

_uid = getPlayerUID _tio;

["vetarPoli", 0, _uid] remoteExec ["medel_fnc_gesRol", 0];

_nombre = name _tio; // definimos variables
hint parsetext format ["<t color='#DE2828'><t size='3.4'><t align='center'>ADMIN<br/><t color='#21618C'><t size='1.2'><t align='center'>Has vetado de la Policía a %1.</t>", _nombre];

["Admin Log",format ["%1 - (%2) ha vetado de la Policía a %3",profileName,(getPlayerUID player),_nombre]] remoteexeccall ["medel_fnc_customlog",2];
