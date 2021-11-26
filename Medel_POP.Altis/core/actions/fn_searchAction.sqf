
params [
    ["_unit",objNull,[objNull]]
];

if (isNull _unit) exitWith {};
hint "Buscando Objetos Virtuales...";
sleep 2;
if (player distance _unit > 5 || !alive player || !alive _unit) exitWith {hint "No se han podido confiscar los objetos virtuales"};
[player] remoteexec ["life_fnc_searchClient",_unit];
life_action_inUse = true;
