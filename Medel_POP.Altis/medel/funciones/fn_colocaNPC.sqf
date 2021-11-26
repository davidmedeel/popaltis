
/*
por: Medel
*/

_param = param [0];

if (_param isEqualTo "Init") exitWith {

	NPC_POLI_KAVALA addAction ["<t size='1.5'>Gestionar Withelists<t\>",{[] spawn medel_fnc_daWithelist;},[],1.5,true,true,"","(playerside isEqualTo west)",5,false,"",""];

	NPC_POLI_PYRGOS addAction ["<t size='1.5'>Gestionar Withelists<t\>",{[] spawn medel_fnc_daWithelist;},[],1.5,true,true,"","(playerside isEqualTo west)",5,false,"",""];

	NPC_POLI_AGIOS addAction ["<t size='1.5'>Gestionar Withelists<t\>",{[] spawn medel_fnc_daWithelist;},[],1.5,true,true,"","(playerside isEqualTo west)",5,false,"",""];

	NPC_POLI_SOFIA addAction ["<t size='1.5'>Gestionar Withelists<t\>",{[] spawn medel_fnc_daWithelist;},[],1.5,true,true,"","(playerside isEqualTo west)",5,false,"",""];

	NPC_EMS_KAVALA addAction ["<t size='1.5'>Gestionar Withelists<t\>",{[] spawn medel_fnc_daWithelist;},[],1.5,true,true,"","(playerside isEqualTo independent)",5,false,"",""];

	NPC_EMS_PYRGOS addAction ["<t size='1.5'>Gestionar Withelists<t\>",{[] spawn medel_fnc_daWithelist;},[],1.5,true,true,"","(playerside isEqualTo independent)",5,false,"",""];

	NPC_EMS_AEREOPUERTO addAction ["<t size='1.5'>Gestionar Withelists<t\>",{[] spawn medel_fnc_daWithelist;},[],1.5,true,true,"","(playerside isEqualTo independent)",5,false,"",""];

	NPC_EMS_SOFIA addAction ["<t size='1.5'>Gestionar Withelists<t\>",{[] spawn medel_fnc_daWithelist;},[],1.5,true,true,"","(playerside isEqualTo independent)",5,false,"",""];
};
