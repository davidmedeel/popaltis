
#include "..\..\script_macros.hpp"
/*
    Chaleco Bomba
*/
private["_boom", "_list"];
_player = player;
if(vest player != "V_HarnessOGL_gry") exitWith {};
if(life_isSuicide) exitWith {};
life_isSuiciding = true;

[player,"explosion", 650, 1] remoteexec ["life_fnc_say3D", ([0, -2] select isDedicated), false];
sleep 8;

if(vest player != "V_HarnessOGL_gry") exitWith {life_isSuiciding = false;};
if((player getVariable "restrained")) exitWith {life_isSuiciding = false;};
if((player getVariable "zipted")) exitWith {life_isSuiciding = false;};

//Detonacion    
removeVest player;
removeAllWeapons player:
removeAllAssignedItems player;
_boom = "Bo_Mk82" createVehicle [0,0,9999];
_boom setPos (getPos player);
_boom setVelocity [100,0,0];

if(alive player) then {player setDamage 1;};

life_isSuicide = false;

player setVariable["zipted", false, true];
player setVariable["restrained", false, true];
[] call SOCK_fnc_updateRequest;
