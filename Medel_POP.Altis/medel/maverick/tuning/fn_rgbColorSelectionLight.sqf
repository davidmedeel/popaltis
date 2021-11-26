
scriptName "fn_rgbColorSelectionLight";

#define __filename "fn_rgbColorSelectionLight.sqf"

mav_tuning_colors = [0,0,0];

_vehicle = vehicle player;

mav_tuning_light_preview = "#lightpoint" createVehicle [1,1,1];
mav_tuning_light_preview setLightColor mav_tuning_colors;
//mav_tuning_light_preview setLightAmbient mav_tuning_colors;
mav_tuning_light_preview setLightIntensity 30;
mav_tuning_light_preview setLightFlareSize 0.38;
mav_tuning_light_preview setLightFlareMaxDistance 150;
mav_tuning_light_preview setLightUseFlare false;
mav_tuning_light_preview setLightDayLight true;
mav_tuning_light_preview lightAttachObject [(vehicle player), [0,0,-1.5]];
mav_tuning_light_preview setLightAmbient mav_tuning_colors;

((findDisplay 5200) displayCtrl 3) ctrlAddEventHandler ["ButtonClick",{
	deleteVehicle mav_tuning_light_preview;
	_values = (+((vehicle player) getVariable "mav_tuning"));

	diag_log format ["Medel Debug: El nombre tipografico (2) era %1", typeName _values];
	if (typeName _values != "ARRAY") then {
		_temp = ((vehicle player) getVariable "mav_tuning");
		_values = +_temp;
	};

	_values set [4, mav_tuning_colors];
	(vehicle player) setVariable ["mav_tuning",_values,true];

	closeDialog 0;
	[format["<t size='1' align='center' shadow='2' font='PuristaMedium'>Neones añadidos, Pulsa SHIFT-L para activarlos<br/>Te quedan <t color='#12FE00'>%1€</t>",[medel_din] call BIS_fnc_numberText]] spawn mav_tuning_fnc_displayText;
}];

((findDisplay 5200) displayCtrl 4) ctrlAddEventHandler ["ButtonClick",{
	deleteVehicle mav_tuning_light_preview;
	closeDialog 0;
	[(vehicle player) getVariable "mav_tuning",vehicle player] spawn mav_tuning_fnc_loadVehicleModification;

	medel_din = medel_din + mav_tuning_rgbprice;
	[format["<t size='1' align='center' shadow='2' font='PuristaMedium'><t color='#12FE00'>%1€</t> Han sido devueltos a tu cuenta<br/>Te quedan <t color='#12FE00'>%2€</t>",[mav_tuning_rgbprice] call BIS_fnc_numberText,[medel_din] call BIS_fnc_numberText]] spawn mav_tuning_fnc_displayText;
}];

((findDisplay 5200) displayCtrl 0) ctrlAddEventHandler ["SliderPosChanged",{
	mav_tuning_colors set [0, (_this select 1) / 10];
	mav_tuning_light_preview setLightColor mav_tuning_colors;
	mav_tuning_light_preview setLightAmbient mav_tuning_colors;
	if (dayTime < 19.16 AND dayTime > 5.12) then {
		mav_tuning_light_preview setLightBrightness 6;
	} else {
		mav_tuning_light_preview setLightBrightness 0.3;
	};
}];

((findDisplay 5200) displayCtrl 1) ctrlAddEventHandler ["SliderPosChanged",{
	mav_tuning_colors set [1, (_this select 1) / 10];
	mav_tuning_light_preview setLightColor mav_tuning_colors;
	mav_tuning_light_preview setLightAmbient mav_tuning_colors;
	if (dayTime < 19.16 AND dayTime > 5.12) then {
		mav_tuning_light_preview setLightBrightness 6;
	} else {
		mav_tuning_light_preview setLightBrightness 0.3;
	};
}];

((findDisplay 5200) displayCtrl 2) ctrlAddEventHandler ["SliderPosChanged",{
	mav_tuning_colors set [2, (_this select 1) / 10];
	mav_tuning_light_preview setLightColor mav_tuning_colors;
	mav_tuning_light_preview setLightAmbient mav_tuning_colors;
	if (dayTime < 19.16 AND dayTime > 5.12) then {
		mav_tuning_light_preview setLightBrightness 6;
	} else {
		mav_tuning_light_preview setLightBrightness 0.3;
	};
}];
