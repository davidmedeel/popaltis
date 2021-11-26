
#include "..\..\script_macros.hpp"

disableSerialization;

private _escSync = { 
    disableSerialization;
    [] call SOCK_fnc_updateRequest;
    private _abortButton = CONTROL(49,104);
    private _abortTime = LIFE_SETTINGS(getNumber,"escapeMenu_timer");
    private _timeStamp = time + _abortTime;

    waitUntil {
        _abortButton ctrlSetText format [localize "STR_NOTF_AbortESC",[(_timeStamp - time), "MM:SS"] call BIS_fnc_secondsToString];
        _abortButton ctrlCommit 0;
        if (dialog && {isNull (findDisplay 7300)}) then {closeDialog 0};

        round(_timeStamp - time) <= 0 || {isNull (findDisplay 49)}
    };

    _abortButton ctrlSetText "Salir";
    _abortButton ctrlCommit 0;
    _abortButton ctrlEnable true;
};

private _canUseControls = {
    (playerSide isEqualTo west) || {!((player getVariable ["restrained",false]) || {player getVariable ["Escorting",false]} || {player getVariable ["transporting",false]} || {life_is_arrested} || {life_istazed} || {life_isknocked})}
};

for "_i" from 0 to 1 step 0 do {
    waitUntil {!isNull (findDisplay 49)};
    private _abortButton = CONTROL(49,104);
    _abortButton buttonSetAction "[] call SOCK_fnc_updateRequest; [player] remoteexec [""TON_fnc_cleanupRequest"",2];";
    private _respawnButton = CONTROL(49,1010);
    private _fieldManual = CONTROL(49,122);
    private _saveButton = CONTROL(49,103);
	private _topButton = (findDisplay 49) displayCtrl 2;
	private _barra = (findDisplay 49) displayCtrl 120;
	private _nombre = (findDisplay 49) displayCtrl 523;
	private _uidTexto = (findDisplay 49) displayCtrl 109;
	_uid = getPlayerUID player;

    _topButton ctrlEnable false;
    _topButton ctrlSetText "Plata o Plomo || POP Altis";
    _saveButton ctrlEnable false;
    _saveButton ctrlSetText "por Medel";
	_fieldManual ctrlSetText "www.plataoplomo.es";
	_fieldManual ctrlSetTooltip "Nuestro Foro";
	_barra ctrlSetText "Plata o Plomo || POP Altis || por Medel";
	_nombre ctrlSetText profileName;
	_uidTexto ctrlSetText _uid;

    _abortButton ctrlEnable false;
    _fieldManual ctrlEnable false;

    if (call _canUseControls) then {
        [] spawn _escSync;
    } else {
        _respawnButton ctrlEnable false;
    };

    waitUntil {isNull (findDisplay 49) || {!alive player}};
    if (!isNull (findDisplay 49) && {!alive player}) then {
        (findDisplay 49) closeDisplay 2;
    };
};
