
disableSerialization;
private["_player", "_badgeNumber"];

_player = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_dniNumber = [_this, 1, "", [""]] call BIS_fnc_param;

switch (side _player) do {
	case civilian : {
	titleRsc ["DNI", "PLAIN DOWN", 1, true];
	_d = uiNamespace getVariable ['DNI', displayNull];
	(_d displayCtrl 656721) ctrlSetText (_player getVariable["realname", "ERROR"]);
	};
	case independent : {
		titleRsc ["PLACA_EMS", "PLAIN DOWN", 1, true];
		_d = uiNamespace getVariable ['PLACA_EMS', displayNull];
		(_d displayCtrl 656821) ctrlSetText (_player getVariable["realname", "ERROR"]);
		(_d displayCtrl 656822) ctrlSetText (format["%1", _dniNumber]);
	};
	case west : {
		titleRsc ["PLACA_POLICIA", "PLAIN DOWN", 1, true];
		_d = uiNamespace getVariable ['PLACA_POLICIA', displayNull];
		(_d displayCtrl 656711) ctrlSetText (_player getVariable["realname", "ERROR"]);
		(_d displayCtrl 656711) ctrlSetTextColor [0,0,0,1];
		(_d displayCtrl 656712) ctrlSetText (format["%1", _dniNumber]);
		(_d displayCtrl 656712) ctrlSetTextColor [0,0,0,1];
	};
};
