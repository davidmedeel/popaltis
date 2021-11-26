
HC_UID = nil;

"life_HC_isActive" addPublicVariableEventHandler {
    if (_this select 1) then {
        HC_UID = getPlayerUID hc_1;
        HC_Life = owner hc_1;
        publicVariable "HC_Life";
        HC_Life publicVariableClient "serv_sv_use";
        cleanupFSM setFSMVariable ["stopfsm",true];
        terminate cleanup;
        terminate aiSpawn;
        [true] call TON_fnc_transferOwnership;
        HC_Life publicVariableClient "animals";
        diag_log "¡headless client está conectado!";
    };
};

HC_DC = ["HC_Disconnected","onPlayerDisconnected",
    {
        if (!isNil "HC_UID" && {_uid == HC_UID}) then {
            life_HC_isActive = false;
            publicVariable "life_HC_isActive";
            HC_Life = false;
            publicVariable "HC_Life";
            cleanup = [] spawn TON_fnc_cleanup;
            cleanupFSM = [] execFSM "\medel_server\FSM\cleanup.fsm";
            [false] call TON_fnc_transferOwnership;
            aiSpawn = ["hunting_zone",30] spawn TON_fnc_huntingZone;
            diag_log "Headless client desconectado!";
            diag_log "Listo para recibir consultas en la máquina del servidor";
        };
    }
] call BIS_fnc_addStackedEventHandler;
