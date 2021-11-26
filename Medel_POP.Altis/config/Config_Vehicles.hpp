 
class CarShops {
    
    //tienda de coches de civiles
    class civ_car {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            { "B_Quadbike_01_F", "" }, //Moto de 4 ruedas
            { "C_Hatchback_01_F", "" }, //Ranchera
            { "C_Hatchback_01_sport_F", "" }, //Ranchera Deportiva
            { "C_Offroad_01_F", "" }, //Todoterreno
            { "C_SUV_01_F", "" }, //Suv 
            { "C_Offroad_02_unarmed_F", "" }, //MB 4WD [DLC APEX]
            { "C_Offroad_01_covered_F", "" }, //todoterreno cubierto
            { "C_Van_01_box_F", "" }, //furgón
            { "C_Van_01_transport_F", "" }, //camión
            { "C_Tractor_01_F", "" }, //tractor
			{ "C_Van_02_transport_F", "" }, //Furgoneta de Transporte
			{ "C_Van_02_vehicle_F", "" } //Furgoneta de Carga
        };
    };
	
	//Tienda de Coches de Donador
    class don_car {
        side = "civ";
        conditions = "license_civ_don";
        vehicles[] = {
            { "B_Quadbike_01_F", "" }, //Moto de 4 ruedas
            { "C_Hatchback_01_F", "" }, //Ranchera
            { "C_Hatchback_01_sport_F", "" }, //Ranchera Deportiva
            { "C_Offroad_01_F", "" }, //Todoterreno
            { "C_SUV_01_F", "" }, //Suv 
            { "C_Offroad_02_unarmed_F", "" }, //MB 4WD
            { "C_Van_01_box_F", "" }, //furgón
            { "C_Van_01_transport_F", "" }, //camión
            { "C_Tractor_01_F", "" }, //tractor
			{ "C_Van_02_transport_F", "" }, //Furgoneta de Transporte
			{ "C_Van_02_vehicle_F", "" }, //Furgoneta de Carga
            { "B_Quadbike_01_F", "" }, //moto de cuatro ruedas
			{ "B_G_Offroad_01_armed_F", "" },
			{ "B_CTRG_LSV_01_light_F", "" }, //Prowler Ligero
			{ "O_T_LSV_02_unarmed_F", "" }, //Qilin (sin armas)
			{ "O_T_LSV_02_armed_F", "" },
			{ "O_MRAP_02_F", "" },
			{ "O_MRAP_02_hmg_F", "" },
            { "B_T_LSV_01_armed_F", "" },
			{ "I_MRAP_03_F", "" },
            { "I_G_Offroad_01_armed_F", "" },
            { "C_Truck_02_transport_F", "" }, //Transporte Zamak
            { "C_Offroad_01_covered_F", "" }, //todoterreno cubierto
			{ "C_Truck_02_covered_F", "" }, //Transporte Zamak Cubierto
            { "B_Truck_01_transport_F", "" }, //Transporte HEMTT
			{ "B_Truck_01_covered_F", "" }, //Transporte HEMTT (cubierto)
			{ "B_Truck_01_box_F", "" }, //HEMTT (Caja)
			{ "O_Truck_03_transport_F", "" }, //transporte tempest 
			{ "O_Truck_03_covered_F", "" }, //transporte tempest (cubierto)
			{ "O_Truck_03_device_F", "" }, // Tempest (dispositivo)
			{ "B_G_Van_01_fuel_F", "" } //Camión de Combustible
        };
    };
	
	//tienda de helicopteros de donador
    class don_air {
        side = "civ";
        conditions = "license_civ_don";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "" },
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "C_Plane_Civil_01_F", "" },
			{ "B_Heli_Attack_01_dynamicLoadout_F", "" }, 
			{ "B_Heli_Transport_03_unarmed_F", "" },
			{ "B_T_VTOL_01_infantry_F", "" },
			{ "O_Heli_Attack_02_dynamicLoadout_F", "" },
			{ "O_Heli_Transport_04_bench_F", "" },
			{ "O_T_VTOL_02_infantry_dynamicLoadout_F", "" },
			{ "I_Heli_Transport_02_F", "" },
			{ "O_Plane_Fighter_02_F", "" },
			{ "I_Plane_Fighter_03_AA_F", "" },
			{ "B_Plane_Fighter_01_Stealth_F", "" }
        };
    };
	
	//tienda karts de donador
    class kart_shop_don {
        side = "civ";
        conditions = "license_civ_don";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" }, //Kart (Bluking)
            { "C_Kart_01_Fuel_F", "" }, //kart (Fuel)
            { "C_Kart_01_Red_F", "" }, //kart (Redstone)
            { "C_Kart_01_Vrana_F", "" } //kart (Vrana)
        };
    };

    //tienda de karts
    class kart_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" }, //Kart (Bluking)
            { "C_Kart_01_Fuel_F", "" }, //kart (Fuel)
            { "C_Kart_01_Red_F", "" }, //kart (Redstone)
            { "C_Kart_01_Vrana_F", "" } //kart (Vrana)
        };
    };

   //tienda de camiones
    class civ_truck {
        side = "civ";
        conditions = "license_civ_trucking";
        vehicles[] = {
            { "C_Truck_02_transport_F", "" }, //Transporte Zamak
			{ "C_Truck_02_covered_F", "" }, //Transporte Zamak Cubierto
            { "B_Truck_01_transport_F", "" }, //Transporte HEMTT
			{ "B_Truck_01_covered_F", "" }, //Transporte HEMTT (cubierto)
			{ "B_Truck_01_box_F", "" }, //HEMTT (Caja)
			{ "O_Truck_03_transport_F", "" }, //transporte tempest 
			{ "O_Truck_03_covered_F", "" }, //transporte tempest (cubierto)
			{ "O_Truck_03_device_F", "" }, // Tempest (dispositivo)
			{ "B_G_Van_01_fuel_F", "" } //Camión de Combustible
        };
    };

    //tienda de helicóteros de civiles
    class civ_air {
        side = "civ";
        conditions = "license_civ_pilot";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "" }, //M-900
			{ "B_Heli_Light_01_F", "" }, //Hummingbird
            { "C_Plane_Civil_01_F", "" } //Cesar BTT
        };
    };

    //tienda de barcos civiles
     class civ_ship {
        side = "civ";
        conditions = "license_civ_boat";
        vehicles[] = {
            { "C_Rubberboat", "" }, //bote salvavidas
            { "C_Boat_Civil_01_F", "" }, //lancha motora
            { "C_Boat_Transport_02_F", "" } //RHIB [Apex DLC]
        };
    };

   //tienda de vehiculos rebelde
    class reb_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" }, //moto de cuatro ruedas
			{ "B_G_Offroad_01_armed_F", "" },
			{ "B_CTRG_LSV_01_light_F", "" }, //Prowler Ligero
			{ "O_T_LSV_02_unarmed_F", "" }, //Qilin  (sin armas)
			{ "O_T_LSV_02_armed_F", "" },
			{ "O_MRAP_02_F", "" },
			{ "O_MRAP_02_hmg_F", "" },
            { "B_T_LSV_01_armed_F", "" },
			{ "I_MRAP_03_F", "" },
            { "I_G_Offroad_01_armed_F", "" },
            { "C_Heli_Light_01_civil_F", "" },
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "C_Plane_Civil_01_F", "" },
			{ "B_Heli_Attack_01_dynamicLoadout_F", "" }, 
			{ "B_Heli_Transport_03_unarmed_F", "" },
			{ "B_T_VTOL_01_infantry_F", "" },
			{ "O_Heli_Attack_02_dynamicLoadout_F", "" },
			{ "O_Heli_Transport_04_bench_F", "" },
			{ "O_T_VTOL_02_infantry_dynamicLoadout_F", "" },
			{ "I_Heli_Transport_02_F", "" },
			{ "O_Plane_Fighter_02_F", "" },
			{ "I_Plane_Fighter_03_AA_F", "" },
			{ "B_Plane_Fighter_01_Stealth_F", "" }
        };
    };

    //tienda de barcos médicos
    class med_shop {
        side = "med";
        conditions = "call life_mediclevel >= 1";
        vehicles[] = {
			{ "C_SUV_01_F", "" }, //suv
            { "C_Hatchback_01_sport_F", "" }, //ranchera deportiva
            { "C_Van_02_medevac_F", "" } //ambulancia
        };
    };

    //tienda de helicopteros médicos
    class med_air_hs {
        side = "med";
        conditions = "license_med_gar";
        vehicles[] = {
            { "B_Heli_Light_01_stripped_F", "call life_mediclevel >= 1" }, //humingbird
			{ "O_Heli_Light_02_unarmed_F", "call life_mediclevel >= 1" } //orca
        };
    };

    //tienda de barcos médicos
     class med_ship {
        side = "med";
        conditions = "license_med_SalvamentoMaritimo";
        vehicles[] = {
            { "C_Boat_Civil_01_rescue_F", "call life_mediclevel >= 1" }, //lancha de rescate
            { "O_Lifeboat", "call life_mediclevel >= 1" } //bote salvavidas
        };
    };

   //tienda de coches de policia
    class cop_car {
        side = "cop";
        conditions = "call life_coplevel >= 1";
        vehicles[] = {
            { "C_SUV_01_F", "call life_coplevel >= 1" }, //suv
            { "C_Hatchback_01_sport_F", "call life_coplevel >= 1" }, //ranchera deportiva
            { "C_Offroad_01_F", "call life_coplevel >= 1" }, //Todoterreno
            { "B_GEN_Van_02_transport_F", "call life_coplevel >= 1" }, //Furgoneta de Transporte GC
            { "B_GEN_Van_02_Vehicle_F", "license_cop_uei" }, //Furgoneta de Transporte UEI
            { "B_T_LSV_01_unarmed_F", "call life_coplevel >= 1" }, //prowler (sin armas)
            { "B_MRAP_01_F", "license_cop_uei" }, //hunter
            { "B_MRAP_01_hmg_F", "license_cop_uei" }, //hunter artillado
			{ "I_MRAP_03_hmg_F", "license_cop_especialista" }, //strider artillado
            { "O_MRAP_02_F", "call life_coplevel >= 1" } //ifrit
        };
    };

    //tienda de helicóteros de policia
    class cop_air {
        side = "cop";
        conditions = "license_cop_gap";
        vehicles[] = {
            { "B_Heli_Light_01_stripped_F", "call life_coplevel >= 1" }, //Hummingbird
            { "O_Heli_Light_02_unarmed_F", "call life_coplevel >= 1" }, //Orca
            { "I_Heli_light_03_unarmed_F", "call life_coplevel >= 1" }, //Hellcat
            { "B_Heli_Light_01_armed_F", "license_cop_especialista" }, //Pawnee
            { "B_Heli_Transport_01_F", "license_cop_uei" } //Ghost
        };
    };

    //tienda de barcos de policia
    class cop_ship {
        side = "cop";
        conditions = "license_cop_maritimo";
        vehicles[] = {
            { "C_Boat_Civil_01_police_F", "call life_coplevel >= 1" } //lancha de policía
        };
    };
};

