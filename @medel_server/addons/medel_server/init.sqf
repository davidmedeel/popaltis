
#include "script_macros.hpp"

private ["_dome","_rsb","_timeStamp","_extDBNotLoaded"];

DB_Async_Active = false;
DB_Async_ExtraLock = false;
life_server_isReady = false;
_extDBNotLoaded = "";
serv_sv_use = [];
publicVariable "life_server_isReady";
life_save_civilian_position = if (LIFE_SETTINGS(getNumber,"save_civilian_position") isEqualTo 0) then {false} else {true};
fn_whoDoneIt = compile preprocessFileLineNumbers "\medel_server\Functions\Systems\fn_whoDoneIt.sqf";

life_HC_isActive = false;
publicVariable "life_HC_isActive";
HC_Life = false;
publicVariable "HC_Life";

if (EXTDB_SETTING(getNumber,"HeadlessSupport") isEqualTo 1) then {
    [] execVM "\medel_server\initHC.sqf";
};

if (isNil {uiNamespace getVariable "life_sql_id"}) then {
    life_sql_id = round(random(9999));
    CONSTVAR(life_sql_id);
    uiNamespace setVariable ["life_sql_id",life_sql_id];
        try {
        _result = EXTDB format ["9:ADD_DATABASE:%1",EXTDB_SETTING(getText,"DatabaseName")];
        if (!(_result isEqualTo "[1]")) then {throw "extDB3: Error con la Conexion de la Base de Datos"};
        _result = EXTDB format ["9:ADD_DATABASE_PROTOCOL:%2:SQL:%1:TEXT2",FETCH_CONST(life_sql_id),EXTDB_SETTING(getText,"DatabaseName")];
        if (!(_result isEqualTo "[1]")) then {throw "extDB3: Error con la Conexion de la Base de Datos"};
    } catch {
        diag_log _exception;
        _extDBNotLoaded = [true, _exception];
    };
    if (_extDBNotLoaded isEqualType []) exitWith {};
    EXTDB "9:LOCK";
    diag_log "extDB3: Base de Datos Conectada";
} else {
    life_sql_id = uiNamespace getVariable "life_sql_id";
    CONSTVAR(life_sql_id);
    diag_log "extDB3: Todavia sigue conectada la Base de Datos";
};


if (_extDBNotLoaded isEqualType []) exitWith {
    life_server_extDB_notLoaded = true;
    publicVariable "life_server_extDB_notLoaded";
};
life_server_extDB_notLoaded = false;
publicVariable "life_server_extDB_notLoaded";

["CALL resetLifeVehicles",1] call DB_fnc_asyncCall;
["CALL deleteDeadVehicles",1] call DB_fnc_asyncCall;
["CALL deleteOldHouses",1] call DB_fnc_asyncCall;
["CALL deleteOldGangs",1] call DB_fnc_asyncCall;

_timeStamp = diag_tickTime;
diag_log "----------------------------------------------------------------------------------------------------";
diag_log "---------------------------------- Servidor Abierto ---------------------------------";
diag_log format["------------------------------------------ Version %1 -------------------------------------------",(LIFE_SETTINGS(getText,"altislife_version"))];
diag_log "----------------------------------------------------------------------------------------------------";

if (LIFE_SETTINGS(getNumber,"save_civilian_position_restart") isEqualTo 1) then {
    [] spawn {
        _query = "UPDATE players SET civ_alive = '0' WHERE civ_alive = '1'";
        [_query,1] call DB_fnc_asyncCall;
    };
};

//master_group attachTo[bank_obj,[0,0,0]];

{
    if (!isPlayer _x) then {
        _npc = _x;
        {
            if (_x != "") then {
                _npc removeWeapon _x;
            };
        } forEach [primaryWeapon _npc,secondaryWeapon _npc,handgunWeapon _npc];
    };
} forEach allUnits;

[8,true,12] execFSM "\medel_server\FSM\timeModule.fsm";

life_adminLevel = 0;
life_medicLevel = 0;
life_copLevel = 0;
CONST(JxMxE_PublishVehicle,"false");

life_radio_west = radioChannelCreate [[0, 0.95, 1, 0.8], "Side Channel", "%UNIT_NAME", []];
life_radio_civ = radioChannelCreate [[0, 0.95, 1, 0.8], "Side Channel", "%UNIT_NAME", []];
life_radio_indep = radioChannelCreate [[0, 0.95, 1, 0.8], "Side Channel", "%UNIT_NAME", []];

fed_bank setVariable ["safe",count playableUnits,true];
[] spawn TON_fnc_federalUpdate;

addMissionEventHandler ["HandleDisconnect",{_this call TON_fnc_clientDisconnect; false;}];
[] call compile preprocessFileLineNumbers "\medel_server\functions.sqf";

TON_fnc_requestClientID =
{
    (_this select 1) setVariable ["life_clientID", owner (_this select 1), true];
};
"life_fnc_RequestClientId" addPublicVariableEventHandler TON_fnc_requestClientID;

"money_log" addPublicVariableEventHandler {diag_log (_this select 1)};
"advanced_log" addPublicVariableEventHandler {diag_log (_this select 1)};

life_wanted_list = [];

cleanupFSM = [] execFSM "\medel_server\FSM\cleanup.fsm";

[] spawn {
    for "_i" from 0 to 1 step 0 do {
        uiSleep (30 * 60);
        {
            _x setVariable ["sellers",[],true];
        } forEach [Dealer_1,Dealer_2,Dealer_3];
    };
};

[] spawn TON_fnc_initHouses;
[] spawn TON_fnc_gangCash;
cleanup = [] spawn TON_fnc_cleanup;

TON_fnc_playtime_values = [];
TON_fnc_playtime_values_request = [];

publicVariable "TON_fnc_playtime_values";
publicVariable "TON_fnc_playtime_values_request";


private _vaultHouse = [[["Altis", "Land_Research_house_V1_F"], ["Tanoa", "Land_Medevac_house_V1_F"]]] call TON_fnc_terrainSort;
private _altisArray = [16019.5,16952.9,0];
private _tanoaArray = [11074.2,11501.5,0.00137329];
private _pos = [[["Altis", _altisArray], ["Tanoa", _tanoaArray]]] call TON_fnc_terrainSort;

_dome = nearestObject [_pos,"Land_Dome_Big_F"];
_rsb = nearestObject [_pos,_vaultHouse];

for "_i" from 1 to 3 do {_dome setVariable [format ["bis_disabled_Door_%1",_i],1,true]; _dome animateSource [format ["Door_%1_source", _i], 0];};
_dome setVariable ["locked",true,true];
_rsb setVariable ["locked",true,true];
_rsb setVariable ["bis_disabled_Door_1",1,true];
_dome allowDamage false;
_rsb allowDamage false;

life_server_isReady = true;
publicVariable "life_server_isReady";

aiSpawn = ["hunting_zone",30] spawn TON_fnc_huntingZone;

server_corpses = [];
addMissionEventHandler ["EntityRespawned", {_this call TON_fnc_entityRespawned}];

diag_log "----------------------------------------------------------------------------------------------------";
diag_log format ["               Servidor Cerrado :: Tiempo Total Abierto %1 segundos ",(diag_tickTime) - _timeStamp];
diag_log "----------------------------------------------------------------------------------------------------";
