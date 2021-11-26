
#define true 1
#define false 0

class Life_Settings {
    /* Loggin y ajustes de seguridad */
    battlEye_friendlyLogging = true; //false [predeterminado] lee los registros del server.rpt. true lee los registros de publicVariable.log. NOTA: Debido a cómo funciona diag_log, se registrará en ambos archivos de cualquier manera y la configuración es simplemente para fines de embellecimiento
    player_advancedLog = true; //log general [avanzado], ( cuando compran coches, venden coches etc ) [advanced_log]
    player_moneyLog = true; //logs de dinero [money_log]
    player_deathLog = true; //Logs de muerte [death_log]

/* Ajustes de base de datos */
    /* Datos de Guardado del Jugador */
    save_virtualItems = true; //guardar objetos virtuales a todos los bandos
    saved_virtualItems[] = { "pickaxe", "defibrillator",  "toolkit",  "fuelEmpty",  "fuelFull", " spikeStrip",  "lockpick", "goldBar",  "blastingCharge",  "boltCutter",  "defuseKit",  "storageSmall",   "storageBig", "oilUnprocessed",  "oilProcessed",  "copperUnrefined",  "copperRefined",  "ironUnrefined",  "ironRefined",  "saltUnrefined",  "saltRefined",  "sand",  "glass", "diamondUncut",  "diamondCut",  "rock",  "cement",  "heroinUnprocessed", "heroinProcessed",  "cannabis",  "marijuana",  "cocaineUnprocessed", "cocaineProcessed",  "redgull",  "coffee",  "waterBottle",  "apple",  "peach",  "tbacon", "donuts", "rabbitRaw", "rabbit",  "salemaRaw",  "salema",  "ornateRaw",  "ornate", "mackerelRaw",  "mackerel",  "tunaRaw",  "tuna",  "mulletRaw",  "mullet",  "catsharkRaw",  "catshark",  "turtleRaw",  "turtleSoup",  "henRaw",  "hen", "roosterRaw", " rooster",  "sheepRaw" , "sheep",  "goatRaw",  "goat",  "carbon",  "azufre",  "polvora",  "esposas", "vendas", "tela", "paquete", "vendasCompresivas", "pildora", "culata", "empunadura", "sangre", "morfina", "tramadol", "aguaSucia", "aguaLimpia", "portatil" };
    save_playerStats = true; //Save food, water and damage (all sides)?
    save_civilian_weapons = true; //permitir que los civiles puedan guardar armas en el inventario
    save_civilian_position = true; //guardar ultima posicion de los civiles en la base de datos
    save_civilian_position_restart = false; //Guardar la posicion de los civiles solo entre reinicios. Después de reiniciar el servidor tendran que spawnear de nuevo
    /* Para guardar la posicion de los civiles en el restart se tiene que poner en true */
    save_civilian_positionStrict = false; //Quita al jugador si es posible el registro de combate ADVERTENCIA: El servidor se bloquea y la falta de sincronización confiable puede desencadenar esto

    /* Guardado de datos del vehiculo */
    save_vehicle_virtualItems = false; //Guardar inventario virtual de vehículos.
    save_vehicle_items[] = {};
    save_vehicle_inventory = false; //Guardar el inventario del vehículo en la base de datos
    save_vehicle_fuel = true; //Guardar el nivel de combustible del vehículo en la base de datos (sacado / garage).
    save_vehicle_damage = true; //Guardar los daños del vehículo a la base de datos
    save_vehicle_illegal = false; // Esto permitirá que se avise a los policías cuando un vehículo, con elementos ilegales en él, sea incautado. Esto también guardará los elementos ilegales como prueba de delito y necesita que "save_vehicle_virtualItems" esté configurado como verdadero. Los elementos ilegales no necesitan establecerse en save_vehicle_items [] para ser guardados, si están habilitados

/* Ajustes de Sistemas */
    /* ATM & Reserva Federal */
    global_ATM = true; //Acceso a todos los ATM del Mapa (Marcados & No marcados).
    noatm_timer = 5; //Tiempo para usar el ATM después de un acto delictivo [en minutos]
    minimum_cops = 12; //Policías minimos para robar reserva federal

