
#include "..\..\script_macros.hpp"

private ["_building","_door","_doors","_cpRate","_title","_progressBar","_titleText","_cp","_ui"];

_building = param [0,objNull,[objNull]];

private _vaultHouse = [[["Altis", "Land_Research_house_V1_F"], ["Tanoa", "Land_Medevac_house_V1_F"]]] call TON_fnc_terrainSort;
private _altisArray = [16019.5,16952.9,0];
private _tanoaArray = [11074.2,11501.5,0.00137329];
private _pos = [[["Altis", _altisArray], ["Tanoa", _tanoaArray]]] call TON_fnc_terrainSort;

if (isNull _building) exitWith {};
if (!(_building isKindOf "House_F")) exitWith {hint localize "STR_ISTR_Bolt_NotNear";};
if (((nearestObject [_pos,"Land_Dome_Big_F"]) == _building || (nearestObject [_pos,_vaultHouse]) == _building) && (west countSide playableUnits < (LIFE_SETTINGS(getNumber,"minimum_cops")))) exitWith {
    hint format [localize "STR_Civ_NotEnoughCops",(LIFE_SETTINGS(getNumber,"minimum_cops"))];
};
if ((typeOf _building) == _vaultHouse && (nearestObject [_pos,"Land_Dome_Big_F"]) getVariable ["locked",true]) exitWith {hint localize "STR_ISTR_Bolt_Exploit"};
if (isNil "life_boltcutter_uses") then {life_boltcutter_uses = 0;};

_doors = FETCH_CONFIG2(getNumber,"CfgVehicles",(typeOf _building),"numberOfDoors");
_door = 0;

for "_i" from 1 to _doors do {
    _selPos = _building selectionPosition format ["Door_%1_trigger",_i];
    _worldSpace = _building modelToWorld _selPos;
        if (player distance _worldSpace < 2) exitWith {_door = _i;};
};
if (_door isEqualTo 0) exitWith {hint localize "STR_Cop_NotaDoor"};
if ((_building getVariable [format ["bis_disabled_Door_%1",_door],0]) isEqualTo 0) exitWith {hint localize "STR_House_Raid_DoorUnlocked"};

if ((nearestObject [_pos,"Land_Dome_Big_F"]) == _building || (nearestObject [_pos,_vaultHouse]) == _building) then {
    [10,"Alarma - Robo",[1,0,0,1],2,(format["!LA RESERVA FEDERAL ESTÁ SIENDO ROBADA!"]),[1,1,1,1],1.5] remoteexec ["ica_fnc_anuncio", west];
};

life_action_inUse = true;

disableSerialization;
_title = localize "STR_ISTR_Bolt_Process";
"progressBar" cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progressBar = _ui displayCtrl 38201;
_titleText = _ui displayCtrl 38202;
_titleText ctrlSetText format ["%2","%",_title];
_progressBar progressSetPosition 0.01;
_cP = 0.01;

switch (typeOf _building) do {
    case "Land_Dome_Big_F": {_cpRate = 0.003;};
    case "Land_Medevac_house_V1_F";
    case "Land_Research_house_V1_F": {_cpRate = 0.0015;};
    default {_cpRate = 0.008;};
};

for "_i" from 0 to 1 step 0 do {
    if (animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
        [player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteexeccall ["life_fnc_animSync",RCLIENT];
        player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
        player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
    };
    uiSleep 0.26;
    if (isNull _ui) then {
        "progressBar" cutRsc ["life_progress","PLAIN"];
        _ui = uiNamespace getVariable "life_progress";
        _progressBar = _ui displayCtrl 38201;
        _titleText = _ui displayCtrl 38202;
    };
    _cP = _cP + _cpRate;
    _progressBar progressSetPosition _cP;
    _titleText ctrlSetText format ["%3",round(_cP * 100),"%",_title];
    if (_cP >= 1 || !alive player) exitWith {};
    if (life_istazed) exitWith {};
    if (life_isknocked) exitWith {};
    if (life_interrupted) exitWith {};
};

"progressBar" cutText ["","PLAIN"];
player playActionNow "stop";
if (!alive player || life_istazed || life_isknocked) exitWith {life_action_inUse = false;};
if (player getVariable ["restrained",false]) exitWith {life_action_inUse = false;};
if (life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
life_boltcutter_uses = life_boltcutter_uses + 1;
life_action_inUse = false;

if (life_boltcutter_uses >= 5) then {
    [false,"boltcutter",1] call life_fnc_handleInv;
    life_boltcutter_uses = 0;
};

_building setVariable [format ["bis_disabled_Door_%1",_door],0,true];
_building setVariable ["locked",false,true];
_typeOfHouse = ["Land_i_House_Big_02_V1_F","Land_i_House_Big_02_V2_F","Land_i_House_Big_02_V3_F","Land_i_House_Big_02_V3_F","Land_i_House_Big_01_V2_F","Land_i_House_Big_01_V3_F","Land_i_House_Small_01_V1_F","Land_i_House_Small_01_V2_F","Land_i_House_Small_01_V3_F","Land_i_House_Small_02_V1_F","Land_i_House_Small_02_V2_F","Land_i_House_Small_02_V3_F","Land_i_House_Small_03_V1_F","Land_i_House_Small_03_V3_F","Land_i_Stone_HouseSmall_V1_F","Land_i_Stone_HouseSmall_V2_F","Land_i_Stone_HouseSmall_V3_F"];
if (typeOf _building in _typeOfHouse) then {
    [10,"Securitas Direct",[1,0,0,1],2,(format["Están robando una casa - %1", mapGridPosition player]),[1,1,1,1],1.5] remoteexec ["ica_fnc_anuncio", west];

    _uid = (_building getVariable "house_owner") select 0;
    /*[[_uid], { 
        if((getPlayerUID player) isequalto (_this select 0)) exitwith {  
            hintSilent parsetext format ["<br/><t color='#084aff' size='2' shadow='1'shadowColor='#b7bfd6'>~Securitas Direct~<br/></t><t color='#faff00' size='1.5' shadow='1'shadowColor='#f61010'><br/>Están robando tu casa. <br/> %1</t>", mapGridPosition player];
        };
    }] remoteexec ["BIS_fnc_spawn", -2];*/
    [4, "<br/><t color='#084aff' size='2' shadow='1'shadowColor='#b7bfd6'>~Securitas Direct~<br/></t><t color='#faff00' size='1.5' shadow='1'shadowColor='#f61010'><br/>Están robando tu casa <br/> %1</t>"] remoteexec ["life_fnc_broadcast", _uid];

};
if (life_HC_isActive) then {
    [getPlayerUID player,profileName,"459"] remoteexeccall ["HC_fnc_wantedAdd",HC_Life];
} else {
    [getPlayerUID player,profileName,"459"] remoteexeccall ["life_fnc_wantedAdd",RSERV];
};
