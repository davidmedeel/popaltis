
/*
por: Icaruk
Farmeo de Agua
["menu"] spawn medel_fnc_aguas;
*/

_param = _this select 0;

if (_param isEqualTo "menu") exitWith {
	if !(playerSide isEqualTo civilian) exitWith {hint "No eres civil ¿Que intentas?";};
	disableSerialization;
	createDialog "llenandoBotella";
	_ui = uiNameSpace getVariable "llenandoBotella";
	EHbotella = _ui displayAddEventHandler ["MouseZChanged", "['llena'] spawn medel_fnc_aguas; "];	

	titleText ["Usa la rueda del ratón para llenar la botella", "PLAIN DOWN", 0.6];
};

if (_param isEqualTo "llena") exitWith {
	
	if (!isNil {llena}) exitWith {
		(uiNameSpace getVariable "llenandoBotella") displayRemoveEventHandler ["MouseZChanged", EHbotella];
		sleep 1.5;
		closeDialog 0;
		if (vehicle player == player) then {
			[true,"aguaSucia",1] call life_fnc_handleInv;
		};
		["+1 Agua Sucia"] spawn ica_fnc_masuno;
	};

	disableSerialization;
	_ui = uiNameSpace getVariable "llenandoBotella";
	_barrita = (_ui displayCtrl 4058);

	_n = progressPosition _barrita;
	_barrita progressSetPosition (_n + 0.020);
	if (_n >= 0.99) then {llena = true};
};
