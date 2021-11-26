
#include "\medel_server\script_macros.hpp"

params [
    ["_obj",objNull,[objNull]],
    ["_client",objNull,[objNull]],
    ["_cash",false,[true]]
];

if (isNull _obj || {isNull _client}) exitWith {systemChat "El objeto o el jugador es nulo";};

if (!(_obj getVariable ["inUse",false])) exitWith {
    _client = owner _client;
    _obj setVariable ["inUse",true,true];
    if (_cash) then {
        _obj remoteexeccall ["life_fnc_pickupMoney",_client];
    } else {
        _obj remoteexeccall ["life_fnc_pickupItem",_client];
    };
};
