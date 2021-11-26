
#include "..\..\script_macros.hpp"

_ui = uiNamespace getVariable "HUDMedel";
_hambre = _ui displayCtrl 2200;
_hambre_icono = _ui displayCtrl 3200;
_sed = _ui displayCtrl 2201;
_sed_icono = _ui displayCtrl 3201;
_vida = _ui displayCtrl 2202;
_vida_icono = _ui displayCtrl 3202;
_tapones = _ui displayCtrl 3007;
_cinturon = _ui displayCtrl 4203;
_nombre = _ui displayCtrl 6000;
_exp = _ui displayCtrl 6005;
_txtExp = _ui displayCtrl 6010;
_txt2 = _ui displayCtrl 6014;
_dinero = _ui displayCtrl 5112;

_exp ctrlSetTextColor [1,0,0.75,1];
_txtExp ctrlSetTextColor [1, 0.7, 0, 1];
_txt2 ctrlSetTextColor [0.9, 0.9, 0.9, 0.8];

disableSerialization;

if(isNull LIFEdisplay) then {[] call medel_fnc_initHUD;};

private _nivelActualConfig = missionConfigFile >> "Maverick_TTM" >> "Levels" >> format["Level_%1", life_currentExpLevel];
private _proxNivelConfig = missionConfigFile >> "Maverick_TTM" >> "Levels" >> format["Level_%1", life_currentExpLevel + 1];
private _nivelActualFondoEXP = getNumber (_nivelActualConfig >> "expRequired");
private _nivelActualTopEXP = getNumber (_proxNivelConfig >> "expRequired");
private _currentLevelRelativeExp = (life_currentExp - _nivelActualFondoEXP);
private _progresoNivel = if (_currentLevelRelativeExp != 0) then {((life_currentExp - _nivelActualFondoEXP) / (_nivelActualTopEXP - _nivelActualFondoEXP))} else {0};

_exp progressSetPosition _progresoNivel;

_txtExp ctrlSetText format ["   Nivel %1", life_currentExpLevel];
_txt2 ctrlSetText format ["Experiencia: %1/%2 | SP: %3", life_currentExp - _nivelActualFondoEXP, _nivelActualTopEXP - _nivelActualFondoEXP, life_currentPerkPoints];

_dinero ctrlSetStructuredText parseText format ["<t size='0.99' font='PuristaMedium' color='#00fa3e' align='right'>%1</t>", medel_din];

_nombre ctrlSetStructuredText parsetext format ["<t size='0.99' font='PuristaMedium' color='#0040ff' align='right'>%1</t>", name player];

[] spawn {
	_ui = uiNamespace getVariable "HUDMedel";
	_polisOn = _ui displayCtrl 6006;
	_medicosOn = _ui displayCtrl 6007;
    _civilesOn = _ui displayCtrl 6008;
	while {true} do {
		_polisOn ctrlSetText format["%1",(west countSide playableUnits)];
		_medicosOn ctrlSetText format["%1",(independent countSide playableUnits)];
		_civilesOn ctrlSetText format["%1",(civilian countSide playableUnits)];
		sleep 1;
	};
};

if(!isNil "life_cinturon") then {
    if ( vehicle player != player ) then {
        if(life_cinturon) then {
            _cinturon ctrlSetText "medel\HUD\iconos\cinturonPuesto.paa";
        } else {
            _cinturon ctrlSetText "medel\HUD\iconos\cinturonQuitado.paa";
        };
    } else {
        _cinturon ctrlSetText "";
    };
};

if(!isNil "life_tapones") then
{
	switch (life_tapones) do {
		case 0: {_tapones ctrlSetText "medel\HUD\iconos\taponesBlanco.paa";};
		case 1: {_tapones ctrlSetText "medel\HUD\iconos\taponesRosa.paa";};
		case 2: {_tapones ctrlSetText "medel\HUD\iconos\taponesMorado.paa";};
		case 3: {_tapones ctrlSetText "medel\HUD\iconos\taponesRojo.paa";};
	};
};

