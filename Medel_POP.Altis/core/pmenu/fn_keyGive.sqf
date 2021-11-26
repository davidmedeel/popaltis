
#include "..\..\script_macros.hpp"

private ["_dialog","_list","_plist","_sel","_vehicle","_owners","_index","_unit","_uid"];

disableSerialization;

_dialog = findDisplay 2700;
_list = _dialog displayCtrl 2701;
_plist = _dialog displayCtrl 2702;

_sel = lbCurSel _list;
if ((_list lbData _sel) isEqualTo "") exitWith { hint parsetext format ["<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>LLAVERO</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>No has seleccionado ningún vehículo.</t>", _unit getVariable ["realname",name _unit],typeOf _vehicle]; };
_vehicle = _list lbData _sel;
_vehicle = life_vehicles select parseNumber(_vehicle);

if ((lbCurSel 2702) isEqualTo -1) exitWith { hint parsetext format ["<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>LLAVERO</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>No has seleccionado a nadie.</t>", _unit getVariable ["realname",name _unit],typeOf _vehicle]; };
_sel = lbCurSel _plist;
_unit = _plist lbData _sel;
_unit = call compile format ["%1", _unit];
if (isNull _unit || isNil "_unit") exitWith {};
if (_unit == player) exitWith {};

_uid = getPlayerUID _unit;
_owners = _vehicle getVariable "vehicle_info_owners";
_index = [_uid,_owners] call TON_fnc_index;
if (_index isEqualTo -1) then
{
    _owners pushBack [_uid,_unit getVariable ["realname",name _unit]];
    _vehicle setVariable ["vehicle_info_owners",_owners,true];
};

hint parsetext format ["<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>LLAVERO</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Has dado unas llaves.</t>", _unit getVariable ["realname",name _unit],typeOf _vehicle];
[_vehicle,_unit,profileName] remoteexeccall ["TON_fnc_clientGetKey",_unit];
