
//farmeos

class CfgGather {
    class Resources {
        //campo de manzanas
        class apple {
            amount = 5;
            zones[] = { "apple_1", "apple_2", "apple_3", "apple_4" };
            item = "";
            zoneSize = 30;
        };

        //campo de cocaina
        class cocaine_unprocessed {
            amount = 3;
            zones[] = { "cocaina_farmeo" };
            item = "";
            zoneSize = 30;
        };

        //campo de opio
        class heroin_unprocessed {
            amount = 3;
            zones[] = { "opio_farmeo" };
            item = "";
            zoneSize = 30;
        };

        //campo de marihuana
        class cannabis {
            amount = 3;
            zones[] = { "marihuana_farmeo" };
            item = "";
            zoneSize = 80;
        };

        //campo de algodon
        class algodon {
            amount = 4;
            zones[] = { "campo_algodon" };
            item = "";
            zoneSize = 40;
        };

        //campo de melocotones
        class peach {
            amount = 5;
            zones[] = { "peaches_1", "peaches_2", "peaches_3", "peaches_4" };
            item = "";
            zoneSize = 30;
        };
};

    //Minas

    class Minerals { 
        //cobre sin refinar
        class copper_unrefined {
            amount = 2;
            zones[] = { "copper_mine" };
            item = "pickaxe";
            mined[] = {"copper_unrefined"};
            zoneSize = 30;
        };

        //mena de hierro
        class iron_unrefined {
            amount = 2;
            zones[] = { "iron_mine" };
            item = "pickaxe";
            mined[] = { "iron_unrefined" };
            zoneSize = 30;
        };

        class salt_unrefined {
            amount = 2;
            zones[] = { "salt_mine" };
            item = "pickaxe";
            mined[] = { "salt_unrefined" };
            zoneSize = 30;
        };

        class sand {
            amount = 2;
            zones[] = { "sand_mine" };
            item = "pickaxe";
            mined[] = { "sand" };
            zoneSize = 30;
        };

        class carbon {
            amount = 3;
            zones[] = { "mina_carbon" };
            item = "pickaxe";
            mined[] = { "carbon" };
            zoneSize = 45;
        };

        class azufre {
            amount = 3;
            zones[] = { "mina_azufre" };
            item = "pickaxe";
            mined[] = { "azufre" };
            zoneSize = 45;
        };

        class diamond_uncut {
            amount = 2;
            zones[] = { "diamond_mine" };
            item = "pickaxe";
            mined[] = { "diamond_uncut" };
            zoneSize = 30;
        };

        class rock {
            amount = 2;
            zones[] = { "rock_quarry" };
            item = "pickaxe";
            mined[] = { "rock" };
            zoneSize = 30;
        };

        class oil_unprocessed {
            amount = 2;
            zones[] = { "oil_field_1", "oil_field_2" };
            item = "pickaxe";
            mined[] = { "oil_unprocessed" };
            zoneSize = 30;
        };
    };
};
