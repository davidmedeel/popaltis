
/*
    por: Medel
    SIN TERMINAR
*/

_param = param [0];

if (_param isEqualTo "respuesta1Pregunta1") exitWith {
    _fallos = missionNamespace getVariable "fallos";
    _fallos = _fallos + 1;
    player setVariable ["fallos", _fallos, true];
	["pregunta2"] spawn medel_fnc_carnetTeorico;
};

if (_param isEqualTo "respuesta2Pregunta1") exitWith {
    _aciertos = missionNamespace getVariable "aciertos";
    _aciertos = _aciertos + 1;
    player setVariable ["aciertos", _aciertos, true];
	["pregunta2"] spawn medel_fnc_carnetTeorico;
};

if (_param isEqualTo "respuesta3Pregunta1") exitWith {
    _fallos = missionNamespace getVariable "fallos";
    _fallos = _fallos + 1;
    player setVariable ["fallos", _fallos, true];
	["pregunta2"] spawn medel_fnc_carnetTeorico;
};

//------------

if (_param isEqualTo "respuesta1Pregunta2") exitWith {
    _fallos = missionNamespace getVariable "fallos";
    _fallos = _fallos + 1;
    player setVariable ["fallos", _fallos, true];
	["pregunta3"] spawn medel_fnc_carnetTeorico;
};

if (_param isEqualTo "respuesta2Pregunta2") exitWith {
    _aciertos = missionNamespace getVariable "aciertos";
    _aciertos = _aciertos + 1;
    player setVariable ["aciertos", _aciertos, true];
	["pregunta3"] spawn medel_fnc_carnetTeorico;
};

if (_param isEqualTo "respuesta3Pregunta2") exitWith {
    _fallos = missionNamespace getVariable "fallos";
    _fallos = _fallos + 1;
    player setVariable ["fallos", _fallos, true];
	["pregunta3"] spawn medel_fnc_carnetTeorico;
};

//------------

if (_param isEqualTo "respuesta1Pregunta3") exitWith {
    _fallos = missionNamespace getVariable "fallos";
    _fallos = _fallos + 1;
    player setVariable ["fallos", _fallos, true];
	["calculo"] spawn medel_fnc_carnetTeorico;
};

if (_param isEqualTo "respuesta2Pregunta3") exitWith {
    _aciertos = missionNamespace getVariable "aciertos";
    _aciertos = _aciertos + 1;
    player setVariable ["aciertos", _aciertos, true];
	["calculo"] spawn medel_fnc_carnetTeorico;
};

if (_param isEqualTo "respuesta3Pregunta3") exitWith {
    _fallos = missionNamespace getVariable "fallos";
    _fallos = _fallos + 1;
    player setVariable ["fallos", _fallos, true];
	["calculo"] spawn medel_fnc_carnetTeorico;
};