if(!isNil "life_thirst") then
{
	if (life_thirst <= 100) then
	{
		_sed_icono ctrlSetText "medel\HUD\iconos\sed0.paa";
	};

	if (life_thirst <= 90) then
	{
		_sed_icono ctrlSetText "medel\HUD\iconos\sed1.paa";
	};

	if (life_thirst <= 80) then
	{
		_sed_icono ctrlSetText "medel\HUD\iconos\sed2.paa";
	};

	if (life_thirst <= 70) then
	{
		_sed_icono ctrlSetText "medel\HUD\iconos\sed3.paa";
	};

	if (life_thirst <= 60) then
	{
		_sed_icono ctrlSetText "medel\HUD\iconos\sed4.paa";
	};

	if (life_thirst <= 50) then
	{
		_sed_icono ctrlSetText "medel\HUD\iconos\sed5.paa";
	};

	if (life_thirst <= 40) then
	{
		_sed_icono ctrlSetText "medel\HUD\iconos\sed6.paa";
	};

	if (life_thirst <= 30) then
	{
		_sed_icono ctrlSetText "medel\HUD\iconos\sed7.paa";
	};

	if (life_thirst <= 20) then
	{
		_sed_icono ctrlSetText "medel\HUD\iconos\sed8.paa";
	};

	if (life_thirst <= 10) then
	{
		_sed_icono ctrlSetText "medel\HUD\iconos\sed9.paa";
	};

	if (life_thirst <= 0) then
	{
		_sed_icono ctrlSetText "medel\HUD\iconos\sed10.paa";
	};
};

if (damage player >= 0) then
{
	_vida_icono ctrlSetText "medel\HUD\iconos\vida0.paa";
};

if (damage player >= 0.01) then
{
	_vida_icono ctrlSetText "medel\HUD\iconos\vida1.paa";
};

if (damage player >= 0.02) then
{
	_vida_icono ctrlSetText "medel\HUD\iconos\vida2.paa";
};

if (damage player >= 0.03) then
{
	_vida_icono ctrlSetText "medel\HUD\iconos\vida3.paa";
};

if (damage player >= 0.07) then
{
	_vida_icono ctrlSetText "medel\HUD\iconos\vida4.paa";
};

if (damage player >= 0.13) then
{
	_vida_icono ctrlSetText "medel\HUD\iconos\vida5.paa";
};

if (damage player >= 0.2) then
{
	_vida_icono ctrlSetText "medel\HUD\iconos\vida6.paa";
};

if (damage player >= 0.3) then
{
	_vida_icono ctrlSetText "medel\HUD\iconos\vida7.paa";
};

if (damage player >= 0.4) then
{
	_vida_icono ctrlSetText "medel\HUD\iconos\vida8.paa";
};

if (damage player >= 0.7) then
{
	_vida_icono ctrlSetText "medel\HUD\iconos\vida9.paa";
};

if (damage player >= 1) then
{
	_vida_icono ctrlSetText "medel\HUD\iconos\vida10.paa";
};

if(!isNil "life_hunger") then
{
	if (life_hunger <= 100) then
	{
		_hambre_icono ctrlSetText "medel\HUD\iconos\comida0.paa";
	};

	if (life_hunger <= 90) then
	{
		_hambre_icono ctrlSetText "medel\HUD\iconos\comida1.paa";
	};

	if (life_hunger <= 80) then
	{
		_hambre_icono ctrlSetText "medel\HUD\iconos\comida2.paa";
	};

	if (life_hunger <= 70) then
	{
		_hambre_icono ctrlSetText "medel\HUD\iconos\comida3.paa";
	};

	if (life_hunger <= 60) then
	{
		_hambre_icono ctrlSetText "medel\HUD\iconos\comida4.paa";
	};

	if (life_hunger <= 50) then
	{
		_hambre_icono ctrlSetText "medel\HUD\iconos\comida5.paa";
	};

	if (life_hunger <= 40) then
	{
		_hambre_icono ctrlSetText "medel\HUD\iconos\comida6.paa";
	};

	if (life_hunger <= 30) then
	{
		_hambre_icono ctrlSetText "medel\HUD\iconos\comida7.paa";
	};

	if (life_hunger <= 20) then
	{
		_hambre_icono ctrlSetText "medel\HUD\iconos\comida8.paa";
	};

	if (life_hunger <= 10) then
	{
		_hambre_icono ctrlSetText "medel\HUD\iconos\comida9.paa";
	};

	if (life_hunger <= 0) then
	{
		_hambre_icono ctrlSetText "medel\HUD\iconos\comida1.paa";
	};
};
