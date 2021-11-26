
private ["_uid", "_time_gathered"];

_uid = _this select 0;
_time_gathered = ((_this select 1) * 60);

[_uid] call TON_fnc_getPlayTime;

{
    if ((_x select 0) isEqualTo _uid) exitWith {
        _x set [1, _time_gathered];
        _x set [2, time];
    };
} forEach TON_fnc_playtime_values;