    /* Configuracion de Muerte */
    drop_weapons_onDeath = false; //establecer en true para que cuando mueras sueltes el arma y poder recogerla despues

    /* Configuraciones básicas del sistema */
    donor_level = true; //Habilitar el nivel de donante establecido en la base de datos (var = life_donorlevel; niveles = 0,1,2,3,4,5) IMPORTANRTE: https://www.bistudio.com/community/game-content-usage-rules & https://www.bistudio.com/monetization
    enable_fatigue = false; //poner en true para habilitar el sistema de fatiga ARMA 3.
    total_maxWeight = 24; //Variable estática para el peso máximo permitido sin tener mochila
    respawn_timer = 240;  //Cuántos segundos debe esperar un jugador, antes de poder reaparecer [Mínimo 5 segundos]

    /* Configuracion del Canal de Noticias 7 */
    news_broadcast_cost = 5000; //Precio de anuncio
    news_broadcast_cooldown = 5; //Cooldown de mensajes [En minutos]
    news_broadcast_header_length = 60; // Número de caracteres que puede contener un titulo de un anuncio ,cualquier cosa sobre esto puede cortar el anuncio ,esto depende del tamaño de la fuente y varios factores, ajustarlo con precaución.

    /* Sistema de Configuracion de Ropa */
    civ_skins = true; //habilitar o deshabilitar skins para civiles
    cop_extendedSkins = true; //habilitar o deshabilitar texturas de policia por nivel de base de datos
    clothing_noTP = true;  //Desactivar la vista previa de la ropa teletransportarse (true = no teleport / false = teleport)
    clothing_box = true; //true = teletransportarse a una caja negra / false = teletransportarse a algún lugar del mapa (Solo afecta al juego si clothing_noTP se establece como false)
    clothing_masks[] = {};

    /* Menu Escape Configuracion */
    escapeMenu_timer = 10; //Tiempo requerido para pasar antes de que pueda hacer clic en el botón abortar mision en el menú de escape [tiempo en segundos]
	escapeMenu_displayExtras = true; //Muestra la UID y el nombre del servidor especificados a continuación en el menú de escape
	escapeMenu_displayText = "By Medel"; //Texto mostrado en el menú de escape. Hacerlo corto... alrededor de 20 caracteres.

    /* Configuracion del Sistema de Gasolineras */
    pump_service = true; //Permitir a los usuarios utilizar el servicio de gasolineras en el mapa / Predeterminado = false
    service_chopper = 3000; //Coste de servicio del helicóptero en la estación de servicio del helicóptero (reparación / repostaje)
    fuelCan_refuel = 950; //Coste de repostar un depósito de combustible vacío en las bombas de la estación de combustible. (Ten cuidado con los precios de compra / venta de los bidones de combustible para evitar exploits ...)

    /* Gang System Configurations */
    gang_price = 30000; //Coste de creacion de la banda
    gang_upgradeBase = 10000; //Coste basico para comprar slots adicionales a la banda
    gang_upgradeMultiplier = 2.5; //multiplicador de coste para aumentar slots
    gang_area[] = {"gang_area_1","gang_area_2","gang_area_3"}; //variables de zona de bandas [no esta en uso]

    /* Sistema de Casas */
    house_limit = 3; //numero maximo de casas que puede tener cada jugador
    houseGarage_buyPrice = 50000;
    houseGarage_sellPrice = 25000;

    /* Configuraciones del sistema de caza y pesca */
    animaltypes_fish[] = { "Salema_F", "Ornate_random_F", "Mackerel_F", "Tuna_F", "Mullet_F", "CatShark_F", "Turtle_F" }; //IDS de los peces que puedes pescar
    animaltypes_hunting[] = { "Sheep_random_F", "Goat_random_F", "Hen_random_F", "Cock_random_F", "Rabbit_F" }; //IDS de animales que puedes cazar

