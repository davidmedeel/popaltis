
//////////////////////////////////////////////////////////////////////////////
//																			//
//		           		  		DESOLATION						     		//
//                 		    by Icaruk & nerkaid								//
//		                                                      			    //
//	 	Si quieres usar nuestro código o parte del mismo contáctanos en:	//
//                    Email: support@desolationmod.com						//
//                    Web: http://www.desolationmod.com						//
//															                //
//////////////////////////////////////////////////////////////////////////////

/*
por: Icaruk

Params:
	0: STRING 			- Classname
	1: SCALAR (opc) 	- Cantidad positiva añadir, negativa quitar. Default 1.
	2: SCALAR (opc) 	- Sólo si es cargador. Cantidad de ammo que se dará al cargador. En modo false se eliminará el cargador con ese ammo. Default -1 (para que no afecte).
	3: BOOL (opc)		- Tener en cuenta los ítems equipados. Default TRUE. Sólo útil quitando ítems.
	4: OBJECT (opc)		- Objetivo. Default _tio.
	
Funciones:
	- Equipa o añade un objeto al jugador sin importar de qué tipo sea sin sobreescribir el actual.
	- Elimina un objeto del jugador sin importar si lo tiene equipado o en el inventario.
	- Devuelve el tipo de objeto:
		"pwea", "swea", "hwea", "mag", "gra",
		"sig", "sil", "poi", "bip"
		"ite",
		"hea", "gaf", "uni", "ves", "bac",
		"veh", "man", "bui", "pap"
	.

Ejemplos:
	["classname"] call ica_fnc_item							// te da el ítem 1 vez y te devuelve true mientras te quepa
	["classname", can] call ica_fnc_item					// te da el ítem X veces y te devuelve true mientras te quepa
	["classname", -can] call ica_fnc_item					// elimina el ítem X veces
	
	["classname", -can, nil, false] call ica_fnc_item		// elimina el ítem pero sólo del inventario
	
	["classCargador", can, ammo] call ica_fnc_item 			// te da ese cargador con ese ammo
	["classCargador", -can, ammo] call ica_fnc_item 		// te quita esos cargadores con ese ammo
	["class", 1, -1, true, Paco] call ica_fnc_item 			// te quita esos cargadores con ese ammo	
	
	"classname" call ica_fnc_item 				// te devuelve el tipo de ítem
	
*/

private ["_modo", "_class", "_cantidad", "_ammo", "_cuentaEquipado", "_tio", "_queEs"];

// elijo qué quiero hacer con la función
if (_this isEqualType []) then {
	
	_class = 			param [0, ""];
	_cantidad = 		param [1, 1];
	_ammo = 			param [2, -1];
	_cuentaEquipado = 	param [3, true];
	_tio = 				param [4, player];

	if !(_cantidad isEqualType 0) exitWith {
		[format ["_cantidad era: %1", _cantidad]] call BIS_fnc_error;
	};

	_modo = _cantidad > 0; // positivo true, negativo false
	_cantidad = ceil abs _cantidad;
} else {
	if (_this isEqualType "") then { // quiero saber el tipo de ítem
		_class = _this;
		_modo = true; // para que no dé error
		_cantidad = ""; // lo convierto a "" para que en me devuelva el tipo de objeto más adelante
	};
};

if (_class isEqualTo "") exitWith {""}; // no me has dado param

// Saco el tipo de ítem que es
if (isClass (configFile >> "CfgWeapons" >> _class)) then {

	_cfgW = configFile >> "CfgWeapons" >> _class;

	_queEs = switch (getNumber (_cfgW >> "type")) do {
		case 131072: {"ite"};
		case 1: {"pwea"}; // primary weapon
		case 2: {"hwea"}; // handgun weapon
		case 4: {"swea"}; // secondary weapon
		default {"ite"}; // de momento, es "ite"
	};

	if (_queEs isEqualTo "ite") then {
		_queEs = switch (getNumber (_cfgW >> "iteminfo" >> "type")) do {
			case 101: {"sil"}; // silencer
			case 201: {"sig"}; // sight
			case 301: {"poi"}; // pointer
			case 302: {"bip"}; // bipod
			case 605: {"hea"}; // headgear
			case 701: {"ves"}; // vest
			case 801: {"uni"}; // uniform
			default {"ite"}; // por cojones es "ite"
		};
	};
};

