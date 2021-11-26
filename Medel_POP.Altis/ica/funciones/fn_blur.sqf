
/*
por: Icaruk
	
Params:
	0: SCALAR - Modo, interpolación inicial. -1 para eliminar el efecto.
	
	Modo >0	
		1: SCALAR (opc) - Duración. -1 para que sea permanente. Default 1.
		2: SCALAR (opc) - Cantidad de efecto. Default 2.
		3: SCALAR (opc) - Interpolación final. Default 1.
	
	Modo -1
		1: SCALAR (opc) - Tiempo en el que se eliminará el efecto. Default 1.
	.

Esquema:
	[interp1, duración, cantidad, interp2]
	[-1, interp2]
	
Ejemplos:
	[1] spawn ica_fnc_blur;				// Tardará 1 segundo en ponerse borroso, con todos los params default.
	[1, -1] spawn ica_fnc_blur;			// Tardará 1 segundo en ponerse borroso, y será permanente.
	[1, 4, 3, 1.5] spawn ica_fnc_blur;	// Tardará 1 segundo en ponerse borroso, durará 4 y después se eliminará durante 1.5 segundos.
	
	[-1] spawn ica_fnc_blur; 			// Quitaré el efecto en el tiempo default.
	[-1, 4] spawn ica_fnc_blur; 		// Quitaré el efecto actual durante 4 segundos.
	
*/


_i1 = param [0];


if (_i1 > 0) then {

	_d = param [1, 1];
	_c = param [2, 2];
	_i2 = param [3, 1];
	
	
	blur_id = round random 99999; // asigno ID única
	
	blur = ppEffectCreate ["DynamicBlur", 10];
	blur ppEffectEnable true;

	blur ppEffectAdjust [_c];
	blur ppEffectCommit _i1;
	
	
	if (_d isEqualTo -1) exitWith {}; // quiero que sea permanente
	
	
	_blur_id_old = missionNamespace getVariable ["blur_id", -1]; // guardo la ID actual, para comprobarla luego, -1 si no había blur
	
	sleep _d;
	
	if !(_blur_id_old isEqualTo blur_id) exitWith {}; // no es la ID que he guardado, no borro
	
	
	blur ppEffectAdjust [0];
	blur ppEffectCommit _i2;

	sleep _i2;

	ppEffectDestroy blur;
	blur = nil;
	blur_id = nil;
	
	
} else {
	
	if (isNil "blur") exitWith {};
	
	
	_i2 = param [1, 1];
	
	blur ppEffectAdjust [0];
	blur ppEffectCommit _i2;
	
	
	_blur_id_old = missionNamespace getVariable ["blur_id", -1]; // guardo la ID actual, para comprobarla luego, -1 si no había blur
	
	sleep _i2;
	
	if (isNil "blur_id") exitWith {};
	if !(_blur_id_old isEqualTo blur_id) exitWith {}; // no es la ID que he guardado, no borro

	
	ppEffectDestroy blur;
	blur = nil;
	blur_id = nil;
	
};
