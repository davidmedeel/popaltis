
#include "..\..\script_macros.hpp"

private["_time","_bail","_esc","_countDown"];
params [
 ["_ret",[],[[]]],
 ["_bad",false,[false]],
 ["_time",15,[0]]
];
_time = time + (_time * 60);
if (count _ret > 0) then { life_bail_amount = (_ret select 2); } else { life_bail_amount = 1500; };
_esc = false;
_bail = false;
if(_time <= 0) then { _time = time + (15 * 60); hint "Por favor, avisa a un administrador el tiempo se ha quedado en 0!"; };
[_bad,_time] spawn {
 life_canpay_bail = false;
 life_bail_amount = life_bail_amount * 5;
 if(_this select 0) then
 {
 sleep ( (_this select 1) * 0.5 );
 } else {
 sleep ( (_this select 1) * 0.2 );
 };
 life_canpay_bail = nil;
};
while {true} do
{
 if((round(_time - time)) > 0) then
 {
 _countDown = if(round (_time - time) > 60) then {format["%1 Minutos",round(round(_time - time) / 60)]} else {format["%1 Segundos",round(_time - time)]};
 if(isNil "life_canpay_bail") then {
 hintSilent parseText format [("<t size='2'>Tiempo Restante") + "<br/> <t size='2'><t color='#FF0000'>%1</t>",_countDown,[life_bail_amount] call life_fnc_numberText, "dass"];
 } else {
 hintSilent parseText format [("<t size='2'>Tiempo Restante") + "<br/> <t size='2'><t color='#FF0000'>%1</t>",_countDown];
 };
 };
 if(player distance (getMarkerPos "jail_marker") > 100) exitWith {
 _esc = true;
 };
 if(life_bail_paid) exitWith {
 _bail = true;
 };
 if((round(_time - time)) < 1) exitWith {hint ""};
 if(!alive player && ((round(_time - time)) > 0)) exitWith {};
 sleep 1;
};
switch (true) do
{
 case (_bail): {
 life_is_arrested = false;
 life_bail_paid = false;
 hint localize "STR_Jail_Paid";
 serv_wanted_remove = [player];
 player setPos (getMarkerPos "jail_release");
 [getPlayerUID player] remoteexeccall ["life_fnc_wantedRemove",RSERV];
 [5] call SOCK_fnc_updatePartial;
 };
 case (_esc): {
 life_is_arrested = false;
 hint localize "STR_Jail_EscapeSelf";
 [0,"STR_Jail_EscapeNOTF",true,[profileName]] remoteexeccall ["life_fnc_broadcast",RCLIENT];
 [getPlayerUID player,profileName,"901"] remoteexeccall ["life_fnc_wantedAdd",RSERV];
 [5] call SOCK_fnc_updatePartial;
 };
 case (alive player && !_esc && !_bail): {
 life_is_arrested = false;
 hint localize "STR_Jail_Released";
 [getPlayerUID player] remoteexeccall ["life_fnc_wantedRemove",RSERV];
 player setPos (getMarkerPos "jail_release");
 [5] call SOCK_fnc_updatePartial;
 };
};
