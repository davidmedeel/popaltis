
/*
por: Medel
*/

#include "..\..\script_macros.hpp"

for "_i" from 0 to 1 step 0 do {
    switch (side player) do {
        case west: {
            sleep 300;
            ["ganoEXP"] spawn mav_ttm_fnc_addExp;
		};
    	case independent: {
            sleep 300;
            ["ganoEXP"] spawn mav_ttm_fnc_addExp;
		};
    };
};
