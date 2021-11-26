
#include "..\..\script_macros.hpp"
#include <keycodes.hpp>

params [
    "_ctrl",
    "_code",
    "_shift",
    "_ctrlKey",
    "_alt"
];

private _speed = speed cursorObject;
private _handled = false;
private _interactionKey = if (actionKeys "User10" isEqualTo []) then {219} else {(actionKeys "User10") select 0};
private _interruptionKeys = [17, 30, 31, 32];

if ((_code in (actionKeys "GetOver") || _code in (actionKeys "salute") || _code in (actionKeys "SitDown") || _code in (actionKeys "Throw") || _code in (actionKeys "GetIn") || _code in (actionKeys "GetOut") || _code in (actionKeys "Fire") || _code in (actionKeys "ReloadMagazine") || _code in [16,18]) && ((player getVariable ["restrained",false]) || (player getVariable ["playerSurrender",false]) || life_isknocked || life_istazed)) exitWith {
    true;
};

if (life_action_inUse) exitWith
{
    if (!life_interrupted && _code in _interruptionKeys) then {life_interrupted = true};
    _handled;
};

if (!(actionKeys "User10" isEqualTo []) && {(inputAction "User10" > 0)}) exitWith
{
    if (!life_action_inUse) then
    {
        [] spawn {
            private _handle = [] spawn life_fnc_actionKeyHandler;
            waitUntil {scriptDone _handle};
            life_action_inUse = false;
        };
    };
    true;
};

if (life_container_active) exitwith
{
    private _allowedMoves = [
        "MoveForward",
        "MoveBack",
        "TurnLeft",
        "TurnRight",
        "MoveFastForward",
        "MoveSlowForward",
        "turbo",
        "TurboToggle",
        "MoveLeft",
        "MoveRight",
        "WalkRunTemp",
        "WalkRunToggle",
        "AdjustUp",
        "AdjustDown",
        "AdjustLeft",
        "AdjustRight",
        "Stand",
        "Crouch",
        "Prone",
        "MoveUp",
        "MoveDown",
        "LeanLeft",
        "LeanLeftToggle",
        "LeanRight",
        "LeanRightToggle"
    ];
    if (({_code in (actionKeys _x)} count _allowedMoves) > 0) exitwith
    {
        false;
    };
    if (_code isEqualTo 57) then
    {
        life_storagePlacing = 0 spawn life_fnc_placestorage; 
    } else { 
        if (!isNull life_storagePlacing) exitWith {}; 
        if (!isNull life_container_activeObj) then
        {
            deleteVehicle life_container_activeObj;
            titleText [localize "STR_NOTF_PlaceContainerAbort", "PLAIN"];
        };
        life_container_active = false;
    };
    true;
};

