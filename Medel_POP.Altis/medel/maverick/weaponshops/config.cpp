
class maverick_weaponshop_cfg {

	cashVar = "medel_din";								//--- Variable Dinero
	cashSymbol = "€"; 									//--- Simbolo del Dinero
	rotationSpeed = 2; 									//--- Velocidad de la Rotación del objeto (1 - 10)
	saveFunction = "[] call SOCK_fnc_updateRequest"; 	//--- Funciones para guardar objetos

	class localization {
		msgParamEmpty =						"El stock de la tienda está vacio!";
		msgInVehicle =						"No puedes estar en un vehiculo";
		msgShopExists =						"La tienda no existe";
		msgCondition =						"No tienes permiso para utilizar esta tienda";
		msgCashOnHand =						"Dinero en Mano - %2%1";
		msgCartTotal =						"Precio Total - %2%1";
		msgInfoTooltip =					"--> MUEVE EL BOTÓN IZQUIERDO HACIA LA DERECHA O IZQUIERDA PARA ROTAR EL ARMA.\n--> DOBLE CLICk EN EL OBJETO DE LA CESTA PARA ELIMINARLO.\n--> UTILICE LA CASILLA 'Remplazar Armamento' PARA REEMPLAZAR LAS ARMAS EQUIPADAS POR LAS ARMAS COMPRADAS.";
		msgInfoTooltip2 = 					"--> DOBLE CLICk EN EL OBJETO DE LA CESTA PARA ELIMINARLO.\n--> UTILICE LA CASILLA 'Remplazar Armamento' PARA REEMPLAZAR LAS ARMAS EQUIPADAS POR LAS ARMAS COMPRADAS.";
		msgEmptyShop = 						"No se ha encontrado nada...";
		msgInfoText	=						"<t color='#FFFFFF'>Precio:</t> <t color='%1'>%2%3</t>";
		msgCartFull	=						"La cesta está llena";
		msgCartEmpty =						"La cesta está vacía";
		msgNotEnoughCash =					"No tienes suficiente efectivo para esta transacción";
		msgOverrideAlert =					"Ya tienes un arma equipada. Utilice la casilla 'Remplazar Armamento' Para reemplazar las armas equipadas por las armas compradas.";
		msgTransactionComplete =			"Compra completada por %2%1";
		msgNotEnoughSpace =				 	"No tienes espacio para todos los objetos que quieres comprar. Sólo has pagado para los que tenias espacio";
		msgClear =							"Borrar";
		msgSearch =							"Buscar";

		#define dialogTabWeapon				"Armas"
		#define dialogTabMagazines			"Cargadores"
		#define dialogTabAttachments		"Accesorios"
		#define dialogTabOther				"Objetos"
		#define dialogAddBtn				"Añadir"
		#define dialogOverrideTooltip		"Remplazar Armamento"
		#define dialogCompleteBtn			"Completar"
		#define dialogCloseBtn 				"Cerrar"
	};

