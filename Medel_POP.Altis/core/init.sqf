
//░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
//░░░░░░░▄▄▀▀▀▀▀▀▀▀▀▀▄▄█▄░░░░▄░░░░█░░░░░░░
//░░░░░░█▀░░░░░░░░░░░░░▀▀█▄░░░▀░░░░░░░░░▄░
//░░░░▄▀░░░░░░░░░░░░░░░░░▀██░░░▄▀▀▀▄▄░░▀░░
//░░▄█▀▄█▀▀▀▀▄░░░░░░▄▀▀█▄░▀█▄░░█▄░░░▀█░░░░
//░▄█░▄▀░░▄▄▄░█░░░▄▀▄█▄░▀█░░█▄░░▀█░░░░█░░░
//▄█░░█░░░▀▀▀░█░░▄█░▀▀▀░░█░░░█▄░░█░░░░█░░░
//██░░░▀▄░░░▄█▀░░░▀▄▄▄▄▄█▀░░░▀█░░█▄░░░█░░░
//██░░░░░▀▀▀░░░░░░░░░░░░░░░░░░█░▄█░░░░█░░░
//██░░░░░░░░░░░░░░░░░░░░░█░░░░██▀░░░░█▄░░░
//██░░░░░░░░░░░░░░░░░░░░░█░░░░█░░░░░░░▀▀█▄
//██░░░░░░░░░░░░░░░░░░░░█░░░░░█░░░░░░░▄▄██
//░██░░░░░░░░░░░░░░░░░░▄▀░░░░░█░░░░░░░▀▀█▄
//░▀█░░░░░░█░░░░░░░░░▄█▀░░░░░░█░░░░░░░▄▄██
//░▄██▄░░░░░▀▀▀▄▄▄▄▀▀░░░░░░░░░█░░░░░░░▀▀█▄
//░░▀▀▀▀░░░░░░░░░░░░░░░░░░░░░░█▄▄▄▄▄▄▄▄▄██
//░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░

#include "..\script_macros.hpp"

diag_log "----------------------------------------------------------------------------------------------------";
diag_log "--------------------------------- Servidor Abierto ----------------------------------";
diag_log format["------------------------------------------ Version %1 -------------------------------------------",(LIFE_SETTINGS(getText,"altislife_version"))];
diag_log "----------------------------------------------------------------------------------------------------";

diag_log "----------------------------------------------------------------------------------------------------";
diag_log "--------------------------------- Funciones Medel Cargadas ----------------------------------";
diag_log "----------------------------------------------------------------------------------------------------";

0 cutText[localize "STR_Init_ClientSetup","BLACK FADED",99999999];
_timeStamp = diag_tickTime;

waitUntil {!isNull (findDisplay 46)};
enableSentences false;

diag_log "[Life Client] Inicializando Variables...";
[] call compile preprocessFileLineNumbers "core\configuration.sqf";
diag_log "[Life Client] Variables inicializadas";

diag_log "[Life Client] Configurando Eventhandler...";
[] call life_fnc_setupEVH;
diag_log "[Life Client] Eventhandler completado";

diag_log "[Life Client] Configurando acciones de usuario...";
[] call life_fnc_setupActions;
diag_log "[Life Client] Acciones del usuario completadas";

diag_log "[Life Client] Esperando que el servidor esté listo...";
waitUntil {!isNil "life_server_isReady" && {!isNil "life_server_extDB_notLoaded"}};

if (life_server_extDB_notLoaded) exitWith {
    0 cutText [localize "STR_Init_ExtdbFail","BLACK FADED",99999999];
};

waitUntil {life_server_isReady};
diag_log "[Life Client] Ejecucción del Servidor Completada ";
0 cutText [localize "STR_Init_ServerReady","BLACK FADED",99999999];

[] call SOCK_fnc_dataQuery;
waitUntil {life_session_completed};
0 cutText[localize "STR_Init_ClientFinish","BLACK FADED",99999999];

[] spawn life_fnc_escInterupt;

switch (playerSide) do {
    case west: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_cop");
        [] call life_fnc_initCop;
    };
    case civilian: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_civ");
        [] call life_fnc_initCiv;
    };
    case independent: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_med");
        [] call life_fnc_initMedic;
    };
};

waitUntil {(missionNamespace getVariable ["life_perksInitialized", true])};
life_paycheck = life_paycheck * (missionNamespace getVariable ["mav_ttm_var_paycheckMultiplier", 1]);

CONSTVAR(life_paycheck);

player setVariable ["restrained", false, true];
player setVariable ["Escorting", false, true];
player setVariable ["transporting", false, true];
player setVariable ["playerSurrender", false, true];
player setVariable ["realname", profileName, true];

diag_log "[Life Client] Configurando Init";
[] execFSM "core\fsm\client.fsm";
diag_log "[Life Client] Ejecutando client.fsm";

(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call life_fnc_keyHandler"];
[player, life_settings_enableSidechannel, playerSide] remoteexeccall ["TON_fnc_manageSC", RSERV];

[] spawn medel_fnc_initHUD;
[] spawn life_fnc_survival;

0 cutText ["","BLACK IN"];

[] spawn {
    for "_i" from 0 to 1 step 0 do {
        waitUntil {(!isNull (findDisplay 49)) && {(!isNull (findDisplay 602))}}; 
        (findDisplay 49) closeDisplay 2; 
        (findDisplay 602) closeDisplay 2; 
    };
};

addMissionEventHandler ["EachFrame", life_fnc_revealObjects];

if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 0) then {
    player enableFatigue false;
};

if (LIFE_SETTINGS(getNumber,"pump_service") isEqualTo 1) then {
    [] execVM "core\fn_gasolineras.sqf";
};

life_fnc_RequestClientId = player;
publicVariableServer "life_fnc_RequestClientId"; 

{
    _x params [["_chan",-1,[0]], ["_noText","false",[""]], ["_noVoice","false",[""]]];

    _noText = [false,true] select ((["false","true"] find toLower _noText) max 0);
    _noVoice = [false,true] select ((["false","true"] find toLower _noVoice) max 0);

    _chan enableChannel [!_noText, !_noVoice];

} forEach getArray (missionConfigFile >> "disableChannels");

if (life_HC_isActive) then {
    [getPlayerUID player, player getVariable ["realname", name player]] remoteexec ["HC_fnc_wantedProfUpdate", HC_Life];
} else {
    [getPlayerUID player, player getVariable ["realname", name player]] remoteexec ["life_fnc_wantedProfUpdate", RSERV];
};

diag_log "----------------------------------------------------------------------------------------------------";
diag_log format ["               Servidor Cerrado :: Tiempo Total Abierto: %1 segundos ",(diag_tickTime - _timeStamp)];
diag_log "----------------------------------------------------------------------------------------------------";

setObjectViewDistance 2800; 
setViewDistance 3000;
enableEnvironment false;

// Medel
[] spawn medel_fnc_autoSync;
[] spawn medel_fnc_ganoEXP;
