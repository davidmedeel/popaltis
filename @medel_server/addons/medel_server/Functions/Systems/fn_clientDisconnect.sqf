
#include "\medel_server\script_macros.hpp"

params [
    ["_unit",objNull,[objNull]],
    "",
    ["_uid","",[""]]
];
if (isNull _unit) exitWith {};

if (life_save_civilian_position && {side _unit isEqualTo civilian}) then {
    if (isNil "HC_UID" || {!(_uid isEqualTo HC_UID)}) then {
        private _position = getPosATL _unit;
        if ((getMarkerPos "respawn_civilian" distance _position) > 300) then {
            private _alive = alive _unit;
            if (life_HC_isActive) then {[_uid,_side,_alive,4,_position] remoteExec ["HC_fnc_updatePartial",HC_Life]} else {[_uid,_side,_alive,4,_position] spawn DB_fnc_updatePartial};
        };
    };
};

if !(alive _unit) then {
    [4,format["<br/><t color='#084aff' size='2' shadow='1'shadowColor='#b7bfd6'>~SERVIDOR~<br/></t><t color='#faff00' size='1.5' shadow='1'shadowColor='#f61010'><br/>%1 se ha desconectado muerto.<br/>Reportalo a un administrador.</t>", _uid]] remoteexec ["life_fnc_broadcast", 0];
    diag_log format["%1 se ha desconectado Muerto",_uid];
} else {
    {
        _x params [
            ["_corpseUID","",[""]],
            ["_corpse",objNull,[objNull]]
        ];
        if (_corpseUID isEqualTo _uid) exitWith {
            if (isNull _corpse) exitWith {server_corpses deleteAt _forEachIndex};
            [_corpse] remoteexeccall ["life_fnc_corpse",0];
            [4,format["<br/><t color='#084aff' size='2' shadow='1'shadowColor='#b7bfd6'>~SERVIDOR~<br/></t><t color='#faff00' size='1.5' shadow='1'shadowColor='#f61010'><br/>%1 se ha desconectado muerto.<br/>Reportalo a un administrador.</t>", _corpseUID]] remoteexec ["life_fnc_broadcast", 0];
            diag_log format["%1 se ha desconectado muerto",_corpseUID];
            server_corpses deleteAt _forEachIndex;
        };
    } forEach server_corpses;
};

private _containers = nearestObjects[_unit,["WeaponHolderSimulated"],5];
{deleteVehicle _x} forEach _containers;
deleteVehicle _unit;

[_uid] spawn TON_fnc_houseCleanup;
