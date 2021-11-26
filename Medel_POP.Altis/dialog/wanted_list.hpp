
class life_wanted_menu {
    idd = 2400;
    movingenable = true;
    name= "life_wanted_menu";
    enableSimulation = true;
	
	class controlsBackground {

		class Life_RscTitleBackground:RscPicture {
		    text = "medel\imagenes\policia.paa";
			x = 0.184931 * safezoneW + safezoneX;
			y = 0.140043 * safezoneH + safezoneY;
			w = 0.618794 * safezoneW;
			h = 0.715073 * safezoneH;
		};
		
		class MainBackground:Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 0 * safezoneW;
			h = 0 * safezoneH;
		};
	};
	
	class controls {
		class WantedList: Life_RscListBox 
		{
			idc = 2401;
			text = "";
			sizeEx = 0.035;
			onLBSelChanged = "[] spawn life_fnc_wantedGrab";
			x = 0.346042 * safezoneW + safezoneX;
			y = 0.396667 * safezoneH + safezoneY;
			w = 0.0757812 * safezoneW;
			h = 0.245704 * safezoneH;
		};
		class WantedDetails: Life_RscListBox
		{
			idc = 2402;
			text = "";
			sizeEx = 0.035;
			colorBackground[] = {0, 0, 0, 0};
			x = 0.500000 * safezoneW + safezoneX;
			y = 0.391593 * safezoneH + safezoneY;
			w = 0.255833 * safezoneW;
			h = 0.283703 * safezoneH;
		};
		class BountyPrice: Life_RscText
		{
			idc = 2403;
			text = "";
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 0 * safezoneW;
			h = 0 * safezoneH;
		};
		class CloseButtonKey: Life_RscShopButton {
			idc = -1;
			text = "Cerrar";
			onButtonClick = "closeDialog 0;";
			x = 0.244049 * safezoneW + safezoneX;
			y = 0.555006 * safezoneH + safezoneY;
			w = 0.0876625 * safezoneW;
			h = 0.0440045 * safezoneH;
		};
		
		class PardonButtonKey: Life_RscShopButton {
			idc = 2405;
			text = "Perdonar";
			onButtonClick = "[] call life_fnc_pardon; closeDialog 0;";
			x = 0.244049 * safezoneW + safezoneX;
			y = 0.422992 * safezoneH + safezoneY;
			w = 0.0876625 * safezoneW;
			h = 0.0440045 * safezoneH;
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