    /* Restricciones de Items */
    restrict_medic_weapons = false; //false para permitir que los EMS usen cualquier arma (eliminará CUALQUIER arma que intente usar (primaria, secundaria, etc)
    restrict_clothingPickup = false; //false para establecer que los civiles puedan coger cualquier uniforme del suelo / maletero / lo que sea
    restrict_weaponPickup = false; //false para establecer que los civiles puedan recoger armas del suelo / maletero / lo que sea
    restricted_uniforms[] = {};
    restricted_weapons[] = {};

    /* Sistema de Carcel */
    jail_seize_vItems[] = {}; //Define los objetos virtuales que se te guarden al ir a prisión
    jail_seize_inventory = false; //si lo pones en true se guarda el inventario de arma 3 cuando entras a la carcel
    sendtoJail_locations[] = { "comisaria_kavala", "cop_spawn_4", "cop_spawn_5", "comisaria_pyrgos", "Correctional_Facility" }; // Ingrese el nombre de la variable desde la misión.sqm aquí para permitir que los policías envíen a una persona a la cárcel en estas ubicaciones
    jail_forceWalk = true;
    jail_timeMultiplier = 25; //Tiempo de prision (en minutos)

    /* Configuración del Sistema Médico */
    revive_cops = false; //true para habilitar que los policias puedan revivir
    revive_civ = false; //true para habilitar que los civiles puedan revivir
    revive_east = true; //false para deshabilitar que los EMS puedan revivir
    revive_fee = 800; //Cuota que pagas cuando eres revivido
    hospital_heal_fee = 500; //Precio del NPC para curarte en el hospital

    /* Configuracion de Pagas */
    bank_cop = 30000; //Con cuanto dinero empiezas de Policía
    bank_civ = 30000; //Con cuanto dinero empiezas de Civil
    bank_med = 30000; //Con cuanto dinero empiezas de EMS

    paycheck_cop = 3000; //Paga de Policias
    paycheck_civ = 800; //Paga de Civiles
    paycheck_med = 5000; //Paga de EMS

    paycheck_period = 5; //Periodo de paga (en minutos)
    bank_transferTax = .05; //cantidad que te quita cuando haces una transferencia

    /* Configuracion de Trabajos */
    delivery_points[] = { "dp_1", "dp_2", "dp_3", "dp_4", "dp_5", "dp_6", "dp_7", "dp_8", "dp_9", "dp_10", "dp_11", "dp_12", "dp_13", "dp_14", "dp_15", "dp_15", "dp_16", "dp_17", "dp_18", "dp_19", "dp_20", "dp_21", "dp_22", "dp_23", "dp_24", "dp_25" };
    fuelTank_winMultiplier = 1; 

    /* Configuraciones del sistema de cacheos */
    seize_exempt[] = {}; //Objetos de Arma que no serán capturados de los inventarios de jugadores.
    seize_uniform[] = {}; // Cualquier uniforme específico que quieras ser recogido por los jugadores
    seize_vest[] = {}; // Cualquier chaleco específico que quieras ser recogido por los jugadores
    seize_headgear[] = {}; // Cualquier gorro o casco que quieras ser recogido de los jugadores
    seize_minimum_rank = 1; //Se requiere coplevel mínimo para poder quitar las armas a los jugadores

    /* Configuraciones del Sistema de Vehiculos */
    chopShop_vehicles[] = { "Car", "Air" }; // Vehículos que pueden ser vendidos
    vehicle_infiniteRepair[] = {false, false, false, false}; //Establézcalo en true para reparaciones ilimitadas con 1 kit de herramientas false eliminará el kit de herramientas al usarlo [civililian, west, independient, east]
    vehicleShop_rentalOnly[] = { "B_MRAP_01_hmg_F", "B_Heli_Light_01_dynamicLoadout_F", "B_Boat_Armed_01_minigun_F", "I_MRAP_03_hmg_F" }; // Vehículos que solo se pueden alquilar y no comprar
    vehicleShop_3D = true; //tienda de vehiculos en 3D       false para desactivar

    /* Vehicle Purchase Prices */
    vehicle_purchase_multiplier_CIVILIAN = 1; //Precio de compra de vehículo civil = Config_Vehicle price * multiplier
    vehicle_purchase_multiplier_COP = .3; //Precio de compra de vehículo policial = Config_Vehicle price * multiplier
    vehicle_purchase_multiplier_MEDIC = .2; //Precio de compra de vehículo médico = Config_Vehicle price * multiplier
    vehicle_purchase_multiplier_OPFOR = -1; //Precio de compra de vehículo east = Config_Vehicle price * multiplier [no esta en uso]

