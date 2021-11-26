
scriptName "_master";

#define __filename "_master.sqf"

#include "_config.sqf"

disableSerialization;

try {
	params [
		["_parameters", [displayNull], [[]]],
		["_mode", "", [""]]
	];

	if (count _parameters < 1) throw "No hay suficientes parámetros";

	private _caller = _parameters select 0;
	private _display = displayNull;

	switch (typeName _caller) do
	{
		case "DISPLAY":
		{
			["el control es DISPLAY"] call BIS_fnc_log;
			_display = _caller;
		};

		case "CONTROL": {
			["el control es CONTROL"] call BIS_fnc_log;
			_display = ctrlParent _caller;
		};

		default
		{
			throw "La persona que llama no muestra ni controla";
		};
	};

	if (_display == displayNull) throw "No se puede encontrar el display asociado.";

	private _iddString = [str _display, ((str _display) find "#") + 1] call BIS_fnc_trimString;

	private _configsOfDialogs = ( format ["((configName _x) find '%1' == 0)", _dialogPrefix]) configClasses missionConfigFile;
	_configsOfDialogs append (( format ["((configName _x) find '%1' == 0)", _dialogPrefix]) configClasses (missionConfigFile >> "RscTitles"));

	private _configName = "";
	{
		if (str (getNumber (_x >> "IDD")) == _iddString) then {
			_configName = configName _x;
		};
	} forEach _configsOfDialogs;

	if (_configName == "") throw "No se pudo encontrar el nombre de configuración de el display";

	["GUI event encontrada para ejecutarse en config " + _configName + " with IDD " + _iddString + " en el archivo de script dialog master " + format ["%1_script", _configName]] call BIS_fnc_log;

	[_mode, _parameters, _display] spawn (missionNamespace getVariable [format ["%1_script", _configName], {}]);
} catch {
	[format ["[%1] %2", __filename, _exception]] call BIS_fnc_error;
};
