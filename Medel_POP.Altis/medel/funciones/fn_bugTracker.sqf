
/*
por: Medel
// SIN TERMINAR
*/

_param = param [0];

if (_param isEqualTo "menu") exitWith {
	createDialog "bugTracker";
	disableSerialization;
	["guardaBug", _bugReportado, _descripcion] remoteExec ["medel_fnc_bugTracker", 0];
};

if (_param isEqualTo "guardaBug") exitWith {
	_bugReportado = param [1];
	_descripcion = param [2];

	_query = format ["INSERT INTO bugTracker (pid, nombre, bugReportado, descripcion) VALUES('%1','%2','%3')", getPlayerUID player, name player, _bugReportado, _descripcion];
	[_query,1] call DB_fnc_asyncCall;
};
