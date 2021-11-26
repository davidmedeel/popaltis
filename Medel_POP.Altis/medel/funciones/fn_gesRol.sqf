
/*
por: Medel
*/

private ["_uid","_nvl","_query","_jugador", "_rol"];

_rol = param [0];
_nvl = param [1];
_uid = param [2];
_tio = param [3];

if (_rol isEqualTo "pol") exitWith {

	["elegante", "AVISO", "Tú nivel de Policía ha sido modificado.<br/>Serás expulsado en 5 segundos para aplicar los cambios."] remoteexec ["medel_fnc_hint", _tio];

	if (!isNil "particulaCabeza") then { // tengo las partículas de admin
		deleteVehicle particulaCabeza;
		particulaCabeza = nil;
	};

	sleep 5;

	["Kick",false,false] remoteexeccall ['BIS_fnc_endMission', _tio];

	_query = format ["UPDATE players SET coplevel='%1' WHERE pid='%2'",_nvl,_uid];

	[_query,1] call DB_fnc_asyncCall;
};

if (_rol isEqualTo "ems") exitWith {

	["elegante", "AVISO", "Tú nivel de EMS ha sido modificado.<br/>Serás expulsado en 5 segundos para aplicar los cambios."] remoteexec ["medel_fnc_hint", _tio];

	if (!isNil "particulaCabeza") then { // tengo las partículas de admin
		deleteVehicle particulaCabeza;
		particulaCabeza = nil;
	};

	sleep 5;

	["Kick",false,false] remoteexeccall ['BIS_fnc_endMission', _tio];

	_query = format ["UPDATE players SET mediclevel='%1' WHERE pid='%2'",_nvl,_uid];

	[_query,1] call DB_fnc_asyncCall;
};

if (_rol isEqualTo "admin") exitWith {

	["elegante", "AVISO", "Tú nivel de admin ha sido modificado.<br/>Serás expulsado en 5 segundos para aplicar los cambios."] remoteexec ["medel_fnc_hint", _tio];

	if (!isNil "particulaCabeza") then { // tengo las partículas de admin
		deleteVehicle particulaCabeza;
		particulaCabeza = nil;
	};

	sleep 5;

	["Kick",false,false] remoteexeccall ['BIS_fnc_endMission', _tio];

	_query = format ["UPDATE players SET adminlevel='%1' WHERE pid='%2'",_nvl,_uid];

	[_query,1] call DB_fnc_asyncCall;
};

if (_rol isEqualTo "vetarPoli") exitWith {

	["elegante", "AVISO", "Has sido vetado de la Policía.<br/>Serás expulsado en 5 segundos para aplicar los cambios."] remoteexec ["medel_fnc_hint", _tio];

	if (!isNil "particulaCabeza") then { // tengo las partículas de admin
		deleteVehicle particulaCabeza;
		particulaCabeza = nil;
	};

	sleep 5;

	["VetoPolicia",false,false] remoteexeccall ['BIS_fnc_endMission', _tio];

	_query = format ["UPDATE players SET blacklist='1' WHERE pid='%1'", _uid];

	[_query,1] call DB_fnc_asyncCall;
};
