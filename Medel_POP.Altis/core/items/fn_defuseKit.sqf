
#include "..\..\script_macros.hpp"

private ["_vault","_ui","_title","_progressBar","_cP","_titleText"];
_vault = param [0,objNull,[objNull]];

if (isNull _vault) exitWith {};
if (typeOf _vault != "Land_CargoBox_V1_F") exitWith {hint localize "STR_ISTR_defuseKit_NotNear"};
if (!(_vault getVariable ["chargeplaced",false])) exitWith {hint localize "STR_ISTR_Defuse_Nothing"};

life_action_inUse = true;

disableSerialization;

_title = localize "STR_ISTR_Defuse_Process";
"progressBar" cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progressBar = _ui displayCtrl 38201;
_titleText = _ui displayCtrl 38202;
_titleText ctrlSetText format ["%2","%",_title];
_progressBar progressSetPosition 0.01;
_cP = 0.01;

for "_i" from 0 to 1 step 0 do
{
    if (animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then
    {
        [player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
        player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
        player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
    };
    uiSleep 0.26;
    if (isNull _ui) then
    {
        "progressBar" cutRsc ["life_progress","PLAIN"];
        _ui = uiNamespace getVariable "life_progress";
        _progressBar = _ui displayCtrl 38201;
        _titleText = _ui displayCtrl 38202;
    };
    _cP = _cP + .0035;
    _progressBar progressSetPosition _cP;
    _titleText ctrlSetText format ["%3",round(_cP * 100),"%",_title];
    if (_cP >= 1 || !alive player) exitWith {};
    if (life_interrupted) exitWith {};
};

"progressBar" cutText ["","PLAIN"];
player playActionNow "stop";
if (!alive player) exitWith {life_action_inUse = false;};
if (life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};

life_action_inUse = false;
_vault setVariable ["chargeplaced",false,true];
[0,localize "STR_ISTR_Defuse_Success"] remoteexeccall ["life_fnc_broadcast",west];
