
#include "..\..\script_macros.hpp"

private ["_vault","_handle"];
_vault = param [0,ObjNull,[ObjNull]];

if (isNull _vault) exitWith {}; 
if (typeOf _vault != "Land_CargoBox_V1_F") exitWith {hint localize "STR_ISTR_Blast_VaultOnly"};
if (_vault getVariable ["chargeplaced",false]) exitWith {hint localize "STR_ISTR_Blast_AlreadyPlaced"};
if (_vault getVariable ["safe_open",false]) exitWith {hint localize "STR_ISTR_Blast_AlreadyOpen"};
if (west countSide playableUnits < (LIFE_SETTINGS(getNumber,"minimum_cops"))) exitWith {
     hint format [localize "STR_Civ_NotEnoughCops",(LIFE_SETTINGS(getNumber,"minimum_cops"))];
};

private _vaultHouse = [[["Altis", "Land_Research_house_V1_F"], ["Tanoa", "Land_Medevac_house_V1_F"]]] call TON_fnc_terrainSort;
private _altisArray = [16019.5,16952.9,0];
private _tanoaArray = [11074.2,11501.5,0.00137329];
private _pos = [[["Altis", _altisArray], ["Tanoa", _tanoaArray]]] call TON_fnc_terrainSort;

if ((nearestObject [_pos,_vaultHouse]) getVariable ["locked",true]) exitWith {hint localize "STR_ISTR_Blast_Exploit"};
if (!([false,"blastingcharge",1] call life_fnc_handleInv)) exitWith {}; 

_vault setVariable ["chargeplaced",true,true];
[0,"STR_ISTR_Blast_Placed",true,[]] remoteexeccall ["life_fnc_broadcast",west];
hint localize "STR_ISTR_Blast_KeepOff";

[] remoteexec ["life_fnc_demoChargeTimer",[west,player]];
[] remoteexec ["TON_fnc_handleBlastingCharge",2];
