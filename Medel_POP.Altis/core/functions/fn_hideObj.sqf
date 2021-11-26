/*
Oculta un objeto para todos los jugadores.
*/
params [
    ["_object",objNull,[objNull]]
];
if (isNull _object) exitWith {};

_object hideObject true;