    /* Precios de alquiler de vehículos */
    vehicle_rental_multiplier_CIVILIAN = .70; //precio de renta de coches para civiles= Config_Vehicle price * multiplier
    vehicle_rental_multiplier_COP = .2; //precio de renta de coches para polis = Config_Vehicle price * multiplier
    vehicle_rental_multiplier_MEDIC = .1; //precio de renta de coches para médicos = Config_Vehicle price * multiplier
    vehicle_rental_multiplier_OPFOR = -1; //precio de renta de coches para east = Config_Vehicle price * multiplier [no esta en uso]

    /* Precios de venta de vehiculos */
    vehicle_sell_multiplier_CIVILIAN = .5; //precio de venta de vehiculos para civiles desde garaje = Vehicle Buy Price * multiplier
    vehicle_sell_multiplier_COP = .5; //precio de venta de vehiculos para polis desde garaje = Vehicle Buy Price * multiplier
    vehicle_sell_multiplier_MEDIC = .5; //precio de venta de vehiculos para medicos desde garaje = Vehicle Buy Price * multiplier
    vehicle_sell_multiplier_OPFOR = -1; //precio de venta de vehiculos para east desde garaje = Vehicle Buy Price * multiplier [ no esta en uso ]

    /* "Otros" precios de vehículos */
    vehicle_chopShop_multiplier = .25; //Precio de chop shop para vehículos. PARA EVITAR LOS EXPLOITS NUNCA HAY QUE ESTABLCER UN NUMERO MÁS QUE PURCHASE/RENTAL Payout = Config_vehicle Price * multiplier
    vehicle_storage_fee_multiplier = -1; //precio para sacar el coche del garaje dependiendo del costo del vehiculo ( se aplica en todos los bandos ) Buy Price * multiplier [ no recomiendo cambiar esto, ahora mismo esta en 500 para todos los vehiculos]
    vehicle_cop_impound_multiplier = .0; //precio que te dan por incautar un coche  PARA EVITAR LOS EXPLOITS NUNCA HAY QUE ESTABLCER UN NUMERO MÁS QUE PURCHASE/RENTAL [RECOMIENDO DEJARLO EN 0 COMO ESTA]  Payout = Config_vehicle Price * multiplier

    disableCommanderView = true; //false - Los líderes de grupo pueden acceder a la vista de comandante. true [predeterminado]: los líderes de grupo no pueden acceder a la vista de comandante.
                                 //Se accede al comandante / vista táctica presionando [NUM] -//- Levanta la cámara significativamente más arriba y más inclinado sobre el jugador para brindar una vista táctica de la frontera del área circundante

    /* Sitema Delitos *
    /* Delitos [] = {String, Recompensa, Numero} */
    crimes[] = {
        {"STR_Crime_187","15000","187"}, //Asesinato
        {"STR_Crime_187V","15000","187V"}, //Asesinato con Vehículo
        {"STR_Crime_901","2500","901"}, //Fuga de la Carcel
        {"STR_Crime_487","8000","487"}, //Robo de Vehículo
        {"STR_Crime_215","5000","215"}, //Intento de robo de vehículo
        {"STR_Crime_483","10000","483"}, //Trafico de Drogas
        {"STR_Crime_459","20000","459"}, //Robo de Casa
        {"STR_Crime_211","5000","211"}, //Robo a persona
        {"STR_Crime_23","70000","23"} //Robar Reserva Federal
    };

    altislife_version = "5.0.0";
};

#include "Config_Clothing.hpp"
#include "Config_Licenses.hpp"
#include "Config_Vehicles.hpp"
#include "Config_vItems.hpp"
#include "Config_Weapons.hpp"
#include "Config_Gather.hpp"
#include "Config_SpawnPoints.hpp"
#include "Config_Process.hpp"
#include "Config_Housing.hpp"
#include "Config_Garages.hpp"