	class shops {
		//tienda de armas donador
		class armas1 {
			title = "Tienda de Armas Donadores"; //--- Titulo de la Tienda
			condition = "license_civ_don"; 	//--- Condicion para acceder a la tienda
			simple = 0; 			//--- Tipo de GUI 0-Vista de arma 1-Vista sin arma
			maxCart = 20; 			//--- Cantidad maxima de objeto en la cesta
			weapons[] = {
				{"arifle_Katiba_F", 40000, "true", ""}, //Katiba 6.5 mm
				{"arifle_Katiba_C_F", 38000, "true", ""}, //Carabina Katiba // Katiba Carbine 6.5 mm
				{"arifle_Mk20_F", 35000, "true", ""}, //Mk20 5.56 mm (Camo)
				{"arifle_MXC_F", 40000, "true", ""}, //MXC 6.5 mm
				{"arifle_MX_F", 45000, "true", ""}, //MX 6.5 mm
				{"sgun_HunterShotgun_01_F", 30000, "true", ""}, //KozLice 12G
				{"sgun_HunterShotgun_01_sawedoff_F", 20000, "true", ""}, //KozLice 12G (recortada)
				{"arifle_CTAR_blk_F", 45000, "true", ""}, //CAR-95 5.8 mm (Black)
				{"arifle_CTARS_blk_Pointer_F", 55000, "true", ""}, //CAR-95-1 5.8mm (Black)
				{"arifle_MXM_khk_F", 50000, "true", ""}, //MXM 6.5 mm (Khaki)
				{"arifle_TRG21_F", 28000, "true", ""}, //TRG-21 5.56 mm
				{"arifle_AKM_F", 60000, "true", ""}, //AKM 7.62 mm
				{"arifle_AKS_F", 30000, "true", ""}, //AKS-74U 5.45 mm
				{"srifle_DMR_01_F", 80000, "true", ""}, //Rahim 7.62 mm
				{"srifle_DMR_06_camo_F", 65000, "true", ""}, //Mk14 7.62 mm (Camo)
				{"arifle_SPAR_01_blk_F", 50000, "true", ""}, //SPAR-16 5.56 mm (Black)
				{"arifle_SPAR_02_blk_F", 60000, "true", ""}, //SPAR-16S 5.56 mm (Black)
				{"LMG_Zafir_F", 200000, "true", ""}, //Zafir 7.62mm
				{"LMG_Mk200_F", 80000, "true", ""}, //Mk200 6.5 mm
				{"arifle_AK12_F", 70000, "true", ""}, //AK-12 7.62 mm
				{"SMG_03_TR_black", 35000, "true", ""}, //ADR-97 TR 5.7 mm (Black)
				{"SMG_03C_black", 32000, "true", ""}, //ADR-97C 5.7 mm (Black)
				{"SMG_03C_TR_black", 32000, "true", ""}, //ADR-97C TR 5.7 mm (Black)
				{"hgun_P07_F", 9500, "true", ""}, //P07 9 mm
				{"hgun_Pistol_heavy_02_F", 12000, "true", ""}, //Zubr .45 ACP
				{"hgun_Rook40_F", 11500, "true", ""}, //Rook-40 9 mm
				{"hgun_ACPC2_F", 13000, "true", ""}, //ACP-C2
				{"hgun_Pistol_heavy_01_F", 10000, "true", ""}, //4-five .45 ACP
				{"hgun_Pistol_01_F", 9500, "true", ""}, //PM 9mm
				{"arifle_SDAR_F", 8000, "true", ""} //arpón [SDAR]
			};
			magazines[] = {
				{"30Rnd_65x39_caseless_green", 500, "true", ""},
				{"30Rnd_65x39_caseless_green_mag_Tracer", 800, "true", ""},
				{"30Rnd_556x45_Stanag", 500, "true", ""},
				{"30Rnd_556x45_Stanag_Tracer_Red", 800, "true", ""},
				{"30Rnd_65x39_caseless_khaki_mag", 500, "true", ""},
				{"30Rnd_65x39_caseless_mag_Tracer", 800, "true", ""},
				{"30Rnd_580x42_Mag_F", 500, "true", ""},
				{"30Rnd_580x42_Mag_Tracer_F", 800, "true", ""},
				{"100Rnd_580x42_Mag_F", 1000, "true", ""},
				{"100Rnd_580x42_Mag_Tracer_F", 1500, "true", ""},
				{"100Rnd_65x39_caseless_mag", 1500, "true", ""},
				{"30Rnd_762x39_Mag_Tracer_F", 800, "true", ""},
				{"30Rnd_545x39_Mag_F", 500, "true", ""},
				{"30Rnd_545x39_Mag_Tracer_F", 800, "true", ""},
				{"10Rnd_762x54_Mag", 500, "true", ""},
				{"30Rnd_65x39_caseless_mag", 500, "true", ""},
				{"20Rnd_762x51_Mag", 600, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 1200, "true", ""},
				{"150Rnd_556x45_Drum_Mag_Tracer_F", 1500, "true", ""},
				{"30Rnd_65x39_caseless_black_mag", 700, "true", ""},
				{"150Rnd_762x54_Box", 1200, "true", ""},
				{"150Rnd_762x54_Box_Tracer", 1500, "true", ""},
				{"30Rnd_762x39_Mag_F", 500, "true", ""},
				{"30Rnd_762x39_AK12_Mag_F", 500, "true", ""},
				{"30Rnd_762x39_Mag_Tracer_Green_F", 800, "true", ""},
				{"200Rnd_65x39_cased_Box_Tracer", 800, "true", ""},
				{"50Rnd_570x28_SMG_03", 600, "true", ""},
				{"30Rnd_9x21_Mag", 500, "true", ""},
				{"6Rnd_45ACP_Cylinder", 450, "true", ""},
				{"9Rnd_45ACP_Mag", 350, "true", ""},
				{"11Rnd_45ACP_Mag", 350, "true", ""},
				{"10Rnd_9x21_Mag", 350, "true", ""},
				{"2Rnd_12Gauge_Pellets", 300, "true", ""},
				{"30Rnd_556x45_Stanag", 500, "true", ""},
				{"30Rnd_762x39_AK12_Mag_Tracer_F", 800, "true", ""}
			};
			attachments[] = {
				{"optic_ACO_grn", 3000, "true", ""},
				{"optic_Holosight", 3000, "true", ""},
				{"optic_Hamr", 3000, "true", ""},
				{"acc_flashlight", 3000, "true", ""},
				{"optic_MRCO", 3000, "true", ""},
				{"optic_DMS", 3000, "true", ""},
				{"optic_ams", 3000, "true", ""},
				{"optic_AMS_khk", 3000, "true", ""},
				{"optic_AMS_snd", 3000, "true", ""},
				{"optic_Aco_smg", 3000, "true", ""},
				{"optic_snds_b", 3000, "true", ""},
				{"acc_pointer_IR", 3000, "true", ""},
				{"optic_LRPS", 3000, "true", ""},
				{"optic_SOS", 3000, "true", ""},
				{"optic_Arco", 3000, "true", ""},
				{"bipod_02_F_blk", 5000, "true", ""},
				{"bipod_03_F_blk", 5000, "true", ""},
				{"bipod_01_F_blk", 5000, "true", ""},
				{"bipod_01_F_khk", 5000, "true", ""},
				{"bipod_01_F_snd", 5000, "true", ""},
				{"bipod_03_F_oli", 5000, "true", ""},
				{"acc_flashlight_pistol", 1500, "true", ""},
				{"optic_MRD", 2000, "true", ""},
				{"optic_Yorris", 2000, "true", ""}
			};
			items[] = {
				{"Binocular", 150, "true", ""}, //Prismáticos
				{"ItemGPS", 150, "true", ""}, //GPS
				{"ItemMap", 100, "true", ""}, //Mapa
				{"ItemCompass", 75, "true", ""}, //Brújula
				{"ItemWatch", 75, "true", ""}, //Reloj
				{"NVGoggles", 3000, "true", ""}, //Vision Noncturna Marrones
				{"NVGoggles_INDEP", 3000, "true", ""}, //Visión Nocturna Verdes
				{"O_NVGoggles_ghex_F", 150, "true", ""}, //Gafas de Visión Nocturna Verdes
				{"O_NVGoggles_hex_F", 150, "true", ""} //Gafas de Visión Nocturna Marrones
			};
		};

