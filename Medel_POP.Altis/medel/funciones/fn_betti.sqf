
/*
por: Medel
*/

#include "..\..\script_macros.hpp"

_param = _this select 0;

if (_param isEqualTo "Init") exitWith {

// NPC_BETTI_KAVALA addAction ["<t size='1.5'>Prensar Vehículo<t\>",{["prenso"] spawn medel_fnc_betti;},[],1.5,true,true,"","(playerside isEqualTo west)",5,false,"",""];

    NPC_BETTI_KAVALA addAction
    [
        "<t size='1.5'>Prensar Vehículo<t\>",
        {
            ["prenso"] spawn medel_fnc_betti;
        },
        [],
        1.5,
        true,
        true,
        "",
        "(playerside isEqualTo west)",
        5,
        false,
        "",
        ""
    ];

    NPC_BETTI_PYRGOS addAction
    [
        "<t size='1.5'>Prensar Vehículo<t\>",
        {
            ["prenso"] spawn medel_fnc_betti;
        },
        [],
        1.0,
        true,
        true,
        "",
        "(playerside isEqualTo west)",
        5,
        false,
        "",
        ""
    ];

    NPC_BETTI_AGIOS addAction
    [
        "<t size='1.5'>Prensar Vehículo<t\>",
        {
            ["prenso"] spawn medel_fnc_betti;
        },
        [],
        0.5,
        true,
        true,
        "",
        "(playerside isEqualTo west)",
        5,
        false,
        "",
        ""
    ];

    NPC_BETTI_SOFIA addAction
    [
        "<t size='1.5'>Prensar Vehículo<t\>",
        {
            ["prenso"] spawn medel_fnc_betti;
        },
        [],
        1.5,
        true,
        true,
        "",
        "(playerside isEqualTo west)",
        5,
        false,
        "",
        ""
    ];
};

if (_param isEqualTo "prenso") exitWith {

private ["_veh"];

disableSerialization;

_cosa = nearestObject [player, "Land_Device_assembled_F"];
_veh = (nearestObjects [_cosa, ["air","car"],20] select 0);

[15, "Prensando Vehículo..."] spawn ica_fnc_barrita;

sleep 15;

if (!alive player) exitWith {};
_pasajeros = crew _veh;

{
{player action ["Eject", vehicle player]} remoteexec ["Bis_fnc_spawn", _x];
} forEach _pasajeros;

waitUntil {count (crew _veh) isEqualTo 0};
_veh setPos [0,0,1000];
_veh setDamage 1;
};
