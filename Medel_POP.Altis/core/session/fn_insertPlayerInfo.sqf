
#include "..\..\script_macros.hpp"

if (life_session_completed) exitWith {};

cutText[localize "STR_Session_QueryFail","BLACK FADED"];
0 cutFadeOut 9999999;

private ["_bank"];

switch (playerSide) do
{
    case west: {
        _bank = LIFE_SETTINGS(getNumber,"bank_cop");
    };
    case civilian: {
        _bank = LIFE_SETTINGS(getNumber,"bank_civ");
    };
    case independent: {
        _bank = LIFE_SETTINGS(getNumber,"bank_med");
    };
};

if (life_HC_isActive) then
{
    [getPlayerUID player,profileName,CASH,_bank,player] remoteexeccall ["HC_fnc_insertRequest",HC_Life];
} else {
    [getPlayerUID player,profileName,CASH,_bank,player] remoteexeccall ["DB_fnc_insertRequest",RSERV];
};
