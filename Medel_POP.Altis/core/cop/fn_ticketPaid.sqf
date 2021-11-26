
#include "..\..\script_macros.hpp"

params [
    ["_value",5,[0]],
    ["_unit",objNull,[objNull]],
    ["_cop",objNull,[objNull]]
];
if (isNull _unit || {!(_unit isEqualTo life_ticket_unit)}) exitWith {};
if (isNull _cop || {!(_cop isEqualTo player)}) exitWith {};

BANK = BANK + round (_value * 0.3);

[1] call SOCK_fnc_updatePartial;

["MultaPagada"] spawn mav_ttm_fnc_addExp;
