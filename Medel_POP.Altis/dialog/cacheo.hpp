
class cacheo
{
	idd = -1;
	movingenable = true;
	onLoad = "uiNamespace setVariable ['cacheo', _this select 0]; ";
	onUnLoad = "uiNamespace setVariable ['cacheo', nil]; ";
	
class controls {

class l1: life_RscListBox
{
	idc = 7090;

	x = 0.2855 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.14025 * safezoneW;
	h = 0.352 * safezoneH;
	sizeEx = 0.033;
	colorBackground[] = {0,0,0,0.8};
};
class l2: life_RscListBox
{
	idc = 7091;

	x = 0.429875 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.14025 * safezoneW;
	h = 0.352 * safezoneH;
	sizeEx = 0.033;
	colorBackground[] = {0,0,0,0.8};
};
class l3: life_RscListBox
{
	idc = 7092;

	text = "l3"; //--- ToDo: Localize;
	x = 0.57425 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.14025 * safezoneW;
	h = 0.352 * safezoneH;
	sizeEx = 0.033;
	colorBackground[] = {0,0,0,0.8};
};
class ropa: life_RscText
{
	idc = 1003;
	text = "Ropa"; //--- ToDo: Localize;
	x = 0.2855 * safezoneW + safezoneX;
	y = 0.3174 * safezoneH + safezoneY;
	w = 0.14024 * safezoneW;
	h = 0.0308 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
class chaleco: life_RscText
{
	idc = 1004;
	text = "Chaleco"; //--- ToDo: Localize;
	x = 0.429875 * safezoneW + safezoneX;
	y = 0.3174 * safezoneH + safezoneY;
	w = 0.14024 * safezoneW;
	h = 0.0308 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
class mochila: life_RscText
{
	idc = 1005;
	text = "Mochila"; //--- ToDo: Localize;
	x = 0.57425 * safezoneW + safezoneX;
	y = 0.3174 * safezoneH + safezoneY;
	w = 0.14024 * safezoneW;
	h = 0.0308 * safezoneH;
	colorBackground[] = {0,0,0,1};
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
