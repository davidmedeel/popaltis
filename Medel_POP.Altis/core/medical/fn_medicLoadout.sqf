
#include "..\..\script_macros.hpp"

private ["_handle"];

_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

if (FETCH_CONST(life_mediclevel) isEqualTo 0) exitWith {};

if(FETCH_CONST(life_mediclevel) <= 2) exitWith
{
	player addUniform "U_Rangemaster";all_cbr"; 

	player addItem "ItemMap";
	player assignItem "ItemMap";
	player addItem "ItemCompass";
	player assignItem "ItemCompass";
	player addItem "ItemWatch";
	player assignItem "ItemWatch";
	player addItem "ItemGPS";
	player assignItem "ItemGPS";
};

if(FETCH_CONST(life_mediclevel) <= 9) exitWith
{
	player addUniform "U_BG_Guerrilla_6_1";

	player addItem "ItemMap";
	player assignItem "ItemMap";
	player addItem "ItemCompass";
	player assignItem "ItemCompass";
	player addItem "ItemWatch";
	player assignItem "ItemWatch";
	player addItem "ItemGPS";
	player assignItem "ItemGPS";
};

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
