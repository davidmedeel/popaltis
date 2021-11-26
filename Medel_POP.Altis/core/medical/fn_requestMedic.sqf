
#include "..\..\script_macros.hpp"

private "_medicsOnline";
_medicsOnline = {!(_x isEqualTo player) && {side _x isEqualTo independent} && {alive _x}} count playableUnits > 0; //Cuenta los EMS conectados

life_corpse setVariable ["Revive",false,true]; 
if (_medicsOnline) then
{
    //Notifica a los médicos
    [life_corpse,profileName] remoteexeccall ["life_fnc_medicRequest",independent];
} else {

};


[] spawn  {
    ((findDisplay 7300) displayCtrl 7303) ctrlEnable false;
    sleep (2 * 60);
    ((findDisplay 7300) displayCtrl 7303) ctrlEnable true;
};
