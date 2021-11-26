
class Life_impound_menu {
    idd = 2800;
    name="life_vehicle_shop";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "ctrlShow [2330,false];";

    class controlsBackground {
        class Life_RscTitleBackground: Life_RscText    {
            colorBackground[] = {0.32,0.85,0.29,1};
            idc = -1;
            x = 0.1;
            y = 0.2;
            w = 0.8;
            h = (1 / 25);
        };

        class MainBackground: Life_RscText {
            colorBackground[] = {0,0,0,0.7};
            idc = -1;
            x = 0.1;
            y = 0.2 + (11 / 250);
            w = 0.8;
            h = 0.7 - (22 / 250);
        };

        class Title: Life_RscTitle {
            idc = 2801;
            text = "Garaje";
            x = 0.1;
            y = 0.2;
            w = 0.8;
            h = (1 / 25);
        };

        class VehicleTitleBox: Life_RscText {
            idc = -1;
            text = "Tus Vehículos";
            colorBackground[] = {0.32,0.85,0.29,1};
            x = 0.11;
            y = 0.26;
            w = 0.3;
            h = (1 / 25);
        };

        class VehicleInfoHeader: Life_RscText {
            idc = 2830;
            text = "Información del Vehículo";
            colorBackground[] = {0.32,0.85,0.29,1};
            x = 0.42;
            y = 0.26;
            w = 0.46;
            h = (1 / 25);
        };

        class CloseBtn: Life_RscButtonMenu {
            idc = -1;
            text = "Cerrar";
            onButtonClick = "closeDialog 0;";
            x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.9 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };

        class RetrieveCar: Life_RscButtonMenu {
            idc = -1;
            text = "Sacar";
			colorBackground[] = {0.1,0.75,0.1,1};
            onButtonClick = "[] call life_fnc_unimpound;";
            x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.9 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };

        class SellCar: Life_RscButtonMenu {
            idc = -1;
            text = "Vender";
			colorBackground[] = {0.75,0.1,0.1,1};
            onButtonClick = "[] call life_fnc_sellGarage; closeDialog 0;";
            x = 0.26 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.9 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };
    };

    class controls {
        class VehicleList: Life_RscListBox {
            idc = 2802;
            text = "";
            sizeEx = 0.04;
            colorBackground[] = {0.1,0.1,0.1,0.9};
            onLBSelChanged = "_this call life_fnc_garageLBChange;";
            x = 0.11;
            y = 0.302;
            w = 0.303;
            h = 0.49;
        };

        class vehicleInfomationList: Life_RscStructuredText {
            idc = 2803;
            text = "";
            sizeEx = 0.035;
            x = 0.41;
            y = 0.3;
            w = 0.5;
            h = 0.5;
        };

        class MainBackgroundHider: Life_RscText {
            colorBackground[] = {0,0,0,1};
            idc = 2810;
            x = 0.1;
            y = 0.2 + (11 / 250);
            w = 0.8;
            h = 0.7 - (22 / 250);
        };

        class MainHideText: Life_RscText {
            idc = 2811;
            text = "Buscando Vehiculos en la Base de Datos";
            sizeEx = 0.06;
            x = 0.24;
            y = 0.5;
            w = 0.6;
            h = (1 / 15);
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

/*
class Life_impound_menu {
    idd = 2800;
    name="life_vehicle_shop";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "ctrlShow [2330,false];";

    class controlsBackground 
    {
        class Background: Life_RscText
        {
	        colorBackground[] = {0.902,0.502,0.302,1};

	        idc = -1;
	        x = 0.716562 * safezoneW + safezoneX;
	        y = 0.016 * safezoneH + safezoneY;
	        w = 0.273281 * safezoneW;
	        h = 0.968 * safezoneH;
        };
        class Background2: Life_RscText
        {
	        colorBackground[] = {0.902,0.502,0.302,1};

	        idc = -1;
	        x = 0.716563 * safezoneW + safezoneX;
	        y = 0.016 * safezoneH + safezoneY;
	        w = 0.273281 * safezoneW;
	        h = 0.968 * safezoneH;
        };
        class Title: Life_RscStructuredText
        {
	        idc = 1100;
	        text = "Tu Garaje"; //--- ToDo: Localize;
	        x = 0.824844 * safezoneW + safezoneX;
	        y = 0.016 * safezoneH + safezoneY;
	        w = 0.0825 * safezoneW;
	        h = 0.033 * safezoneH;
        };

        class VehicleInfoText: Life_RscStructuredText
        {
	        idc = 1106;
	        text = "Info del Vehiculo"; //--- ToDo: Localize;
	        x = 0.732031 * safezoneW + safezoneX;
	        y = 0.588 * safezoneH + safezoneY;
	        w = 0.0825 * safezoneW;
	        h = 0.022 * safezoneH;
        };

        class CloseButtonKey: Life_RscButtonMenu
        {
	        onButtonClick = "closeDialog 0;";
	        idc = 2400;
	        text = "Salir"; //--- ToDo: Localize;
	        x = 0.732031 * safezoneW + safezoneX;
	        y = 0.951 * safezoneH + safezoneY;
	        w = 0.0670312 * safezoneW;
	        h = 0.022 * safezoneH;
        };
        class SellCar: Life_RscButtonMenu
        {
	        onButtonClick = "[] call life_fnc_sellGarage;";

	        idc = 2401;
	        text = "Vender"; //--- ToDo: Localize;
	        x = 0.9125 * safezoneW + safezoneX;
	        y = 0.951 * safezoneH + safezoneY;
	        w = 0.0670312 * safezoneW;
	        h = 0.022 * safezoneH;
        };

        class RetrieveCar: Life_RscButtonMenu
        {
	        onButtonClick = "[] call life_fnc_unimpound;";

	        idc = 2402;
	        text = "Sacar"; //--- ToDo: Localize;
	        x = 0.840312 * safezoneW + safezoneX;
	        y = 0.951 * safezoneH + safezoneY;
	        w = 0.0670312 * safezoneW;
	        h = 0.022 * safezoneH;
        };
    };

    class controls 
    {
        class vehicleInfomationList: Life_RscStructuredText
        {
	        idc = 2803;
	        x = 0.732031 * safezoneW + safezoneX;
	        y = 0.621 * safezoneH + safezoneY;
	        w = 0.242344 * safezoneW;
	        h = 0.275 * safezoneH;
        };

        class MainHideText: Life_RscText
        {
	        idc = 2811;
	        text = "Buscando Vehiculos..."; //--- ToDo: Localize;
	        x = 0.809375 * safezoneW + safezoneX;
	        y = 0.313 * safezoneH + safezoneY;
	        w = 0.103125 * safezoneW;
	        h = 0.132 * safezoneH;
        };

        class VehicleList: Life_RscListbox
        {
	        onLBSelChanged = "_this call life_fnc_garageLBChange;";
              sizeEX = 0.04;
	        idc = 2802;
	        x = 0.732031 * safezoneW + safezoneX;
	        y = 0.06 * safezoneH + safezoneY;
	        w = 0.242344 * safezoneW;
	        h = 0.517 * safezoneH;
        };
		class medel: RscText
		{
			idc = -1;
			text = "Medel"; //--- ToDo: Localize;
			x = 0.964445 * safezoneW + safezoneX;
			y = -0.0166667 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
    };
};
*/
