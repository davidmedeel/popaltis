
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

if (deServicio == 0) exitwith {hint "No estás de servicio";};

if ((isNull _tio) OR (isNil {_tio})) exitWith {};

_tio setDamage 0;
_nombre = name _tio; // definimos variables
hint parsetext format ["<t color='#DE2828'><t size='3.4'><t align='center'>ADMIN<br/><t color='#21618C'><t size='1.2'><t align='center'>Has curado a %1.</t>", _nombre];

["Admin Log",format ["%1 - (%2) ha curado a %3",profileName,(getPlayerUID player),_nombre]] remoteexeccall ["medel_fnc_customlog",2];
