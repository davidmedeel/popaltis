
/*
	por: Medel
	SIN TERMINAR
*/

_param = param[0];

_uid = getPlayerUID player;

if (_param isEqualTo "menu") exitWith {
	disableSerialization;
	createDialog "desguace";

	_ui = uiNameSpace getVariable "desguace";
	_listaVehiculos = _ui displayCtrl 1000000;
	_boton = _ui displayCtrl 1000001;

	_vehiculos = "SELECT * FROM vehicles WHERE alive='0'";

	_listaVehiculos lbAdd format["%1", _vehiculos];

	_boton buttonSetAction '["reparo", _vehiculo] spawn medel_fnc_desguace;';
};

if (_param isEqualTo "reparo") exitWith { // se ejecuta
	_vehiculo = param [1];

	closeDialog 0;

	[30, "Reparando vehículo del desguace..."] spawn ica_fnc_barrita;

	sleep 30;

	hint "Todo listo, ya tienes tu buga en el Garaje";

	_query = format["UPDATE vehicles SET alive='1' WHERE pid='%1'", _uid];

	[_query,1] call DB_fnc_asyncCall;
};
