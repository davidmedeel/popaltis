
class barrita
{
	name = "barrita";
	idd = -1;
	fadein=1;
	duration = 3600;
	fadeout=2;
	movingEnable = 0;
	onLoad="uiNamespace setVariable ['barrita', _this select 0]";
	onUnLoad="uiNamespace setVariable ['barrita', nil]";
	objects[]={};

	class controlsBackground 
	{
		class fondo: IGUIBack
		{
			idc = -1;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.9268 * safezoneH + safezoneY;
			w = 0.220687 * safezoneW;
			h = 0.0374 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
		class barra: IGUIBack
		{
			idc = 5010;
			x = 0.405125 * safezoneW + safezoneX;
			y = 0.9312 * safezoneH + safezoneY;
			w = 0.214501 * safezoneW;
			h = 0.0286 * safezoneH;
			colorBackground[] = {1,1,1,0.3};
		};
		class texto: RscText
		{
			idc = 5011;
			text = ""; //--- ToDo: Localize;
			x = 0.409121 * safezoneW + safezoneX;
			y = 0.932126 * safezoneH + safezoneY;
			w = 0.205193 * safezoneW;
			h = 0.0264 * safezoneH;
			font = "RobotoCondensed";
			colorText[] = {1,1,1,1};
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