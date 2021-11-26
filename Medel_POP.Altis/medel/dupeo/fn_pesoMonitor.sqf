
private ["_pesoActual"];

_currentWeight = load player;

while {!IsNull (FindDisplay 602)} do {

_pesoNuevo = load player;
if (_pesoNuevo == _currentWeight) then {call medel_fnc_display;};
sleep 0.1;
_currentWeight = load player;

};