//Vehiculos

class LifeCfgVehicles {

    //Ejemplo
    class ejemplo {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    //camion de combustible
    class B_G_Van_01_fuel_F {
        vItemSpace = 0;
        conditions = "";
        price = 100000;
        textures[] = {
        };
    };

    //RHIB [Apex DLC]
    class C_Boat_Transport_02_F {
        vItemSpace = 100;
        conditions = "";
        price = 8000;
        textures[] = {
            { "Civil", "civ", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa"
            }, "" },
            { "Policia", "cop", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa"
            }, "" }
        };
    };

    //Transporte Zamak
    class C_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "";
        price = 100000;
        textures[] = {};
	};

    //Todoterreno Armado
    class I_G_Offroad_01_armed_F {
        vItemSpace = 40;
        conditions = "";
        price = 370000;
        textures[] = {};
    };

    //Transporte HEMTT (cubierto)
    class B_Truck_01_covered_F {
        vItemSpace = 275;
        conditions = "";
        price = 150000;
        textures[] = {};
	};

    class B_T_LSV_01_armed_F {
        vItemSpace = 50;
        conditions = "";
        price = 950000;
        textures[] = {
            { "Oliva", "civ", {
                "\A3\Soft_F_Exp\LSV_01\Data\nato_lsv_01_olive_co.paa",
                "\A3\Soft_F_Exp\LSV_01\Data\nato_lsv_02_olive_co.paa",
                "\A3\Soft_F_Exp\LSV_01\Data\nato_lsv_03_olive_co.paa"
            }, "" }
        };
    };

	class O_MRAP_02_hmg_F {
        vItemSpace = 60;
        conditions = "";
        price = 1200000;
        textures[] = {
		};
    };

    //Camion de Combustible
    class O_G_Van_01_fuel_F {
        vItemSpace = 0;
        conditions = "";
        price = 100000;
        textures[] = {};
    };

    //AH-99 Blackfoot
    class B_Heli_Attack_01_dynamicLoadout_F {
        vItemSpace = 150;
        conditions = "";
        price = 1700000;
        textures[] = {};
    };

    //AH-9 Pawnee
    class B_Heli_Light_01_armed_F {
        vItemSpace = 150;
        conditions = "";
        price = 95000;
        textures[] = {
            { "UEI", "cop", {
            "textures\Aire\Policia\PawneeGC.jpg"
           }, "" }
        };
    };

    //Transporte Zamak Cubierto
    class C_Truck_02_covered_F {
        vItemSpace = 175;
        conditions = "";
        price = 80000;
        textures[] = {};
	};

	class B_T_VTOL_01_infantry_F {
        vItemSpace = 300;
        conditions = "";
        price = 1850000;
        textures[] = {};
    };

    //Furgoneta de Transporte
    class C_Van_02_transport_F {
        vItemSpace = 100;
        conditions = "";
        price = 50000;
        textures[] = {};
	};

    //Furgoneta de Transporte GEN [UEI]
    class B_GEN_Van_02_Vehicle_F {
        vItemSpace = 100;
        conditions = "";
        price = 10000;
        textures[] = {
            { "UEI", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    //Furgoneta GEN [GC]
    class B_GEN_Van_02_transport_F {
        vItemSpace = 100;
        conditions = "";
        price = 10000;
        textures[] = {
            { "Guardia Civil", "cop", {
                "textures\Tierra\Policia\FurgonetaGC.jpg"
            }, "" }
        };
    };

    //Furgoneta de Carga
    class C_Van_02_vehicle_F {
        vItemSpace = 150;
        conditions = "";
        price = 80000;
        textures[] = {
            { "La Casa de Papel", "civ", {
                "textures\Tierra\Furgos\FurgonetaCasa.jpg"
            }, "" },
            { "La Casa de Papel 2", "civ", {
                "textures\Tierra\Furgos\FurgonetaPCasa.jpg"
            }, "" },
            { "Radioactiva", "civ", {
                "textures\Tierra\Furgos\FurgonetaPRadiactiva.jpg"
            }, "" },
            { "Radioactiva 2", "civ", {
                "textures\Tierra\Furgos\FurgonetaRadioactiva.jpg"
            }, "" }
        };
    };

    //MB 4WD [DLC APEX]
    class C_Offroad_02_unarmed_F {
        vItemSpace = 65;
        conditions = "";
        price = 15000;
        textures[] = {
            { "Negro", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"
            }, "" },
            { "Azul", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa"
            }, "" },
            { "Verde", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa"
            }, "" },
            { "Naranja", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa"
            }, "" },
            { "Rojo", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa"
            }, "" },
            { "Blanco", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa"
            }, "" },
            { "Medel", "civ", {
                "textures\Tierra\Todoterreno\TodoterrenoDesarrollo.jpg"
            }, "" },
            { "Jooker", "civ", {
                "textures\Tierra\Todoterreno\Todoterrenojooker.jpg"
            }, "" },
            { "Pelon", "civ", {
                "textures\Tierra\Todoterreno\Todoterrenopelon.jpg"
            }, "" },
            { "Músical", "civ", {
                "textures\Tierra\Todoterreno\Todoterrenomusical.jpg"
            }, "" }
        };
    };

    //Cesar BTT [DLC APEX]
    class C_Plane_Civil_01_F {
        vItemSpace = 45;
        conditions = "";
        price = 200000;
        textures[] = {
            { "Racing (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Racing", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Linea Roja (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Linea Roja", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Tribal (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Azul Wave (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Azul Wave", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" }
        };
    };

    //[DLC APEX]
    class C_Scooter_Transport_01_F {
        vItemSpace = 30;
        conditions = "";
        price = 2500;
        textures[] = {
            { "Negro", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
            }, "" },
            { "Azul", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
            }, "" },
            { "Gris", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
            }, "" },
            { "Verde", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
            }, "" },
            { "Rojo", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "Blanco", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "Amarillo", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
            }, "" }
        };
    };

    //Qilin  (sin armas)
    class O_T_LSV_02_unarmed_F {
        vItemSpace = 100;
        conditions = "";
        price = 100000;
        textures[] = {
            { "Arid", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
            }, "" },
            { "Negro", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
            }, "" },
            { "Green Hex", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
            }, "" }
        };
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    //NPC TEST
    class I_Soldier_VR_F {
        vItemSpace = 10000;
        conditions = "";
        price = 0;
        textures[] = {};
    };

    class C_Boat_Civil_01_rescue_F {
        vItemSpace = 50;
        conditions = "";
        price = 10000;
        textures[] = {};
    };

    //bote salvavidas
    class C_Rubberboat {
        vItemSpace = 45;
        conditions = "";
        price = 5000;
        textures[] = {};
    };

    //todoterreno comunicaciones
    class C_Offroad_01_comms_F {
        vItemSpace = 80;
        conditions = "";
        price = 20000;
        textures[] = {};
    };

    //Tractor
    class C_Tractor_01_F {
        vItemSpace = 20;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

   //Hunter artillado
    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        conditions = "";
        price = 50000;
        textures[] = {
            { "UEI", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "";
        price = 75000;
        textures[] = {};
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "";
        price = 3000;
        textures[] = {};
    };

    //transporte tempest 
    class O_Truck_03_transport_F {
        vItemSpace = 285;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    //// Tempest (dispositivo)
    class O_Truck_03_device_F {
        vItemSpace = 350;
        conditions = "";
        price = 450000;
        textures[] = {};
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 12500;
        textures[] = {};
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "";
        price = 750000;
        textures[] = {};
    };

    class O_LSV_02_armed_F {
        vItemSpace = 65;
        conditions = "";
        price = 3500000;
        textures[] = {};
    };

    class B_LSV_01_armed_F {
        vItemSpace = 65;
        conditions = "";
        price = 4500000;
        textures[] = {};
    };

    //strider
    class I_MRAP_03_F {
        vItemSpace = 50;
        conditions = "";
        price = 750000;
        textures[] = {};
    };

    //strider artillado (armado)
    class I_MRAP_03_hmg_F {
        vItemSpace = 65;
        conditions = "";
        price = 50000;
        textures[] = {
         { "UEI", "cop", {
          "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
          "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
           },"" }
        };
    };

    //prowler ligero
    class B_CTRG_LSV_01_light_F {
        vItemSpace = 80;
        conditions = "";
        price = 175000;
        textures[] = {};
    };

    //prowler (sin armas)
    class B_LSV_01_unarmed_F {
        vItemSpace = 80;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    //prowler (sin armas) [GC]
    class B_T_LSV_01_unarmed_F {
        vItemSpace = 80;
        conditions = "";
        price = 15000;
        textures[] = {
         { "Guardia Civil", "cop", {
          "textures\Tierra\Policia\ProwlerGC.jpg",
          "textures\Tierra\Policia\ProwlerGCP2.jpg"
           },"" }
        };
    };

    //qilin (sin armas)
    class O_LSV_02_unarmed_F {
        vItemSpace = 80;
        conditions = "";
        price = 100000;
        textures[] = {};
    };

    class O_T_LSV_02_armed_F {
        vItemSpace = 50;
        conditions = "";
        price = 900000;
        textures[] = {};
    };

    class B_Plane_Fighter_01_Stealth_F {
        vItemSpace = 65;
        conditions = "";
        price = 2000000;
        textures[] = {};
    };

    //Mi-290 Taru
    class O_Heli_Transport_04_F {
        vItemSpace = 150;
        conditions = "";
        price = 80000;
        textures[] = {};
    };

    class O_Heli_Transport_04_bench_F {
        vItemSpace = 65;
        conditions = "";
        price = 1150000;
        textures[] = {};
    };

    //To-201 Shikra
    class O_Plane_Fighter_02_F {
        vItemSpace = 175;
        conditions = "";
        price = 1850000;
        textures[] = {};
    };

    //A-143 Buzzard (AA)
    class I_Plane_Fighter_03_dynamicLoadout_F {
        vItemSpace = 175;
        conditions = "";
        price = 1850000;
        textures[] = {};
    };

    class O_T_VTOL_02_vehicle_dynamicLoadout_F {
        vItemSpace = 70;
        conditions = "";
        price = 1750000;
        textures[] = {};
    };

    //CH-49 Mohawk
    class I_Heli_Transport_02_F {
        vItemSpace = 70;
        conditions = "";
        price = 600000;
        textures[] = {};
    };

    //Mi-48 Kajman
    class O_Heli_Attack_02_F {
        vItemSpace = 200;
        conditions = "";
        price = 1750000;
        textures[] = {};
    };

    //Ghost
    class B_Heli_Transport_01_F {
        vItemSpace = 150;
        conditions = "";
        price = 200000;
        textures[] = {
            { "UEI", "cop", {
            "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
            "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    //Huron
    class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 70;
        conditions = "";
        price = 1800000;
        textures[] = {};
    };

    class B_T_VTOL_01_vehicle_F {
        vItemSpace = 70;
        conditions = "";
        price = 1850000;
        textures[] = {};
    };

    class O_Heli_Attack_02_dynamicLoadout_F {
        vItemSpace = 70;
        conditions = "";
        price = 1950000;
        textures[] = {};
    };

    //lancha motora
    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        conditions = "";
        price = 10000;
        textures[] = {};
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "";
        price = 12000;
        textures[] = {};
    };

    //HEMTT (Caja)
    class B_Truck_01_box_F {
        vItemSpace = 450;
        conditions = "";
        price = 400000;
        textures[] = {};
    };

    //Transporte HEMTT
    class B_Truck_01_transport_F {
        vItemSpace = 275;
        conditions = "";
        price = 275000;
        textures[] = {};
    };

    //Bote salvavidas EMS
    class O_Lifeboat {
        vItemSpace = 35;
        conditions = "";
        price = 8000;
        textures[] = {};
    };

    //ifrit
    class O_MRAP_02_F {
        vItemSpace = 60;
        conditions = "";
        price = 500000;
        textures[] = {
            { "Aliens", "reb", {
                "textures\Tierra\Ifrit\Ifrit1.jpg",
                "textures\Tierra\Ifrit\Ifrit2.jpg"
            }, "" },
            { "Aliens", "reb", {
                "textures\Tierra\Ifrit\Ifrit1Hipster.jpg",
                "textures\Tierra\Ifrit\Ifrit2Hipster.jpg"
            }, "" },
            { "UEI", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    //ifrit artillado (armado)
    class O_MRAP_02_gmg_F {
        vItemSpace = 60;
        conditions = "";
        price = 6000000;
        textures[] = {};
    };

    //todoterreno
    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 15000;
        textures[] = {
            { "Guardia Civil", "cop", {
                "textures\Tierra\Policia\TodoterrenoGC.jpg"
            }, "" },
            { "General Lee", "civ", {
                "textures\Tierra\Camioneta\CamionetaGeneralLee.jpg"
            }, "" },
            { "Volcán", "civ", {
                "textures\Tierra\Camioneta\TodoterrenoGVolcan.jpg"
            }, "" },
            { "Muerto", "civ", {
                "textures\Tierra\Camioneta\TodoterrenoDMuerto.jpg"
            }, "" },
            { "Marihuana", "civ", {
                "textures\Tierra\Camioneta\TodoterrenoMaria.jpg"
            }, "" },
            { "Star Wars", "civ", {
                "textures\Tierra\Camioneta\TodoterrenoGStar.jpg"
            }, "" },
            { "Rojo", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Amarillo", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "Blanco", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            { "Azul", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Rojo Oscuro", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Azul / Blanco", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" },
            { "Coche Camuflado General Lee", "cop", {
                "textures\Tierra\Camioneta\CamionetaGeneralLee.jpg"
            }, "" },
            { "Coche Camuflado Volcán", "cop", {
                "textures\Tierra\Camioneta\TodoterrenoGVolcan.jpg"
            }, "" },
            { "Coche Camuflado Muerto", "cop", {
                "textures\Tierra\Camioneta\TodoterrenoDMuerto.jpg"
            }, "" },
            { "Coche Camuflado Marihuana", "cop", {
                "textures\Tierra\Camioneta\TodoterrenoMaria.jpg"
            }, "" },
            { "Coche Camuflado Star Wars", "cop", {
                "textures\Tierra\Camioneta\TodoterrenoGStar.jpg"
            }, "" },
            { "Coche Camuflado Rojo", "cop", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Coche Camuflado Amarillo", "cop", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "Coche Camuflado Blanco", "cop", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            { "Coche Camuflado Azul", "cop", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Coche Camuflado Rojo Oscuro", "cop", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Coche Camuflado Azul / Blanco", "cop", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" }
        };
    };

    //Karts
    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    //ranchera deportiva
    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        conditions = "";
        price = 30000;
        textures[] = {
            { "VIR", "med", {
                "textures\Tierra\EMS\RancheraEMS.jpg"
            }, "" },
            { "Guardia Civil", "cop", {
                "textures\Tierra\Policia\RancheraGC.jpg"
            }, "" },
            { "Camuflaje", "civ", {
                "textures\Tierra\Ranchera\RancheraCamuflaje.jpg"
            }, "" },
            { "Monster", "civ", {
                "textures\Tierra\Ranchera\RancheraMonster.jpg"
            }, "" },
            { "Racing", "civ", {
                "textures\Tierra\Ranchera\RancheraRacing.jpg"
            }, "" },
            { "Red Bull", "civ", {
                "textures\Tierra\Ranchera\RancheraRedBull.jpg"
            }, "" },
            { "Rockstar", "civ", {
                "textures\Tierra\Ranchera\RancheraRockstar.jpg"
            }, "" },
            { "Leopardo", "civ", {
                "textures\Tierra\Ranchera\RancheraLeopardo.jpg"
            }, "" },
            { "Americano", "civ", {
                "textures\Tierra\Ranchera\RancheraAmericano.jpg"
            }, "" },
            { "Coche Camuflado Beige", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, "" },
            { "Coche Camuflado Verde", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, "" },
            { "Coche Camuflado Azul", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, "" },
            { "Coche Camuflado Azul Oscuro", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, "" },
            { "Coche Camuflado Amarillo", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, "" },
            { "Coche Camuflado Blanco", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, "" },
            { "Coche Camuflado Gris", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, "" },
            { "Coche Camuflado Negro", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, "" },
            { "Coche Camuflado Camuflaje", "cop", {
                "textures\Tierra\Ranchera\RancheraCamuflaje.jpg"
            }, "" },
            { "Coche Camuflado Monster", "cop", {
                "textures\Tierra\Ranchera\RancheraMonster.jpg"
            }, "" },
            { "Coche Camuflado Racing", "cop", {
                "textures\Tierra\Ranchera\RancheraRacing.jpg"
            }, "" },
            { "Coche Camuflado Red Bull", "cop", {
                "textures\Tierra\Ranchera\RancheraRedBull.jpg"
            }, "" },
            { "Coche Camuflado Rockstar", "cop", {
                "textures\Tierra\Ranchera\RancheraRockstar.jpg"
            }, "" },
            { "Coche Camuflado Leopardo", "cop", {
                "textures\Tierra\Ranchera\RancheraLeopardo.jpg"
            }, "" },
            { "Coche Camuflado Americano", "cop", {
                "textures\Tierra\Ranchera\RancheraAmericano.jpg"
            }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, "" },
            { "Verde", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, "" },
            { "Azul", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, "" },
            { "Azul Oscuro", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, "" },
            { "Amarillo", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, "" },
            { "Blanco", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, "" },
            { "Gris", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, "" },
            { "Negro", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, "" }
        };
    };

    //moto de cuatro ruedas
    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        conditions = "";
        price = 100000;
        textures[] = {
            { "Naranja", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Negro", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "";
        price = 75000;
        textures[] = {
            { "Naranja", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Negro", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    //transporte tempest (cubierto)
    class O_Truck_03_covered_F {
        vItemSpace = 300;
        conditions = "";
        price = 270000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        conditions = "";
        price = 12500;
        textures[] = {
            { "VIR", "med", {
                "textures\Tierra\EMS\RancheraEMS.jpg"
            }, "" },
            { "Guardia Civil", "cop", {
                "textures\Tierra\Policia\RancheraGC.jpg"
            }, "" },
            { "Camuflaje", "civ", {
                "textures\Tierra\Ranchera\RancheraCamuflaje.jpg"
            }, "" },
            { "Monster", "civ", {
                "textures\Tierra\Ranchera\RancheraMonster.jpg"
            }, "" },
            { "Racing", "civ", {
                "textures\Tierra\Ranchera\RancheraRacing.jpg"
            }, "" },
            { "Red Bull", "civ", {
                "textures\Tierra\Ranchera\RancheraRedBull.jpg"
            }, "" },
            { "Rockstar", "civ", {
                "textures\Tierra\Ranchera\RancheraRockstar.jpg"
            }, "" },
            { "Leopardo", "civ", {
                "textures\Tierra\Ranchera\RancheraLeopardo.jpg"
            }, "" },
            { "Americano", "civ", {
                "textures\Tierra\Ranchera\RancheraAmericano.jpg"
            }, "" },
            { "Coche Camuflado Beige", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, "" },
            { "Coche Camuflado Verde", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, "" },
            { "Coche Camuflado Azul", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, "" },
            { "Coche Camuflado Azul Oscuro", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, "" },
            { "Coche Camuflado Amarillo", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, "" },
            { "Coche Camuflado Blanco", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, "" },
            { "Coche Camuflado Gris", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, "" },
            { "Coche Camuflado Negro", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, "" },
            { "Coche Camuflado Camuflaje", "cop", {
                "textures\Tierra\Ranchera\RancheraCamuflaje.jpg"
            }, "" },
            { "Coche Camuflado Monster", "cop", {
                "textures\Tierra\Ranchera\RancheraMonster.jpg"
            }, "" },
            { "Coche Camuflado Racing", "cop", {
                "textures\Tierra\Ranchera\RancheraRacing.jpg"
            }, "" },
            { "Coche Camuflado Red Bull", "cop", {
                "textures\Tierra\Ranchera\RancheraRedBull.jpg"
            }, "" },
            { "Coche Camuflado Rockstar", "cop", {
                "textures\Tierra\Ranchera\RancheraRockstar.jpg"
            }, "" },
            { "Coche Camuflado Leopardo", "cop", {
                "textures\Tierra\Ranchera\RancheraLeopardo.jpg"
            }, "" },
            { "Coche Camuflado Americano", "cop", {
                "textures\Tierra\Ranchera\RancheraAmericano.jpg"
            }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, "" },
            { "Verde", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, "" },
            { "Azul", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, "" },
            { "Azul Oscuro", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, "" },
            { "Amarillo", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, "" },
            { "Blanco", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, "" },
            { "Gris", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, "" },
            { "Negro", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, "" }
        };
    };

   //SUV
    class C_SUV_01_F {
        vItemSpace = 50;
        conditions = "";
        price = 15000;
        textures[] = {
		    { "Ferrari", "civ", {
                "textures\Tierra\SUV\SUVFerrari.jpg"
			}, "" },
		    { "Ghostrider", "civ", {
                "textures\Tierra\SUV\SUVGhostrider.jpg"
			}, "" },
            { "Rojo Oscuro", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, "" },
            { "Plateado", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, "" },
            { "Naranja", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, "" },
		    { "Rayos", "civ", {
                "textures\Tierra\SUV\SUVRayos.jpg"
			}, "" },
		    { "Plantas", "civ", {
                "textures\Tierra\SUV\SUVPlantas.jpg"
			}, "" },
		    { "Marihuana", "civ", {
                "textures\Tierra\SUV\SUVMaria.jpg"
			}, "" },
		    { "Rallas", "civ", {
                "textures\Tierra\SUV\SUVRallas.jpg"
			}, "" },
			{ "Cruz Roja", "med", {
            "textures\Tierra\EMS\SUVambulancia.jpg"
            }, "" },
            { "Guardia Civil", "cop", {
                "textures\Tierra\Policia\SUVGC.jpg"
            }, "" },
		    { "Coche Camuflado Rayos", "cop", {
                "textures\Tierra\SUV\SUVRayos.jpg"
			}, "" },
		    { "Coche Camuflado Plantas", "cop", {
                "textures\Tierra\SUV\SUVPlantas.jpg"
			}, "" },
		    { "Coche Camuflado Marihuana", "cop", {
                "textures\Tierra\SUV\SUVMaria.jpg"
			}, "" },
		    { "Coche Camuflado Rallas", "cop", {
                "textures\Tierra\SUV\SUVRallas.jpg"
			}, "" },
            { "Coche Camuflado Rojo Oscuro", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, "" },
		    { "Coche Camuflado Ferrari", "cop", {
                "textures\Tierra\SUV\SUVFerrari.jpg"
			}, "" },
		    { "Coche Camuflado Ghostrider", "cop", {
                "textures\Tierra\SUV\SUVGhostrider.jpg"
			}, "" },
            { "Coche Camuflado Plateado", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, "" },
            { "Coche Camuflado Naranja", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, "" },
		    { "Coche Camuflado Espacio", "cop", {
                "textures\Tierra\SUV\SUVEspacio.jpg"
			}, "" },
		    { "Espacio ", "civ", {
                "textures\Tierra\SUV\SUVEspacio.jpg"
			}, "" },
		    { "Suprime ", "civ", {
                "textures\Tierra\SUV\SUVSuprime.jpg"
			}, "" },
		    { "Coche Camuflado Suprime ", "cop", {
                "textures\Tierra\SUV\SUVSuprime.jpg"
			}, "" },
		    { "Coche Camuflado Minions ", "cop", {
                "textures\Tierra\SUV\SUVMinions.jpg"
			}, "" },
		    { "Minions ", "civ", {
                "textures\Tierra\SUV\SUVMinions.jpg"
			}, "" },
		    { "Piruleta ", "civ", {
                "textures\Tierra\SUV\SUVPiruleta.jpg"
			}, "" },
		    { "Coche Camuflado Piruleta ", "cop", {
                "textures\Tierra\SUV\SUVPiruleta.jpg"
			}, "" }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 85;
        conditions = "";
        price = 60000;
        textures[] = {
            { "Blanco", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Rojo", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    //furgón
    class C_Van_01_box_F {
        vItemSpace = 100;
        conditions = "";
        price = 95000;
        textures[] = {
            { "Blanco", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Rojo", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    //Hunter
    class B_MRAP_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 25000;
        textures[] = {
            { "UEI", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    //Hummingbird
    class B_Heli_Light_01_F {
        vItemSpace = 70;
        conditions = "";
        price = 200000;
        textures[] = {
            { "Rojo y Blanco", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            }, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, "" },
            { "Rojo", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, "" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Digi Verde", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" }
        };
    };

    //Hummingbird [Servicios de Emergencias]
    class B_Heli_Light_01_stripped_F {
        vItemSpace = 100;
        conditions = "";
        price = 82500;
        textures[] = {
            { "Guardia Civil", "cop", {
                "textures\Aire\Policia\HeliGC.jpg"
            }, "" },
            { "GAR", "med", {
                "textures\Aire\EMS\HeliLitelbirdEMS.jpg"
            }, "" }
        };
    };

    //M-900
    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 45;
        price = 150000;
    };

    //todoterreno cubierto
    class  C_Offroad_01_covered_F {
        vItemSpace = 60;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    //orca
    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 130;
        conditions = "";
        price = 300000;
        textures[] = {
            { "Negro", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "Blanco y Azul", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
            { "Digi Camuflaje", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, "" },
            { "Digi Desierto", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            }, "" },
            { "Guardia Civil", "cop", {
                "textures\Aire\Policia\OrcaGC.jpg"
            }, "" },
            { "GAR", "med", {
                "textures\Aire\EMS\HeliCIVILIANEMS.jpg"
            }, "" }
        };
    };

	class I_Plane_Fighter_03_AA_F {
        vItemSpace = 50;
        conditions = "";
        price = 1850000; 
        textures[] = {};
    };

	class O_T_VTOL_02_infantry_dynamicLoadout_F {
        vItemSpace = 300;
        conditions = "";
        price = 1750000;
        textures[] = {};
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

    //V-44 X Blackfish (Armed)
    class B_T_VTOL_01_armed_F {
        vItemSpace = 500;
        conditions = "";
        price = 2000000;
        textures[] = {};
    };

    class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        conditions = "";
        price = 120000;
        textures[] = {
            { "Blanco", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            }, "" },
            { "Rojo", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            }, "" }
        };
    };

        //Ambulancia
	    class C_Van_02_medevac_F {
        vItemSpace = 80;
        vFuelSpace = 42000;
        conditions = "";
        price = 18000;
        textures[] = {
            { "Ambulancia Cruz Roja", "med", {
                "textures\Tierra\EMS\AmbulanciaEMS.jpg",
            }, "" }
        };
    };

        //Hellcat
    	class I_Heli_light_03_unarmed_F {
        vItemSpace = 100;
        vFuelSpace = 70000;
        conditions = "";
        price = 87500;
        textures[] = {
            { "Guardia Civil", "cop", {
                "textures\Aire\Policia\HellCatGC.jpg"
            }, "" }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "";
        price = 250000;
        textures[] = {};
    };
};
