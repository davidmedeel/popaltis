
scriptName "fn_start";

#define __filename "fn_start.sqf"

if (isNil "mav_tuning_lastVisit") then
{
	mav_tuning_lastVisit = -999;
};

if !(license_civ_don) exitWith {hint parsetext "<t color='#0095ff'><t size='4'><t align='center'>AVISO<br/><t align='left'><t size='1.8'><t color='#0361a3'><t align='center'>Necesitas ser Donador<t/>"};
if (vehicle player == player) exitWith {hint parsetext "<t color='#0095ff'><t size='4'><t align='center'>AVISO<br/><t align='left'><t size='1.5'><t color='#0361a3'><t align='center'>Tienes que estar en un vehiculo<t/>"};
if (driver vehicle player != player) exitWith {hint parsetext "<t color='#0095ff'><t size='4'><t align='center'>AVISO<br/><t align='left'><t size='1.5'><t color='#0361a3'><t align='center'>Necesitas ser el conductor del vehículo<t/>"};
if ((count crew vehicle player) > 1) exitWith {hint parsetext "<t color='#0095ff'><t size='4'><t align='center'>AVISO<br/><t align='left'><t size='1.5'><t color='#0361a3'><t align='center'>Tienes que estar solo en el vehículo<t/>"};
if (isNil {(vehicle player) getVariable "vehicleID"}) exitWith {hint parsetext "<t color='#0095ff'><t size='4'><t align='center'>AVISO<br/><t align='left'><t size='1.5'><t color='#0361a3'><t align='center'>El vehículo debe ser guardado en un garaje antes de que sea tuneado<t/>"};
if (diag_tickTime - mav_tuning_lastVisit < 10) exitWith {hint parsetext "<t color='#0095ff'><t size='4'><t align='center'>AVISO<br/><t align='left'><t size='1.5'><t color='#0361a3'><t align='center'>Ya estás en la tienda tunning<t/>"};

_veh = vehicle player;

mav_tuning_lastVisit = diag_tickTime;

_configName = [typeOf _veh] call mav_tuning_fnc_getMasterConfig;

if (_configName == "") exitWith {hint parsetext "<t color='#0095ff'><t size='4'><t align='center'>AVISO<br/><t align='left'><t size='1.5'><t color='#0361a3'><t align='center'>Este vehículo no puede ser tuneado<t/>"};

disableUserInput true;

5000 cutRsc ["maverick_dialog_tuning_leaveentertransition","PLAIN"];
sleep 4;

if ((count crew vehicle player) > 1) exitWith {
	hint parsetext "<t color='#0095ff'><t size='4'><t align='center'>AVISO<br/><t align='left'><t size='1.5'><t color='#0361a3'><t align='center'>Tienes que estar solo en el vehículo<t/>";
	disableUserInput false;
};

disableUserInput false;

[vehicle player] remoteexec ["mav_tuning_fnc_hide",2];
waitUntil {isObjectHidden (vehicle player)};
(vehicle player) allowDamage false;

{
	_x hideObject true;
} forEach vehicles;

_veh hideObject false;

if (isNil {_veh getVariable "mav_tuning"}) then {
	[_veh] call mav_tuning_fnc_applyDefaults;
};

_data = _veh getVariable "mav_tuning";

if ((_data select 1) == "") then {
	_data set [1, (getObjectTextures _veh) select 0];
};

if (((_data select 1) find "mpmissions\__cur_mp.altis\") != -1) then {
	_data set [1, (_data select 1) select [25]];
};

if (((_data select 1) find "mpmissions\__cur_mp.tanoa\") != -1) then {
	_data set [1, (_data select 1) select [25]];
};

if (((_data select 1) find "mpmissions\__cur_mp.malden\") != -1) then {
	_data set [1, (_data select 1) select [26]];
};

if ((_data select 1) != "") then {
	diag_log format ["Sistema Tunning: Tuneando vehiculo %1", (_data select 1)];
	_veh setObjectTextureGlobal [0, (_data select 1)];
} else {
	diag_log "Sistema Tuning: No se ha encontrado textura personalizado";
};

_veh setVelocity [0, 0, 0];

player action ["lightOn", _veh];
player action ["engineOff", _veh];

showChat false;
hint "";

_camPos = getArray(missionConfigFile >> "Maverick_Tuning" >> worldName >> "Camera" >> "pos");
_camTarget = getArray(missionConfigFile >> "Maverick_Tuning" >> worldName >> "Camera" >> "target");
_vehPos = getArray(missionConfigFile >> "Maverick_Tuning" >> worldName >> "Vehicle" >> "pos");
_vehDir = getNumber(missionConfigFile >> "Maverick_Tuning" >> worldName >> "Vehicle" >> "dir");
_buildingName = getText(missionConfigFile >> "Maverick_Tuning" >> worldName >> "Building" >> "type");
_buildingPos = getArray(missionConfigFile >> "Maverick_Tuning" >> worldName >> "Building" >> "pos");
_buildingDir = getNumber(missionConfigFile >> "Maverick_Tuning" >> worldName >> "Building" >> "dir");

mav_tuning_object = "camera" camCreate (getPos player);
mav_tuning_object cameraEffect ["Internal", "Back"];
mav_tuning_object camSetFOV .65;
mav_tuning_object camSetFocus [2, 1];
mav_tuning_object camSetPos _camPos;
mav_tuning_object camSetTarget _camTarget;
mav_tuning_object camCommit 0;

_building = _buildingName createVehicleLocal _buildingPos;
_building setPosATL _buildingPos;
_building setDir _buildingDir;
mav_tuning_building = _building;

mav_tuning_nightlight = "#lightpoint" createVehicleLocal [0,0,0];
mav_tuning_nightlight setLightColor [250,250,250];
mav_tuning_nightlight setLightAmbient [1,1,1];
mav_tuning_nightlight setLightAttenuation [1,1,1,0];
mav_tuning_nightlight setLightIntensity 10;
mav_tuning_nightlight setLightUseFlare true;
mav_tuning_nightlight setLightFlareSize 0.2;
mav_tuning_nightlight setLightFlareMaxDistance 50;
mav_tuning_nightlight setPosATL _camPos;

mav_tuning_originalPosition = getPos _veh;

_veh setPosATL _vehPos;
_veh setDir _vehDir;


sleep 4;

waitUntil {createDialog "mav_tuning_dialog_main"};

(findDisplay 5100) displayAddEventHandler ["KeyDown",{
	_handled = false;
	if ((_this select 1) == 1) then
	{
		_handled = true;
	};
	if ((_this select 1) == 28) then
	{
		[] spawn mav_tuning_fnc_purchaseSelectedModification;
		_handled = true;
	};
	_handled;
}];
((findDisplay 5100) displayCtrl 0) ctrlAddEventHandler ["LBSelChanged",{
	_this spawn mav_tuning_fnc_loadPreview;
}];
((findDisplay 5100) displayCtrl 0) ctrlAddEventHandler ["LBDblClick",{
	[] spawn mav_tuning_fnc_purchaseSelectedModification;
}];
((findDisplay 5100) displayCtrl 1) ctrlAddEventHandler ["ButtonClick",{
	[] spawn mav_tuning_fnc_exit;
}];

[typeOf (vehicle player)] spawn mav_tuning_fnc_mainMenuForType;
