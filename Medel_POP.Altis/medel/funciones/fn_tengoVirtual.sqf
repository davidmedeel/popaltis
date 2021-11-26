
/*
por: Medel

Función: devuelve el número de objetos virtuales con la classname X que tengo
Params:
	0: STRING - classname a buscar
	
	["vendas"] call ica_fnc_tengoVirtual

	returns: SCALAR
*/

private ["_className", "_cantidad", "_item", "_tengo", "_itemCount"];

_className = param [0];

_fnc_equipo = {
	private _itemCount = 0;

{
    _itemCount = _itemCount + missionNamespace getVariable [format ["life_inv_%1", getText(_x >> "variable")], 0];
} forEach ("true" configClasses (missionConfigFile >> "VirtualItems"));

_itemCount;
};

_cantidad = call _fnc_equipo;

_item = format ["life_inv_%1", _className];

if (_item < _cantidad) then {_tengo = true;};

if (_item > _cantidad) then {_tengo = false;};

_tengo;
