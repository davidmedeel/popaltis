
scriptName "fn_purchaseSelectedModification";

#define __filename "fn_purchaseSelectedModification.sqf"

disableSerialization;

_ctrl = (findDisplay 5100) displayCtrl 0;
_index = lbCurSel _ctrl;
if (_index == -1) exitWith {
	["<t size='1' align='center' shadow='2' font='PuristaMedium' color='#ff0000'>Selecciona una modificación</t>"] spawn mav_tuning_fnc_displayText;
};
_class = _ctrl lbData _index;
_poolIndex = _ctrl lbValue _index;

if (_class == "") exitWith {};

_veh = vehicle player;
_masterConfig = [typeof _veh] call mav_tuning_fnc_getMasterConfig;
_subConfig = getArray(missionConfigFile >> "Maverick_Tuning" >> "Vehicles" >> _masterConfig >> _class >> "pool");
_subConfig = _subConfig select _poolIndex;

_price = getNumber(missionConfigFile >> "Maverick_Tuning" >> "Vehicles" >> _masterConfig >> _class >> _subConfig >> "price");
if (medel_din < _price) exitWith {
	["<t size='1' align='center' shadow='2' font='PuristaMedium' color='#ff0000'>No tienes suficiente dinero para esta modificación</t>"] spawn mav_tuning_fnc_displayText;
};

if (_subConfig == "RGB" AND _class == "Colors") exitWith {
	createDialog "mav_tuning_dialog_rgbcolor";
 	medel_din = medel_din - _price;
 	mav_tuning_rgbprice = _price;
	[format["<t size='1' align='center' shadow='2' font='PuristaMedium'>Has comprado una modificación por <t color='#12FE00'>%1€</t><br/>Te quedan <t color='#12FE00'>%2€</t>",[mav_tuning_rgbprice] call BIS_fnc_numberText,[medel_din] call BIS_fnc_numberText]] spawn mav_tuning_fnc_displayText;

	[] spawn mav_tuning_fnc_rgbColorSelection;
};

if (_subConfig == "UnderglowRGB" AND _class == "Underglow") exitWith {
	createDialog "mav_tuning_dialog_rgbcolor";
 	medel_din = medel_din - _price;
 	mav_tuning_rgbprice = _price;
	[format["<t size='1' align='center' shadow='2' font='PuristaMedium'>Has comprado una modificación por <t color='#12FE00'>%1€</t><br/>Te quedan <t color='#12FE00'>%2€</t>",[mav_tuning_rgbprice] call BIS_fnc_numberText,[medel_din] call BIS_fnc_numberText]] spawn mav_tuning_fnc_displayText;

	[] spawn mav_tuning_fnc_rgbColorSelectionLight;
};

if (true) then {
	_originalData = (vehicle player) getVariable ["mav_tuning",[]];

	if (isNil "mav_tuning_previewData") exitWith {};
	if ((str _originalData) == (str mav_tuning_previewData)) exitWith {
		["<t size='1' align='center' shadow='2' font='PuristaMedium' color='#ff0000'>Ya tienes esta modificación</t>"] spawn mav_tuning_fnc_displayText;
	};

	_newArray = mav_tuning_previewData;
	[_newArray,vehicle player] spawn mav_tuning_fnc_loadVehicleModification;
 	_veh setVariable ["mav_tuning",_newArray,true];

 	medel_din = medel_din - _price;
	[format["<t size='1' align='center' shadow='2' font='PuristaMedium'>Has comprado una modificación por <t color='#12FE00'>%1€</t><br/>Te quedan <t color='#12FE00'>%2€</t>",[_price] call BIS_fnc_numberText,[medel_din] call BIS_fnc_numberText]] spawn mav_tuning_fnc_displayText;

	_ctrl lbSetCurSel -1;
};
