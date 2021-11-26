
class WeaponShops {

    //tienda General
    class genstore {
        name = "Tienda General";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 0, "" },
            { "ItemGPS", "", 150, 0, "" },
            { "ItemMap", "", 100, 0, "" },
            { "ItemCompass", "", 75, 0, "" },
            { "ItemWatch", "", 75, 0, "" },
            { "NVGoggles", "", 3000, 0, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //cafeteria
    class f_station_store {
        name = "Cafeteria";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 0, "" }, //Prismáticos
            { "ItemGPS", "", 150, 0, "" }, //GPS
            { "ItemMap", "", 100, 0, "" }, //Mapa
            { "ItemCompass", "", 75, 0, "" }, //Brújula
            { "ItemWatch", "", 75, 0, "" }, //Reloj
            { "NVGoggles", "", 3000, 0, "" } //Visión Nocturna
        };
        mags[] = {};
        accs[] = {};
    };

    //Tienda Médica
    class med_basic {
        name = "Tienda Médica";
        side = "";
        conditions = "call life_mediclevel >= 1";
        items[] = {
            { "ItemGPS", "", 150, 0, "" }, //GPS
            { "Binocular", "", 150, 0, "" }, //Prismáticos
            { "NVGoggles_OPFOR", "", 1000, 0, "" } //visión nocturna
        };
        mags[] = {};
        accs[] = {};
    };
};
