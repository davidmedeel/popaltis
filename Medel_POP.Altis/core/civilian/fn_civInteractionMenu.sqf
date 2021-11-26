
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
#define Title 37401

private ["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_Btn8","_Btn9"];

disableSerialization;
_curTarget = param [0,objNull,[objNull]];

if (player getVariable ["Escorting", false]) then {
    if (isNull _curTarget) exitWith {closeDialog 0;}; 
    if (!isPlayer _curTarget && side _curTarget isEqualTo civilian) exitWith {closeDialog 0;}; 
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

life_pInact_curTarget = _curTarget;

if (player getVariable ["isEscorting",false]) then {
    { _x ctrlShow false; } forEach [_Btn1,_Btn2,_Btn3,_Btn4,_Btn5];
};

//Quitar esposas
_Btn1 ctrlSetText "Quitar Esposas";
_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

//Escoltar
if (player getVariable ["isEscorting",false]) then {
    _Btn2 ctrlSetText "Dejar de Mover";
    _Btn2 buttonSetAction "[] call life_fnc_stopEscorting; closeDialog 0;";
} else {
    _Btn2 ctrlSetText "Mover Jugador";
    _Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_escortAction; closeDialog 0;";
};

//Montar en el Vehículo
_Btn3 ctrlSetText "Subir en el Vehiculo";
_Btn3 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar; closeDialog 0;";

//Cachear Jugador
_Btn4 ctrlSetText "Cachear Jugador";
_Btn4 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_cacheo; closeDialog 0;";

//Confiscar Objetos Ilegales Virtuales
_Btn5 ctrlSetText "Confiscar Objetos Ilegales Virtuales";
_Btn5 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_searchAction; closeDialog 0;";
