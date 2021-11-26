
#include "\medel_server\script_macros.hpp"

private["_player", "_playeruid", "_query", "_time"];

_player = _this select 0;
_playeruid = _this select 1;
_time = _this select 2;
_time = ceil _time;
_player = owner _player;
_query = format["UPDATE players SET arrested='1', jail_time='%1' WHERE pid='%2'", _time, _playeruid];
[_query,1] call DB_fnc_asyncCall;
