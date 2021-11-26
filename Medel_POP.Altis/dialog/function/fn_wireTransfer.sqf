
#include "..\..\script_macros.hpp"

params [
    ["_value",0,[0]],
    ["_from","",[""]]
];

if (_value isEqualTo 0 || _from isEqualTo "" || _from isEqualTo profileName) exitWith {}; 
BANK = BANK + _value;
[1] call SOCK_fnc_updatePartial;

hint parsetext format ["<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>BANCO DE ALTIS</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>%1 ha transferido %2€ a tu cuenta bancaria.</t>",_from,[_value] call life_fnc_numberText];
