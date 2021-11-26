
class C0kkie_crafting
{
	notanumber = "Eso no es un numero";
	notsomuch = "No tienes mucho";
	success = "Completado";
	error = "Error";
	notenoughressources = "No tienes suficientes materiales";
	errorcraftingbox = "Hubo un problema con el menu de frabricación";
	neededmaterials = "Materiales Necesarios: <br/><br/> %1";
	processing = "Fabricando Objetos...";
	craftingbox = "C_IDAP_supplyCrate_F";

    /* Objetos para Fabricar */
	class CraftingRecipes
	{
		class Crafting_1
		{
			name = "Menu de Fabricación";
			conditions = "playerside isequalto civilian";

            /* 4-cinco .45 ACP [verde] */
			class hgun_Pistol_heavy_01_green_F_Recipe
			{
				displayName = "4-cinco .45 ACP [verde]";
				input[]  = {{"iron_refined", 10}, {"polvora", 10}};
				output[] = {{"hgun_Pistol_heavy_01_green_F", 1}};
			};

            /* Cargador de 11 proyectiles de .45 ACP */ 
			class 11Rnd_45ACP_Mag_Recipe
			{
				displayName = "Cargador de 11 proyectiles de .45 ACP";
				input[]  = {{"iron_refined", 1}, {"polvora", 1}};
				output[] = {{"11Rnd_45ACP_Mag", 1}};
			};

            /* Mirilla MRD [Negro] */ 
			class optic_MRD_black_Recipe
			{
				displayName = "Mirilla MRD [Negro]";
				input[]  = {{"iron_refined", 5}, {"glass", 5}};
				output[] = {{"optic_MRD_black", 1}};
			};

            /* Cargador de LRR de 7 proyectiles .408 */ 
			class 7Rnd_408_Mag_Recipe
			{
				displayName = "Cargador de LRR de 7 proyectiles .408";
				input[]  = {{"iron_refined", 5}, {"polvora", 4}};
				output[] = {{"7Rnd_408_Mag", 1}};
			};

            /* GM6 Lynx 12,7 mm */ 
			class srifle_GM6_F_Recipe
			{
				displayName = "GM6 Lynx 12,7 mm";
				input[]  = {{"iron_refined", 40}, {"copper_refined", 2}, {"empunadura", 1}, {"culata", 1}};
				output[] = {{"srifle_GM6_F", 1}};
			};

            /* Munición GM6 Lynx 12,7 mm */ 
			class 5Rnd_127x108_Mag_Recipe
			{
				displayName = "Cargador de 5 proyectiles de 12,7 mm";
				input[]  = {{"iron_refined", 5}, {"polvora", 4}};
				output[] = {{"5Rnd_127x108_Mag", 1}};
			};

            /* Empuñadura */ 
			class empunadura_Recipe
			{
				displayName = "Empuñadura";
				input[]  = {{"iron_refined", 40}, {"copper_refined", 2}};
				output[] = {{"empunadura", 1}};
			};

            /* Culata */ 
			class culata_Recipe
			{
				displayName = "Culata";
				input[]  = {{"iron_refined", 40}, {"copper_refined", 2}};
				output[] = {{"culata", 1}};
			};

            /* Chaleco Bomba */ 
			class V_HarnessOGL_gry_Recipe
			{
				displayName = "Chaleco Bomba";
				input[]  = {{"tela", 20}, {"polvora", 80}, {"iron_refined", 2}, {"azufre", 2}};
				output[] = {{"V_HarnessOGL_gry", 1}};
			};

            /* Camuflaje Completo (exuberante) */
			class U_O_FullGhillie_lsh_Recipe
			{
				displayName = "Camuflaje Completo (exuberante) [Ghillie]";
				input[]  = {{"tela", 50}, {"algodon", 30}};
				output[] = {{"U_O_FullGhillie_lsh", 1}};
			};

