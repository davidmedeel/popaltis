
#include "..\..\script_macros.hpp"

private ["_handle"];

life_action_inUse = false;
life_use_atm = true;
life_hunger = 100;
life_thirst = 100;
life_carryWeight = 0;
CASH = 0; 
life_respawned = false;
player playMove "AmovPercMstpSnonWnonDnon";

life_corpse setVariable ["Revive",nil,true];
life_corpse setVariable ["name",nil,true];
life_corpse setVariable ["Reviving",nil,true];
player setVariable ["Revive",nil,true];
player setVariable ["name",nil,true];
player setVariable ["Reviving",nil,true];

switch (playerSide) do
{
    case west: {
        _handle = [] spawn life_fnc_copLoadout;
    };
    case civilian: {
        _handle = [] spawn life_fnc_civLoadout;
    };
    case independent: {
        _handle = [] spawn life_fnc_medicLoadout;
    };
    waitUntil {scriptDone _handle};
};

if (!isNull life_corpse) then {
    private "_containers";
    life_corpse setVariable ["Revive",true,true];
    _containers = nearestObjects[life_corpse,["WeaponHolderSimulated"],5];
    {deleteVehicle _x;} forEach _containers; 
    deleteVehicle life_corpse;
};

life_deathCamera cameraEffect ["TERMINATE","BACK"];
camDestroy life_deathCamera;

if (life_is_arrested) exitWith {
    hint localize "STR_Jail_Suicide";
    life_is_arrested = false;
    [player,true] spawn life_fnc_jail;
    [] call SOCK_fnc_updateRequest;
};

if (!isNil "life_copRecieve") then {

    if (life_HC_isActive) then {
        [getPlayerUID player,player,life_copRecieve,true] remoteexeccall ["HC_fnc_wantedBounty",HC_Life];
    } else {
        [getPlayerUID player,player,life_copRecieve,true] remoteexeccall ["life_fnc_wantedBounty",RSERV];
    };

    life_copRecieve = nil;
};

if (life_removeWanted) then {

    if (life_HC_isActive) then {
        [getPlayerUID player] remoteexeccall ["HC_fnc_wantedRemove",HC_Life];
    } else {
        [getPlayerUID player] remoteexeccall ["life_fnc_wantedRemove",RSERV];
    };

};

[] call SOCK_fnc_updateRequest;
[] call medel_fnc_actualizaHUD;
