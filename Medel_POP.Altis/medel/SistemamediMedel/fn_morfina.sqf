
/*
por: Medel
*/

#include "..\..\script_macros.hpp"

_victima = param [0];

life_action_inUse = true;
if (vehicle player != player) exitWith { 
hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>Sistema Médico</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>No puedes curar desde un vehículo.</t>";
};

player playMove "AinvPknlMstpSnonWrflDr_medic1";
[false,"morfina",1] call life_fnc_handleInv;
[8, "Aplciando Morfina..."] spawn ica_fnc_barrita;
sleep 8;
player switchmove "";
_victima setDamage ((damage _victima) - 0.2);
hintSilent parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>Sistema Médico</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Morfina Aplicada.</t>";
[] call medel_fnc_actualizaHUD;
life_action_inUse = false;