if (isNil "_queEs") then {

	if (isClass (configFile >> "CfgMagazines" >> _class)) then { // si es cargador
		_queEs = if (getNumber (configFile >> "CfgMagazines" >> _class >> "type") in [256, 16, 512]) then {
			if (_class call BIS_fnc_isThrowable) then {
				"gra"
			} else {
				"mag"
			};
		} else {
			if (getNumber (configFile >> "CfgMagazines" >> _class >> "esPapel") isEqualTo 1) then {
				"pap"
			} else {
				"ite"
			};
		};
	};

	if (isNil "_queEs") then {

		_cfgV = configFile >> "CfgVehicles" >> _class;

		if (isClass _cfgV) then {
			if ((getnumber (_cfgV >> "isBackpack")) > 0) exitWith {_queEs = "bac"};

			{
				if (_class isKindOf _x) exitWith {_queEs = "veh"};
			} forEach ["Car", "Ship", "Air"];

			if (_class isKindOf "CAManBase") exitWith {_queEs = "man"};

			{
				if (_class isKindOf _x) exitWith {_queEs = "bui"};
			} forEach ["Building", "Thing", "ThingX"];

			{
				if (_class isKindOf _x) exitWith {_queEs = "bui"};
			} forEach ["Animal", "Animal_Base_F"];
		};

		if (isNil "_queEs") then {
		
			if (isClass (configFile >> "CfgGlasses" >> _class)) then { // si son gafas
				_queEs = "gaf";
			};
		};
	};
};

if (isNil "_queEs") exitWith {
	[format ["La className %1 no es de ningún tipo conocido o _queEs es nil por otro motivo.", _class]] call BIS_fnc_error;
	"" // devuelvo para que no dé error
};

