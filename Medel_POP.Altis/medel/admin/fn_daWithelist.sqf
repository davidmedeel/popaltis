
/*
por: Medel
*/

#include "..\..\script_macros.hpp"

_rol = ["Elige el Rol", "", [
	["pol", "Policía"],
	["ems", "EMS"],
	["admin", "Admin"]
]] call ica_fnc_eligeDato;
if (_rol isEqualTo "") exitWith {};

_jugador = ["Introduce el nombre del jugador al que le quieres poner la withelist:"] call ica_fnc_meteDato;
if (_jugador isEqualTo "") exitWith {};

_tio = [_jugador, "nombre"] call medel_fnc_online;
if (isNull _tio) exitWith {["decorado", "AVISO", "El jugador tiene que estar online"] spawn medel_fnc_hint; closeDialog 0;};

_nvl = ["Introduce el nivel de withelist que quieres dar a el jugador:"] call ica_fnc_meteDato;
_nvl = round (parseNumber _nvl);

_uid = getPlayerUID _tio;
_nombre = name _tio;

if (_rol isEqualTo "pol") exitWith {
	if !(playerSide isEqualTo west) exitWith {["decorado", "AVISO", "Para hacer esto, primero necesitas estar de servicio como Policía"] spawn medel_fnc_hint;};
	if (FETCH_CONST(life_coplevel) < 11) exitWith {["decorado", "AVISO", "Eres un mindundi. ¿Qué intentas?"] spawn medel_fnc_hint;};
	if (_nvl > 10) exitWith {["decorado", "AVISO", "No puedes dar más de nivel 10 de Policía desde esta consola."] spawn medel_fnc_hint;};
	if (_tio isEqualTo player) exitWith {["decorado", "AVISO", "No puedes cambiar tu propio nivel de withelist"] spawn medel_fnc_hint;};
	["pol", _nvl, _uid, _tio] remoteExec ["medel_fnc_gesRol", 0];
	hint parsetext format ["<t color='#DE2828'><t size='3.4'><t align='center'>WITHELIST<br/><t color='#21618C'><t size='1.2'><t align='center'>Has actualizado el nivel de Policía de %1 a %2.</t>", _nombre, _nvl];
};

if (_rol isEqualTo "ems") exitWith {
	if !(playerSide isEqualTo independent) exitWith {["decorado", "AVISO", "Para hacer esto, primero necesitas estar de servicio como EMS"] spawn medel_fnc_hint;};
	if (FETCH_CONST(life_mediclevel) < 11) exitWith {["decorado", "AVISO", "Eres un mindundi. ¿Qué intentas?"] spawn medel_fnc_hint;};
	if (_nvl > 11) exitWith {["decorado", "AVISO", "El nivel mínimo de EMS que puedes dar es 0 y el máximo 10"] spawn medel_fnc_hint;};
	if (_nvl isEqualTo 11) exitWith {["decorado", "AVISO", "No puedes dar nivel 11 de EMS desde esta consola."] spawn medel_fnc_hint;};
	if (_tio isEqualTo player) exitWith {["decorado", "AVISO", "No puedes cambiar tu propio nivel de withelist"] spawn medel_fnc_hint;};
	["ems", _nvl, _uid, _tio] remoteExec ["medel_fnc_gesRol", 0];
	hint parsetext format ["<t color='#DE2828'><t size='3.4'><t align='center'>WITHELIST<br/><t color='#21618C'><t size='1.2'><t align='center'>Has actualizado el nivel de EMS de %1 a %2.</t>", _nombre, _nvl];
};

if (_rol isEqualTo "admin") exitWith {
	if (FETCH_CONST(life_adminlevel) < 5) exitWith {["decorado", "AVISO", "Eres un mindundi. ¿Qué intentas?"] spawn medel_fnc_hint;};
	if (_nvl > 4) exitWith {["decorado", "AVISO", "El nivel mínimo de Admin que puedes dar es 0 y el máximo 5"] spawn medel_fnc_hint;};
	if (_nvl isEqualTo 5) exitWith {["decorado", "AVISO", "No puedes dar nivel 5 de admin desde esta consola."] spawn medel_fnc_hint;};
	if (_tio isEqualTo player) exitWith {["decorado", "AVISO", "No puedes cambiar tu propio nivel de withelist"] spawn medel_fnc_hint;};
	["admin", _nvl, _uid, _tio] remoteExec ["medel_fnc_gesRol", 0];
	hint parsetext format ["<t color='#DE2828'><t size='3.4'><t align='center'>WITHELIST<br/><t color='#21618C'><t size='1.2'><t align='center'>Has actualizado el nivel de admin de %1 a %2.</t>", _nombre, _nvl];
};
