
#include "..\..\script_macros.hpp"

disableSerialization;

if !(playerSide isEqualTo west) exitWith {["decorado", "ALERTA", "No eres Policía. ¿Qué intentas?"] spawn medel_fnc_hint;};

createDialog "life_wanted_menu";

private _display = findDisplay 2400;
private _list = _display displayCtrl 2401;
private _units = [];

lbClear _list;
lbClear _players;

private _list2 = CONTROL(2400,2407);
lbClear _list2; 

private _crimes = LIFE_SETTINGS(getArray,"crimes");
{
  if (isLocalized (_x select 0)) then
  {
    _list2 lbAdd format ["%1 - %2€ (%3)",localize (_x select 0),(_x select 1),(_x select 2)];
  } else {
    _list2 lbAdd format ["%1 - %2€ (%3)",(_x select 0),(_x select 1),(_x select 2)];
  };
    _list2 lbSetData [(lbSize _list2)-1,(_x select 2)];
} forEach _crimes;

if (FETCH_CONST(life_coplevel) < 1 && {FETCH_CONST(life_adminlevel) isEqualTo 0}) then
{
    ctrlShow[2405,false];
};

if (life_HC_isActive) then
{
    [player] remoteexec ["HC_fnc_wantedFetch",HC_Life];
} else {
    [player] remoteexec ["life_fnc_wantedFetch",RSERV];
};
