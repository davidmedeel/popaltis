
#include "..\..\script_macros.hpp"

private ["_display","_units","_type"];

disableSerialization;
waitUntil {!isNull findDisplay 3000};
_display = findDisplay 3000;
_units = _display displayCtrl 3004;

ctrlSetText [3003, ""];
lbClear _units;

if (FETCH_CONST(life_adminlevel) < 1) then {
    ctrlShow[3020,false];
    ctrlShow[3021,false];
    ctrlShow[1201,false];
    ctrlShow[1202,false];
};
{
    if (alive _x && !(_x isEqualTo player)) then {
        _type = switch (side _x) do {
            case west: {"Policía"};
            case civilian: {"Civil"};
            case independent: {"EMS"};
        };
        _units lbAdd format ["%1 (%2)",_x getVariable ["realname",name _x],_type];
        _units lbSetData [(lbSize _units)-1,str(_x)];
    };
} forEach playableUnits;

lbSetCurSel [3004,0];
