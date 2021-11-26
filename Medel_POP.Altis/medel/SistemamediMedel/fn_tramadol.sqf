
/*
por: Medel
*/

#include "..\..\script_macros.hpp"

if (vehicle player != player) exitWith { 
hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>Sistema Médico</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>No puedes curar desde un vehículo.</t>";
};

life_action_inUse = true;
player playMove "AinvPknlMstpSlayWrflDnon_medic";
[false,"tramadol",1] call life_fnc_handleInv;
[8, "Suministrando Tramadol..."] spawn ica_fnc_barrita;
sleep 8;
player switchmove "";
player setDamage ((damage player) - 0.2);
hintSilent parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>Sistema Médico</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Tramadol Aplicado.</t>";
[] call medel_fnc_actualizaHUD;
life_action_inUse = false;
