
#include "..\..\script_macros.hpp"

#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Btn9 37458
#define Btn10 37459
#define Title 37401

private["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_Btn8","_Btn9","_Btn10","_id"];
if(!dialog) then {
	createDialog "vInteraction_Menu";
};

disableSerialization;

_curTarget = param [0,ObjNull,[ObjNull]];
if(isNull _curTarget) exitWith {closeDialog 0;};
_isVehicle = if((_curTarget isKindOf "landVehicle") OR (_curTarget isKindOf "Ship") OR (_curTarget isKindOf "Air")) then {true} else {false};
if(!_isVehicle) exitWith {closeDialog 0;};

_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
_Btn9 = _display displayCtrl Btn9;
_Btn10 = _display displayCtrl Btn10;

life_vInact_curTarget = _curTarget;

_id = getObjectDLC _curTarget;

_Btn1 ctrlSetText localize "STR_vInAct_Repair";
_Btn1 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_repairTruck; closeDialog 0;";

if ((life_inv_toolkit >= 1) && {alive life_vInact_curTarget} && {([life_vInact_curTarget] call life_fnc_isDamaged)}) then {_Btn1 ctrlEnable true;} else {_Btn1 ctrlEnable false;};

_Btn7 ctrlSetText "Empujar Vehículo";
_Btn7 buttonSetAction "[] spawn life_fnc_pushObject; closeDialog 0;";

if(playerSide == independent) then {
_Btn8 ctrlSetText "Confiscar Vehículo";
_Btn8 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_impoundActionEMS; closeDialog 0;";

_Btn9 ctrlSetText "Ver Licencias";
_Btn9 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_searchVehAction; closeDialog 0;";

_Btn10 ctrlSetText "Sacar Jugadores";
_Btn10 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_pulloutAction; closeDialog 0;";
};

if(playerSide == civilian) then {
_Btn8 ctrlShow false;
_Btn9 ctrlShow false;
_Btn10 ctrlShow false;
};

if(playerSide == west) then {
	_Btn2 ctrlSetText localize "STR_vInAct_Registration";
	_Btn2 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_searchVehAction; closeDialog 0;";

	_Btn3 ctrlSetText localize "STR_vInAct_SearchVehicle";
	_Btn3 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_vehInvSearch; closeDialog 0;";

	_Btn4 ctrlSetText localize "STR_vInAct_PullOut";
	_Btn4 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_pulloutAction; closeDialog 0;";
	if(count crew _curTarget == 0) then {_Btn4 ctrlEnable false;};

	_Btn5 ctrlSetText localize "STR_vInAct_Impound";
	_Btn5 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_impoundAction; closeDialog 0;";

    _Btn8 ctrlShow false;
	_Btn9 ctrlShow false;
	_Btn10 ctrlShow false;

    if (_curTarget isKindOf "Ship") then {
        _Btn6 ctrlSetText "Voltear Barco";
        _Btn6 buttonSetAction "life_vInact_curTarget setPos [getPos life_vInact_curTarget select 0, getPos life_vInact_curTarget select 1, (getPos life_vInact_curTarget select 2)+0.5]; closeDialog 0;";
        if (_curTarget isKindOf "Ship" && {local _curTarget} && {crew _curTarget isEqualTo []}) then { _Btn6 ctrlEnable true;} else {_Btn6 ctrlEnable false};
    } else {
        if (!isNil "_id") then {
            if !(_id in getDLCs 1) then {
                _Btn6 ctrlSetText "Entrar en el Vehículo";
                _Btn6 buttonSetAction "player moveInDriver life_vInact_curTarget; closeDialog 0;";
                if (crew _curTarget isEqualTo [] && {canMove _curTarget} && {locked _curTarget isEqualTo 0}) then {_Btn6 ctrlEnable true;} else {_Btn6 ctrlEnable false};
            };
        } else {
			_Btn6 ctrlSetText localize "STR_vInAct_Unflip";
			_Btn6 buttonSetAction "life_vInact_curTarget setPos [getPos life_vInact_curTarget select 0, getPos life_vInact_curTarget select 1, (getPos life_vInact_curTarget select 2)+0.5]; closeDialog 0;";
			if(count crew _curTarget == 1) then {_Btn6 ctrlEnable false;};
		};
	};

} else {

    if (_curTarget isKindOf "Ship") then {
        _Btn2 ctrlSetText "Voltear Barco";
        _Btn2 buttonSetAction "life_vInact_curTarget setPos [getPos life_vInact_curTarget select 0, getPos life_vInact_curTarget select 1, (getPos life_vInact_curTarget select 2)+0.5]; closeDialog 0;";
        if (alive _curTarget && {_curTarget isKindOf "Ship"} && {local _curTarget} && {crew _curTarget isEqualTo []}) then { _Btn2 ctrlEnable true;} else {_Btn2 ctrlEnable false};
    } else {
        if (!isNil "_id") then {
            if !(_id in getDLCs 1) then {
                _Btn2 ctrlSetText "Entrar en el Vehículo";
                _Btn2 buttonSetAction "player moveInDriver life_vInact_curTarget; closeDialog 0;";
                if (crew _curTarget isEqualTo [] && {canMove _curTarget} && {locked _curTarget isEqualTo 0}) then {_Btn2 ctrlEnable true;} else {_Btn2 ctrlEnable false};
            };
        } else {
			_Btn2 ctrlSetText localize "STR_vInAct_Unflip";
			_Btn2 buttonSetAction "life_vInact_curTarget setPos [getPos life_vInact_curTarget select 0, getPos life_vInact_curTarget select 1, (getPos life_vInact_curTarget select 2)+0.5]; closeDialog 0;";
		};
	};

	if(typeOf _curTarget == "O_Truck_03_device_F") then {
		_Btn3 ctrlSetText localize "STR_vInAct_DeviceMine";
		_Btn3 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_deviceMine; closeDialog 0;";
		if(!isNil {(_curTarget getVariable "mining")} OR !local _curTarget && {_curTarget in life_vehicles}) then {
			_Btn3 ctrlEnable false;
		} else {
			_Btn3 ctrlEnable true;
		};
	} else {
		_Btn3 ctrlShow false;
	};
	if(playerSide == civilian) then {
	_Btn4 ctrlSetText localize "STR_vInAct_PullOut";
	_Btn4 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_pulloutAction; closeDialog 0;";
	if(count crew _curTarget == 0) then {_Btn4 ctrlEnable false;};
	} else{
	_Btn4 ctrlShow false;
	};
	_Btn5 ctrlShow false;
	_Btn6 ctrlShow false;
};
