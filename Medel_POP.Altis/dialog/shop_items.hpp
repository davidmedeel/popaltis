
class shops_menu {
    idd = 2400;
    name= "shops_menu";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class Life_RscTitleBackground: Life_RscText {
            colorBackground[] = {0.32,0.85,0.29,1};
            idc = -1;
            x = 0.1;
            y = 0.2;
            w = 0.8;
            h = (1 / 25);
        };

        class MainBackground: Life_RscText {
            colorBackground[] = {1,0.6,0.2,1};
            idc = -1;
            x = 0.1;
            y = 0.2 + (11 / 250);
            w = 0.8;
            h = 0.6 - (22 / 250);
        };

        class vasText: Life_RscText {
            idc = -1;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            text = "Stock de la Tienda";
            sizeEx = 0.04;
            x = 0.12;
            y = 0.27;
            w = 0.350;
            h = 0.04;
        };

        class vasgText: Life_RscText {
            idc = -1;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            text = "Tu inventario";
            sizeEx = 0.04;
            x = 0.53;
            y = 0.27;
            w = 0.350;
            h = 0.04;
        };
    };

    class controls {
        class itemList: Life_RscListBox {
            idc = 2401;
            text = "";
            sizeEx = 0.030;
            x = 0.12;
            y = 0.31;
            w = 0.350;
            h = 0.340;
        };

        class pItemlist: Life_RscListBox {
            idc = 2402;
            text = "";
            sizeEx = 0.030;
            x = 0.53;
            y = 0.31;
            w = 0.350;
            h = 0.340;
        };

        class Title: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = 2403;
            text = "";
            x = 0.1;
            y = 0.2;
            w = 0.8;
            h = (1 / 25);
        };

        class PlayersName: Title {
            idc = 601;
            style = 1;
            text = "";
        };

        class buyEdit: Life_RscEdit {
            idc = 2404;
            text = "1";
            sizeEx = 0.030;
            x = 0.12;
            y = 0.66;
            w = 0.35;
            h = 0.03;
        };

        class sellEdit: Life_RscEdit {
            idc = 2405;
            text = "1";
            sizeEx = 0.030;
            x = 0.53;
            y = 0.66;
            w = 0.35;
            h = 0.03;
        };

        class ButtonAddG: Life_RscButtonMenu {
            idc = -1;
            text = "Comprar";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_virt_buy;";
            x = 0.12 + (0.35 / 2) - ((6.25 / 40) / 2);
            y = 0.70;
            w = (6.25 / 40);
            h = (1 / 25);
        };

        class ButtonRemoveG: Life_RscButtonMenu {
            idc = -1;
            text = "Vender";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_virt_sell";
            x = 0.53 + (0.35 / 2) - ((6.25 / 40) / 2);
            y = 0.70;
            w = (6.25 / 40);
            h = (1 / 25);
        };

        class ButtonClose: Life_RscButtonMenu {
            idc = -1;
            text = "Cerrar";
            onButtonClick = "closeDialog 0;";
            x = 0.1;
            y = 0.8 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
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
