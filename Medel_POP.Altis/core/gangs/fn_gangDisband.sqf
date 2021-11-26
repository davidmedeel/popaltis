
#include "..\..\script_macros.hpp"

private "_action";
_action = [
    localize "STR_GNOTF_DisbandWarn",
    localize "STR_Gang_Disband_Gang",
    localize "STR_Global_Yes",
    localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if (_action) then
{
    hint localize "STR_GNOTF_DisbandGangPro";

    if (life_HC_isActive) then
    {
        [group player] remoteexec ["HC_fnc_removeGang",HC_Life];
    } else {
        [group player] remoteexec ["TON_fnc_removeGang",RSERV];
    };

} else {
    hint localize "STR_GNOTF_DisbandGangCanc";
};