            /* Camuflaje completo (árido) */
			class U_I_FullGhillie_ard_Recipe
			{
				displayName = "Camuflaje completo (árido) [Ghillie]";
				input[]  = {{"tela", 50}, {"algodon", 30}};
				output[] = {{"U_I_FullGhillie_ard", 1}};
			};
	
	        /* Camuflaje completo (jungla) */
			class U_B_T_FullGhillie_tna_F_Recipe
			{
				displayName = "Camuflaje completo (jungla) [Ghillie]";
				input[]  = {{"tela", 50}, {"algodon", 30}};
				output[] = {{"U_B_T_FullGhillie_tna_F", 1}};
			};

           /* Camuflaje completo (semiárido) (tropical) */
			class U_I_FullGhillie_sard_Recipe
			{
				displayName = "Camuflaje completo (semiárido) [Ghillie]";
				input[]  = {{"tela", 50}, {"algodon", 30}};
				output[] = {{"U_I_FullGhillie_sard", 1}};
			};
 
            /* Camuflaje completo (tropical) */
			class U_B_T_Sniper_F_Recipe
			{
				displayName = "Camuflaje completo (tropical) [Ghillie]";
				input[]  = {{"tela", 30}, {"algodon", 25}};
				output[] = {{"U_B_T_Sniper_F", 1}};
			};

            /* Traje de Camuflaje (Hex Verde) */
			class U_O_T_Sniper_F_Recipe
			{
				displayName = "Traje de Camuflaje (Hex Verde) [Ghillie]";
				input[]  = {{"tela", 30}, {"algodon", 25}};
				output[] = {{"U_O_T_Sniper_F", 1}};
			};

           /* Traje de Camuflaje (AAF) */
			class U_I_GhillieSuit_Recipe
			{
				displayName = "Traje de Camuflaje (AAF) [Ghillie]";
				input[]  = {{"tela", 30}, {"algodon", 25}};
				output[] = {{"U_I_GhillieSuit", 1}};
			};

            /* Traje de Camuflaje (CSAT) */
			class U_O_GhillieSuit_Recipe
			{
				displayName = "Traje de Camuflaje (CSAT) [Ghillie]";
				input[]  = {{"tela", 30}, {"algodon", 25}};
				output[] = {{"U_O_GhillieSuit", 1}};
			};

            /* Traje de Camuflaje (OTAN) */
			class U_B_GhillieSuit_Recipe
			{
				displayName = "Traje de Camuflaje (OTAN) [Ghillie]";
				input[]  = {{"tela", 30}, {"algodon", 25}};
				output[] = {{"U_B_GhillieSuit", 1}};
			};

            /* Traje de Camuflaje (Tropical) */
			class U_B_T_Soldier_F_Recipe
			{
				displayName = "Traje de Camuflaje (Tropical) [Ghillie]";
				input[]  = {{"tela", 30}, {"algodon", 25}};
				output[] = {{"U_B_T_Soldier_F", 1}};
			};

            /* Uniforme de Buzo */
			class U_B_Wetsuit_Recipe
			{
				displayName = "Uniforme de Buzo";
				input[]  = {{"tela", 40}, {"algodon", 15}};
				output[] = {{"U_B_Wetsuit", 1}};
			};

            /* Respirador */
			class V_RebreatherB_Recipe
			{
				displayName = "Respirador";
				input[]  = {{"iron_refined", 15}};
				output[] = {{"V_RebreatherB", 1}};
			};

            /* Paracaídas */
			class B_Parachute_Recipe
			{
				displayName = "Paracaídas";
				input[]  = {{"tela", 50}, {"algodon", 10}};
				output[] = {{"B_Parachute", 1}};
			};

            /* Mochila (Hex) */
			class B_Bergen_hex_F_Recipe
			{
				displayName = "Mochila (Hex) [Muy Grande]";
				input[]  = {{"tela", 50}, {"algodon", 15}};
				output[] = {{"B_Bergen_hex_F", 1}};
			};

