
#include "..\..\script_macros.hpp"

[] call medel_fnc_actualizaHUD;

private ["_value"];

_value = parseNumber(ctrlText 2702);
group player setVariable ["gbank_in_use_by",player,true];

if (isNil {(group player) getVariable "gang_name"}) exitWith {  hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>BANCO DE ALTIS<br/></t> <br/><t color='#e7ad3e' size='2'></t> <t color='#FFFFFF' size='1.5'>No estás en una banda."; };
if (_value > 999999) exitWith { hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>BANCO DE ALTIS<br/></t> <br/><t color='#e7ad3e' size='2'></t> <t color='#FFFFFF' size='1.5'>No puedes depositar más de 999,999€."; };
if (_value < 0) exitWith {};
if (!([str(_value)] call TON_fnc_isnumber)) exitWith {  hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>BANCO DE ALTIS<br/></t> <br/><t color='#e7ad3e' size='2'></t> <t color='#FFFFFF' size='1.5'>No has escrito un valor numérico."; };
if (_value > CASH) exitWith {  hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>BANCO DE ALTIS<br/></t> <br/><t color='#e7ad3e' size='2'></t> <t color='#FFFFFF' size='1.5'>No tienes tanto dinero en tu cartera."; };
if ((group player getVariable ["gbank_in_use_by",player]) != player) exitWith { hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>BANCO DE ALTIS<br/></t> <br/><t color='#e7ad3e' size='2'></t> <t color='#FFFFFF' size='1.5'>No puedes retirar menos de 999,999€."; };

CASH = CASH - _value;
_gFund = GANG_FUNDS;
_gFund = _gFund + _value;
group player setVariable ["gang_bank",_gFund,true];

if (life_HC_isActive) then {
    [1,group player] remoteExecCall ["HC_fnc_updateGang",HC_Life];
} else {
    [1,group player] remoteExecCall ["TON_fnc_updateGang",RSERV];
};

hint parseText format ["<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>BANCO DE ALTIS</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Has depositado %1€ en la cuenta de tu banda.</t>", [_value] call life_fnc_numberText];
[] call life_fnc_atmMenu;
[6] call SOCK_fnc_updatePartial;

if (LIFE_SETTINGS(getNumber,"player_moneyLog") isEqualTo 1) then {
    if (LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging") isEqualTo 1) then {
        money_log = format [localize "STR_DL_ML_depositeGang_BEF",_value,[_gFund] call life_fnc_numberText,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
    } else {
        money_log = format [localize "STR_DL_ML_depositeGang",profileName,(getPlayerUID player),_value,[_gFund] call life_fnc_numberText,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
    };
    publicVariableServer "money_log";
};
