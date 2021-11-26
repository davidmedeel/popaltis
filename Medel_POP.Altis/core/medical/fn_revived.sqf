
#include "..\..\script_macros.hpp"

private ["_medic","_dir","_reviveCost"];
_medic = param [0,"Unknown Medic",[""]];
_reviveCost = LIFE_SETTINGS(getNumber,"revive_fee");

[life_save_gear] spawn life_fnc_loadDeadGear;
life_corpse setVariable ["realname",nil,true];
[life_corpse] remoteexeccall ["life_fnc_corpse",RANY];

_dir = getDir life_corpse;
hint parsetext format ["<t color='#26ff00'><t size='2.6'>MÉDICO<br/><t color='#ffffff'><t size='1.3'>Te han revivido y una cuota de %2€ ha sido tomada de tu cuenta por sus servicio.<t/>", _medic,[_reviveCost] call life_fnc_numberText];

closeDialog 0;
life_deathCamera cameraEffect ["TERMINATE","BACK"];
camDestroy life_deathCamera;

if (BANK > _reviveCost) then {
    BANK = BANK - _reviveCost;
} else {
    BANK = 0;
};

player setDir _dir;
player setPosASL (visiblePositionASL life_corpse);
life_corpse setVariable ["Revive",nil,true];
life_corpse setVariable ["name",nil,true];
[life_corpse] remoteexeccall ["life_fnc_corpse",RANY];
deleteVehicle life_corpse;

life_action_inUse = false;
life_is_alive = true;

player setVariable ["Revive",nil,true];
player setVariable ["name",nil,true];
player setVariable ["Reviving",nil,true];

[] call life_fnc_playerSkins;
[] call medel_fnc_actualizaHUD;
[] call SOCK_fnc_updateRequest;

if (alive player) then {
	0 = ["DynamicBlur", 400, [10]] spawn 
	{
		params ["_name", "_priority", "_effect", "_handle"];
		while {
			_handle = ppEffectCreate [_name, _priority];
			_handle < 0
		} do {
			_priority = _priority + 1;
		};
		_handle ppEffectEnable true;
		_handle ppEffectAdjust _effect;
		_handle ppEffectCommit 1;
		waitUntil {ppEffectCommitted _handle};
		["normal", "MÉDICO", "Necesitas una pildora para poder ver bien."] spawn medel_fnc_hintSilent;
	};
};
