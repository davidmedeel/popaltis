
class ayudador {
	idd = -1;
	movingEnable = 0;
	onLoad = "uiNamespace setVariable ['ayudador', _this select 0]; abierto = true;";
	onUnLoad = "uiNamespace setVariable ['ayudador', nil]; abierto = nil";

class controls {

class fondo: IGUIBack
{
	idc = -1;
	x = 0.214344 * safezoneW + safezoneX;
	y = 0.181 * safezoneH + safezoneY;
	w = 0.605347 * safezoneW;
	h = 0.6424 * safezoneH;
	colorBackground[] = {0,0,0,0.7};
};
class cabecera: RscText
{
	idc = 1002;
	text = "Ayudador"; //--- ToDo: Localize;
	x = 0.216406 * safezoneW + safezoneX;
	y = 0.148 * safezoneH + safezoneY;
	w = 0.603281 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,0.7};
};
class separador: RscPicture
{
	idc = 1201;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.216406 * safezoneW + safezoneX;
	y = 0.17 * safezoneH + safezoneY;
	w = 0.603281 * safezoneW;
	h = 0.011 * safezoneH;
};
class separador2: RscPicture
{
	idc = 1200;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.413375 * safezoneW + safezoneX;
	y = 0.1876 * safezoneH + safezoneY;
	w = 0.004125 * safezoneW;
	h = 0.627 * safezoneH;
};
class texto: RscStructuredText
{
	idc = 5055;
	font = "Zeppelin33";
	x = 0.429875 * safezoneW + safezoneX;
	y = 0.203 * safezoneH + safezoneY;
	w = 0.377442 * safezoneW;
	h = 0.5962 * safezoneH;
	colorBackground[] = {0,0,0,0};
};
class lista: RscListBox
{
	idc = 5056;
	onLBSelChanged = "['actualiza'] call ica_fnc_ayudador";
	x = 0.2195 * safezoneW + safezoneX;
	y = 0.1876 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.627 * safezoneH;
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
