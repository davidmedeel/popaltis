
class Life_Vehicle_Shop_v2 {
    idd = 2300;
    name="life_vehicle_shop";
    movingEnabled = 0;
    enableSimulation = 1;
    onLoad = "ctrlShow [2330,false];";

    class controlsBackground 
    {
        class Background: Life_RscText
        {
	        colorBackground[] = {0,0,0,0.7};
	        idc = -1;
	        x = 0.716562 * safezoneW + safezoneX;
	        y = 0.016 * safezoneH + safezoneY;
	        w = 0.273281 * safezoneW;
	        h = 0.968 * safezoneH;
        };
        class Background2: Life_RscText
        {
	        colorBackground[] = {0,0,0,0.7};
	        idc = -1;
	        x = 0.716563 * safezoneW + safezoneX;
	        y = 0.016 * safezoneH + safezoneY;
	        w = 0.273281 * safezoneW;
	        h = 0.968 * safezoneH;
        };
        class Title: Life_RscStructuredText
        {
	        idc = 1100;
	        text = "Stock de la Tienda"; //--- ToDo: Localize;
	        x = 0.824844 * safezoneW + safezoneX;
	        y = 0.016 * safezoneH + safezoneY;
	        w = 0.0825 * safezoneW;
	        h = 0.033 * safezoneH;
        };

        class VehicleInfoText: Life_RscStructuredText
        {
	        idc = 1106;
	        text = "Informacion"; //--- ToDo: Localize;
	        x = 0.732031 * safezoneW + safezoneX;
	        y = 0.5 * safezoneH + safezoneY;
	        w = 0.0825 * safezoneW;
	        h = 0.022 * safezoneH;
        };

        class CloseBtn: Life_RscButtonMenu
        {
	        onButtonClick = "closeDialog 0; [] call life_fnc_playerSkins;";

	        idc = 2400;
	        text = "Cerrar"; //--- ToDo: Localize;
	        x = 0.732031 * safezoneW + safezoneX;
	        y = 0.951 * safezoneH + safezoneY;
	        w = 0.0670312 * safezoneW;
	        h = 0.022 * safezoneH;
        };
        class BuyCar: Life_RscButtonMenu
        {
	        onButtonClick = "[true] spawn life_fnc_vehicleShopBuy;";
	        idc = 2309;
	        text = "Comprar"; //--- ToDo: Localize;
	        x = 0.9125 * safezoneW + safezoneX;
	        y = 0.951 * safezoneH + safezoneY;
	        w = 0.0670312 * safezoneW;
	        h = 0.022 * safezoneH;
        };

        class RentCar: Life_RscButtonMenu
        {
	        onButtonClick = "[false] spawn life_fnc_vehicleShopBuy;";
	        idc = -1;
	        text = "Alquilar"; //--- ToDo: Localize;
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
	        idc = 2303;
	        x = 0.732031 * safezoneW + safezoneX;
	        y = 0.533 * safezoneH + safezoneY;
	        w = 0.242344 * safezoneW;
	        h = 0.275 * safezoneH;
        };
        class colorList: Life_RscCombo
        {
	        idc = 2304;
	        x = 0.840312 * safezoneW + safezoneX;
	        y = 0.819 * safezoneH + safezoneY;
	        w = 0.139219 * safezoneW;
	        h = 0.022 * safezoneH;
	        tooltip = ""; //--- ToDo: Localize;
        };

        class VehicleList: Life_RscListbox
        {
	        onLBSelChanged = "_this call life_fnc_garageLBChange;";
              sizeEX = 0.05;
	        idc = 2802;
	        x = 0.732031 * safezoneW + safezoneX;
	        y = 0.06 * safezoneH + safezoneY;
	        w = 0.242344 * safezoneW;
	        h = 0.517 * safezoneH;
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
