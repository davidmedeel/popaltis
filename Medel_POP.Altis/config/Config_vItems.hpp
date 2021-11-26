
class VirtualShops {

    //mercado de altis
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "mordaza", "vendas", "vendasCompresivas", "tramadol", "morfina", "aguaLimpia", "pildora", "rabbit", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull","storagesmall", "storagebig", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw" };
    };

    //tienda de policía
    class cop {
        name = "STR_Shops_Cop";
        side = "";
        conditions = "call life_coplevel >= 1";
        items[] = { "esposas", "toolkit", "vendas", "portatil", "vendasCompresivas", "pildora", "tramadol", "morfina", "donuts", "waterBottle", "tbacon", "coffee", "spikeStrip", "lockpick", "defusekit", "rabbit", "apple", "redgull", "fuelFull" };
    };

    //tienda médica
    class med_market {
        name = "Tienda Médica";
        side = "";
        conditions = "call life_mediclevel >= 1";
        items[] = { "waterBottle", "vendas", "vendasCompresivas", "sangre", "pildora", "tramadol", "morfina", "tbacon", "rabbit", "apple", "redgull", "toolkit", "fuelFull", "peach", "defibrillator" };
    };

    //Tienda Rebelde
    class rebel {
        name = "STR_Shops_Rebel";
        side = "";
        conditions = "license_civ_rebel";
        items[] = { "esposas", "mordaza", "vendas", "vendasCompresivas", "tramadol", "morfina", "pildora", "waterBottle", "rabbit", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "boltcutter", "blastingcharge" };
    };

    //Mercado de Bandas
    class gang {
        name = "Mercado de Bandas";
        side = "civ";
        conditions = "";
        items[] = { "mordaza", "vendas", "vendasCompresivas", "pildora", "tramadol", "morfina", "waterBottle", "rabbit", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "boltcutter", "blastingcharge" };
    };

    //comerciante de melocotones y manzanas
    class farmeo1 {
        name = "Comerciante de Manzanas y Meloctones";
        side = "civ";
        conditions = "";
        items[] = { "peach", "apple" };
    };

    //traficante de tortugas
    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        conditions = "";
        items[] = { "turtle_soup", "turtle_raw" };
    };

    //cafeteria
    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        conditions = "";
        items[] = { "coffee", "vendas", "vendasCompresivas", "tramadol", "morfina", "pildora", "donuts" };
    };

    //cafeteria de gasolinera
    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "coffee", "vendas", "vendasCompresivas", "tramadol", "morfina", "donuts", "pildora", "redgull", "toolkit", "fuelFull"};
    };

    //narcotraficante
    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "cocaine_processed", "heroin_processed", "marijuana" };
    };

    //comerciante de petroléo
    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    //mercado de pescado
    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

   //comerciante de cristal
    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        conditions = "";
        items[] = { "glass" };
    };

    //comerciante de hierro y cobre
    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        conditions = "";
        items[] = { "iron_refined", "copper_refined" };
    };

   //comerciante de diamantes
    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        conditions = "";
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    //comerciante de Sal
    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        conditions = "";
        items[] = { "salt_refined" };
    };

    //comerciante de cemento
    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        conditions = "";
        items[] = { "cement" };
    };

    //comerciante de oro
    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        conditions = "";
        items[] = { "goldbar" };
    };
};

class VirtualItems {

    //Objetos y Precios

    //esposas
	class esposas {
        variable = "esposas";
        displayName = "STR_Item_Esposas";
        weight = 1;
        buyPrice = 350;
        sellPrice = 50;
        illegal = true;
        edible = -1;
        icon = "icons\ico_esposas.paa";
    };
    
   //polvora
    class polvora {
        variable = "polvora";
        displayName = "STR_Item_Polvora";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_polvora.paa";
    };

   //Agua Sucia
    class aguaSucia {
        variable = "aguaSucia";
        displayName = "STR_Item_aguaSucia";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_agua.paa";
    };

   //Agua Limpia
    class aguaLimpia {
        variable = "aguaLimpia";
        displayName = "STR_Item_aguaLimpia";
        weight = 1;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_agua.paa";
    };

   //Portatil
    class portatil {
        variable = "portatil";
        displayName = "STR_Item_portatil";
        weight = 2;
        buyPrice = 500;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "";
    };

