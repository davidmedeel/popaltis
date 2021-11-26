
/*
por: Estrada & Medel
*/

_param = param [0];

if (_param isEqualTo "Init") exitWith {
	createDialog "Cerradura";
	ctrlSetText [999012, ""];
	UsoCodigo = [];
};

if (_param isEqualTo "re") exitWith {
	if (count UsoCodigo > 6) exitWith {UsoCodigo = [];['re'] call est_fnc_cerradura};
	_string = UsoCodigo joinString "";
	ctrlSetText [999012, _string];
};

if (_param isEqualTo "enter") exitWith {
	if (UsoCodigo isEqualTo (roboArmas getVariable "CodigoRobo")) then {
		puertaRoboArmas animate ["Door_1_Move", 1];
		closeDialog 0;
		roboArmas setVariable ["CodigoRobo",[],true];
        [puertaRoboArmas] spawn {
		[120, "La puerta se cerrará cuando la barra llegue al final"] spawn ica_fnc_barrita;
		hint parsetext "<t color='#DE2828'><t size='3'><t align='center'>AVISO <br/><t color='#21618C'><t size='1.2'><t align='center'>La puerta se cerrará automáticamente cuando la barra llegue hasta el final</t>";
        sleep 120;
        puertaRoboArmas animate ["Door_1_Move", 0];
		clearWeaponCargoGlobal cajaArmas;
		clearItemCargoGlobal cajaSilenciadores;
    };
	} else {
		UsoCodigo = [];
		['re'] call est_fnc_cerradura;
	};
};