if (_cantidad isEqualType "") then { // sólo quiero que me devuelva el tipo de ítem

	_queEs

} else {

	// ------------------------------
	//    A   Ñ   A   D   I   R
	// ------------------------------

	if (_modo) then { // Añado ítem

		private _creaItem = false;

		for "_i" from 1 to _cantidad do {
			switch (toLower _queEs) do {
				case "pwea": {
					if ((primaryWeapon _tio) isEqualTo "") then { // si aún no tengo arma, me la equipo
						_tio addWeapon _class;
					} else {
						_creaItem = true; // si ya tengo arma, la pongo más tarde en la mochila. Y lo mismo con el resto
					};
				};
				case "swea": {
					if ((secondaryWeapon _tio) isEqualTo "") then {
						_tio addWeapon _class;
					} else {
						_creaItem = true;
					};
				};
				case "hwea": {
					if ((handGunWeapon _tio) isEqualTo "") then {
						_tio addWeapon _class;
					} else {
						_creaItem = true;
					};
				};
				case "gra";
				case "mag": {
					if (_ammo isEqualTo -1) then { // no he definido ammo
						_tio addMagazine _class;
					} else {
						_tio addMagazine [_class, _ammo];
					};
				};
				case "sil";
				case "sig";
				case "poi";
				case "pap";
				case "ite": {
					_creaItem = true;
				};
				case "uni": {
					if ((uniform _tio) isEqualTo "") then {
						_tio forceAddUniform _class;
					} else {
						_creaItem = true;
					};
				};
				case "ves": {
					if ((vest _tio) isEqualTo "") then {
						_tio addVest _class;
					} else {
						_creaItem = true;
					};
				};
				case "bac": {
					if ((backpack _tio) isEqualTo "") then {
						_tio addBackpack _class;
					} else {
						(backpackContainer _tio) addbackpackCargo [_class, 1];
					};
				};
				case "gaf": {
					if ((goggles _tio) isEqualTo "") then {
						_tio addGoggles _class;
					} else {
						_creaItem = true;
					};
				};
				case "hea": {
					if ((headgear _tio) isEqualTo "") then {
						_tio addHeadgear _class;
					} else {
						_creaItem = true;
					};
				};
			};

			if (_creaItem) then { // si he dejado algo para más tarde, ahora es el momento
				if !(_tio canAdd _class) exitWith {false}; // no me cabe, devuelvo false
				_tio addItem _class;
				true // me cabe, devuelvo true
			} else {
				true // ya me ha cabido antes
			};
		}; // for

	// ------------------------------
	//    Q   U   I   T   A   R
	// ------------------------------

	} else {
				
		private _borraItem = false;
		
		for "_i" from 1 to _cantidad do {
			switch (toLower _queEs) do {
				
				case "pwea": {
					if (((primaryWeapon _tio) isEqualTo "") AND _cuentaEquipado) then { // si no tengo el arma equipada, la borro del inventario
						_borraItem = true;
					} else {
						if ((primaryWeapon _tio) == _class) then { // si la equipada coincide, la borro
							_tio removeWeapon _class;
						} else { // si no, borro del inventario
							_borraItem = true;
						};
					};
				};

				case "swea": {
					if (((secondaryWeapon _tio) isEqualTo "") AND _cuentaEquipado) then { // lo mismo con el resto
						_borraItem = true;
					} else {
						if ((secondaryWeapon _tio) == _class) then {
							_tio removeWeapon _class;
						} else {
							_borraItem = true;
						};
					};
				};

				case "hwea": {
					if (((handGunWeapon _tio) isEqualTo "") AND _cuentaEquipado) then {
						_borraItem = true;
					} else {
						if ((handGunWeapon _tio) == _class) then {
							_tio removeWeapon _class;
						} else {
							_borraItem = true;
						};
					};
				};

				case "gra";
				case "mag": {
					
					if (_ammo isEqualTo -1) then { // no he definido ammo
						_tio removeMagazine _class;
					} else {

						private ["_magazinesAmmo", "_heTocado", "_xClass", "_xAmmo"];

						_magazinesAmmo = magazinesAmmo _tio; // guardo magazines

						// modifico array
						_heTocado = false;
						{

							if (_heTocado) exitWith {}; // ya he borrado lo que quería, salgo

							_xClass = _x select 0;
							_xAmmo = _x select 1;

							if (_class isEqualTo _xClass) then { // coincided classnames
								if (_ammo isEqualTo _xAmmo) then { // coinciden ammos
									_magazinesAmmo deleteAt _forEachIndex; // borro la coincidencia 1 vez
									_heTocado = true; // indico que ya he encontrado lo que buscaba, para salirme
								};
							};

						} forEach _magazinesAmmo;

						if !(_heTocado) exitWith {}; // no he encontrado ese cargador, salgo

						{_tio removeMagazine _x} foreach (magazines _tio); // elimino todos mis magazines

						// me doy magazines del array modificado
						{
							_tio addMagazine [_x select 0, _x select 1]
						} forEach _magazinesAmmo;
					};
				};

				case "sil";
				case "sig";
				case "poi";
				case "pap";
				case "ite": {
					_borraItem = true;
				};
				case "uni": {
					if (((uniform _tio) == _class) AND _cuentaEquipado) then {
						removeUniform _tio
					} else {
						_borraItem = true
					};
				};

				case "ves": {
					if (((vest _tio) == _class) AND _cuentaEquipado) then {
						removeVest _tio
					} else {
						_borraItem = true
					};
				};

				case "bac": {
					if !((backpack _tio) isEqualTo "") then { // ya tengo mochila
						if (_class in (backpackCargo (backpackContainer _tio))) then { // tengo esa mochila dentro de mi mochila
							[backpackContainer _tio, [[_class, -1]]] call ica_fnc_itemVeh; // la quito
						} else {
							if ((backpack _tio) == _class) then { // tengo esa mochila puesta
								removeBackpack _tio; // me la quito
							};
						};
					};
					// if ((backpack _tio) == _class) then {removeBackpack _tio} else {_borraItem = true};
				};

				case "gaf": {
					if (((goggles _tio) == _class) AND _cuentaEquipado) then {
						removeGoggles _tio
					} else {
						_borraItem = true
					};
				};

				case "hea": {
					if (((headgear _tio) == _class) AND _cuentaEquipado) then {
						removeHeadgear _tio
					} else {
						_borraItem = true
					};
				};
			};

			if (_borraItem) then { // si he dejado algo para más tarde, ahora es el momento

				if (
					(_class in (assignedItems player)) AND 		// está linkeado
					([_class] call ica_fnc_tengo) isEqualTo 1 	// es el único que tengo
				 ) then {
					player unlinkItem _class;
				} else {
					_tio removeItem _class;
				};
			};
		}; // for
	}; // else
}
