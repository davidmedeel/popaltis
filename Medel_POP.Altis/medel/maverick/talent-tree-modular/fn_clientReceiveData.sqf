
scriptName "fn_clientReceiveData";

#define __filename "fn_clientReceiveData.sqf"

params [
	["_level", 0],
	["_exp", 0],
	["_perkPoints", 0],
	["_perks", []]
];

if (life_perksInitialized) exitWith {diag_log "Habilidades Cargadas";};

diag_log "Universidad: Dato de Habilidad Recivido";
diag_log _level;
diag_log _exp;
diag_log _perkPoints;
diag_log _perks;

if !(_perks isEqualTo []) then {
	[_perks] call mav_ttm_fnc_setPerks;
};

life_currentExpLevel = _level;
life_currentExp = _exp;
life_currentPerkPoints = _perkPoints;

life_perksInitialized = true;