        //tienda de armas rebelde
		class rebel {
			title = "Tienda de Armas Rebelde";
			condition = "license_civ_rebel";
			simple = 0;
			maxCart = 20;
			weapons[] = {
				{"arifle_Katiba_F", 40000, "true", ""}, //Katiba 6.5 mm
				{"arifle_Katiba_C_F", 38000, "true", ""}, //Carabina Katiba // Katiba Carbine 6.5 mm
				{"arifle_Mk20_F", 35000, "true", ""}, //Mk20 5.56 mm (Camo)
				{"arifle_MXC_F", 40000, "true", ""}, //MXC 6.5 mm
				{"sgun_HunterShotgun_01_F", 30000, "true", ""}, //KozLice 12G
				{"sgun_HunterShotgun_01_sawedoff_F", 20000, "true", ""}, //KozLice 12G (recortada)
				{"arifle_CTAR_blk_F", 45000, "true", ""}, //CAR-95 5.8 mm (Black)
				{"arifle_CTAR_blk_F", 45000, "true", ""}, //CAR-95 5.8 mm (Black)
				{"arifle_CTARS_blk_Pointer_F", 55000, "true", ""}, //CAR-95-1 5.8mm (Black)
				{"arifle_MXM_khk_F", 50000, "true", ""}, //MXM 6.5 mm (Khaki)
				{"arifle_TRG21_F", 28000, "true", ""}, //TRG-21 5.56 mm
				{"arifle_AKM_F", 60000, "true", ""}, //AKM 7.62 mm
				{"arifle_AKS_F", 30000, "true", ""}, //AKS-74U 5.45 mm
				{"srifle_DMR_01_F", 80000, "true", ""}, //Rahim 7.62 mm
				{"srifle_DMR_06_camo_F", 65000, "true", ""}, //Mk14 7.62 mm (Camo)
				{"arifle_SPAR_01_blk_F", 50000, "true", ""}, //SPAR-16 5.56 mm (Black)
				{"arifle_SPAR_02_blk_F", 60000, "true", ""}, //SPAR-16S 5.56 mm (Black)
				{"LMG_Zafir_F", 200000, "true", ""}, //Zafir 7.62mm
				{"LMG_Mk200_F", 80000, "true", ""}, //Mk200 6.5 mm
				{"arifle_AK12_F", 70000, "true", ""}, //AK-12 7.62 mm
				{"SMG_03_TR_black", 35000, "true", ""}, //ADR-97 TR 5.7 mm (Black)
				{"SMG_03C_black", 32000, "true", ""}, //ADR-97C 5.7 mm (Black)
				{"SMG_03C_TR_black", 32000, "true", ""}, //ADR-97C TR 5.7 mm (Black)
				{"hgun_P07_F", 9500, "true", ""}, //P07 9 mm
				{"hgun_Pistol_heavy_02_F", 12000, "true", ""}, //Zubr .45 ACP
				{"hgun_Rook40_F", 11500, "true", ""}, //Rook-40 9 mm
				{"hgun_ACPC2_F", 13000, "true", ""}, //ACP-C2
				{"hgun_Pistol_heavy_01_F", 10000, "true", ""}, //4-five .45 ACP
				{"hgun_Pistol_01_F", 9500, "true", ""} //PM 9mm
			};
			magazines[] = {
				{"30Rnd_65x39_caseless_green", 500, "true", ""},
				{"30Rnd_65x39_caseless_green_mag_Tracer", 800, "true", ""},
				{"30Rnd_556x45_Stanag", 500, "true", ""},
				{"30Rnd_556x45_Stanag_Tracer_Red", 800, "true", ""},
				{"30Rnd_65x39_caseless_khaki_mag", 500, "true", ""},
				{"30Rnd_65x39_caseless_mag_Tracer", 800, "true", ""},
				{"30Rnd_580x42_Mag_F", 500, "true", ""},
				{"30Rnd_580x42_Mag_Tracer_F", 800, "true", ""},
				{"100Rnd_580x42_Mag_F", 1000, "true", ""},
				{"100Rnd_580x42_Mag_Tracer_F", 1500, "true", ""},
				{"100Rnd_65x39_caseless_mag", 1500, "true", ""},
				{"30Rnd_762x39_Mag_Tracer_F", 800, "true", ""},
				{"30Rnd_545x39_Mag_F", 500, "true", ""},
				{"30Rnd_545x39_Mag_Tracer_F", 800, "true", ""},
				{"10Rnd_762x54_Mag", 500, "true", ""},
				{"30Rnd_65x39_caseless_mag", 500, "true", ""},
				{"20Rnd_762x51_Mag", 600, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 1200, "true", ""},
				{"150Rnd_556x45_Drum_Mag_Tracer_F", 1500, "true", ""},
				{"30Rnd_65x39_caseless_black_mag", 700, "true", ""},
				{"150Rnd_762x54_Box", 1200, "true", ""},
				{"150Rnd_762x54_Box_Tracer", 1500, "true", ""},
				{"30Rnd_762x39_Mag_F", 500, "true", ""},
				{"30Rnd_762x39_AK12_Mag_F", 500, "true", ""},
				{"30Rnd_762x39_Mag_Tracer_Green_F", 800, "true", ""},
				{"200Rnd_65x39_cased_Box_Tracer", 800, "true", ""},
				{"50Rnd_570x28_SMG_03", 600, "true", ""},
				{"30Rnd_9x21_Mag", 500, "true", ""},
				{"6Rnd_45ACP_Cylinder", 450, "true", ""},
				{"9Rnd_45ACP_Mag", 350, "true", ""},
				{"11Rnd_45ACP_Mag", 350, "true", ""},
				{"10Rnd_9x21_Mag", 350, "true", ""},
				{"30Rnd_556x45_Stanag", 500, "true", ""},
				{"2Rnd_12Gauge_Pellets", 300, "true", ""},
				{"30Rnd_762x39_AK12_Mag_Tracer_F", 800, "true", ""}
			};
			attachments[] = {
				{"optic_ACO_grn", 3000, "true", ""},
				{"optic_Holosight", 3000, "true", ""},
				{"optic_Hamr", 3000, "true", ""},
				{"acc_flashlight", 3000, "true", ""},
				{"optic_MRCO", 3000, "true", ""},
				{"optic_DMS", 3000, "true", ""},
				{"optic_ams", 3000, "true", ""},
				{"optic_AMS_khk", 3000, "true", ""},
				{"optic_AMS_snd", 3000, "true", ""},
				{"optic_Aco_smg", 3000, "true", ""},
				{"optic_snds_b", 3000, "true", ""},
				{"acc_pointer_IR", 3000, "true", ""},
				{"optic_LRPS", 3000, "true", ""},
				{"optic_SOS", 3000, "true", ""},
				{"optic_Arco", 3000, "true", ""},
				{"bipod_02_F_blk", 5000, "true", ""},
				{"bipod_03_F_blk", 5000, "true", ""},
				{"bipod_01_F_blk", 5000, "true", ""},
				{"bipod_01_F_khk", 5000, "true", ""},
				{"bipod_01_F_snd", 5000, "true", ""},
				{"bipod_03_F_oli", 5000, "true", ""},
				{"acc_flashlight_pistol", 1500, "true", ""},
				{"optic_MRD", 2000, "true", ""},
				{"optic_Yorris", 2000, "true", ""}
			};		
			items[] = {
				{"Binocular", 150, "true", ""}, //Prismáticos
				{"ItemGPS", 150, "true", ""}, //GPS
				{"ItemMap", 100, "true", ""}, //Mapa
				{"ItemCompass", 75, "true", ""}, //Brújula
				{"ItemWatch", 75, "true", ""}, //Reloj
				{"NVGoggles", 3000, "true", ""}, //Vision Noncturna Marrones
				{"NVGoggles_INDEP", 3000, "true", ""}, //Visión Nocturna Verdes
				{"O_NVGoggles_ghex_F", 150, "true", ""}, //Gafas de Visión Nocturna Verdes
				{"O_NVGoggles_hex_F", 150, "true", ""} //Gafas de Visión Nocturna Marrones
			};
		};

