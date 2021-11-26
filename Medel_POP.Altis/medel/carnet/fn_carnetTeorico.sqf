
/*
	por: Medel
	SIN TERMINAR
*/

_param = param[0];

if (_param isEqualTo "menu") exitWith {
	createDialog "teorico";
	disableSerialization;

	_ui = uiNameSpace getVariable "teorico";
	_texto = _ui displayCtrl 2501;
	_b1 = _ui displayCtrl 2502;
	_b2 = _ui displayCtrl 2503;
	_b3 = _ui displayCtrl 2504;

	_texto ctrlSetText "¿Estás seguro que quieres realizar el test teórico?";

	_b1 ctrlShow false;
	_b3 ctrlShow false;
	_b2 ctrlSetText "Sí";
	_boton buttonSetAction "['pregunta1'] spawn medel_fnc_carnetTeorico;";
};

if (_param isEqualTo "pregunta1") exitWith {
	_ui = uiNameSpace getVariable "teorico";
	_texto = _ui displayCtrl 2501;
	_b1 = _ui displayCtrl 2502;
	_b2 = _ui displayCtrl 2503;
	_b3 = _ui displayCtrl 2504;
	_texto ctrlSetText "¿Cual es la velocidad permitida en ciudad?</br>- 30 km/h</br>- 50 km/h</br>- 100 km/h</br>- 120 km/h</br>";
	_b1 ctrlShow true;
	_b2 ctrlShow true;
	_b3 ctrlShow true;
	_b1 ctrlSetText "30 km/h";
	_b2 ctrlSetText "50 km/h";
	_b3 ctrlSetText "100 km/h";
	_b1 buttonSetAction "['respuesta1Pregunta1'] spawn medel_fnc_respuestasTeorico;";
	_b2 buttonSetAction "['respuesta2Pregunta1'] spawn medel_fnc_respuestasTeorico;";
	_b3 buttonSetAction "['respuesta3Pregunta1'] spawn medel_fnc_respuestasTeorico;";
};

if (_param isEqualTo "pregunta2") exitWith {
	_ui = uiNameSpace getVariable "teorico";
	_texto = _ui displayCtrl 2501;
	_b1 = _ui displayCtrl 2502;
	_b2 = _ui displayCtrl 2503;
	_b3 = _ui displayCtrl 2504;
	_texto ctrlSetText "¿Cual es la velocidadd permitida en ciudad?</br>- 30 km/h</br>- 50 km/h</br>- 100 km/h</br>- 120 km/h</br>";
	_b1 ctrlShow true;
	_b2 ctrlShow true;
	_b3 ctrlShow true;
	_b1 ctrlSetText "30 km/h";
	_b2 ctrlSetText "50 km/h";
	_b3 ctrlSetText "100 km/h";
	_b1 buttonSetAction "['respuesta1Pregunta1'] spawn medel_fnc_respuestasTeorico;";
	_b2 buttonSetAction "['respuesta2Pregunta1'] spawn medel_fnc_respuestasTeorico;";
	_b3 buttonSetAction "['respuesta3Pregunta1'] spawn medel_fnc_respuestasTeorico;";
};

if (_param isEqualTo "pregunta3") exitWith {
	_ui = uiNameSpace getVariable "teorico";
	_texto = _ui displayCtrl 2501;
	_b1 = _ui displayCtrl 2502;
	_b2 = _ui displayCtrl 2503;
	_b3 = _ui displayCtrl 2504;
	_texto ctrlSetText "¿Cual es la velocidada permitida en ciudad?</br>- 30 km/h</br>- 50 km/h</br>- 100 km/h</br>- 120 km/h</br>";
	_b1 ctrlShow true;
	_b2 ctrlShow true;
	_b3 ctrlShow true;
	_b1 ctrlSetText "30 km/h";
	_b2 ctrlSetText "50 km/h";
	_b3 ctrlSetText "100 km/h";
	_b1 buttonSetAction "['respuesta1Pregunta2'] spawn medel_fnc_respuestasTeorico;";
	_b2 buttonSetAction "['respuesta2Pregunta2'] spawn medel_fnc_respuestasTeorico;";
	_b3 buttonSetAction "['respuesta3Pregunta2'] spawn medel_fnc_respuestasTeorico;";
};

if (_param isEqualTo "calculo") exitWith {

	_aciertos = player getVariable "aciertos";

	_fallos = player getVariable "fallos";

	if (_aciertos > 5) exitWith { ["aprobado"] spawn medel_fnc_carnetTeorico; };
	if (_fallos > 5) exitWith { ["suspendido"] spawn medel_fnc_carnetTeorico; };
};

if (_param isEqualTo "aprobado") exitWith {

	_aciertos = player getVariable "aciertos";

	_fallos = player getVariable "fallos";

	_ui = uiNameSpace getVariable "teorico";
	_texto = _ui displayCtrl 2501;
	_b1 = _ui displayCtrl 2502;
	_b2 = _ui displayCtrl 2503;
	_b3 = _ui displayCtrl 2504;
	_b1 ctrlShow false;
	_b2 ctrlShow true;
	_b3 ctrlShow false;
	_texto ctrlSetText format ["Has superado correctamente la prueba.</br>Ya tienes el Teórico aprobado.</br>Aciertos: %1</br>Fallos: %2", _aciertos, _fallos];
	_b2 ctrlSetText "Cerrar";
	_b2 buttonSetAction "closeDialog 0;"
};

if (_param isEqualTo "suspendido") exitWith {
	_aciertos = player getVariable "aciertos";

	_fallos = player getVariable "fallos";

	_ui = uiNameSpace getVariable "teorico";
	_texto = _ui displayCtrl 2501;
	_b1 = _ui displayCtrl 2502;
	_b2 = _ui displayCtrl 2503;
	_b3 = _ui displayCtrl 2504;
	_b1 ctrlShow false;
	_b2 ctrlShow true;
	_b3 ctrlShow false;
	_texto ctrlSetText format ["No has superado correctamente la prueba.</br>Aciertos: %1</br>Fallos: %2", _aciertos, _fallos];
	_b2 ctrlSetText "Aceptar";
	_b2 buttonSetAction "closeDialog 0;"
};
