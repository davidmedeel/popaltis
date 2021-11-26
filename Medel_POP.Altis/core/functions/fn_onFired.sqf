
#include "..\..\script_macros.hpp"

private ["_ammoType","_projectile"];
_ammoType = _this select 4;
_projectile = _this select 6;

if (_ammoType isEqualTo "GrenadeHand_stone") then
{
    _projectile spawn {
        private "_position";
        while {!isNull _this} do
        {
            _position = ASLtoATL (visiblePositionASL _this);
            sleep 0.1;
        };
        [_position] remoteexec ["life_fnc_flashbang",RCLIENT];
    };
};