        //tienda de armas general
		class gun {
			title = "Tienda de Armas";
			condition = "license_civ_gun";
			simple = 0;
			maxCart = 20;
			weapons[] = {
				{"hgun_P07_F", 9500, "true", ""}, //P07 9 mm
				{"hgun_Pistol_heavy_02_F", 12000, "true", ""}, //Zubr .45 ACP
				{"hgun_Rook40_F", 11500, "true", ""}, //Rook-40 9 mm
				{"hgun_ACPC2_F", 13000, "true", ""}, //ACP-C2
				{"hgun_Pistol_heavy_01_F", 10000, "true", ""}, //4-five .45 ACP
				{"hgun_Pistol_01_F", 9500, "true", ""}, //PM 9mm
				{"SMG_02_F", 20000, "true", ""} //Sting 9 mm
			};
			magazines[] = {
				{"30Rnd_9x21_Mag", 500, "true", ""},
				{"6Rnd_45ACP_Cylinder", 450, "true", ""},
				{"9Rnd_45ACP_Mag", 350, "true", ""},
				{"11Rnd_45ACP_Mag", 350, "true", ""},
				{"10Rnd_9x21_Mag", 350, "true", ""},
				{"30Rnd_65x39_caseless_green", 500, "true", ""}
			};
			attachments[] = {
				{"optic_MRD", 2000, "true", ""},
				{"optic_Yorris", 2000, "true", ""}
			};	
			items[] = {
				{"Binocular", 150, "true", ""}, //Prismáticos
				{"ItemGPS", 150, "true", ""}, //GPS
				{"ItemMap", 100, "true", ""}, //Mapa
				{"ItemCompass", 75, "true", ""}, //Brújula
				{"ItemWatch", 75, "true", ""}, //Reloj
			};
		};

