
#include "script_macros.hpp"

if (!hasInterface && !isServer) exitWith {
    [] call compile preprocessFileLineNumbers "\life_hc\initHC.sqf";
};

CONST(BIS_fnc_endMission,BIS_fnc_endMission);

if (hasInterface) then {
    player addEventHandler ["GetOutMan", {
        life_cinturon = false;
        [] call medel_fnc_actualizaHUD;
    }];
};

if (hasInterface) then {
    player addEventHandler ["GetInMan", {
        life_cinturon = false;
        [] call medel_fnc_actualizaHUD;
    }];
};

//showHUD [true, true, true, true, true, true, true, true]; 

[] execVM "core\init.sqf";
[] execVM "estrada\initEstrada.sqf";
[] execVM "medel\initMedel.sqf";
[] execVM "ica\initIca.sqf";

("CapaLogo" call BIS_fnc_rscLayer) cutRsc ["Logo","PLAIN",1,false];

life_tapones = 0;

player createDiarySubject ["pop","Plata o Plomo"];
player createDiaryRecord ["pop", ["www.plataoplomo.es", "Servidor by Medel"]];
player createDiarySubject ["credito","© 2019 - 2020 - Medel"];
