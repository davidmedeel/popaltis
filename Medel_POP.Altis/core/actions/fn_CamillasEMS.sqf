
#include "..\..\script_macros.hpp"

_ambulancia = nearestObject [player, "C_Van_02_medevac_F"];
_heli = nearestObject [player, "B_Heli_Light_01_F"];

if (side player isEqualto civilian) exitWith {hint "";};
if (side player isEqualto west) exitWith {hint "";};
if (vehicle player != player) exitWith {hint "No puedes usar esto dentro del vehiculo.";};

if (player distance _ambulancia < 5) then {
_obj = nearestObject [player, "Land_Stretcher_01_F"];

if (player distance _obj < 5) exitWith {hint "Ya tienes una camilla al lado tuyo";};

_maca = "Land_Stretcher_01_F" createVehicle position player;

action_carregar = {
	_obj = nearestObject [player, "Land_Stretcher_01_F"];
	_obj attachTo [player, [0, 1.10, 0.60] ];
	_ambulancia = nearestObject [player, "C_Van_02_medevac_F"];
	soltar = player addAction ["Soltar Camilla", {call action_soltar;}];
	_obj removeAction pegar;
	_ambulancia removeAction veiculo;
	veiculo = _ambulancia addAction ["Poner dentro de la ambulancia", {call action_colocar;}];
	player removeAction levar;
};

action_levar = {
	_obj = nearestObject [player, "Land_Stretcher_01_F"];
	_fe = nearestObjects [player, ["C_man_1"], 5];
	_ferido = _fe select 0;
	_ferido attachTo [_obj, [0, 0.20, 0.25] ];
};

action_soltar = {
	_obj = nearestObject [player, "Land_Stretcher_01_F"];
	_ambulancia = nearestObject [player, "C_Van_02_medevac_F"];
	_obj = nearestObject [player, "Land_Stretcher_01_F"];
	detach _obj;
	ativo = false;
	pegar = _obj addAction ["Coger Camilla", {call action_carregar;}];
	levar = player addAction ["Poner al paciente en la camilla", {call action_levar;}];
	_ambulancia removeAction veiculo;
	player removeAction soltar;
};

action_colocar = {
	_fe = nearestObjects [player, ["C_man_1"], 5];
	_ferido = _fe select 0;
	_obj = nearestObject [player, "Land_Stretcher_01_F"];
	_ambulancia = nearestObject [player, "C_Van_02_medevac_F"];
	_nearestVehicle = nearestObject [player, "C_Van_02_medevac_F"];
	player removeAction soltar;
	_obj removeAction pegar;
	_ambulancia removeAction veiculo;
	deleteVehicle _obj;
	[_nearestVehicle] remoteexeccall ["life_fnc_moveIn",_ferido];
};

call action_carregar;

};

if (player distance _heli < 5) then {
	if (player distance _ambulancia > 3) then {
		_obj2 = nearestObject [player, "Land_Stretcher_01_olive_F"];
		
		if (player distance _obj2 < 5) exitWith {hint "Ya tienes una camilla al lado tuyo.";};
		
		_maca = "Land_Stretcher_01_olive_F" createVehicle position player;
		
		action_carregar = {
			_obj = nearestObject [player, "Land_Stretcher_01_olive_F"];
			_obj attachTo [player, [0, 1.10, 0.60] ];
			_ambulancia = nearestObject [player, "B_Heli_Light_01_F"];
			soltar = player addAction ["Soltar Camilla", {call action_soltar;}];
			_obj removeAction pegar;
			_ambulancia removeAction veiculo;
			veiculo = _ambulancia addAction ["Poner dentro de la ambulancia", {call action_colocar;}];
			player removeAction levar;
		};

		action_levar = {
			_obj = nearestObject [player, "Land_Stretcher_01_olive_F"];
			_fe = nearestObjects [player, ["C_man_1"], 5];
			_ferido = _fe select 0;
			_ferido attachTo [_obj, [0, 0.20, 0.25] ];
		};

		action_soltar = {
			_obj = nearestObject [player, "Land_Stretcher_01_olive_F"];
			_ambulancia = nearestObject [player, "B_Heli_Light_01_F"];
			_obj = nearestObject [player, "Land_Stretcher_01_olive_F"];
			detach _obj;
			ativo = false;
			pegar = _obj addAction ["Coger Camilla", {call action_carregar;}];
			levar = player addAction ["Poner al paciente en la camilla", {call action_levar;}];
			_ambulancia removeAction veiculo;
			player removeAction soltar;
		};

		action_colocar = {
			_fe = nearestObjects [player, ["C_man_1"], 5];
			_ferido = _fe select 0;
			_obj = nearestObject [player, "Land_Stretcher_01_olive_F"];
			_ambulancia = nearestObject [player, "B_Heli_Light_01_F"];
			_nearestVehicle = nearestObject [player, "B_Heli_Light_01_F"];
			player removeAction soltar;
			_obj removeAction pegar;
			_ambulancia removeAction veiculo;
			deleteVehicle _obj;
			[_nearestVehicle] remoteexeccall ["life_fnc_moveIn",_ferido];
		};

		call action_carregar;
	};
};
