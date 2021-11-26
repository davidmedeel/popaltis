
#include "..\script_macros.hpp"

waitUntil {!(isNull (findDisplay 46))};

if (life_blacklisted) exitWith {
    ["VetadoPolicia",false,true] call BIS_fnc_endMission;
    sleep 30;
};

if ((FETCH_CONST(life_coplevel)) < 1) exitWith {
    ["Notwhitelisted",false,true] call BIS_fnc_endMission;
    sleep 35;
};

player setVariable ["rank",(FETCH_CONST(life_coplevel)),true];
[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; 
waitUntil{isNull (findDisplay 38500)}; 
