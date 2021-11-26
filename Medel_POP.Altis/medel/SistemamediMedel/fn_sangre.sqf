
/*
por: Medel
*/

#include "..\..\script_macros.hpp"

_victima = param [0];

if (vehicle player != player) exitWith { 
hintSilent parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>Sistema Médico</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>No puedes curar desde un vehículo.</t>";
};

life_action_inUse = true;
player playMove "AinvPknlMstpSnonWrflDr_medic1";
[false,"sangre",1] call life_fnc_handleInv;
[8, "Realizando transfusión de Sangre..."] spawn ica_fnc_barrita;
sleep 8;
player switchmove "";
_victima setDamage ((damage _victima) - 0.5);
hintSilent parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>Sistema Médico</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Transfunsión de Sangre realizada.</t>";
[] call medel_fnc_actualizaHUD;
life_action_inUse = false;