        //tienda de armas de buceo
		class armas2 {
			title = "Tienda de Armas de Buceo";
			condition = "license_civ_dive";
			simple = 0;
			maxCart = 20;
			weapons[] = {
				{"arifle_SDAR_F", 8000, "true", ""} //arpón [SDAR]
			};
			magazines[] = {
				{"30Rnd_556x45_Stanag", 500, "true", ""}
			};
			attachments[] = {
				{"optic_ACO_grn", 2000, "true", ""}
			};
			items[] = {
				{"Binocular", 150, "true", ""}, //Prismáticos
				{"ItemGPS", 150, "true", ""}, //GPS
				{"ItemMap", 100, "true", ""}, //Mapa
				{"ItemCompass", 75, "true", ""}, //Brújula
				{"ItemWatch", 75, "true", ""} //Reloj
			};
		};

        //tienda de armas de policia
		class cop_basic {
			title = "Tienda de Armas Policial";
			condition = "call life_coplevel >= 1";
			simple = 0;
			maxCart = 50;
			weapons[] = {
			   { "SmokeShell", 150, "license_cop_uei", "" },
			   { "SmokeShellRed",150, "license_cop_uei", "" },
			   { "SmokeShellGreen", 150, "license_cop_uei", "" },
		       { "SmokeShellYellow", 150, "license_cop_uei", "" },
			   { "SmokeShellPurple", 150, "license_cop_uei", "" },
			   { "SmokeShellBlue", 150, "license_cop_uei", "" },
               { "HandGrenade_Stone", 200, "license_cop_uei", "Flash Bang" },
               { "hgun_P07_snds_F", 500, "call life_coplevel >= 1", "Taser" },
               { "hgun_PDW2000_F", 500, "call life_coplevel >= 1", "" },
               { "SMG_02_F", 2000, "call life_coplevel >= 1", "" },
               { "SMG_01_F", 2000,"call life_coplevel >= 1", "" }, //Vermin SMG
			   { "SMG_05_F", 1500,"call life_coplevel >= 1", "" }, //Protector
			   { "arifle_TRG20_F", 4000, "call life_coplevel >= 1", "" }, //TRG 20
			   { "arifle_TRG21_F", 4500, "call life_coplevel >= 2", "" }, //TRG 21
			   { "arifle_Mk20_plain_F", 4800, "call life_coplevel >= 2", "" }, //MK 20
               { "SMG_03_black", 2500, "call life_coplevel >= 2", "" },
			   { "arifle_SDAR_F", 4000,  "license_cop_tiro1", "" }, //SDAR
               { "SMG_03_TR_black", 3000, "license_cop_tiro1", "" }, //ADR-97 TR 5.7 mm (Negra)
			   { "SMG_03C_TR_black", 3800, "license_cop_tiro1", "" }, //ADR-97C TR 5.7 mm (Negra)
               { "SMG_03C_black", 2500, "call life_coplevel >= 2", "" },
               { "SMG_03C_TR_black", 3500, "call life_coplevel >= 2", "" },
               { "arifle_MX_Black_F", 7000, "call life_coplevel >= 1", "" }, //MX
               { "arifle_MXC_Black_F", 5500, "call life_coplevel >= 2", "" },
               { "arifle_MXM_Black_F", 8000, "license_cop_tiro1", "" },
			   { "LMG_Zafir_F", 10000, "license_cop_especialista", "" }, //Zafir 7.62mm
			   { "arifle_CTAR_blk_F", 6000, "call life_coplevel >= 5", "" }, //CAR-95 5.8 mm
               { "arifle_SPAR_02_blk_F", 9000, "license_cop_uei", "" }, //SPAR 16S
			   { "arifle_SPAR_03_blk_F", 10000, "license_cop_tiro2", "" }, //SPAR 17
               { "arifle_SPAR_01_blk_F", 7000, "call life_coplevel >= 5", "" }, //SPAR 16
			   { "srifle_EBR_MRCO_LP_BI_F", 9000, "call life_coplevel >= 10", "" }, //Mk 18
               { "LMG_Mk200_F", 12000, "license_cop_uei", "" }, //MK 200
			   { "arifle_Mk20C_F", 3000, "call life_coplevel >= 1", "" },
			   { "srifle_EBR_F", 10000, "license_cop_tiro2", "" },
		       { "arifle_ARX_blk_F", 10000, "license_cop_uei", "" },
               { "arifle_CTARS_blk_F", 10000, "license_cop_uei", "" },
               { "srifle_DMR_03_F", 13000, "license_cop_tiro2", "" },
			   { "srifle_LRR_F", 18000, "license_cop_uei", "" },
               { "arifle_MXM_F", 8000, "license_cop_uco", "" },
               { "srifle_DMR_01_F", 10000, "license_cop_uco", "" },
               { "arifle_SPAR_01_khk_F", 9000, "license_cop_uco", "" },
               { "SMG_03_TR_khaki", 3500, "license_cop_uco", "" },
               { "SMG_03_TR_hex", 3500, "license_cop_uco", "" },
               { "arifle_Katiba_F", 7500, "license_cop_uco", "" },
               { "arifle_AK12_F", 11000, "license_cop_tiro2", "" },
               { "launch_MRAWS_olive_F", 45000, "license_cop_especialista", "" },
			   { "srifle_GM6_F", 18000, "license_cop_especialista", "" }, 
			   { "launch_B_Titan_F", 45000, "license_cop_especialista", "" },
               { "arifle_MSBS65_GL_black_F", 6500, "call life_coplevel >= 1", "" }
			};
			magazines[] = {
              { "16Rnd_9x21_Mag", 100, "call life_coplevel >= 1", "" },
              { "30Rnd_9x21_Mag_SMG_02", 100, "call life_coplevel >= 1", "" },
              { "30Rnd_45ACP_Mag_SMG_01", 100, "call life_coplevel >= 1", "" },
              { "30Rnd_9x21_Mag", 100, "call life_coplevel >= 1", "" },
			  { "30Rnd_65x39_caseless_green", 300, "call life_coplevel >= 1", "" },
			  { "10Rnd_50BW_Mag_F", 500, "call life_coplevel >= 1", "" },
              { "30Rnd_556x45_Stanag", 150, "call life_coplevel >= 1", "" },
              { "30Rnd_65x39_caseless_mag", 150, "call life_coplevel >= 1", "" },
			  { "30Rnd_65x39_caseless_mag_Tracer", 150, "call life_coplevel >= 1", "" },
              { "50Rnd_570x28_SMG_03", 150, "call life_coplevel >= 1", "" },
			  { "150Rnd_556x45_Drum_Mag_F", 300, "call life_coplevel >= 1", "" },
              { "200Rnd_65x39_cased_Box", 400, "call life_coplevel >= 1", "" },
              { "20Rnd_762x51_Mag", 300, "call life_coplevel >= 1", "" },
              { "10Rnd_762x54_Mag", 500, "call life_coplevel >= 1", "" },
              { "30Rnd_762x39_Mag_F", 500, "call life_coplevel >= 1", "" },
			  { "30Rnd_580x42_Mag_F", 500, "call life_coplevel >= 1", "" },
			  { "7Rnd_408_Mag", 500, "call life_coplevel >= 1", "" },
			  { "150Rnd_762x54_Box", 300, "call life_coplevel >= 1", "" },
			  { "150Rnd_762x54_Box_Tracer", 500, "call life_coplevel >= 1", "" },
              { "20Rnd_556x45_UW_mag", 100, "call life_coplevel >= 1", "" },
			  { "5Rnd_127x108_Mag", 400, "call life_coplevel >= 1", "" },
			  { "MRAWS_HEAT_F", 1000, "call life_coplevel >= 1", "" },
			  { "30Rnd_762x39_AK12_Mag_F", 400, "call life_coplevel >= 1", "" },
			  { "5Rnd_127x108_APDS_Mag", 600, "call life_coplevel >= 1", "" },
              { "30Rnd_65x39_caseless_black_mag", 400, "call life_coplevel >= 1", "" },
              { "30Rnd_65x39_caseless_msbs_mag", 300, "call life_coplevel >= 1", "" }
			};
			attachments[] = {
              { "muzzle_snds_M", 1000, "licnese_cop_tiro1", "" },
              { "muzzle_snds_58_blk_F", 1000, "license_cop_uei", "" },
              { "muzzle_snds_B", 1000, "license_cop_tiro2", "" },
              { "muzzle_snds_H", 1000, "license_cop_tiro1", "" },
              { "muzzle_snds_570", 500, "license_cop_tiro1", "" },
			  { "muzzle_snds_65_TI_blk_F", 3000, "license_cop_uei", "" },
              { "muzzle_snds_L", 200, "licnese_cop_tiro1", "" },
              { "muzzle_snds_acp", 200, "licnese_cop_tiro1", "" },
              { "optic_AMS_snd", 500, "call life_coplevel >= 1", "" },
              { "optic_AMS_khk", 500, "call life_coplevel >= 1", "" },
              { "optic_DMS_ghex_F", 500, "license_cop_tiro1", "" },
              { "optic_ERCO_khk_F", 350, "licnse_cop_tiro1", "" },
              { "optic_ERCO_snd_F", 350, "licnse_cop_tiro1", "" },
              { "optic_Holosight_smg", 500, "call life_coplevel >= 1", "" },
              { "optic_Arco_blk_F", 250, "license_cop_tiro1", "" },
              { "optic_Hamr", 250, "call life_coplevel >= 1", "" },
              { "optic_Aco", 250, "call life_coplevel >= 1", "" },
			  { "optic_Holosight", 250, "call life_coplevel >= 1", "" },
		      { "acc_flashlight", 250, "call life_coplevel >= 1", "" },
			  { "acc_pointer_IR", 250, "call life_coplevel >= 1", "" },
			  { "optic_MRCO", 250, "call life_coplevel >= 2", "" },
			  { "optic_LRPS", 5000, "license_cop_uei", "" },
			  { "optic_DMS", 250, "license_cop_tiro1", "" },
			  { "optic_AMS", 250, "call life_coplevel >= 1", "" },
			  { "optic_KHS_blk", 250, "license_cop_tiro2", "" },
			  { "optic_ERCO_blk_F", 250, "licnse_cop_tiro1", "" },
              { "bipod_02_F_blk", 100, "", "call life_coplevel >= 1" },
			  { "optic_SOS", 250, "", "license_tiro2" },
			  { "optic_NVS", 6000, "license_cop_uei", "" },
              { "optic_Nightstalker", 8000, "license_cop_especialista", "" },
			  { "optic_tws", 1000, "license_cop_uei", "" },
              { "optic_ACO_grn", 250, "call life_coplevel >= 1", "" },
              { "optic_ico_01_black_f", 150, "call life_coplevel >= 1", "" }
			};
			items[] = {
			  {"Binocular", 150, "true", ""}, //Prismáticos
			  {"Rangefinder", 200, "true", ""}, //Telemetría
			  {"ItemGPS", 150, "true", ""}, //GPS
			  {"ItemMap", 100, "true", ""}, //Mapa
			  {"ItemCompass", 75, "true", ""}, //Brújula
			  {"ItemWatch", 75, "true", ""}, //Reloj
			  {"NVGoggles_OPFOR", 1000, "true", ""} //Vision Nocturna
			};
		};

        //tienda de bandas de bandas
		class banda {
			title = "Tienda de Armas de Bandas";
			condition = "playerSide isEqualTo civilian";
			simple = 0;
			maxCart = 50;
			weapons[] = {
				{"arifle_Katiba_F", 38000, "true", ""}, //Katiba 6.5 mm
				{"SMG_02_F", 18000, "true", ""} //Sting 9 mm
			};
			magazines[] = {
				{"30Rnd_9x21_Mag", 500, "true", ""},
				{"30Rnd_65x39_caseless_green", 500, "true", ""}
			};
			attachments[] = {
				{"optic_aco", 1500, "true", ""}
			};
			items[] = {
				{"Binocular", 150, "true", ""}, //Prismáticos
				{"ItemGPS", 150, "true", ""}, //GPS
				{"ItemMap", 100, "true", ""}, //Mapa
				{"ItemCompass", 75, "true", ""}, //Brújula
				{"ItemWatch", 75, "true", ""}, //Reloj
				{"NVGoggles_OPFOR", 1000, "true", ""} //Vision Nocturna
			};
		};
	};
};

#include "gui\weapon_gui_master.cpp"
