
/*
Gasolinera por Icaruk
	["menu"] spawn ica_fnc_gasolinera;
*/

_param = param [0];

disableSerialization;
if (_param == "menu") exitWith {
	if (vehicle player !=player) exitWith { hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>GASOLINERA</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>No puedes repostar desde un vehículo, no seas vago.</t>"; };

	if (!isNil {ocupado}) exitWith { hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>GASOLINERA</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>No spamees tanto.</t>"; };
	[] spawn {
		ocupado = true;
		sleep 2;
		ocupado = nil;
	};

	_veh = ((nearestObjects [player, ["Car"], 15]) select 0);
	if (isNil {_veh}) then {_veh = ((nearestObjects [player, ["Air"], 15]) select 0)};
	if (isNil {_veh}) exitWith { hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>GASOLINERA</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>No hay ningún vehículo cerca.</t>"; closeDialog 0 };
	createDialog "gasolinera";
	_ui = uiNamespace getVariable "gasolinera";
	_entada = (_ui displayCtrl 5014);
	_tengo = (_ui displayCtrl 5015);

	_tengo ctrlSetText format ["Combustible actual: %1 litros", round ((fuel _veh) * 100)];

	0 spawn {
		while {!isNil {uiNamespace getVariable "gasolinera"}} do {
			["actualiza"] call ica_fnc_gasolinera;
			sleep 0.5;
		};
	};
};

if (_param == "actualiza") exitWith {
	_ui = uiNamespace getVariable "gasolinera";
	_boton = (_ui displayCtrl 5012);
	_txtprecio = (_ui displayCtrl 5013);

	entrada = parseNumber ctrlText 5014;

	_precio = round (40 * entrada);
	_txtprecio ctrlSetText format ["Precio: %1€", _precio];
	
	_boton buttonSetAction '
		["llena", entrada] spawn ica_fnc_gasolinera;
	';
};

if (_param == "llena") exitWith {
	_com = param [1];
	if (_com < 0) exitWith { hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>GASOLINERA</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Escribe un número mayor que 0.</t>"; };
	if (_com > 100) exitWith { hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>GASOLINERA</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Escribe un número menor que 100.</t>"; };
	if (_com == 0) exitWith { hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>GASOLINERA</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>De acuerdo, quieres 0 de combustible. Ahí lo tienes, buen viaje.<t/>"; };
	
	_veh = ((nearestObjects [player, ["Car"], 15]) select 0);
	if (isNil {_veh}) then {_veh = ((nearestObjects [player, ["Air"], 15]) select 0)};
	if (isNil {_veh}) exitWith { hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>GASOLINERA</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>No hay ningún vehículo cerca.<t/>"; closeDialog 0 };
	_pos = getPos _veh;
	
	_precio = round (40 * entrada);

	if !(medel_din >= _precio) exitWith { hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>GASOLINERA</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>No tienes suficiente dinero.<t/>"; closeDialog 0; };
	medel_din = medel_din - _precio;
	
	closeDialog 0;
	
	hint "Repostando...";
	_t = round (_com / 8);
	[_t, "Repostando..."] spawn ica_fnc_barrita;
	sleep _t;
	
	if ((_veh distance _pos) > 10) exitWith { hint parsetext "<t color='#26ff00'><t size='3'>GASOLINERA<br/><t color='#ffffff'><t size='1.2'>Te has ido mientras repostabas y se ha derramado todo...<br/>No se aceptan devoluciones.<t/>"; closeDialog 0; };
	_veh setFuel ((fuel _veh) + (_com / 100));
	hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>GASOLINERA</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Todo listo, buen viaje.<t/>";
	closeDialog 0;
};
