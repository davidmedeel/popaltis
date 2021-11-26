
#include "..\..\script_macros.hpp"

private ["_display","_list"];
disableSerialization;
if !(playerSide isEqualTo west) exitWith {};

_display = findDisplay 2400;
_list = _display displayCtrl 2402;
_data = lbData[2401,(lbCurSel 2401)];
_data = call compile format ["%1", _data];
if (isNil "_data") exitWith {};
if (!(_data isEqualType [])) exitWith {};
if (_data isEqualTo []) exitWith {};

if (life_HC_isActive) then
{
    [(_data select 0)] remoteexeccall ["HC_fnc_wantedRemove",HC_Life];
} else {
    [(_data select 0)] remoteexeccall ["life_fnc_wantedRemove",RSERV];
};

hintSilent parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>PDA</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Le has perdonado los vehículos a un criminal.</t>";
