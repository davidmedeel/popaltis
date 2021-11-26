
/*
Sacar dinero público para que lo use la policía por Medel
	["consultar"] spawn medel_fnc_sacoDineroPublico;
	[20000] spawn medel_fnc_sacoDineroPublico;
*/

#include "..\..\script_macros.hpp"

_param = param [0];

if (_param isEqualTo "Init") exitWith {

    NPC_POLI_KAVALA addAction
    [
        "<t size='1.5'>Sacar Dinero Público<t\>",
        {
            ["consultar"] spawn medel_fnc_sacoDineroPublico;
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

    NPC_POLI_PYRGOS addAction
    [
        "<t size='1.5'>Sacar Dinero Público<t\>",
        {
            ["consultar"] spawn medel_fnc_sacoDineroPublico;
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

    NPC_POLI_AGIOS addAction
    [
        "<t size='1.5'>Sacar Dinero Público<t\>",
        {
            ["consultar"] spawn medel_fnc_sacoDineroPublico;
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

    NPC_POLI_SOFIA addAction
    [
        "<t size='1.5'>Sacar Dinero Público<t\>",
        {
            ["consultar"] spawn medel_fnc_sacoDineroPublico;
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

if (_param isEqualTo "consultar") exitWith {
	if (FETCH_CONST(life_coplevel) < 11) exitWith { hint "Eres un Mindundi ¿Que intentas?" };

	disableSerialization;
	createDialog "sacoDineroPublico";
	_ui = uiNameSpace getVariable "sacoDineroPublico";
	_txt = _ui displayCtrl 5053;
	_txt ctrlSetText format ["Selecciona una cantidad:"];
};

if (_param != "consultar") exitWith {
	_cantidad = parseNumber (_this select 0);
    _cantidadSacada = missionNamespace getVariable "fondosPublicosSacados";

	if ((_cantidad <= 0) OR (isNil {_cantidad})) exitWith { hint "Si no quieres sacar nada, ¿para qué abres este menú?"; };
	if (_cantidad >= 999999) exitWith { hint "No puedes sacar más de 999.999€"; };
    if (_cantidadSacada > 300000) exitWith {hint "Ya han sacado demasiados fondos públicos.";};

	closeDialog 0;

	medel_din = medel_din + _cantidad;

	_cantidadSacada = missionNamespace getVariable "fondosPublicosSacados";
    _cantidadSacada = _cantidadSacada + _cantidad;
    missionNamespace setVariable ["fondosPublicosSacados", _cantidadSacada, true];

	hint format ["Has sacado %1€ de los fondos públicos", _cantidad];

	[0,format ["La Policía [%2] ha sacado %1€ de los fondos públicos", _cantidad, name player]] remoteexec ["life_fnc_broadcast", 0];

    ["Fondos Públicos",format ["%1 - (%2) ha sacado %3 de los fondos públicos.",profileName,(getPlayerUID player),_cantidad]] remoteexeccall ["medel_fnc_customlog",2];
};
