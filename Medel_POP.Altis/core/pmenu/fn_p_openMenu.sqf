
#include "..\..\script_macros.hpp"

if (!alive player || dialog) exitWith {};
createDialog "playerSettings";
disableSerialization;

switch (playerSide) do {
    case west: {
        ctrlShow[2011,false];
    };

    case civilian: {
        ctrlShow[2012,false];
    };

    case independent: {
        ctrlShow[2012,false];
        ctrlShow[2011,false];
    };
};

if (FETCH_CONST(life_adminlevel) < 1) then {
    ctrlShow[2021,false];
};

[] call life_fnc_p_updateMenu;
