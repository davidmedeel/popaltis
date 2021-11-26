
#include "..\..\script_macros.hpp"

#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Btn9 37458
#define Btn10 37459
#define Title 37401

disableSerialization;
_curTarget = param [0,objNull,[objNull]];

if (player getVariable ["Escorting", false]) then {
    if (isNull _curTarget) exitWith {closeDialog 0;};
    if (player distance _curTarget > 5 ) exitWith {closeDialog 0;};
};

if (!dialog) then {
    createDialog "pInteraction_Menu";
};

_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
_Btn9 = _display displayCtrl Btn9;
_Btn10 = _display displayCtrl Btn10;

life_pInact_curTarget = _curTarget;

if (player getVariable ["isEscorting",false]) then {
    { _x ctrlEnable false; } forEach [_Btn1,_Btn3,_Btn4,_Btn5,_Btn6,_Btn7,_Btn8,_Btn9,_Btn10];
};

//Quitar Esposas
_Btn1 ctrlSetText "Quitar Esposas";
_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

//Mover Jugador
if (player getVariable ["isEscorting",false]) then {
    _Btn2 ctrlSetText "Dejar de Mover";
    _Btn2 buttonSetAction "[] call life_fnc_stopEscorting; closeDialog 0;";
} else {
    _Btn2 ctrlSetText "Mover Jugador";
    _Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_escortAction; closeDialog 0;";
};

//Montar en el Coche
    _Btn3 ctrlSetText localize "STR_pInAct_PutInCar";
    _Btn3 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar; closeDialog 0;";

//Civil
if (side player isEqualTo civilian) exitWith {

    //Cachear
	_Btn4 ctrlSetText "Cachear Jugador";
	_Btn4 buttonSetAction "[cursorTarget] spawn ica_fnc_cacheo; closeDialog 0;";

    //Amordazar
if (_curTarget getVariable ["amordazado",false]) then {
    _Btn5 ctrlSetText "Desamordazar";
    _Btn5 buttonSetAction "[life_pInact_curTarget] call est_fnc_mordaza; closeDialog 0;";
} else {
    _Btn5 ctrlSetText "Amordazar";
    _Btn5 buttonSetAction "[life_pInact_curTarget] call est_fnc_mordaza; closeDialog 0;";
};

	_Btn6 ctrlShow false;
	_Btn7 ctrlShow false;
    _Btn8 ctrlShow false;
	_Btn9 ctrlShow false;
    _Btn10 ctrlShow false;
};

//Poli
if (side player isEqualTo west) exitWith {

    //Cachear Jugador
    _Btn4 ctrlSetText "Cachear Jugador";
    _Btn4 buttonSetAction "[cursorTarget] spawn ica_fnc_cacheo; closeDialog 0;";

    //Comprobar Licencias
	_Btn5 ctrlSetText "Comprobar Licencias";
    _Btn5 buttonSetAction "[player] remoteexeccall [""life_fnc_licenseCheck"",life_pInact_curTarget]; closeDialog 0;";

    //Buscar Objetos Virtuales
	_Btn6 ctrlSetText "Buscar Objetos Virtuales";
    _Btn6 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_searchAction; closeDialog 0;";

    //Multar
	_Btn7 ctrlSetText "Multar Jugador";
    _Btn7 buttonSetAction "[life_pInact_curTarget] call life_fnc_ticketAction;";

    //Incautar Dinero
    _Btn8 ctrlSetText "Incautar Dinero";
    _Btn8 buttonSetAction "['Init'] spawn est_fnc_dinero;";

    //Incautar Armas
    _Btn9 ctrlSetText "Incautar Armas";
    _Btn9 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_seizePlayerAction; closeDialog 0;";

    //Enviar a Prisión
	_Btn10 ctrlSetText "Enviar a Prisión";
    _Btn10 buttonSetAction "closeDialog 0; [] call life_fnc_showArrestDialog;";
    _Btn10 ctrlShow false;

	{
    if ((player distance (getMarkerPos _x) < 100)) exitWith { _Btn10 ctrlShow true;};
    } forEach LIFE_SETTINGS(getArray,"sendtoJail_locations");
};

//EMS
if (side player isEqualTo independent) exitWith {

    _Btn1 ctrlShow false;
	_Btn4 ctrlShow false;
    _Btn5 ctrlShow false;
	_Btn6 ctrlShow false;
	_Btn7 ctrlShow false;
    _Btn8 ctrlShow false;
	_Btn9 ctrlShow false;
    _Btn10 ctrlShow false;
};
