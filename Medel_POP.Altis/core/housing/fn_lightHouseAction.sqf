
#include "..\..\script_macros.hpp"

private "_house";
_house = param [0,objNull,[objNull]];
if (isNull _house) exitWith {};
if (!(_house isKindOf "House_F")) exitWith {};

if (isNull (_house getVariable ["lightSource",objNull])) then
{
    [_house,true] remoteexeccall ["life_fnc_lightHouse",RCLIENT];
} else {
    [_house,false] remoteexeccall ["life_fnc_lightHouse",RCLIENT];
};
