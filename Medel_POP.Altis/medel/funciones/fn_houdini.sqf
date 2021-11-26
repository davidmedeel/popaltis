
_param = param[0];

if (_param isEqualTo "Init") exitWith {

if (missionNamespace getVariable ["houdini", 0]) exitWith { hint "Si no sabes no toques"; };

[25, "Houdini Activado..."] spawn ica_fnc_barrita;

sleep 25;

hint "Listo! Estás desesposado corre sin parar";

player setVariable["restrained",false,true];
player setVariable["Escorting",false,true];
player setVariable["transporting",false,true];

detach player;
};
