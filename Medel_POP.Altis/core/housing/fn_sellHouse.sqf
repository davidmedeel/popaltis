
#include "..\..\script_macros.hpp"

private ["_house","_uid","_houseCfg"];

if (dialog) then {closeDialog 0};

_house = param [0,objNull,[objNull]];
_uid = getPlayerUID player;

if (isNull _house) exitWith {};
if (!(_house isKindOf "House_F")) exitWith {};
if (isNil {_house getVariable "house_owner"}) exitWith {hint localize "STR_House_noOwner";};
closeDialog 0;

_houseCfg = [(typeOf _house)] call life_fnc_houseConfig;
if (count _houseCfg isEqualTo 0) exitWith {};

// Fix dupeo by Medel

if (isNil {autoclick}) then {
		autoclick = 0;
		[] spawn {sleep 1; autoclick = nil};
};

autoclick = autoclick + 1;

if !(isNil {autoclick}) then {
	_fuera = false;
	if (autoclick > 2) exitWith {
		player setDamage 1;
		_fuera = true;
	};
	if (_fuera) exitWith {};
};

    _house setVariable ["house_sold",true,true];

    if (life_HC_isActive) then
    {
        [_house] remoteexeccall ["HC_fnc_sellHouse",HC_Life];
    } else {
        [_house] remoteexeccall ["TON_fnc_sellHouse",RSERV];
    };

    _house setVariable ["locked",false,true];
    deleteMarkerLocal format ["house_%1",_house getVariable "uid"];
    _house setVariable ["uid",nil,true];

    //BANK = BANK + (round((_houseCfg select 0)/2));
    [1] call SOCK_fnc_updatePartial;
    _index = life_vehicles find _house;

    if (LIFE_SETTINGS(getNumber,"player_advancedLog") isEqualTo 1) then
    {
        if (LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging") isEqualTo 1) then
        {
            advanced_log = format [localize "STR_DL_AL_soldHouse_BEF",(round((_houseCfg select 0)/2)),[BANK] call life_fnc_numberText];
        } else {
            advanced_log = format [localize "STR_DL_AL_soldHouse",profileName,(getPlayerUID player),(round((_houseCfg select 0)/2)),[BANK] call life_fnc_numberText];
            };
        publicVariableServer "advanced_log";
    };

    if !(_index isEqualTo -1) then
    {
        life_vehicles deleteAt _index;
    };

    _index = [str(getPosATL _house),life_houses] call TON_fnc_index;
    if !(_index isEqualTo -1) then
    {
        life_houses deleteAt _index;
    };
    _numOfDoors = FETCH_CONFIG2(getNumber,"CfgVehicles",(typeOf _house), "numberOfDoors");
    for "_i" from 1 to _numOfDoors do
    {
        _house setVariable [format ["bis_disabled_Door_%1",_i],0,true];
    };
    _containers = _house getVariable ["containers",[]];
    if (count _containers > 0) then
    {
        {
            _x setVariable ["Trunk",nil,true];

            if (life_HC_isActive) then
            {
                [_x] remoteexeccall ["HC_fnc_sellHouseContainer",HC_Life];
            } else {
                [_x] remoteexeccall ["TON_fnc_sellHouseContainer",RSERV];
            };

        } forEach _containers;
    };
    _house setVariable ["containers",nil,true];

    hint parsetext "<br/><t color='#084aff' size='2' shadow='1'shadowColor='#b7bfd6'>~ALERTA~<br/></t><t color='#faff00' size='1.5' shadow='1'shadowColor='#f61010'><br/>Por motivos de seguridad no se te ha dado dinero al vender la casa, si tienes pruebas, puedes realizar un formulario de devolución en el foro.<br/>www.projectgamers.ovh</t>";
