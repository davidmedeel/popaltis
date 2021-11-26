
if (isDedicated) exitWith {};
	[] spawn {
		if (player == player) then {
		nul = [] spawn medel_fnc_inventario;
		player addEventHandler ["Respawn", {nul = [] spawn medel_fnc_inventario}];
		};
	};
