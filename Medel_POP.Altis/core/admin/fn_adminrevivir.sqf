
/*
por: Medel
*/

#include "..\..\script_macros.hpp"

private ["_param", "_tio"];

_tio = param [0];

if (FETCH_CONST(life_adminlevel) < 1) exitWith {closeDialog 0; 
    hint parsetext
    "<t color='#DE2828'><t size='3.4'><t align='center'>AVISO
    <br/><t color='#21618C'><t size='1.2'><t align='center'>No tienes suficiente nivel de admin</t>";
};

if ((isNull _tio) OR (isNil {_tio})) exitWith {};

[player] remoteexeccall ["life_fnc_revived", _tio];

_nombre = name _tio; // definimos variables
hint format ["Has revivido a %1", _nombre];

["Admin Log",format ["%1 - (%2) ha revivido a %3",profileName,(getPlayerUID player),_nombre]] remoteexeccall ["medel_fnc_customlog",2];