            /* Chaleco Kipchak */
			class V_SmershVest_01_F_Recipe
			{
				displayName = "Chaleco Kipchak";
				input[]  = {{"tela", 80}, {"algodon", 20}};
				output[] = {{"V_SmershVest_01_F", 1}};
			};

            /* Chaleco Kipchak [Radio Táctica] */
			class V_SmershVest_01_radio_F_Recipe
			{
				displayName = "Chaleco Kipchak [Radio Táctica]";
				input[]  = {{"tela", 80}, {"algodon", 25}};
				output[] = {{"V_SmershVest_01_radio_F", 1}};
			};

            /* Chaleco con cartuchera modular [Oliva] */
			class V_CarrierRigKBT_01_Olive_F_Recipe
			{
				displayName = "Chaleco con cartuchera modular [Oliva]";
				input[]  = {{"tela", 100}, {"algodon", 15}};
				output[] = {{"V_CarrierRigKBT_01_Olive_F", 1}};
			};

            /* Chaleco con cartuchera modular [Geometrico] */
			class V_CarrierRigKBT_01_EAF_F_Recipe
			{
				displayName = "Chaleco con cartuchera modular [Geometrico]";
				input[]  = {{"tela", 100}, {"algodon", 15}};
				output[] = {{"V_CarrierRigKBT_01_EAF_F", 1}};
			};

            /* Cartuchera Modular Ligera [Oliva] */
			class V_CarrierRigKBT_01_light_Olive_F_Recipe
			{
				displayName = "Cartuchera Modular Ligera [Oliva]";
				input[]  = {{"tela", 100}, {"algodon", 15}};
				output[] = {{"V_CarrierRigKBT_01_light_Olive_F", 1}};
			};

            /* Cartuchera Modular Ligera [Geometicra] */
			class V_CarrierRigKBT_01_light_EAF_F_Recipe
			{
				displayName = "Cartuchera Modular Ligera [Geometicra]";
				input[]  = {{"tela", 110}, {"algodon", 5}};
				output[] = {{"V_CarrierRigKBT_01_light_EAF_F", 1}};
			};
		
            /* Chándal [Negro] */
			class U_O_R_Gorka_01_black_F_Recipe
			{
				displayName = "Chándal [Negro]";
				input[]  = {{"tela", 100}, {"algodon", 10}};
				output[] = {{"U_O_R_Gorka_01_black_F", 1}};
			};

            /* Pólvora */
			class polvora_Recipe
			{
				displayName = "Pólvora";
				input[]  = {{"carbon", 3}, {"azufre", 2}};
				output[] = {{"polvora", 1}};
			};

            /* Vendas */
			class vendas_Recipe
			{
				displayName = "Vendas";
				input[]  = {{"algodon", 3}, {"tela", 2}};
				output[] = {{"vendas", 1}};
			};
 
            /* Tela */
			class tela_Recipe
			{
				displayName = "Tela";
				input[]  = {{"algodon", 2}};
				output[] = {{"tela", 1}};
			};
		};
	};
};

/*
----------------------------------------------------------------------------------------------DIALOG-----------------------------------------------------------------------------------------------------------------------
*/

class C0kkie_CraftingMenu
{
	idd = 80000;
	name = "C0kkie_CraftingMenu";
	movingEnable = 1;
	enableSimulation = 0;
	onLoad = "";
	onUnload = "c0kkie_processing_cancel = true; c0kkie_currentcraftingmenu = nil;";

	class controlsBackground
	{
		class Background: Life_RscText
		{
			idc = -1;
			x = 0.2525 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.520781 * safezoneW;
			h = 0.44 * safezoneH;
			//colorBackground[] = {0.902,0.502,0.302,1};
			colorBackground[] = {0,0,0,0.5};
		};
	};

