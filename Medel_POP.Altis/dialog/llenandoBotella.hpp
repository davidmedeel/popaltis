
class llenandoBotella {
	idd = -1;
	movingEnable = 0;
	onLoad = "uiNamespace setVariable ['llenandoBotella', _this select 0];";
	onUnLoad = "uiNamespace setVariable ['llenandoBotella', nil]; llena = nil;";

	class controls {
		class barrita: RscProgressV
		{
			idc = 4058;
			text = "";
			x = 0.462874 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0660001 * safezoneW;
			h = 0.3586 * safezoneH;
			colorBar[] = {0,0.3,0.8,0.7};
		};
		class fondo: RscPicture
		{
			idc = -1;
			text = "medel\imagenes\botellaVacia.paa";
			x = 0.342219 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.317625 * safezoneW;
			h = 0.528 * safezoneH;
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
