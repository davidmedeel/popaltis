
#include "..\..\script_macros.hpp"

life_action_inUse = false;
private ["_license","_guns","_gun"];
params [
    ["_civ",objNull,[objNull]],
    ["_invs",[],[[]]],
    ["_robber",false,[false]]
];

if (isNull _civ) exitWith {};

_illegal = 0;
_inv = "";
if (count _invs > 0) then {
    {
        _displayName = M_CONFIG(getText,"VirtualItems",(_x select 0),"displayName");
        _inv = _inv + format ["%1 %2<br/>",(_x select 1),(localize _displayName)];
        _price = M_CONFIG(getNumber,"VirtualItems",(_x select 0),"sellPrice");
        if (!isNull (missionConfigFile >> "VirtualItems" >> (_x select 0) >> "processedItem")) then
        {
            _processed = M_CONFIG(getText,"VirtualItems",(_x select 0),"processedItem");
            _price = M_CONFIG(getNumber,"VirtualItems",_processed,"sellPrice");
        };

        if (!(_price isEqualTo -1)) then {
            _illegal = _illegal + ((_x select 1) * _price);
        };
    } forEach _invs;

} else {
    _inv = localize "STR_Cop_NoIllegal";
};

if (!alive _civ || player distance _civ > 5) exitWith {hint format [localize "STR_Cop_CouldntSearch",_civ getVariable ["realname",name _civ]]};

hint parseText format ["<t color='#FF0000'><t size='2'>%1</t></t><br/><t color='#FFD700'><t size='1.5'><br/>" +(localize "STR_Cop_IllegalItems")+ "</t></t><br/>%2<br/><br/><br/><br/><t color='#FF0000'>%3</t>"
,(_civ getVariable ["realname",name _civ]),_inv,if (_robber) then {""} else {""}];

if (_robber) then {
    [0,"STR_Cop_Robber",true,[(_civ getVariable ["realname",name _civ])]] remoteexeccall ["life_fnc_broadcast",RCLIENT];
};
