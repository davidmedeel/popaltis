
/*
Script de la misión Desolation creado por Icaruk
Función: Muestra un efecto de texto con los parametros recibidos
Se invoca con:
	["texto"] call ica_fnc_menosuno;
*/

[_this select 0, _this select 1] spawn {
	_texto = _this select 0;
	_tipo = _this select 1;

	("icapa5" call BIS_fnc_rscLayer) cutText ["","PLAIN"];
	("icapa5" call BIS_fnc_rscLayer) cutRsc ["masuno","PLAIN"];

	disableSerialization;
	_ui = uiNameSpace getVariable "masuno";
	_menosuno = _ui displayCtrl 4065;
	_menosuno ctrlSetStructuredText parseText format ["<t size='1.8' align='center'>%1</t>", _texto];

	if (isNil {_tipo}) then {
		_parpadeos = 0;
		while {_parpadeos < 7} do {
			_menosuno ctrlSetTextColor [1,0,0,1];
			sleep 0.2;
			_menosuno ctrlSetTextColor [1,1,1,1];
			sleep 0.2;
			_parpadeos = _parpadeos + 1;
		};
	};

	_a = 100;
	while {true} do {
		if (_a <= 0) exitWith {};

		_menosuno ctrlSetPosition [
			((ctrlPosition _menosuno) select 0),
			((ctrlPosition _menosuno) select 1) + 0.003,
			((ctrlPosition _menosuno) select 2),
			((ctrlPosition _menosuno) select 3)
		];
		_menosuno ctrlCommit 0;

		sleep 0.001;

		_a = _a - 1;
	};
};
