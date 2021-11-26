
/*
por: Medel
Se invoca con
["texto","string",duracion,.tamaño] call medel_fnc_hintSilent;
["<t size = ""1.8"" color=""#DE2828"" align='center'>AVISO <br/>
<t size = ""1.2"" color=""#FB8C00"" align='left'>texto</t></t>","string",duracion,.tamaño] remoteexec ["medel_fnc_hintSilent",a quien];
[format ["%1",_variable],"string",duracion,.tamaño] call medel_fnc_hintSilent;
[localize "STRINGTABLE","string",duracion,.tamaño] call medel_fnc_hintSilent;
*/

params [
    ["_text","",[""]],
    ["_type","default",["",[],{}]],
    ["_speed",10,[10]],
    ["_fix",0]
];

if (isDedicated || !hasInterface) exitWith {};
if(isNil "hint_abierto") then {
    hint_abierto = [];
};

disableSerialization;
_display = findDisplay 46;

_alpha = 0.75;
_colorName = "";
_color = [];
if(typeName _type == "ARRAY" || typeName _type == "OBJECT") then {
    _color = _type;
} else {
    switch (_type) do {
        case "error": {
            _colorName = "rojo";
        };
        case "aviso": {
            _colorName = "ambar";
        };
        case "completado": {
            _colorName = "verde";
        };
        case "info": {
            _colorName = "azul";
        };
        default {
            _colorName = _type;
        };
    };
    // https://material.io/guidelines/style/color.html
    switch (_colorName) do {
        case "rojo": {
            _color = [0.957,0.263,0.212,_alpha];
        };
        case "morado": {
            _color = [0.914,0.118,0.388,_alpha];
        };
        case "purpura": {
            _color = [0.612,0.153,0.69,_alpha];
        };
        case "purpura-oscuro": {
            _color = [0.404,0.227,0.718,_alpha];
        };
        case "indigo": {
            _color = [0.247,0.318,0.71,_alpha];
        };
        case "azul": {
            _color = [0.129,0.588,0.953,_alpha];
        };
        case "azul-claro": {
            _color = [0.012,0.663,0.957,_alpha];
        };
        case "cyan": {
            _color = [0,0.737,0.831,_alpha];
        };
        case "verde-azulado": {
            _color = [0,0.588,0.533,_alpha];
        };
        case "verde": {
            _color = [0.298,0.686,0.314,_alpha];
        };
        case "verde-claro": {
            _color = [0.545,0.765,0.29,_alpha];
        };
        case "lima": {
            _color = [0.804,0.863,0.224,_alpha];
        };
        case "amarillo": {
            _color = [1,0.922,0.231,_alpha];
        };
        case "ambar": {
            _color = [1,0.757,0.027,_alpha];
        };
        case "naranja": {
            _color = [1,0.596,0,_alpha];
        };
        case "naranja-oscuro": {
            _color = [1,0.341,0.133,_alpha];
        };
        case "marron": {
            _color = [0.475,0.333,0.282,_alpha];
        };
        case "gris": {
            _color = [0.62,0.62,0.62,_alpha];
        };
        case "gris-azulado": {
            _color = [0.376,0.49,0.545,_alpha];
        };
        case "blanco": {
            _color = [1,1,1,_alpha];
        };
        default {
            _color = [(profileNamespace getvariable ['GUI_BCG_RGB_R',0.3843]),(profileNamespace getvariable ['GUI_BCG_RGB_G',0.7019]),(profileNamespace getvariable ['GUI_BCG_RGB_B',0.8862]),_alpha];
        };
    };
};

if (_text isEqualType "") then {
    _text = parseText _text;
};

_margin = 0.01;
_width = 300 * pixelW;
_borderWidth = 10 * pixelW;
_textWidth = _width - _borderWidth;
_height = 0.01;
_posX = 0;
_posY = 0;

_displaySide = "right";
if(_displaySide == "left") then {
    _posX = _margin + safeZoneX;
} else {
    _posX = safeZoneW + safeZoneX - _margin - _width;
};

private _BorderCtrl = _display ctrlCreate ["RscText", -1];
_BorderCtrl ctrlSetPosition [_posX, _posY, _borderWidth, _height];
_BorderCtrl ctrlSetBackgroundColor _color;
_BorderCtrl ctrlSetFade 1;
_BorderCtrl ctrlCommit 0;
_BorderCtrl ctrlSetFade 0;
_BorderCtrl ctrlCommit 0.4;

private _TextCtrl = _display ctrlCreate ["RscStructuredText", -1];
_TextCtrl ctrlSetStructuredText _text;
_TextCtrl ctrlSetPosition [(_posX + _borderWidth), _posY, _textWidth, _height];
_adjustedHeight = ctrlTextHeight _TextCtrl;
_adjustedHeight = _adjustedHeight - _fix;
_TextCtrl ctrlSetPosition [(_posX + _borderWidth), _posY, _textWidth, _adjustedHeight];
_TextCtrl ctrlCommit 0;
_BorderCtrl ctrlSetPosition [_posX, _posY, _borderWidth, _adjustedHeight];
_BorderCtrl ctrlCommit 0;
_TextCtrl ctrlSetBackgroundColor [0.129,0.129,0.129,_alpha];
_TextCtrl ctrlSetFade 1;
_TextCtrl ctrlCommit 0;
_TextCtrl ctrlSetFade 0;
_TextCtrl ctrlCommit 0.4;

[_TextCtrl,_BorderCtrl,_speed] spawn {
    disableSerialization;
    uiSleep (_this select 2);
    private _TextCtrl = _this select 0;
    private _BorderCtrl = _this select 1;
    _TextCtrl ctrlSetFade 1;
    _TextCtrl ctrlCommit 0.3;
    _BorderCtrl ctrlSetFade 1;
    _BorderCtrl ctrlCommit 0.3;
    uiSleep 0.3;
    ctrlDelete _BorderCtrl;
    ctrlDelete _TextCtrl;
};
hint_abierto = ([[_BorderCtrl,_TextCtrl]] + hint_abierto) select {!isNull (_x select 0) && !isNull (_x select 1)};
_offsetY = 0;
if (count hint_abierto > 0) then {
    private _hintActivo = 0;
    {
        private _ctrlBorder = _x select 0;
        private _ctrlText = _x select 1;
        if (!isNull _ctrlBorder && !isNull _ctrlText) then {
            _ctrlBorder ctrlSetPosition [_posX, (_posY + _offsetY)];
            _ctrlText ctrlSetPosition [(_posX + _borderWidth), (_posY + _offsetY)];
            _ctrlBorder ctrlCommit 0.25;
            _ctrlText ctrlCommit 0.25;
            _offsetY = _offsetY + _margin + ((ctrlPosition _ctrlText) select 3);
            if (_hintActivo > 4) then {
                _ctrlText ctrlSetFade 1;
                _ctrlText ctrlCommit 0.2;
                _ctrlBorder ctrlSetFade 1;
                _ctrlBorder ctrlCommit 0.2;
            };
        };
        _hintActivo = _hintActivo + 1;
    } forEach hint_abierto;
};
