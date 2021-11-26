
#include "\medel_server\script_macros.hpp"

private ["_id","_ret"];
_id = owner (_this select 0);
_ret = owner (_this select 1);

[_id] remoteExecCall ["life_fnc_adminID",_ret];
