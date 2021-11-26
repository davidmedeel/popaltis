
#include "..\..\script_macros.hpp"

disableSerialization;

2 cutRsc ["HUDMedel","PLAIN"];

[] call medel_fnc_actualizaHUD;

[] spawn
{
	private["_dano"];

	while {true} do
	{
		_dano = damage player;
		waitUntil {(damage player) != _dano};
		[] call medel_fnc_actualizaHUD;
	};
};
