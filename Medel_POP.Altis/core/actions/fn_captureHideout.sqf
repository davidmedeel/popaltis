
#include "..\..\script_macros.hpp"

private _altisArray = ["Land_u_Barracks_V2_F","Land_i_Barracks_V2_F"];
private _tanoaArray = ["Land_School_01_F","Land_Warehouse_03_F","Land_House_Small_02_F"];

private _hideoutObjs = [[["Altis", _altisArray], ["Tanoa", _tanoaArray]]] call TON_fnc_terrainSort;

private _hideout = (nearestObjects[getPosATL player,_hideoutObjs,25]) select 0;
private _group = _hideout getVariable ["gangOwner",grpNull];

if (isNil {group player getVariable "gang_name"}) exitWith {hint[localize "STR_GNOTF_CreateGang","PLAIN"];};
if (_group == group player) exitWith {hint localize "STR_GNOTF_Controlled";};
if ((_hideout getVariable ["inCapture",false])) exitWith {hint localize "STR_GNOTF_onePersonAtATime";};

private "_action";
private "_cpRate";
if (!isNull _group) then {
    _gangName = _group getVariable ["gang_name",""];
    _action = [
        format [localize "STR_GNOTF_AlreadyControlled",_gangName],
        localize "STR_GNOTF_CurrentCapture",
        localize "STR_Global_Yes",
        localize "STR_Global_No"
    ] call BIS_fnc_guiMessage;

    _cpRate = 0.0045;
} else {
    _cpRate = 0.0075;
};

if (!isNil "_action" && {!_action}) exitWith {hint localize "STR_GNOTF_CaptureCancel";};
life_action_inUse = true;

disableSerialization;

private _cP = 0.01;

for "_i" from 0 to 1 step 0 do {
    if (animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
        [player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteexeccall ["life_fnc_animSync",RCLIENT];
        player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
        player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
    };
    uiSleep 0.26;
    if (isNull _ui) then {
        "progressBar" cutRsc ["life_progress","PLAIN"];
        _ui = uiNamespace getVariable "life_progress";
        _progressBar = _ui displayCtrl 38201;
        _titleText = _ui displayCtrl 38202;
    };
    
    _cP = _cP + _cpRate;

     hintSilent parseText format ["<t color='#DE2828'><t size='2.2'><t align='center'>Escondite de Bandas<br/><t size='1.8'><t align='center'><t color='#21618C'>Capturando Bandera<br/><t size='1.8'>[%1 / 100]",round(_cP * 100)];

    _hideout setVariable ["inCapture",true,true];
    if (_cP >= 1 || !alive player) exitWith {_hideout setVariable ["inCapture",false,true];};
    if (life_istazed) exitWith {_hideout setVariable ["inCapture",false,true];};
    if (life_isknocked) exitWith {_hideout setVariable ["inCapture",false,true];};
    if (life_interrupted) exitWith {_hideout setVariable ["inCapture",false,true];};
};

"progressBar" cutText ["","PLAIN"];
player playActionNow "stop";
if (!alive player || life_istazed || life_isknocked) exitWith {life_action_inUse = false;_hideout setVariable ["inCapture",false,true];};
if (player getVariable ["restrained",false]) exitWith {life_action_inUse = false;_hideout setVariable ["inCapture",false,true];};
if (life_interrupted) exitWith {life_interrupted = false; hint localize "STR_GNOTF_CaptureCancel"; life_action_inUse = false;_hideout setVariable ["inCapture",false,true];};
life_action_inUse = false;

hint "Zona Capturada";

private _flagTexture = [
        "\A3\Data_F\Flags\Flag_red_CO.paa",
        "\A3\Data_F\Flags\Flag_green_CO.paa",
        "\A3\Data_F\Flags\Flag_blue_CO.paa",
        "\A3\Data_F\Flags\Flag_white_CO.paa",
        "\A3\Data_F\Flags\flag_fd_red_CO.paa",
        "\A3\Data_F\Flags\flag_fd_green_CO.paa",
        "\A3\Data_F\Flags\flag_fd_blue_CO.paa",
        "\A3\Data_F\Flags\flag_fd_orange_CO.paa"
    ] call BIS_fnc_selectRandom;
_this select 0 setFlagTexture _flagTexture;

[10,"Escondite de Bandas",[1,0,0,1],2,(format["La banda %2 ha tomado el control de un escondite - %1",mapGridPosition player, (group player) getVariable "gang_name"]),[1,1,1,1],1.5] remoteexec ["ica_fnc_anuncio",civilian];

_hideout setVariable ["inCapture",false,true];
_hideout setVariable ["gangOwner",group player,true];