    //sangre
    class sangre {
        variable = "sangre";
        displayName = "STR_Item_Sangre";
        weight = 1;
        buyPrice = 80;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sangre.paa";
    };

    //Tramadol
    class tramadol {
        variable = "tramadol";
        displayName = "STR_Item_Tramadol";
        weight = 1;
        buyPrice = 120;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tramadol.paa";
    };

    //Morfina
    class morfina {
        variable = "morfina";
        displayName = "STR_Item_Morfina";
        weight = 1;
        buyPrice = 120;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_morfina.paa";
    };

    //pildora
    class pildora {
        variable = "pildora";
        displayName = "STR_Item_Pildora";
        weight = 1;
        buyPrice = 100;
        sellPrice = 20;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pildora.paa";
    };

   //tela
    class tela {
        variable = "tela";
        displayName = "STR_Item_Tela";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tela.paa";
    };

   //empuñadura
    class empunadura {
        variable = "empunadura";
        displayName = "STR_Item_Empunadura";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_empunadura.paa";
    };

   //culata
    class culata {
        variable = "culata";
        displayName = "STR_Item_Culata";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_culata.paa";
    };

    //kit de herramientas
    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 300;
        sellPrice = 150;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };

    //vendas
	class vendas {
        variable = "vendas";
        displayName = "STR_Item_Vendas";
        weight = 1;
        buyPrice = 50;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        icon = "icons\ico_vendas.paa";
    };

    //Vendas Compresivas
	class vendasCompresivas {
        variable = "vendasCompresivas";
        displayName = "STR_Item_vendasc";
        weight = 1;
        buyPrice = 50;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        icon = "icons\ico_vendasc.paa";
    };

	class mordaza {
		variable = "mordaza";
		displayName = "STR_Item_Mordaza";
		weight = 2;
		buyPrice = 1000;
		sellPrice = 100;
		illegal = true;
		edible = -1;
		icon = "icons\ico_mordaza.paa";
	};

    //paquete
	class paquete {
        variable = "paquete";
        displayName = "STR_Item_Paquete";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_paquete.paa";
    };

    //pico
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 750;
        sellPrice = 350;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };

    //desfibrilador
    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 500;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defibrillator.paa";
    };

    //bidón de combustible vacio
    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuelEmpty.paa";
    };

    //bidón de combustible lleno
    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 850;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuel.paa";
    };

   //cadena de clavos
    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 3;
        buyPrice = 500;
        sellPrice = 250;
        illegal = true;
        edible = -1;
        icon = "icons\ico_spikeStrip.paa";
    };

    //ganzúa
    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 500;
        sellPrice = 250;
        illegal = true;
        edible = -1;
        icon = "icons\ico_lockpick.paa";
    };

    //lingote de oro
    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 12;
        buyPrice = -1;
        sellPrice = 95000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_goldBar.paa";
    };

   //Carga explosiva
    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 35000;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_blastingCharge.paa";
    };

   //cizalla
    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 7500;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_boltCutter.paa";
    };

   //kit de desactivación de bombas
    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 1500;
        sellPrice = 750;
        illegal = true;
        edible = -1;
        icon = "icons\ico_defuseKit.paa";
    };

    //armario pequeño
    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 75000;
        sellPrice = 1000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageSmall.paa";
    };

    //Armario Grande
    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 150000;
        sellPrice = 1000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageBig.paa";
    };


    //Objetos de Farmeos

   //carbón
    class carbon {
        variable = "carbon";
        displayName = "STR_Item_Carbon";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_carbon.paa";
    };

   //azufre
    class azufre {
        variable = "azufre";
        displayName = "STR_Item_Azufre";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_azufre.paa";
    };

   //algodon
    class algodon {
        variable = "algodon";
        displayName = "STR_Item_Algodon";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_algodon.paa";
    };

    //Petroleo sin procesar
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 7;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilUnprocessed.paa";
    };

   //petroleo procesado
    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 7;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilProcessed.paa";
    };

    //cobre sin procesar
    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    //lingote de cobre
    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };

    //hierro sin procesar
    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ironOre.paa";
    };

    //lingote de hierro
    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 4;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_iron.paa";
    };

    //sal sin procesar
    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltUnprocessed.paa";
    };

    //sal procesada 
    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltProcessed.paa";
    };

   //Arena 
    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sand.paa";
    };

    //cristal
    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_glass.paa";
    };

    //diamante sin procesar
    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 4;
        buyPrice = -1;
        sellPrice = 750;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondUncut.paa";
    };

   //diamante procesado 
    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 3;
        buyPrice = -1;
        sellPrice = 2000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondCut.paa";
    };

   //piedra
    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };

   //cemento
    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 6;
        buyPrice = -1;
        sellPrice = 1950;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };

    //Drogas

    //opio
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };
   
    //heroina
    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 4;
        buyPrice = 3500;
        sellPrice = 2560;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinProcessed.paa";
    };

    //canabis
    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

     //marihuana
    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 1;
        buyPrice = 2800;
        sellPrice = 2350;
        illegal = true;
        edible = -1;
        icon = "icons\ico_marijuana.paa";
    };

    //cocaina sin procesar
    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    //cocaina procesada 
    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 2;
        buyPrice = -1;
        sellPrice = 5000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineProcessed.paa";
    };


    //Bébidas

   //red bull
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 1000;
        sellPrice = 100;
        illegal = false;
        edible = 100;
        icon = "icons\ico_redgull.paa";
    };

   //Cafe
    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 15;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_coffee.paa";
    };

   //botella de agua
    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 15;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_waterBottle.paa";
    };


    //Comidas

    //Manzana
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = 10;
        icon = "icons\ico_apple.paa";
    };

    //melocoton
    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 125;
        sellPrice = 80;
        illegal = false;
        edible = 10;
        icon = "icons\ico_peach.paa";
    };

   //bacon
    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = 40;
        icon = "icons\ico_tBacon.paa";
    };

    //donuts
    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 120;
        sellPrice = 60;
        illegal = false;
        edible = 30;
        icon = "icons\ico_donuts.paa";
    };

    //conejo crudo
    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1100;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rabbitRaw.paa";
    };

   //conejo
    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 1500;
        sellPrice = 1200;
        illegal = false;
        edible = 20;
        icon = "icons\ico_rabbit.paa";
    };

   //salema cocinado
    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 800;
        illegal = false;
        edible = -1;
        icon = "icons\ico_salemaRaw.paa";
    };

    //salema
    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 1200;
        sellPrice = 1000;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

   //ornate cocinado
    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 850;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ornateRaw.paa";
    };

   //ornate
    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 1000;
        sellPrice = 900;
        illegal = false;
        edible = 25;
        icon = "icons\ico_cookedFish.paa";
    };

    //verdel crudo
    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 750;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mackerelRaw.paa";
    };

   //verdel
    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 800;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

   //atun crudo
    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 850;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tunaRaw.paa";
    };
    
    //atun
    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 1250;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

   //Lisa Cruda
    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 700;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mulletRaw.paa";
    };

    //Lisa 
    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 950;
        sellPrice = 800;
        illegal = false;
        edible = 80;
        icon = "icons\ico_cookedFish.paa";
    };

    //Pez Gato Crudo
    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 800;
        illegal = false;
        edible = -1;
        icon = "icons\ico_catsharkRaw.paa";
    };

    //Pez Gato
    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 1200;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    //tortuga cruda
    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_turtleRaw.paa";
    };

    //sopa de tortuga
    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 250;
        sellPrice = 50;
        illegal = false;
        edible = 100;
        icon = "icons\ico_turtleSoup.paa";
    };

    //gallina cruda
    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 600;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wholeChickenRaw.paa";
    };

    //gallina
    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 1000;
        sellPrice = 800;
        illegal = false;
        edible = 65;
        icon = "icons\ico_wholeChicken.paa";
    };

    //gallo crudo
    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_chickenDrumstickRaw.paa";
    };

    //gallo
    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 800;
        sellPrice = 500;
        illegal = false;
        edible = 45;
        icon = "icons\ico_chickenDrumstick.paa";
    };

   //oveja cruda
    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_lambChopRaw.paa";
    };

   //oveja
    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 800;
        illegal = false;
        edible = 100;
        icon = "icons\ico_lambChop.paa";
    };

    //Cabra cruda
    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 800;
        illegal = false;
        edible = -1;
        icon = "icons\ico_muttonLegRaw.paa";
    };

    //cabra
    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 1500;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        icon = "icons\ico_muttonLeg.paa";
    };
};
