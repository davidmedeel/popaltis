	
/*
por: Medel
*/

#include "..\..\script_macros.hpp"

if (FETCH_CONST(life_adminlevel) < 1) exitWith {
closeDialog 0; 
hint parsetext
"<t color='#DE2828'><t size='3.4'><t align='center'>AVISO
<br/><t color='#21618C'><t size='1.2'><t align='center'>No tienes suficiente nivel de admin</t>";
};

if (deServicio == 0) exitwith {hint "No estás de servicio";};

if ((cursorObject isKindOf "landVehicle") OR (cursorObject isKindOf "Ship") OR (cursorObject isKindOf "Air")) then {

_maxFuel = 100;
_fuel = fuel cursorTarget;
_litrosActuales = parseNumber ((_fuel * _maxFuel) toFixed 1);

_litros = [format ["Escribe los litros de gasolina que quieres meter.<br/>Actualmente tiene %1/%2 L<br/>Faltan: %3 L", _litrosActuales, _maxFuel, _maxFuel - _litrosActuales], "1"] call ica_fnc_meteDato;
if (_litros isEqualTo "") exitWith {};

_litros = abs (parseNumber ((parseNumber _litros) toFixed 1));
if (_litros isEqualTo 0) exitWith {};
			
cursorTarget setFuel ((fuel cursorTarget) + _porcentaje;);

hintSilent parsetext format ["<t color='#DE2828'><t size='3.4'><t align='center'>ADMIN<br/><t color='#21618C'><t size='1.2'><t align='center'>Le has puesto %1 L de gasolina a este vehículo</t>", _porcentaje];
closeDialog 0;
} else {
	["decorado", "AVISO", "No estás apuntando a ningún vehículo"] spawn medel_fnc_hint;
};
