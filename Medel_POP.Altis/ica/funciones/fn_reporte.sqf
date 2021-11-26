
/*
por: Icaruk
	[] call ica_fnc_reporte;
*/

	if (!isNil {reporteUsado}) exitWith {hint "Sólo puedes usar esta función cada 15 minutos"};
	0 spawn {
		reporteUsado = true;
		sleep (60 * 15);
		reporteUsado = nil;
	};

	_din = round (medel_atmdin * 0.10);
	
	medel_atmdin = medel_atmdin -_din;

	[] call SOCK_fnc_updateRequest;

	[0,format["%1 ha usado la función reporte.", name player]] remoteexec ["life_fnc_broadcast", 0];
	
	hint format ["Se te han deducido %1€ por usar la función reporte.",[_din] call life_fnc_numberText];

0 spawn {
	0 spawn {
		_t = diag_tickTime + 30;
		waitUntil {diag_tickTime >= _t};
		removeMissionEventHandler ["Draw3D", EHreporte];
	};

	EHreporte = addMissionEventHandler ["Draw3D", {

		_arr = nearestObjects [player, ["Man", "Car"], 60];
		if ((count _arr) > 1) then {
			{
				_dist = player distance _x;
				_dist = if (_dist < 1.5) then {1.5} else {_dist};

			drawIcon3D [
				"\a3\ui_f\data\map\Markers\System\dummy_ca.paa", 
				[1,0.2,0.2, (60 - _dist) / 50], 
				[((getPos _x) select 0), ((getPos _x) select 1), 2+(1.8/(60/_dist))],
				1,
				1,
				0,
				format ["%1 - %2",_x getVariable "realname", getplayeruid _x],
				1.8,
				0.036,
				"TahomaB"
			];
			} forEach _arr;
		};
	}];
};
