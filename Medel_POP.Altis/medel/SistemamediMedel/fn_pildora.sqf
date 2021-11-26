
/*
por: Medel
*/

#include "..\..\script_macros.hpp"

if (vehicle player != player) exitWith {
    hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>Sistema Médico</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>No puedes consumir una pildora desde un vehículo.</t>";
};

life_action_inUse = true;
player playMove "AinvPknlMstpSlayWrflDnon_medic";
hintSilent parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>PERSONAJE</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Espero que esta pildora me haga efecto pronto.</t>";
[false,"pildora",1] call life_fnc_handleInv;
[8, "Tomando Pildora..."] spawn ica_fnc_barrita;
sleep 8;
player switchmove "";

if (alive player) then {
0 = ["DynamicBlur", 400, [10]] spawn 
{
params ["_name", "_priority", "_effect", "_handle"];
while {
_handle = ppEffectCreate [_name, _priority];
_handle < 0
} do {
_priority = _priority + 1;
};
_handle ppEffectEnable true;
_handle ppEffectAdjust _effect;
_handle ppEffectCommit 1;
waitUntil {ppEffectCommitted _handle};
uiSleep 1; 
_handle ppEffectEnable false;
ppEffectDestroy _handle;
	hintSilent parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>Sistema Médico</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Ya estoy como nuevo.</t>";
	};
};

life_action_inUse = false;