	class controls
	{
		class Title: Life_RscText
		{
			idc = -1;
			style = 2;
			text = "Menu de Fabricación";
			x = 0.254583 * safezoneW + safezoneX;
			y = 0.294444 * safezoneH + safezoneY;
			w = 0.515625 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class CraftingItemsList: Life_RscListBox
		{
			idc = 80001;
			onLBSelChanged = "_this call C0kkie_crafting_recipeSelectionChanged";
			sizeEx = 0.035;
			x = 0.25776 * safezoneW + safezoneX;
			y = 0.344556 * safezoneH + safezoneY;
			w = 0.306094 * safezoneW;
			h = 0.319 * safezoneH;
		};

		class InfoPanel: Life_RscStructuredText
		{
			idc = 80002;
			sizeEx = 0.035;
			x = 0.573437 * safezoneW + safezoneX;
			y = 0.346518 * safezoneH + safezoneY;
			w = 0.192 * safezoneW;
			h = 0.316222 * safezoneH;
		};

		class AmountText: Life_RscText
		{
			idc = -1;
			text = "Cantidad";
			x = 0.259687 * safezoneW + safezoneX;
			y = 0.676259 * safezoneH + safezoneY;
			w = 0.0365625 * safezoneW;
			h = 0.0438889 * safezoneH;
		};

		class AmountEdit: Life_RscEdit
		{
			idc = 80003;
			text = "0";
			x = 0.30 * safezoneW + safezoneX;
			y = 0.688 * safezoneH + safezoneY;
			w = 0.0509375 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class Progressing: Life_RscProgress
		{
			idc = 80004;
			x = 0.358073 * safezoneW + safezoneX;
			y = 0.686 * safezoneH + safezoneY;
			h = 0.02 * safezoneW;
			w = 0.32 * safezoneH;
			text = "Fabricando...";

			class Attributes
			{
				font = "PuristaMedium";
				color = "#00bfff";
				align = "left";
				shadow = 1;
			};
		};

        class ProgressingText: Life_RscText
		{
            idc = 80005;
            x = 0.363073 * safezoneW + safezoneX;
            y = 0.687 * safezoneH + safezoneY;
            w = 0.65;
            h = (1 / 25);
        };

		class Confirm: Life_RscButtonMenu
		{
			idc = 80020;
			text = "Fabricar";
			onButtonClick = "[] spawn C0kkie_crafting_processing;";
			x = 0.608073 * safezoneW + safezoneX;
			y = 0.684333 * safezoneH + safezoneY;
			w = 0.0695833 * safezoneW;
			h = 0.0283333 * safezoneH;
		};

		class Cancel: Life_RscButtonMenu
		{
			idc = 80021;
			text = "Cancelar";
			onButtonClick = "C0kkie_processing_cancel = true;";
			x = 0.690573 * safezoneW + safezoneX;
			y = 0.685259 * safezoneH + safezoneY;
			w = 0.0695833 * safezoneW;
			h = 0.0283333 * safezoneH;
		};
		class ButtonClose: Life_RscButtonMenu
		{
            idc = -1;
            text = "X";
            onButtonClick = "closeDialog 0;";
			x = 0.752583 * safezoneW + safezoneX;
			y = 0.305 * safezoneH + safezoneY;
            w = (0.35 / 25) * safezoneW;
            h = (0.6 / 25) * safezoneH;
			colorBackground[] = {0,0,0,0.5};
        };
				class medel: RscText
		{
    		idc = -1;
    		text = "www.medel.es"; //--- ToDo: Localize;
    		x = -0.000156274 * safezoneW + safezoneX;
    		y = -0.00599999 * safezoneH + safezoneY;
    		w = 0.0773438 * safezoneW;
    		h = 0.033 * safezoneH;
		};
        class credito: RscText
        {
	        idc = -1;
	        text = "Medel"; //--- ToDo: Localize;
	        x = 0.964475 * safezoneW + safezoneX;
	        y = -0.01656 * safezoneH + safezoneY;
	        w = 0.0412603 * safezoneW;
	        h = 0.055 * safezoneH;
        };
	};
};
