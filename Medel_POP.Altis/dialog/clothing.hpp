
class Life_Clothing {
    idd = 3100;
    name= "Life_Clothing";
    movingEnable = 1;
    enableSimulation = 1;

    class controlsBackground
    {
        class Background: Life_RscText
        {
	        idc = -1;
			colorBackground[] = {1,0.6,0.2,1};
	        x = 0.716562 * safezoneW + safezoneX;
	        y = 0.016 * safezoneH + safezoneY;
	        w = 0.273281 * safezoneW;
	        h = 0.968 * safezoneH;
        };
        class Background2: Life_RscText
        {
	        idc = -1;
			colorBackground[] = {1,0.6,0.2,1};
	        x = 0.716563 * safezoneW + safezoneX;
	        y = 0.016 * safezoneH + safezoneY;
	        w = 0.273281 * safezoneW;
	        h = 0.968 * safezoneH;
        };
    };

    class controls 
    {
        class Title: Life_RscStructuredText
        {
	        idc = 1100;
			colorBackground[] = {1,0.6,0.2,1};
	        text = "Tienda De Ropa"; //--- ToDo: Localize;
	        x = 0.824844 * safezoneW + safezoneX;
	        y = 0.016 * safezoneH + safezoneY;
	        w = 0.0825 * safezoneW;
	        h = 0.033 * safezoneH;
        };
        class ClothingList: Life_RscListbox
        {
	        onLBSelChanged = "[_this] call life_fnc_changeClothes;";
	        idc = 3101;
			sizeEX = 0.04;
	        x = 0.732031 * safezoneW + safezoneX;
	        y = 0.06 * safezoneH + safezoneY;
	        w = 0.242344 * safezoneW;
	        h = 0.748 * safezoneH;
        };
        class PriceTag: Life_RscStructuredText
        {
	        idc = 3102;
	        x = 0.778437 * safezoneW + safezoneX;
	        y = 0.907 * safezoneH + safezoneY;
	        w = 0.0567187 * safezoneW;
	        h = 0.022 * safezoneH;
        };
        class TotalPrice: Life_RscStructuredText
        {
	        idc = 3106;
	        x = 0.778437 * safezoneW + safezoneX;
	        y = 0.874 * safezoneH + safezoneY;
	        w = 0.0567187 * safezoneW;
	        h = 0.022 * safezoneH;
        };
        class FilterList: Life_RscCombo
        {
	        onLBSelChanged	= "_this call life_fnc_clothingFilter";
	        idc = 3105;
	        x = 0.835156 * safezoneW + safezoneX;
	        y = 0.819 * safezoneH + safezoneY;
	        w = 0.139219 * safezoneW;
	        h = 0.022 * safezoneH;
	        tooltip = "Usa esto para cambiar entre mochilas, gorros, gafas y chalecos."; //--- ToDo: Localize;
        };
        class CloseButtonKey: Life_RscButtonMenu
        {
	        onButtonClick = "closeDialog 0; [] call life_fnc_playerSkins;";
	        idc = -1;
	        text = "Salir"; //--- ToDo: Localize;
	        x = 0.732031 * safezoneW + safezoneX;
	        y = 0.951 * safezoneH + safezoneY;
	        w = 0.0670312 * safezoneW;
	        h = 0.022 * safezoneH;
        };
        class BuyButtonKey: Life_RscButtonMenu
        {
	        onButtonClick = "[] call life_fnc_buyClothes;";
	        idc = -1;
	        text = "Comprar"; //--- ToDo: Localize;
	        x = 0.9125 * safezoneW + safezoneX;
	        y = 0.951 * safezoneH + safezoneY;
	        w = 0.0670312 * safezoneW;
	        h = 0.022 * safezoneH;
        };
        class viewAngle: life_RscXSliderH
        {
	        onSliderPosChanged = "[4,_this select 1] call life_fnc_s_onSliderChange;";
	        idc = 3107;
			color[] = {1, 1, 1, 0.45};
            colorActive[] = {1, 1, 1, 0.65};
			text = "";
	        x = 0.00499997 * safezoneW + safezoneX;
	        y = 0.951 * safezoneH + safezoneY;
	        w = 0.221719 * safezoneW;
	        h = 0.033 * safezoneH;
	        tooltip = "Usa esto para rotar tu personaje y visualizarlo."; //--- ToDo: Localize;
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
