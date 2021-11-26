
class life_weapon_shop {
    idd = 38400;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground 
    {
	class Background: Life_IGUIBack
	{
		    colorBackground[] = {1,0.6,0.2,1};
		    idc = 2200;
		    x = 0.716562 * safezoneW + safezoneX;
		    y = 0.016 * safezoneH + safezoneY;
		    w = 0.273281 * safezoneW;
		    h = 0.968 * safezoneH;
	    };

	    class Background2: Life_IGUIBack
	    {
		    colorBackground[] = {1,0.6,0.2,1};

		    idc = 2201;
		    x = 0.716563 * safezoneW + safezoneX;
		    y = 0.016 * safezoneH + safezoneY;
		    w = 0.273281 * safezoneW;
		    h = 0.968 * safezoneH;
	    };

	    class Title: Life_RscStructuredText
	    {
		    idc = 1100;
		    text = "Tienda General"; //--- ToDo: Localize;
		    x = 0.824844 * safezoneW + safezoneX;
		    y = 0.016 * safezoneH + safezoneY;
		    w = 0.0825 * safezoneW;
		    h = 0.033 * safezoneH;
	    };

        class Title2: Life_RscStructuredText
	    {
		    idc = 1106;
		    text = ""; //--- ToDo: Localize;
		    x = 0.732031 * safezoneW + safezoneX;
		    y = 0.588 * safezoneH + safezoneY;
		    w = 0.0825 * safezoneW;
		    h = 0.022 * safezoneH;
	    };
    };

    class controls 
    {
	    class ButtonMags: Life_RscButtonMenu
	    {
		    onButtonClick = "_this call life_fnc_weaponShopMags; _this call life_fnc_weaponShopFilter";
		    idc = 38406;
		    text = "Cargadores"; //--- ToDo: Localize;
		    x = 0.840312 * safezoneW + safezoneX;
		    y = 0.951 * safezoneH + safezoneY;
		    w = 0.0670312 * safezoneW;
		    h = 0.022 * safezoneH;
	    };

        class FilterList: Life_RscCombo
        {
            onLBSelChanged = "_this call life_fnc_weaponShopFilter";
            idc = 38402;
            x = 0.732031 * safezoneW + safezoneX;
            y = 0.786 * safezoneH + safezoneY;
            w = 0.113437 * safezoneW;
            h = 0.022 * safezoneH;
        };

        class itemList: Life_RscListbox
	    {
		    onLBSelChanged = "_this call life_fnc_weaponShopSelection";
		    idc = 38403;
			sizeEX = 0.04;
		    x = 0.732031 * safezoneW + safezoneX;
		    y = 0.06 * safezoneH + safezoneY;
		    w = 0.242344 * safezoneW;
		    h = 0.517 * safezoneH;
	    };

        class CloseButtonKey: Life_RscButtonMenu
	    {
		    onButtonClick = "closeDialog 0; [] call life_fnc_playerSkins;";
		    idc = 2400;
		    text = "Salir"; //--- ToDo: Localize;
		    x = 0.9125 * safezoneW + safezoneX;
		    y = 0.786 * safezoneH + safezoneY;
		    w = 0.0670312 * safezoneW;
		    h = 0.022 * safezoneH;
	    };

	    class ButtonBuySell: Life_RscButtonMenu
	    {
		    onButtonClick = "[] spawn life_fnc_weaponShopBuySell; true";
		    idc = 38405;
		    text = "Comprar"; //--- ToDo: Localize;
		    x = 0.9125 * safezoneW + safezoneX;
		    y = 0.951 * safezoneH + safezoneY;
		    w = 0.0670312 * safezoneW;
		    h = 0.022 * safezoneH;
	    };

	    class itemInfo: Life_RscStructuredText
	    {
		    idc = 38404;
		    x = 0.732031 * safezoneW + safezoneX;
		    y = 0.632 * safezoneH + safezoneY;
		    w = 0.2475 * safezoneW;
		    h = 0.143 * safezoneH;
	    };

	    class ButtonAccs: Life_RscButtonMenu
	    {
		    onButtonClick = "_this call life_fnc_weaponShopAccs; _this call life_fnc_weaponShopFilter";
		    idc = 38407;
		    text = "Accesorios"; //--- ToDo: Localize;
		    x = 0.762969 * safezoneW + safezoneX;
		    y = 0.951 * safezoneH + safezoneY;
		    w = 0.0721875 * safezoneW;
		    h = 0.022 * safezoneH;
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
