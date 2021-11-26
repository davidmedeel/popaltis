
// -- Habilidades de Tiro

class perk_gunsspecialist_lessRecoil_1 {
	displayName = "Control de Retroceso";
	requiredPerkPoints = 5;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "Nivel Necesario: 5 SP: 5";
	description = "Aprende a compensar mejor el retroceso de tus Armas<br/><br/><t color='#10FF45'>-5% menos de Retroceso</t>";
	initScript = "medel\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_2 {
	displayName = "Control de Retroceso 2";
	requiredPerkPoints = 6;
	requiredLevel = 16;
	requiredPerk = "perk_gunsspecialist_lessRecoil_1";
	subtitle = "Nivel Necesario: 16 SP: 6";
	description = "Aprende a compensar mejor el retroceso de tus Armas<br/><br/><t color='#10FF45'>-10% menos de Retroceso</t>";
	initScript = "medel\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_3 {
	displayName = "Control de Retroceso 3";
	requiredPerkPoints = 9;
	requiredLevel = 30;
	requiredPerk = "perk_gunsspecialist_lessRecoil_2";
	subtitle = "Nivel Necesario: 30 SP: 9";
	description = "Aprende a compensar mejor el retroceso de tus Armas<br/><br/><t color='#10FF45'>-20% menos de Retroceso</t>";
	initScript = "medel\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

// -- Pagas

class perk_paycheck_1 {
	displayName = "Aumento de Paga";
	requiredPerkPoints = 2;
	requiredLevel = 2;
	requiredPerk = "";
	subtitle = "Nivel Necesario: 2 SP: 2";
	description = "Recibe más dinero en tu Paga<br/><br/><t color='#10FF45'>+25% más de Paga</t>";
	initScript = "medel\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_2 {
	displayName = "Aumento de Paga 2";
	requiredPerkPoints = 3;
	requiredLevel = 8;
	requiredPerk = "perk_paycheck_1";
	subtitle = "Nivel Necesario: 8 SP: 3";
	description = "Recibe más dinero en tu Paga<br/><br/><t color='#10FF45'>+50% más de Paga</t>";
	initScript = "medel\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_3 {
	displayName = "Aumento de Paga 3";
	requiredPerkPoints = 6;
	requiredLevel = 21;
	requiredPerk = "perk_paycheck_2";
	subtitle = "Nivel Necesario: 21 SP: 6";
	description = "Recibe más dinero en tu Paga<br/><br/><t color='#10FF45'>+100% más de Paga</t>";
	initScript = "medel\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

// -- Habilidades de Procesamiento

class perk_processing_1 {
	displayName = "Velocidad de Procesado";
	requiredPerkPoints = 3;
	requiredLevel = 4;
	requiredPerk = "";
	subtitle = "Nivel Necesario: 4 SP: 3";
	description = "Aprende a procesar de una manera más eficiente<br/><br/><t color='#10FF45'>+10% Rapidez de Procesado</t>";
	initScript = "medel\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_2 {
	displayName = "Velocidad de Procesado 2";
	requiredPerkPoints = 3;
	requiredLevel = 7;
	requiredPerk = "perk_processing_1";
	subtitle = "Nivel Necesario: 7 SP: 3";
	description = "Aprende a procesar de una manera más eficiente<br/><br/><t color='#10FF45'>+15% Rapidez de Procesado</t>";
	initScript = "medel\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_3 {
	displayName = "Velocidad de Procesado 3";
	requiredPerkPoints = 4;
	requiredLevel = 17;
	requiredPerk = "perk_processing_2";
	subtitle = "Nivel Necesario: 17 SP: 4";
	description = "Aprende a procesar de una manera más eficiente<br/><br/><t color='#10FF45'>+25% Rapidez de Procesado</t>";
	initScript = "medel\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// -- Habilidades de Ganzuar

class perk_locksmith_1 {
	displayName = "Cerrajero";
	requiredPerkPoints = 5;
	requiredLevel = 7;
	requiredPerk = "";
	subtitle = "Nivel Necesario: 7 SP: 5";
	description = "Aprende a reducir el tiempo de ganzuado<br/><br/><t color='#10FF45'>+10% Rapidez de Ganzuado</t>";
	initScript = "medel\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_locksmith_2 {
	displayName = "Cerrajero 2";
	requiredPerkPoints = 6;
	requiredLevel = 16;
	requiredPerk = "perk_locksmith_1";
	subtitle = "Nivel Necesario: 16 SP: 6";
	description = "Aprende a reducir el tiempo de ganzuado<br/><br/><t color='#10FF45'>+15% Rapidez de Ganzuado</t>";
	initScript = "medel\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_locksmith_3 {
	displayName = "Cerrajero 3";
	requiredPerkPoints = 4;
	requiredLevel = 28;
	requiredPerk = "perk_locksmith_2";
	subtitle = "Nivel Necesario: 28 SP: 4";
	description = "Aprende a reducir el tiempo de ganzuado<br/><br/><t color='#10FF45'>+25% Rapidez de Ganzuado</t>";
	initScript = "medel\maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};
