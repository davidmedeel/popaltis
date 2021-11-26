
class TrunkMenu {
    idd = 3500;
    name = "TrunkMenu";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class RscTitleBackground: Life_RscText {
            colorBackground[] = {0.32,0.85,0.29,1};
            idc = -1;
            x = 0.1;
            y = 0.2;
            w = 0.7;
            h = (1 / 25);
        };

        class RscBackground: Life_RscText {
            colorBackground[] = {1,0.6,0.2,1};
            idc = -1;
            x = 0.1;
            y = 0.2 + (11 / 250);
            w = 0.7;
            h = 0.7 - (22 / 250);
        };

        class RscTitleText: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = 3501;
            text = "";
            x = 0.1;
            y = 0.2;
            w = 0.7;
            h = (1 / 25);
        };

        class VehicleWeight : RscTitleText {
            idc = 3504;
            style = 1;
            text = "";
        };

        class RscTrunkText: Life_RscText {
            idc = -1;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            text = "Maletero del Vehículo";
            sizeEx = 0.04;
            x = 0.11;
            y = 0.25;
            w = 0.3;
            h = 0.04;
        };

        class RscPlayerText: Life_RscText {
            idc = -1;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            text = "Tu Inventario";
            sizeEx = 0.04;
            x = 0.49;
            y = 0.25;
            w = 0.3;
            h = 0.04;
        };
    };

    class Controls {
        class TrunkGear: Life_RscListBox {
            idc = 3502;
            text = "";
            sizeEx = 0.030;
            x = 0.11;
            y = 0.29;
            w = 0.3;
            h = 0.42;
        };

        class PlayerGear: Life_RscListBox {
            idc = 3503;
            text = "";
            sizeEx = 0.030;

            x = 0.49;
            y = 0.29;
            w = 0.3;
            h = 0.42;
        };

        class TrunkEdit: Life_RscEdit {
            idc = 3505;
            text = "1";
            sizeEx = 0.030;
            x = 0.11;
            y = 0.72;
            w = 0.3;
            h = 0.03;
        };

        class PlayerEdit: Life_RscEdit {
            idc = 3506;
            text = "1";
            sizeEx = 0.030;
            x = 0.49;
            y = 0.72;
            w = 0.3;
            h = 0.03;
        };

        class TakeItem: Life_RscButtonMenu {
            idc = -1;
            text = "Coger";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_vehTakeItem;";
            x = 0.19;
            y = 0.78;
            w = (6.25 / 40);
            h = (1 / 25);
        };

        class StoreItem: Life_RscButtonMenu {
            idc = -1;
            text = "Guardar";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_vehStoreItem;";
            x = 0.57;
            y = 0.78;
            w = (6.25 / 40);
            h = (1 / 25);
        };

        class ButtonClose: Life_RscButtonMenu {
            idc = -1;
            text = "Cerrar";
            onButtonClick = "closeDialog 0;";
            x = 0.1;
            y = 0.9 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };
    };
};


class caja
{
	idd = -1;
	onLoad = "uiNamespace setVariable ['caja', _this select 0];";
	onUnLoad = "uiNamespace setVariable ['caja', nil]; ";
	
	class controls {
		
		class fondoIzq: IGUIBack
		{
			idc = 2203;
			x = 0.0029375 * safezoneW + safezoneX;
			y = 0.1304 * safezoneH + safezoneY;
			w = 0.322782 * safezoneW;
			h = 0.7612 * safezoneH;
		};
		class fondoDer: IGUIBack
		{
			idc = 2204;
			x = 0.762911 * safezoneW + safezoneX;
			y = 0.1304 * safezoneH + safezoneY;
			w = 0.233085 * safezoneW;
			h = 0.7612 * safezoneH;
		};

		class grp: RscControlsGroup
		{
			idc = 6608;

			x = 0.327785 * safezoneW + safezoneX;
			y = 0.3922 * safezoneH + safezoneY;
			w = 0.0690937 * safezoneW;
			h = 0.1606 * safezoneH;
			class Controls
			{
				class fondoGrp: IGUIBack
				{
					idc = 6609;

					x = 0.00101805 * safezoneW;
					y = 0.0022 * safezoneH;
					w = 0.0608555 * safezoneW;
					h = 0.1408 * safezoneH;
				};
				class edit: RscEdit
				{
					idc = 6610;

					text = "1"; //--- ToDo: Localize;
					x = 0.00515804 * safezoneW;
					y = 0.011 * safezoneH;
					w = 0.0525936 * safezoneW;
					h = 0.033 * safezoneH;
				};
				class imgFlecha: RscPicture
				{
					idc = 6611;

					text = "\p0_icons\flechaD.paa";
					x = 0.00567702 * safezoneW;
					y = 0.0462 * safezoneH;
					w = 0.0515625 * safezoneW;
					h = 0.088 * safezoneH;
				};
				class boton: RscHitbox
				{
					idc = 6612;

					x = 0.00516197 * safezoneW;
					y = 0.055 * safezoneH;
					w = 0.0525937 * safezoneW;
					h = 0.077 * safezoneH;
				};
			};
		};
		class cab1: RscStructuredText
		{
			idc = 6600;

			text = "Filtro"; //--- ToDo: Localize;
			x = 0.00499997 * safezoneW + safezoneX;
			y = 0.1348 * safezoneH + safezoneY;
			w = 0.0897184 * safezoneW;
			h = 0.0242 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.8};
		};
		class cab2: cab1
		{
			idc = 6601;

			text = "Caja"; //--- ToDo: Localize;
			x = 0.096783 * safezoneW + safezoneX;
			y = 0.1348 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.0242 * safezoneH;
		};
		class cab3: cab1
		{
			idc = 6602;

			text = "Inventario"; //--- ToDo: Localize;
			x = 0.765032 * safezoneW + safezoneX;
			y = 0.1348 * safezoneH + safezoneY;
			w = 0.228937 * safezoneW;
			h = 0.0242 * safezoneH;
		};
		class l1: RscListbox
		{
			idc = 6603;
			colorBackground[] = {0,0,0,0.35};

			x = 0.005 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.0897185 * safezoneW;
			h = 0.7216 * safezoneH;
		};
		class l2: l1
		{
			idc = 6604;

			x = 0.096783 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.7216 * safezoneH;
		};
		class l3: l1
		{
			idc = 6605;
		
			x = 0.765031 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.228937 * safezoneW;
			h = 0.7216 * safezoneH;
		};
		class pos1: IGUIBack
		{
			idc = 6606;
			x = 0.328842 * safezoneW + safezoneX;
			y = 0.3944 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.0352 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class pos2: IGUIBack
		{
			idc = 6607;
			x = 0.700063 * safezoneW + safezoneX;
			y = 0.4076 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.0352 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};

		class barr1: RscPicture
		{
			idc = 6613;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.0967812 * safezoneW + safezoneX;
			y = 0.8806 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.0066 * safezoneH;
		};
		class barr2: RscPicture
		{
			idc = 6614;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.765032 * safezoneW + safezoneX;
			y = 0.8806 * safezoneH + safezoneY;
			w = 0.229968 * safezoneW;
			h = 0.0066 * safezoneH;
		};	
		
	};
};

