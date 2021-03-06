
scriptName "fn_rgbColorSelection";

#define __filename "fn_rgbColorSelection.sqf"

mav_tuning_colors = [0,0,0,1];

((findDisplay 5200) displayCtrl 3) ctrlAddEventHandler ["ButtonClick",{
	_texture = format["#(rgb,8,8,3)color(%1,%2,%3,1)",mav_tuning_colors select 0,mav_tuning_colors select 1,mav_tuning_colors select 2];
	_values = +((vehicle player) getVariable "mav_tuning");
	_values set [1,_texture];
	(vehicle player) setVariable ["mav_tuning",_values,true];
	[_values,vehicle player] spawn mav_tuning_fnc_loadVehicleModification;
	closeDialog 0;
}];

((findDisplay 5200) displayCtrl 4) ctrlAddEventHandler ["ButtonClick",{
	closeDialog 0;
	[(vehicle player) getVariable "mav_tuning",vehicle player] spawn mav_tuning_fnc_loadVehicleModification;

	medel_din = medel_din + mav_tuning_rgbprice;
	[format["<t size='1' align='center' shadow='2' font='PuristaMedium'><t color='#12FE00'>%1€</t> Han sido devueltos a tu cuenta<br/>Te quedan <t color='#12FE00'>%2€</t> restantes</t>",[mav_tuning_rgbprice] call BIS_fnc_numberText,[medel_din] call BIS_fnc_numberText]] spawn mav_tuning_fnc_displayText;
}];

((findDisplay 5200) displayCtrl 0) ctrlAddEventHandler ["SliderPosChanged",{
	mav_tuning_colors set [0, (_this select 1) / 10];

	_texture = format["#(rgb,8,8,3)color(%1,%2,%3,1)",(_this select 1) / 10,mav_tuning_colors select 1,mav_tuning_colors select 2];
	_values = +((vehicle player) getVariable "mav_tuning");

	diag_log format ["Medel Debug: El nombre tipografico era %1", typeName _values];
	if (typeName _values != "ARRAY") then {
		_temp = ((vehicle player) getVariable "mav_tuning");
		_values = +_temp;
	};

	_values set [1,_texture];

	(vehicle player) setObjectTextureGlobal [0, _texture];
	//[_values,vehicle player] spawn mav_tuning_fnc_loadVehicleModification;
	mav_tuning_previewData = _values;
}];

((findDisplay 5200) displayCtrl 1) ctrlAddEventHandler ["SliderPosChanged",{
	mav_tuning_colors set [1, (_this select 1) / 10];

	_texture = format["#(rgb,8,8,3)color(%1,%2,%3,1)",mav_tuning_colors select 0,(_this select 1) / 10,mav_tuning_colors select 2];
	_values = +((vehicle player) getVariable "mav_tuning");

	diag_log format ["Medel Debug: El nombre tipografico era %1", typeName _values];
	if (typeName _values != "ARRAY") then {
		_temp = ((vehicle player) getVariable "mav_tuning");
		_values = +_temp;
	};

	_values set [1,_texture];

	(vehicle player) setObjectTextureGlobal [0, _texture];
	//[_values,vehicle player] spawn mav_tuning_fnc_loadVehicleModification;
	mav_tuning_previewData = _values;
}];

((findDisplay 5200) displayCtrl 2) ctrlAddEventHandler ["SliderPosChanged",{
	mav_tuning_colors set [2, (_this select 1) / 10];

	_texture = format["#(rgb,8,8,3)color(%1,%2,%3,1)",mav_tuning_colors select 0,mav_tuning_colors select 1,(_this select 1) / 10];
	_values = +((vehicle player) getVariable "mav_tuning");

	diag_log format ["Medel Debug: El nombre tipografico era %1", typeName _values];
	if (typeName _values != "ARRAY") then {
		_temp = ((vehicle player) getVariable "mav_tuning");
		_values = +_temp;
	};

	_values set [1,_texture];

	(vehicle player) setObjectTextureGlobal [0, _texture];
	//[_values,vehicle player] spawn mav_tuning_fnc_loadVehicleModification;
	mav_tuning_previewData = _values;
}];
