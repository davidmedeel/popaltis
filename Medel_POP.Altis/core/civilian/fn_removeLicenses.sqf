
#include "..\..\script_macros.hpp"

private "_state";

_state = param [0,1,[0]];

switch (_state) do {
    case 0: {
        missionNamespace setVariable [LICENSE_VARNAME("rebel","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("driver","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("heroin","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("marijuana","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("cocaine","civ"),false];
    };

    case 2: {
        if (missionNamespace getVariable LICENSE_VARNAME("driver","civ") || missionNamespace getVariable LICENSE_VARNAME("pilot","civ") || missionNamespace getVariable LICENSE_VARNAME("trucking","civ") || missionNamespace getVariable LICENSE_VARNAME("boat","civ")) then {
            missionNamespace setVariable [LICENSE_VARNAME("pilot","civ"),false];
            missionNamespace setVariable [LICENSE_VARNAME("driver","civ"),false];
            missionNamespace setVariable [LICENSE_VARNAME("trucking","civ"),false];
            missionNamespace setVariable [LICENSE_VARNAME("boat","civ"),false];
            hint localize "STR_Civ_LicenseRemove_1";
        };
    };

    case 3: {
        if (missionNamespace getVariable LICENSE_VARNAME("gun","civ")) then {
            missionNamespace setVariable [LICENSE_VARNAME("gun","civ"),false];
            hint localize "STR_Civ_LicenseRemove_2";
        };
    };
};
