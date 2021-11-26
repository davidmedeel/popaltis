
life_actions = [];

switch (playerSide) do {

    //Civil
    case civilian: {
        // Tirar red de pesca
        life_actions pushBack (player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']);

        //Robar Persona
        life_actions pushBack (player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable ["robbed",false]) ']);

        //Fast Rope
        life_actions = life_actions + [player addAction["Fast Rope",medel_fnc_fastRope,"",99,false,false,"", ' (vehicle player) != player && !isNull (vehicle player) && (vehicle player) isKindOf "Air" && driver (vehicle player) != player && (getPos player) select 2 <= 50 && (getPos player) select 2 >= 15 && speed vehicle player < 10 && !(player getVariable["transporting",false]) ']];

        //Activar chaleco bomba
        life_actions = life_actions + [player addAction["<t color='#FF0000'><t size='1.5'>Detonar Chaleco Bomba</t>",life_fnc_suicideBomb,"",0,false,false,"",' vest player == "V_HarnessOGL_gry" && alive player && playerSide == civilian && !life_istazed && !(player getVariable "restrained") && !(player getVariable "Escorting") && !(player getVariable "transporting")']];
    };
    //Policia
    case west: {
        //Fast Rope
        life_actions = life_actions + [player addAction["Fast Rope",medel_fnc_fastRope,"",99,false,false,"", ' (vehicle player) != player && !isNull (vehicle player) && (vehicle player) isKindOf "Air" && driver (vehicle player) != player && (getPos player) select 2 <= 50 && (getPos player) select 2 >= 15 && speed vehicle player < 10 && !(player getVariable["transporting",false]) ']];
    };
    //EMS
    case independent: {
        //Fast Rope
        life_actions = life_actions + [player addAction["Fast Rope",medel_fnc_fastRope,"",99,false,false,"", ' (vehicle player) != player && !isNull (vehicle player) && (vehicle player) isKindOf "Air" && driver (vehicle player) != player && (getPos player) select 2 <= 50 && (getPos player) select 2 >= 15 && speed vehicle player < 10 && !(player getVariable["transporting",false]) ']];
    };
};
