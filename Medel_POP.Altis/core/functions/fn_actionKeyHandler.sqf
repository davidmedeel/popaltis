
#include "..\..\script_macros.hpp"

private ["_curObject","_isWater","_CrateModelNames","_crate","_fish","_animal","_whatIsIt","_handle"];

_curObject = cursorObject;
if (life_action_inUse) exitWith {}; 
if (life_interrupted) exitWith {life_interrupted = false;};
_isWater = surfaceIsWater (visiblePositionASL player);

if (player getVariable ["isEscorting",false]) exitWith {
    [] call est_fnc_pinteraction;
};

if (LIFE_SETTINGS(getNumber,"global_ATM") isEqualTo 1) then{

    if ((call life_fnc_nearATM) && {!dialog}) exitWith {
        [] call life_fnc_atmMenu;
    };
};

if (isNull _curObject) exitWith {
    if (_isWater) then {
        _fish = (nearestObjects[player,(LIFE_SETTINGS(getArray,"animaltypes_fish")),3]) select 0;
        if (!isNil "_fish") then {
            if (!alive _fish) then {
                [_fish] call life_fnc_catchFish;
            };
        };
    } else {
        _animal = (nearestObjects[player,(LIFE_SETTINGS(getArray,"animaltypes_hunting")),3]) select 0;
        if (!isNil "_animal") then {
            if (!alive _animal) then {
                [_animal] call life_fnc_gutAnimal;
            };
        } else {
            private "_handle";
            if (playerSide isEqualTo civilian && !life_action_gathering) then {
          _whatIsIt = [] call life_fnc_whereAmI;
                if (life_action_gathering) exitWith {};                 
                switch (_whatIsIt) do {
                    case "mine" : { _handle = [] spawn life_fnc_mine };
                    default { _handle = [] spawn life_fnc_gather };
                };
                life_action_gathering = true;
                waitUntil {scriptDone _handle};
                life_action_gathering = false;
            };
        };
    };
};

if ((_curObject isKindOf "B_supplyCrate_F" || _curObject isKindOf "Box_IND_Grenades_F") && {player distance _curObject < 3} ) exitWith {
    if (alive _curObject) then {
        [_curObject] call life_fnc_containerMenu;
    };
};

private _vaultHouse = [[["Altis", "Land_Research_house_V1_F"], ["Tanoa", "Land_Medevac_house_V1_F"]]] call TON_fnc_terrainSort;
private _altisArray = [16019.5,16952.9,0];
private _tanoaArray = [11074.2,11501.5,0.00137329];
private _pos = [[["Altis", _altisArray], ["Tanoa", _tanoaArray]]] call TON_fnc_terrainSort;

if (_curObject isKindOf "House_F" && {player distance _curObject < 12} || ((nearestObject [_pos,"Land_Dome_Big_F"]) isEqualTo _curObject || (nearestObject [_pos,_vaultHouse]) isEqualTo _curObject)) exitWith {
    [_curObject] call life_fnc_houseMenu;
};

if (dialog) exitWith {};
if !(isNull objectParent player) exitWith {}; 
life_action_inUse = true;

[] spawn {
    sleep 60;
    life_action_inUse = false;
};

if (_curObject isKindOf "CAManBase" && {!alive _curObject}) exitWith {
    if ((playerSide isEqualTo west && {(LIFE_SETTINGS(getNumber,"revive_cops") isEqualTo 1)}) || {(playerSide isEqualTo civilian && {(LIFE_SETTINGS(getNumber,"revive_civ") isEqualTo 1)})} || {(playerSide isEqualTo east && {(LIFE_SETTINGS(getNumber,"revive_east") isEqualTo 1)})} || {playerSide isEqualTo independent}) then {
        if (life_inv_defibrillator > 0) then {
            [_curObject] call life_fnc_revivePlayer;
        };
    };
};

if (_curObject isKindOf "CAManBase" && {player distance _curObject < 5} ) then {
    if ((_curObject getVariable ["restrained",false]) && !dialog) then {
        if (player getVariable ["restrained",false]) exitWith {};

            [_curObject] call est_fnc_pinteraction;
    };

} else {

    private ["_isVehicle","_miscItems","_money","_list"];

    _list = ["landVehicle","Ship","Air"];
    _isVehicle = if (KINDOF_ARRAY(_curObject,_list)) then {true} else {false};
    _miscItems = ["Land_BottlePlastic_V1_F","Land_TacticalBacon_F","Land_Can_V3_F","Land_CanisterFuel_F","Land_Suitcase_F"];

    if (_isVehicle) then
    {
        if (!dialog) then
        {
            if (player distance _curObject < ((boundingBox _curObject select 1) select 0)+2 && (!(player getVariable ["restrained",false])) && (!(player getVariable ["playerSurrender",false])) && !life_isknocked && !life_istazed) then {
                [_curObject] call life_fnc_vInteractionMenu;
            };
        };
    } else {

        if ((typeOf _curObject) in _miscItems) then
        {
            [_curObject,player,false] remoteexeccall ["TON_fnc_pickupAction",RSERV];
        } else {
		
            if ((typeOf _curObject) isEqualTo "Land_Money_F" && {!(_curObject getVariable ["inUse",false])}) then {
                [_curObject,player,true] remoteexeccall ["TON_fnc_pickupAction",RSERV];
            };
        };
    };
};
