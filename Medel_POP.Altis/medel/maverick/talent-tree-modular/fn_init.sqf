
scriptName "fn_init";

#define __filename "fn_init.sqf"

[] spawn {
	//diag_log "fn_init.sqf 1";
	if (isServer && !hasInterface) exitWith {};

	//diag_log "fn_init.sqf 2";
	life_perksInitialized = false;
	life_currentExpPerks = (0 call mav_ttm_fnc_generateBasePerks);
	life_currentExpLevel = 0;
	life_currentExp = 0;
	life_currentPerkPoints = 0;

	//diag_log "fn_init.sqf 3";

	waitUntil {player == player};

	diag_log "Solicitando datos de experiencia del servidor";
	[player] remoteExecCall ["mav_ttm_fnc_loadFromDatabase", 2];

	[] spawn {
		while {!life_perksInitialized} do
		{
			sleep 5;
			if (life_perksInitialized) exitWith {};
			diag_log "Solicitando datos de experiencia del servidor (RETRY)";
			[player] remoteExecCall ["mav_ttm_fnc_loadFromDatabase", 2];
		};
	};

	mav_ttm_keybindings_code = getNumber (missionConfigFile >> "Maverick_TTM" >> "Config" >> "keyCode");
	mav_ttm_keybindings_shift = getNumber (missionConfigFile >> "Maverick_TTM" >> "Config" >> "shift");
	mav_ttm_keybindings_ctrl = getNumber (missionConfigFile >> "Maverick_TTM" >> "Config" >> "ctrl");

	waitUntil {!isNull (findDisplay 46)};
	(findDisplay 46) displayAddEventHandler ["KeyDown", {
		params [
			"_display",
			"_code",
			"_shift",
			"_ctrl",
			"_alt"
		];

		if (mav_ttm_keybindings_code != _code) exitWith {};
		if ((mav_ttm_keybindings_shift == 1) && !_shift) exitWith {};
		if ((mav_ttm_keybindings_ctrl == 1) && !_ctrl) exitWith {};

		if (!dialog && (diag_tickTime - (missionNamespace getVariable ["mav_ttm_lastOpenTime", 0]) > 3)) then {
			mav_ttm_lastOpenTime = diag_tickTime;
			createDialog "TTM_GUI_RscDisplayTalentOverview";
		};
	}];
};
