
/*
por: Icaruk

Params:
	0: OBJECT	- Vehículo.
	1: ARRAY	- Array de ítems y cantidades a modificar en formato [class, can]
		0: STRING - Classname.
		1: SCALAR - Cantidad. Negativa para restar. Default 1.
	2: BOOL (opc) 	- Tratar cantidades positivas como negativas. Por ejemplo [class, 1] restaría en lugar de sumar. Default false.

Ejemplos:
	[vehicle player, [["FirstAidKit"]]] call ica_fnc_itemVeh; 							// sumo 1
	[vehicle player, [["FirstAidKit", 3]]] call ica_fnc_itemVeh; 						// sumo 3
	[vehicle player, [["FirstAidKit", -1]]] call ica_fnc_itemVeh; 						// elimino 1
	[vehicle player, [["FirstAidKit", 3], ["FirstAidKit", -2]]] call ica_fnc_itemVeh; 	// sumo 3 y elimino 2
	[vehicle player, [["FirstAidKit", 3]], true] call ica_fnc_itemVeh; 					// elimino 3
*/

private ["_veh", "_arrItems", "_inverso", "_class", "_can", "_wea", "_mag", "_bac", "_ite", "_tipo", "_arr"];

_veh = param [0];
_arrItems = param [1];
_inverso = param [2, false];

// recojo sus items iniciales
_wea = weaponCargo _veh;
_mag = magazineCargo _veh;
_bac = backpackCargo _veh;
_ite = itemCargo _veh;

// borro todo
clearWeaponCargoGlobal _veh;
clearMagazineCargoGlobal _veh;
clearBackpackCargoGlobal _veh;
clearItemCargoGlobal _veh;

// modifico
{
	_class = _x select 0;
	_can = _x param [1, 1];
	
	_tipo = _class call ica_fnc_item;

	// ¿Qué array modifico?
	_arr = switch (_tipo) do {
		case "pwea";
		case "swea";
		case "hwea": {_wea};
		
		case "mag";
		case "gra": {_mag};
		
		case "hea";
		case "gaf";
		case "uni";
		case "ves";
		case "bac": {_bac};
		case "uni": {_ite};
		
		case "ite": {_mag};
		
		default {_mag};
	};	

	// ¿Sumo o resto?
	_sumo = _can > 0;
	if (_inverso) then {_sumo = !_sumo};
	_can = abs _can; // convierto la cantidad a positivo para trabajar con ella en el for

	if (_sumo) then {
		
		for "_i" from 1 to _can do {
			_arr pushBack _class;
		};
		
	} else {
		
		for "_i" from 1 to _can do {
			
			{
				if (_x == _class) exitWith { // es la clase que quiero borrar
					_arr deleteAt _forEachIndex;				
				};
			} forEach _arr;
			
		};
		
	};
	
} forEach _arrItems;

// añado restantes
{_veh addWeaponCargoGlobal [_x, 1]} forEach _wea;
{_veh addMagazineCargoGlobal [_x, 1]} forEach _mag;
{_veh addBackpackCargoGlobal [_x, 1]} forEach _bac;
{_veh addItemCargoGlobal [_x, 1]} forEach _ite;	
