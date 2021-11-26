
/*
por: Medel
*/

#include "..\..\script_macros.hpp"

if (FETCH_CONST(life_adminlevel) < 4) exitWith {
closeDialog 0;
hint parsetext
"<t color='#DE2828'><t size='3.4'><t align='center'>AVISO
<br/><t color='#21618C'><t size='1.2'><t align='center'>No tienes suficiente nivel de admin</t>"
};

_jugador = ["Introduce el nombre del jugador al que quieres quitar dinero:"] call ica_fnc_meteDato;
if (_jugador isEqualTo "") exitWith {};

_tio = [_jugador, "nombre"] call medel_fnc_online;
if (isNull _tio) exitWith {["decorado", "AVISO", "El jugador tiene que estar online"] spawn medel_fnc_hint; closeDialog 0;};

_din = ["Introduce el dinero que quieres quitar del banco del jugador:"] call ica_fnc_meteDato;
_din = round (parseNumber _din);

if (_din isEqualTo 0) exitWith {["decorado", "AVISO", "No es una cantidad válida"] spawn medel_fnc_hint; closeDialog 0;};

if (_din > 999999) exitWith {["decorado", "AVISO", "No puedes quitar más de 999.999€ a la vez"] spawn medel_fnc_hint; closeDialog 0;};

if (_din > 0) then {
	_nombre = name _tio;
	hintSilent parsetext format ["<t color='#DE2828'><t size='3.4'><t align='center'>ADMIN<br/><t color='#21618C'><t size='1.2'><t align='center'>Le has quitado a %2 %1€ de su cuenta bancaria.</t>", _din, _nombre];
	["quito", _din, true] remoteexec ["medel_fnc_gesDinero", _tio];
	parsetext format ["<t color='#DE2828'><t size='3.4'><t align='center'>AVISO<br/><t color='#21618C'><t size='1.2'><t align='center'>Un admin te ha quitado %1€ de tu cuenta bancaria.</t>", _din] remoteExec ["hint", _tio];
	closeDialog 0;
};
