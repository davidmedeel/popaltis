
class IGUIBack
{
	type = 0;
	idc = 124;
	style = 128;
	text = "";
	colorText[] =
	{
		0,
		0,
		0,
		0
	};
	font="PuristaMedium";
	sizeEx = 0;
	shadow = 0;
	x = 0.1;
	y = 0.1;
	w = 0.1;
	h = 0.1;
	colorbackground[] =
	{
		"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"
	};
};

class RscStructuredText
{
	access = 0;
	type = 13;
	idc = -1;
	style = 0;
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	class Attributes
	{
		font = "PuristaMedium";
		color = "#ffffff";
		align = "left";
		shadow = 1;
	};
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 1;
};

class anuncio
{
	idd = -1;
	fadein = 2; 
	duration = 9999;
	fadeout = 4;
	movingEnable = 0;
	onLoad = "uiNamespace setVariable ['anuncio', _this select 0]";
	onUnLoad = "uiNamespace setVariable ['anuncio', nil]";
	
	class controls
	{
		class fondo: IGUIBack
		{
			idc = -1;
			x = 0.221562 * safezoneW + safezoneX;
			y = 0.841 * safezoneH + safezoneY;
			w = 0.610587 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {0,0,0,0.65};
		};
		class txt: RscStructuredText
		{
			idc = 5050;
			text = ""; //--- ToDo: Loca lize;
			x = 0.224624 * safezoneW + safezoneX;
			y = 0.8432 * safezoneH + safezoneY;
			w = 0.604399 * safezoneW;
			h = 0.077 * safezoneH;
			font = "EtelkaNarrowMediumPro";
		};
		class txt2: RscStructuredText
		{
			idc = 5051;
			text = ""; //--- ToDo: Loca lize;
			x = 0.224655 * safezoneW + safezoneX;
			y = 0.8872 * safezoneH + safezoneY;
			w = 0.604399 * safezoneW;
			h = 0.077 * safezoneH;
			font = "EtelkaNarrowMediumPro";
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
