
#include "..\..\script_macros.hpp"

params [
    ["_unit",objNull,[objNull]],
    ["_killer",objNull,[objNull]]
];
disableSerialization;

[] call SOCK_fnc_updateRequest; // si muero sincronizo

if  !((vehicle _unit) isEqualTo _unit) then
{
    UnAssignVehicle _unit;
    _unit action ["getOut", vehicle _unit];
    _unit setPosATL [(getPosATL _unit select 0) + 3, (getPosATL _unit select 1) + 1, 0];
};

_unit setVariable ["Revive",true,true];
_unit setVariable ["name",profileName,true]; 
_unit setVariable ["restrained",false,true];
_unit setVariable ["Escorting",false,true];
_unit setVariable ["transporting",false,true];
_unit setVariable ["playerSurrender",false,true];
_unit setVariable ["steam64id",(getPlayerUID player),true]; 

if (dialog) then
{
    closeDialog 0;
};

life_deathCamera  = "CAMERA" camCreate (getPosATL _unit);
showCinemaBorder true;
life_deathCamera cameraEffect ["Internal","Back"];
createDialog "DeathScreen";
life_deathCamera camSetTarget _unit;
life_deathCamera camSetRelPos [0,3.5,4.5];
life_deathCamera camSetFOV .5;
life_deathCamera camSetFocus [50,0];
life_deathCamera camCommit 0;

(findDisplay 7300) displaySetEventHandler ["KeyDown","if ((_this select 1) isEqualTo 1) then {true}"]; 

_unit spawn {
    private ["_maxTime","_RespawnBtn","_Timer"];
    disableSerialization;
    _RespawnBtn = ((findDisplay 7300) displayCtrl 7302);
    _Timer = ((findDisplay 7300) displayCtrl 7301);
    if (LIFE_SETTINGS(getNumber,"respawn_timer") < 5) then
    {
        _maxTime = time + 5;
    } else {
        _maxTime = time + LIFE_SETTINGS(getNumber,"respawn_timer");
    };
    _RespawnBtn ctrlEnable false;
    waitUntil {_Timer ctrlSetText format [localize "STR_Medic_Respawn",[(_maxTime - time), "MM:SS"] call BIS_fnc_secondsToString];
    round(_maxTime - time) <= 0 || isNull _this};
    _RespawnBtn ctrlEnable true;
    _Timer ctrlSetText localize "STR_Medic_Respawn_2";
};

_unit spawn {
    private ["_requestBtn","_requestTime"];
    disableSerialization;
    _requestBtn = ((findDisplay 7300) displayCtrl 7303);
    _requestBtn ctrlEnable false;
    _requestTime = time + 5;
    waitUntil {round(_requestTime - time) <= 0 || isNull _this};
    _requestBtn ctrlEnable true;
};

[] spawn life_fnc_deathScreen;

[_unit] spawn {
    private ["_unit"];
    _unit = _this select 0;
    waitUntil {if (speed _unit isEqualTo 0) exitWith {true}; life_deathCamera camSetTarget _unit; life_deathCamera camSetRelPos [0,3.5,4.5]; life_deathCamera camCommit 0;};
};

if (!isNull _killer && {!(_killer isEqualTo _unit)} && {!(side _killer isEqualTo west)} && {alive _killer}) then
{
    if (vehicle _killer isKindOf "LandVehicle") then
    {
        if (life_HC_isActive) then
        {
            [getPlayerUID _killer,_killer getVariable ["realname",name _killer],"187V"] remoteexeccall ["HC_fnc_wantedAdd",HC_Life];
        } else {
            [getPlayerUID _killer,_killer getVariable ["realname",name _killer],"187V"] remoteexeccall ["life_fnc_wantedAdd",RSERV];
        };

        if (!local _killer) then
        {
            [2] remoteexeccall ["life_fnc_removeLicenses",_killer];
        };
    } else {
        if (life_HC_isActive) then
        {
            [getPlayerUID _killer,_killer getVariable ["realname",name _killer],"187"] remoteexeccall ["HC_fnc_wantedAdd",HC_Life];
        } else {
            [getPlayerUID _killer,_killer getVariable ["realname",name _killer],"187"] remoteexeccall ["life_fnc_wantedAdd",RSERV];
        };

        if (!local _killer) then
        {
            [3] remoteexeccall ["life_fnc_removeLicenses",_killer];
        };
    };
};

life_save_gear = [player] call life_fnc_fetchDeadGear;

if (LIFE_SETTINGS(getNumber,"drop_weapons_onDeath") isEqualTo 0) then
{
    _unit removeWeapon (primaryWeapon _unit);
    _unit removeWeapon (handgunWeapon _unit);
    _unit removeWeapon (secondaryWeapon _unit);
};

if (side _killer isEqualTo west && !(playerSide isEqualTo west)) then
{
    life_copRecieve = _killer;
    if (!life_use_atm && {CASH > 0}) then {
        [format [localize "STR_Cop_RobberDead",[CASH] call life_fnc_numberText]] remoteexeccall ["life_fnc_broadcast",RCLIENT];
        CASH = 0;
    };
};

if (!isNull _killer && {!(_killer isEqualTo _unit)}) then
{
    life_removeWanted = true;
};

[_unit] call life_fnc_dropItems;

life_action_inUse = false;
life_hunger = 100;
life_thirst = 100;
life_carryWeight = 0;
CASH = 0;
life_is_alive = false;

[] call medel_fnc_actualizaHUD;
[player,life_settings_enableSidechannel,playerSide] remoteexeccall ["TON_fnc_manageSC",RSERV];

[0] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;
if (playerSide isEqualTo civilian) then
{
    [4] call SOCK_fnc_updatePartial;
};
