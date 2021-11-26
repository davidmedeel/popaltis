
params [
    ["_victim",objNull,[objNull]],
    ["_killer",objNull,[objNull]]
];

if (isServer) then {
    private ["_killerWep","_killerVeh","_distance","_message"];
    if (isNull _victim || isNull _killer) exitWith {};

    _killerWep = currentWeapon _killer;
    _killerVeh = vehicle _killer;
    _distance = _killer distance _victim;
    _distance = floor(_distance);

    _message = "";
    if (_victim == _killer) then {
        _message = format ["%1 Se ha suicidado", (name _victim)];
    };
    if (_killerWep != "") then {
        _message = format ["%1 ha ejecutado a %2 con %3 desde %4 metros", (name _killer), (name _victim), (getText(configFile >> "cfgWeapons" >> _killerWep >> "displayName")), _distance];
        //systemChat format ["%1 ha ejecutado a %2", (name _killer), (name _victim)];
    };
    if (_killerVeh isKindOf "Car" && _killerWep isEqualTo "") then {
        _message = format ["%1 ha ejecutado a %2 con %3", (name _killer), (name _victim), (getText(configFile >> "CfgVehicles" >> (typeOf _killerVeh) >> "displayName"))];
        //systemChat format ["%1 ha ejecutado a %2", (name _killer), (name _victim)];
    };
    if (_killerVeh isKindOf "Air" && _killerWep isEqualTo "") then {
        _message = format ["%1 ha ejecutado a %2 con %3", (name _killer), (name _victim), (getText(configFile >> "CfgVehicles" >> (typeOf _killerVeh) >> "displayName"))];
        //systemChat format ["%1 ha ejecutado a %2", (name _killer), (name _victim)];
    };
    if (_message isEqualTo "") then {
        _message = format ["%1 ha ejecutado a %2", (name _killer), (name _victim)];
        //systemChat format ["%1 ha ejecutado a %2", (name _killer), (name _victim)];
    };

    diag_log format ["Log de Muerte: %1",_message];
};
