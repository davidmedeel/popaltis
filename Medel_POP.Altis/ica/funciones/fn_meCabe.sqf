
/*
por: Icaruk

Params:
	0: STRING - Classname.
	1: SCALAR (opc) - Cantidad de ítems a añadir. Default 1.
	2: OBJECT (opc) - Container.
	
Ejemplos:
	["U_C_Man_casual_5_F"] call ica_fnc_meCabe;
	["V_Chestrig_blk"] call ica_fnc_meCabe;
	["B_AssaultPack_blk"] call ica_fnc_meCabe;
	
	["i_agua", 2] call ica_fnc_meCabe;
	
	[_class, _can] call ica_fnc_meCabe;
	[_class, _can, _caja] call ica_fnc_meCabe;
	
Nota:
	Si se intenta añadir (moc ves uni) y la cantidad es > 1 no se intentará equipar, se intentará añadir sin más.	
*/

private _class = param [0];
private _can = param [1, 1];
private _obj = param [2, player];

if (_class isEqualTo "") exitWith {false};
if (_can <= 0) exitWith {false};

private _pendiente = false;

private _meCabe = if (
		(_can isEqualTo 1) AND
		(
			(isPlayer _obj) OR
			(_obj getVariable ["clon", false])
		)
	) then { // cantidad 1 probaré a equiparmelo

	switch (_class call ica_fnc_item) do {

		case "bac": {
			if (backpack _obj isEqualTo "") then { // no tengo mochila y quiero mochila, me cabe
				true
			} else {
				_pendiente = true; // no puedo equipármelo, probaré después a añadírmelo
				false
			};
		};

		case "ves": {
			if (vest _obj isEqualTo "") then {
				true
			} else {
				_pendiente = true;
				false
			};
		};

		case "uni": {
			if (uniform _obj isEqualTo "") then {
				true
			} else {
				_pendiente = true;
				false
			};
		};

		default {
			_obj canAdd [_class, _can];
		};
	};

} else {
	_obj canAdd [_class, _can]
};

if (_pendiente) then {
	_meCabe = _obj canAdd [_class, _can];
};

_meCabe