switch (_code) do {
    // -- Deshabilitar commander/tactical view
    if (LIFE_SETTINGS(getNumber,"disableCommanderView") isEqualTo 1) then
    {
        private _CommandMode = actionKeys "tacticalView";

        if (_code in _CommandMode) then
        {
            hint localize "STR_NOTF_CommanderView";
            _handled = true;
        };
    };

    case 57: { // Shift + Espacio
        if (isNil "jumpActionTime") then {jumpActionTime = 0;};
        if (_shift && {!(animationState player isEqualTo "AovrPercMrunSrasWrflDf")} && {isTouchingGround player} && {stance player isEqualTo "STAND"} && {speed player > 2} && {!life_is_arrested} && {((velocity player) select 2) < 2.5} && {time - jumpActionTime > 1.5}) then {
            jumpActionTime = time; 
            [player] remoteexec ["life_fnc_jumpFnc",RANY]; 
            _handled = true;
        };
    };

    case DIK_F5: { // F5
        if (!_shift) then {
            if (player getVariable ["playerSurrender",false]) then {
                player setVariable ["playerSurrender",false,true];
            } else {
                [] spawn life_fnc_surrender;
            };
            _handled = true;
        };
    };

    case 35: { // Shift + H
        if (_shift && !_ctrlKey && !(currentWeapon player isEqualTo "")) then {
            life_curWep_h = currentWeapon player;
            player action ["SwitchWeapon", player, player, 100];
            player switchCamera cameraView;
        };

        if (!_shift && _ctrlKey && !isNil "life_curWep_h" && {!(life_curWep_h isEqualTo "")}) then {
            if (life_curWep_h in [primaryWeapon player,secondaryWeapon player,handgunWeapon player]) then {
                player selectWeapon life_curWep_h;
            };
        };

        if (!_shift && !_ctrlKey) then {
			if (playerSide isEqualTo independent) then {
				[] call life_fnc_CamillasEMS;
			};
	    };
    };

    case _interactionKey: { // Windows
        if (!life_action_inUse) then
        {
            [] spawn  {
                private _handle = [] spawn life_fnc_actionKeyHandler;
                waitUntil {scriptDone _handle};
                life_action_inUse = false;
            };
        };
    };

	case 19: { //Shift + R
    if (_shift) then {_handled = true;};
		switch (playerSide) do {
			case west: {
			if (_shift && {!isNull cursorObject} && {cursorObject isKindOf "Man"} && {(isPlayer cursorObject)} && {alive cursorObject} && {cursorObject distance player < 4} && {!(cursorObject getVariable "Escorting")} && {!(cursorObject getVariable "restrained")} && {speed cursorObject < 1}) then {
					[] call life_fnc_restrainAction;
				};
			};
			case civilian: {
			if (_shift && {!isNull cursorObject} && {cursorObject isKindOf "Man"} && {(isPlayer cursorObject)} && {alive cursorObject} && {cursorObject distance player < 4} && {!(cursorObject getVariable "Escorting")} && {!(cursorObject getVariable "restrained")} && {speed cursorObject < 1}) then {
					[] call life_fnc_restrainAction;
				};
			};
		};

    if (!_shift) exitWith {};
    if (vehicle player isEqualTo player) exitWith {};
            if (playerSide isEqualTo west) then
            {

                if (((driver (vehicle player)) isEqualTo player) or ((vehicle player) getCargoIndex player isEqualTo 0)) then 
                {

                    _veh = vehicle player;

                    if (_veh getvariable "short") exitWith {};

                    _veh setVariable ["short", true, true];

                    [_veh] spawn 
                    {

                        _veh = param [0];

                        [_veh,"Conductor", 400, 1] remoteexec ["life_fnc_say3D", ([0, -2] select isDedicated), false];

                        sleep 4;

                        _veh setVariable ["short", false, true];
                    };
                };   
            };
        };

    case 34: { // Shift + G
        if (_shift) then {_handled = true;};
	        if (_shift && !isNull cursorTarget && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && alive cursorTarget && cursorTarget distance player < 4 && speed cursorTarget < 1 && !(cursorTarget getVariable "restrained")) then {
		    if ((animationState cursorTarget) != "Incapacitated" && (currentWeapon player == primaryWeapon player || currentWeapon player == handgunWeapon player) && currentWeapon player != "" && !life_knockout && !(player getVariable["restrained",false]) && !life_istazed) then {
			    [cursorTarget] spawn life_fnc_knockoutAction;
		    };
	    };
    };

    case 20: { // T
        if (!_alt && {!_ctrlKey} && {!dialog} && {!life_action_inUse} && {!(player getVariable ["playerSurrender",false])} && {!(player getVariable ["restrained",false])} && {!life_isknocked} && {!life_istazed}) then
        {
            if (!(isNull objectParent player) && alive vehicle player) then
            {
                if ((vehicle player) in life_vehicles) then
                {
                    [vehicle player] spawn life_fnc_openInventory;
                };
            } else {
                private "_list";
                _list = ((ASLtoATL (getPosASL player)) nearEntities [["Box_IND_Grenades_F","B_supplyCrate_F"], 2.5]) select 0;
                if (!(isNil "_list")) then
                {
                    _house = nearestObject [(ASLtoATL (getPosASL _list)), "House"];
                    if (_house getVariable ["locked", false]) then
                    {
                        ["normal", "CASA", "No puedes abrir este armario, sin que el dueño lo haya abierto."] spawn medel_fnc_hint;
                    } else {
                        [_list] spawn life_fnc_openInventory;
                    };
                } else {
                    _list = ["landVehicle","Air","Ship"];
                    if (KINDOF_ARRAY(cursorObject,_list) && {player distance cursorObject < 7} && {isNull objectParent player} && {alive cursorObject} && {!life_action_inUse}) then
                    {
                        if (cursorObject in life_vehicles || {locked cursorObject isEqualTo 0}) then
                        {
                            [cursorObject] spawn life_fnc_openInventory;
                        };
                    };
                };
            };
        };
    };

    case 38: { //Shift + L
        if (_shift && playerSide in [west,independent]) then {
            if (!(isNull objectParent player) && (typeOf vehicle player) in ["C_Offroad_01_F","C_Hatchback_01_F","C_SUV_01_F","C_Van_02_medevac_F","C_Hatchback_01_sport_F","B_GEN_Van_02_transport_F","B_GEN_Van_02_vehicle_F","B_MRAP_01_F"]) then {
                    if (playerSide isEqualTo west) then
                    {
                        [vehicle player] call life_fnc_sirenLights;
                    } else {
                        [vehicle player] call life_fnc_medicSirenLights;
                    };
                    _handled = true;
                };
            };
        };

    case 21: { // Y 
        if (!_alt && !_ctrlKey && !dialog && !(player getVariable ["restrained",false]) && {!life_action_inUse}) then {
            [] call life_fnc_p_openMenu;
        };
    };
    case DIK_F3: { // F3
        if (FETCH_CONST(life_adminlevel) > 0) then {
            [] spawn life_fnc_adminmenu;
        };
        _handled = true;
    };

    case DIK_F2: { // F2
        if ((call life_adminlevel) > 4) then {
            ["menu"] call life_fnc_consola;
        };
        _handled = true;
    };

    case DIK_O: { // Ctrl + O
        if (!_shift && !_alt && _ctrlKey) then {
            [] call ica_fnc_reporte;
        };
    };

    case DIK_9: { // 9
        if (FETCH_CONST(life_adminlevel) > 0) then {
            [] call life_fnc_adminfuego;
        };
    };

    case 2: { // 1 
        if (vehicle player isEqualTo player) exitWith {};
        switch (playerSide) do {
            case west: {
                if (((driver (vehicle player)) isEqualTo player) or ((vehicle player) getCargoIndex player isEqualTo 0)) then {

                    _veh = vehicle player;

                    if (((_veh getVariable "siren") select 3) isEqualTo "poli1") exitWith {};

                    if (((_veh getVariable "siren") select 0) isEqualTo true) then {

                    ((_veh getVariable "siren") select 1) setDamage 1;

                    deleteVehicle ((_veh getVariable "siren") select 1);

                _veh setVariable ["siren", [false,"","",""], true];
            };

            _boli = createVehicle ["Land_PenBlack_F", _veh];
            _boli attachTo [_veh, [0, 0, 0]];

            _veh setVariable ["siren", [true,_boli,_veh,"poli1"], true];

            [_veh,_boli] spawn {

            _veh = param [0];
            _boli = param [1];

                    while {((_veh getVariable "siren") select 0) isEqualTo true} do {
                        [_boli,"poli1", 650, 1] remoteexec ["life_fnc_say3D", ([0, -2] select isDedicated), false];
                        sleep 11;
                    };
                };
            };
        };
        case independent: {
            if (((driver (vehicle player)) isEqualTo player) or ((vehicle player) getCargoIndex player isEqualTo 0)) then {

                _veh = vehicle player;

                if (((_veh getVariable "siren") select 3) isEqualTo "Ems1") exitWith {};

                if (((_veh getVariable "siren") select 0) isEqualTo true) then
                {

                    ((_veh getVariable "siren") select 1) setDamage 1;

                    deleteVehicle ((_veh getVariable "siren") select 1);

                    _veh setVariable ["siren", [false,"","",""], true];
                };

                _boli = createVehicle ["Land_PenBlack_F", _veh];
                _boli attachTo [_veh, [0, 0, 0]];

                _veh setVariable ["siren", [true,_boli,_veh,"Ems1"], true];

                [_veh,_boli] spawn {

                    _veh = param [0];
                    _boli = param [1];

                    while {((_veh getVariable "siren") select 0) isEqualTo true} do
                    {
                        [_boli,"Ems1", 650, 1] remoteexec ["life_fnc_say3D", ([0, -2] select isDedicated), false];
                        sleep 5.6;
                    };
                };
            };
        };
            default {};
        };
    };

    case 3: { // 2 
        if (vehicle player isEqualTo player) exitWith {};
        switch (playerSide) do {

            case west: {
                if (((driver (vehicle player)) isEqualTo player) or ((vehicle player) getCargoIndex player isEqualTo 0)) then {

                    _veh = vehicle player;

                    if (((_veh getVariable "siren") select 3) isEqualTo "poli2") exitWith {};

                    if (((_veh getVariable "siren") select 0) isEqualTo true) then {

                        ((_veh getVariable "siren") select 1) setDamage 1;

                        deleteVehicle ((_veh getVariable "siren") select 1);

                        _veh setVariable ["siren", [false,"","",""], true];
                    };

                _boli = createVehicle ["Land_PenBlack_F", _veh];
                _boli attachTo [_veh, [0, 0, 0]];

                _veh setVariable ["siren", [true,_boli,_veh,"poli2"], true];

                [_veh,_boli] spawn 
                {

                    _veh = param [0];
                    _boli = param [1];

                    while {((_veh getVariable "siren") select 0) isEqualTo true} do {
                        [_boli,"poli2", 650, 1] remoteexec ["life_fnc_say3D", ([0, -2] select isDedicated), false];
                        sleep 11;
                    };
                };
            };
        };
        case independent: {
            if (((driver (vehicle player)) isEqualTo player) or ((vehicle player) getCargoIndex player isEqualTo 0)) then {

                _veh = vehicle player;

                if (((_veh getVariable "siren") select 3) isEqualTo "Ems2") exitWith {};

                if (((_veh getVariable "siren") select 0) isEqualTo true) then {

                    ((_veh getVariable "siren") select 1) setDamage 1;

                    deleteVehicle ((_veh getVariable "siren") select 1);

                    _veh setVariable ["siren", [false,"","",""], true];
                };

                _boli = createVehicle ["Land_PenBlack_F", _veh];
                _boli attachTo [_veh, [0, 0, 0]];

                _veh setVariable ["siren", [true,_boli,_veh,"Ems2"], true];

                [_veh,_boli] spawn {

                _veh = param [0];
                _boli = param [1];

                        while {((_veh getVariable "siren") select 0) isEqualTo true} do {
                            [_boli,"Ems2", 650, 1] remoteexec ["life_fnc_say3D", ([0, -2] select isDedicated), false];
                            sleep 5.58;
                        };
                    };
                };
            };
            default { };
        };
    };

    case 4:{ // 3
        if (((driver (vehicle player)) isEqualTo player) or ((vehicle player) getCargoIndex player isEqualTo 0)) then {

        _veh = vehicle player;

                if (((_veh getVariable "siren") select 0) isEqualTo true) then {

                    ((_veh getVariable "siren") select 1) setDamage 1;

                    deleteVehicle ((_veh getVariable "siren") select 1);

                    _veh setVariable ["siren", [false,"","",""], true];

                };
            };
        };

        case 16: { // Shift + Q
            if (!_shift) exitWith {};
            if (vehicle player isEqualTo player) exitWith {};
            if (playerSide isEqualTo west) then
            {

                if (((driver (vehicle player)) isEqualTo player) or ((vehicle player) getCargoIndex player isEqualTo 0)) then 
                {

                    _veh = vehicle player;

                    if (_veh getvariable "short") exitWith {};

                    _veh setVariable ["short", true, true];

                    [_veh] spawn 
                    {

                        _veh = param [0];

                        [_veh,"poli3", 650, 1] remoteexec ["life_fnc_say3D", ([0, -2] select isDedicated), false];

                        sleep 3.5;

                        _veh setVariable ["short", false, true];
                    };
                };   
            };
            if (playerSide isEqualTo independent) then
            {

                if (((driver (vehicle player)) isEqualTo player) or ((vehicle player) getCargoIndex player isEqualTo 0)) then 
                {

                    _veh = vehicle player;

                    if (_veh getvariable "short") exitWith {};

                    _veh setVariable ["short", true, true];

                    [_veh] spawn 
                    {

                        _veh = param [0];

                        [_veh,"Ems3", 650, 1] remoteexec ["life_fnc_say3D", ([0, -2] select isDedicated), false];

                        sleep 1;

                        _veh setVariable ["short", false, true];
                    };
                };
            };
        };

	case 5: { // 4
		if (vehicle player isEqualTo player) then {
            if (player getVariable "no_gestos" isEqualTo 1) exitWith {};
			if(!life_action_inUse) then {
				player playActionNow "gestureHi";
			};
		};
	    if (!_shift) exitWith {};
	    if (FETCH_CONST(life_adminlevel) > 0) then {
		    0 spawn life_fnc_adminsalto;
	    };
        _handled = true;
	};

	case 6: { // 5
		if(vehicle player isEqualTo player) then {
            if (player getVariable "no_gestos" isEqualTo 1) exitWith {};
			if (!life_action_inUse) then {
				player playActionNow "gestureHiC";
			};
		};
	    if (!_shift) exitWith {};
	    if (FETCH_CONST(life_adminlevel) > 0) then {
		    [] spawn life_fnc_teleport5metros;
	    };
        _handled = true;
	};

	case 7: { // 6
		if(vehicle player isEqualTo player) then {
            if (player getVariable "no_gestos" isEqualTo 1) exitWith {};
			if(!life_action_inUse) then {
				player playActionNow "gestureHiB";
			};
		};
	};

	case 8: { // 7
		if(vehicle player isEqualTo player) then {
            if (player getVariable "no_gestos" isEqualTo 1) exitWith {};
			if(!life_action_inUse) then {
				player playActionNow "gesturenod";
			};
		};
	};

	case 25: { // P
        if (isNil "no_gestos") then {
	        player setvariable ["no_gestos",1,true];
	        no_gestos = true;

            ["Has desactivado los Gestos"] spawn ica_fnc_menosuno;
    } else {
	        ["Has activado los Gestos"] spawn ica_fnc_masuno;
	        player setvariable ["no_gestos",0,true];
	        no_gestos = nil;
        };
	};

	case 59: { // F1
		if(!_shift) then {
            switch (player getVariable["tapones",0]) do {
                case 0: { ["normal", "SONIDO", "Tapones Nivel 3"] spawn medel_fnc_hintSilent; 1 fadeSound 0.05; player setVariable ["tapones", 10]; life_tapones = 3; };
                case 10: { ["normal", "SONIDO", "Tapones Nivel 2"] spawn medel_fnc_hintSilent; 1 fadeSound 0.4; player setVariable ["tapones", 40]; life_tapones = 2; };
                case 40: { ["normal", "SONIDO", "Tapones Nivel 1"] spawn medel_fnc_hintSilent; 1 fadeSound 0.7; player setVariable ["tapones", 70]; life_tapones = 1; };
                case 70: { ["normal", "SONIDO", "Tapones Quitados"] spawn medel_fnc_hintSilent; 1 fadeSound 1; player setVariable ["tapones", 0]; life_tapones = 0; };
            };
            [] call medel_fnc_actualizaHUD;
		} else {
            if (RopaRecargada) exitWith {["normal", "ROPA", "Espera un poco entre cambio"] spawn medel_fnc_hintSilent;};
            if !(RopaRecargada) then {
	            RopaRecargada = true;
                ["normal", "ROPA", "Ropa Recargada"] spawn medel_fnc_hintSilent;
                [] call life_fnc_playerSkins;
                [] spawn {
                    RopaRecargada = true;
                    sleep 60;
                    RopaRecargada = false;
                };
            };
	    };
        _handled = true;
    };

	case DIK_C: { // C
		if !(vehicle player != player) exitWith {};
			if(!life_cinturon) then
            {
				life_cinturon = true;
                ["normal", "CINTURÓN", "Cinturón abrochado."] spawn medel_fnc_hintSilent;
			} else {
				life_cinturon = false;
                ["normal", "CINTURÓN", "Cinturón desabrochado."] spawn medel_fnc_hintSilent;
			};
            [] call medel_fnc_actualizaHUD;		
		};

    case 41: { // º
        [] call medel_fnc_mostrarDNI;
        _handled = true;
    };

    case DIK_F4: { // F4
        if (!_alt && !_ctrlKey && !dialog && !(player getVariable ["restrained",false]) && {!life_action_inUse}) then {
            ["menu"] call ica_fnc_ayudador;
        };
    };

    case DIK_F10: { // F10
        if (playerSide isEqualTo west) then {
            ["menu"] call medel_fnc_multas;
        };
    };

    case 22: { // U
        if (!_alt && !_ctrlKey) then
        {
            private _veh = if (isNull objectParent player) then
            {
                cursorObject;
            } else {
                vehicle player;
            };

            if (_veh isKindOf "House_F" && {playerSide isEqualTo civilian}) then
            {
                if (_veh in life_vehicles && {player distance _veh < 8}) then
                {
                    private _door = [_veh] call life_fnc_nearestDoor;
                    if (_door isEqualTo 0) exitWith {["normal", "CASA", "No estás cerca de una casa."] spawn medel_fnc_hint;};
                    private _locked = _veh getVariable [format ["bis_disabled_Door_%1",_door],0];

                    if (_locked isEqualTo 0) then {
                        _veh setVariable [format ["bis_disabled_Door_%1",_door],1,true];
                        _veh animateSource [format ["Door_%1_source", _door], 0];
                        ["normal", "CASA", "Has cerrado la puerta de tu casa."] spawn medel_fnc_hintSilent;
                    } else {
                        _veh setVariable [format ["bis_disabled_Door_%1",_door],0,true];
                        _veh animateSource [format ["Door_%1_source", _door], 1];
                        ["normal", "CASA", "Has abierto la puerta de tu casa."] spawn medel_fnc_hintSilent;
                    };
                };
            } else {
                private _locked = locked _veh;
                if (_veh in life_vehicles && {player distance _veh < 8}) then
                {
                    if (_locked isEqualTo 2) then
                    {
                        if (local _veh) then
                        {
                            _veh lock 0;

                            _veh animateDoor ["door_back_R",1];
                            _veh animateDoor ["door_back_L",1];
                            _veh animateDoor ['door_R',1];
                            _veh animateDoor ['door_L',1];
                            _veh animateDoor ['Door_L_source',1];
                            _veh animateDoor ['Door_rear',1];
                            _veh animateDoor ['Door_rear_source',1];
                            _veh animateDoor ['Door_1_source',1];
                            _veh animateDoor ['Door_2_source',1];
                            _veh animateDoor ['Door_3_source',1];
                            _veh animateDoor ['Door_LM',1];
                            _veh animateDoor ['Door_RM',1];
                            _veh animateDoor ['Door_LF',1];
                            _veh animateDoor ['Door_RF',1];
                            _veh animateDoor ['Door_LB',1];
                            _veh animateDoor ['Door_RB',1];
                            _veh animateDoor ['DoorL_Front_Open',1];
                            _veh animateDoor ['DoorR_Front_Open',1];
                            _veh animateDoor ['DoorL_Back_Open',1];
                            _veh animateDoor ['DoorR_Back_Open ',1];
                        } else {
                            [_veh,0] remoteexeccall ["life_fnc_lockVehicle",_veh];
                            
                            _veh animateDoor ["door_back_R",1];
                            _veh animateDoor ["door_back_L",1];
                            _veh animateDoor ['door_R',1];
                            _veh animateDoor ['door_L',1];
                            _veh animateDoor ['Door_L_source',1];
                            _veh animateDoor ['Door_rear',1];
                            _veh animateDoor ['Door_rear_source',1];
                            _veh animateDoor ['Door_1_source',1];
                            _veh animateDoor ['Door_2_source',1];
                            _veh animateDoor ['Door_3_source',1];
                            _veh animateDoor ['Door_LM',1];
                            _veh animateDoor ['Door_RM',1];
                            _veh animateDoor ['Door_LF',1];
                            _veh animateDoor ['Door_RF',1];
                            _veh animateDoor ['Door_LB',1];
                            _veh animateDoor ['Door_RB',1];
                            _veh animateDoor ['DoorL_Front_Open',1];
                            _veh animateDoor ['DoorR_Front_Open',1];
                            _veh animateDoor ['DoorL_Back_Open',1];
                            _veh animateDoor ['DoorR_Back_Open ',1];
                        };
                        ["normal", "VEHÍCULO", "Vehículo Abierto."] spawn medel_fnc_hintSilent;
                        [_veh,"unlockCarSound",50,1] remoteexec ["life_fnc_say3D",RANY];
                    } else {
                        if (local _veh) then
                        {
                            _veh lock 2;

                            _veh animateDoor ["door_back_R",0];
                            _veh animateDoor ["door_back_L",0];
                            _veh animateDoor ['door_R',0];
                            _veh animateDoor ['door_L',0];
                            _veh animateDoor ['Door_L_source',0];
                            _veh animateDoor ['Door_rear',0];
                            _veh animateDoor ['Door_rear_source',0];
                            _veh animateDoor ['Door_1_source',0];
                            _veh animateDoor ['Door_2_source',0];
                            _veh animateDoor ['Door_3_source',0];
                            _veh animateDoor ['Door_LM',0];
                            _veh animateDoor ['Door_RM',0];
                            _veh animateDoor ['Door_LF',0];
                            _veh animateDoor ['Door_RF',0];
                            _veh animateDoor ['Door_LB',0];
                            _veh animateDoor ['Door_RB',0];
                            _veh animateDoor ['DoorL_Front_Open',0];
                            _veh animateDoor ['DoorR_Front_Open',0];
                            _veh animateDoor ['DoorL_Back_Open',0];
                            _veh animateDoor ['DoorR_Back_Open ',0];
                        } else {
                            [_veh,2] remoteexeccall ["life_fnc_lockVehicle",_veh];

                            _veh animateDoor ["door_back_R",0];
                            _veh animateDoor ["door_back_L",0];
                            _veh animateDoor ['door_R',0];
                            _veh animateDoor ['door_L',0];
                            _veh animateDoor ['Door_L_source',0];
                            _veh animateDoor ['Door_rear',0];
                            _veh animateDoor ['Door_rear_source',0];
                            _veh animateDoor ['Door_1_source',0];
                            _veh animateDoor ['Door_2_source',0];
                            _veh animateDoor ['Door_3_source',0];
                            _veh animateDoor ['Door_LM',0];
                            _veh animateDoor ['Door_RM',0];
                            _veh animateDoor ['Door_LF',0];
                            _veh animateDoor ['Door_RF',0];
                            _veh animateDoor ['Door_LB',0];
                            _veh animateDoor ['Door_RB',0];
                            _veh animateDoor ['DoorL_Front_Open',0];
                            _veh animateDoor ['DoorR_Front_Open',0];
                            _veh animateDoor ['DoorL_Back_Open',0];
                            _veh animateDoor ['DoorR_Back_Open ',0];
                        };
                        ["normal", "VEHÍCULO", "Vehículo Cerrado."] spawn medel_fnc_hintSilent;
                        [_veh,"lockCarSound",50,1] remoteexec ["life_fnc_say3D",RANY];
                    };
                };
            };
        };
    };
};

_handled;
