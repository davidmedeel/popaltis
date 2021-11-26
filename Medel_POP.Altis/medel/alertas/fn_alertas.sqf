
/*
Alertas Policiales
por: Medel
	["menu"] call medel_fnc_alertas;
*/

_param = param[0];

if (_param isEqualTo "menu") exitWith {
    disableSerialization;
	createDialog "menu_alertas";
};

if (_param isEqualTo "alerta1") exitWith {
	[10,"POLICÍA INFORMA: NIVEL DE ALERTA 1",[1,0,0,1],2,"LA POLICÍA SE ENCUENTRA EN ALERTA 1",[1,1,1,1],1.5] remoteexec ["ica_fnc_anuncio",0];
};

if (_param isEqualTo "alerta2") exitWith {
	[10,"POLICÍA INFORMA: NIVEL DE ALERTA 2",[1,0,0,1],2,"LA POLICÍA SE ENCUENTRA EN ALERTA 2",[1,1,1,1],1.5] remoteexec ["ica_fnc_anuncio",0];
};

if (_param isEqualTo "alerta3") exitWith {
	[10,"POLICÍA INFORMA: NIVEL DE ALERTA 3",[1,0,0,1],2,"LA POLICÍA SE ENCUENTRA EN ALERTA 3",[1,1,1,1],1.5] remoteexec ["ica_fnc_anuncio",0];
};

if (_param isEqualTo "alerta4") exitWith {
	[10,"POLICÍA INFORMA: NIVEL DE ALERTA 4",[1,0,0,1],2,"LA POLICÍA SE ENCUENTRA EN ALERTA 4",[1,1,1,1],1.5] remoteexec ["ica_fnc_anuncio",0];
};

if (_param isEqualTo "alerta5") exitWith {
	[10,"POLICÍA INFORMA: NIVEL DE ALERTA 5",[1,0,0,1],2,"LA POLICÍA SE ENCUENTRA EN ALERTA 5",[1,1,1,1],1.5] remoteexec ["ica_fnc_anuncio",0];
};

if (_param isEqualTo "alerta6") exitWith {
	[10,"POLICÍA INFORMA: NIVEL DE ALERTA 6",[1,0,0,1],2,"LA POLICÍA SE ENCUENTRA EN ALERTA 6",[1,1,1,1],1.5] remoteexec ["ica_fnc_anuncio",0];
};
