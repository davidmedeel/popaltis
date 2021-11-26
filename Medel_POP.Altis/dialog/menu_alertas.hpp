
class menu_alertas
{
	idd = -1;
	onLoad = "uiNamespace setVariable ['menu_alertas', _this select 0];";
	onUnLoad = "uiNamespace setVariable ['menu_alertas', nil]; ";

class controls {

class fondo: IGUIBack
{
	idc = 2200;
	x = 0.365937 * safezoneW + safezoneX;
	y = 0.434 * safezoneH + safezoneY;
	w = 0.190781 * safezoneW;
	h = 0.286 * safezoneH;
	colorBackground[] = {0.2,0.2,0.2,0.8};
};
class cabecera: RscText
{
	idc = 2406;
	text = "Gestión de Alertas"; //--- ToDo: Localize;
	x = 0.365937 * safezoneW + safezoneX;
	y = 0.412 * safezoneH + safezoneY;
	w = 0.190781 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0.16,0.55,0.12,0.8};
};
class alerta1: RscButton
{
	idc = 2400;
	onButtonClick = "['alerta1'] call medel_fnc_alertas; closeDialog 0;";
	text = "Nivel de Alerta 1"; //--- ToDo: Localize;
	x = 0.422656 * safezoneW + safezoneX;
	y = 0.456 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
};
class alerta2: RscButton
{
	idc = 2401;
	onButtonClick = "['alerta2'] call medel_fnc_alertas; closeDialog 0;";
	text = "Nivel de Alerta 2"; //--- ToDo: Localize;
	x = 0.422656 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
};
class alerta3: RscButton
{
	idc = 2402;
	onButtonClick = "['alerta3'] call medel_fnc_alertas; closeDialog 0;";
	text = "Nivel de Alerta 3"; //--- ToDo: Localize;
	x = 0.422656 * safezoneW + safezoneX;
	y = 0.544 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
};
class alerta4: RscButton
{
	idc = 2403;
	onButtonClick = "['alerta4'] call medel_fnc_alertas; closeDialog 0;";
	text = "Nivel de Alerta 4"; //--- ToDo: Localize;
	x = 0.422656 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
};
class alerta5: RscButton
{
	idc = 2404;
	onButtonClick = "['alerta5'] call medel_fnc_alertas; closeDialog 0;";
	text = "Nivel de Alerta 5"; //--- ToDo: Localize;
	x = 0.422656 * safezoneW + safezoneX;
	y = 0.632 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
};
class alerta6: RscButton
{
	idc = 2405;
	onButtonClick = "['alerta6'] call medel_fnc_alertas; closeDialog 0;";
	text = "Nivel de Alerta 6"; //--- ToDo: Localize;
	x = 0.422656 * safezoneW + safezoneX;
	y = 0.676 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
};
class botonCerrar: life_RscButtonMenu
{
	idc = 2400;
    onButtonClick = "closeDialog 0;";
	x = 0.54125 * safezoneW + safezoneX;
	y = 0.412 * safezoneH + safezoneY;
	w = 0.0154688 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,0};
};
class iconoX: RscPicture
{
	idc = 1200;
	text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
	x = 0.54125 * safezoneW + safezoneX;
	y = 0.412 * safezoneH + safezoneY;
	w = 0.0154688 * safezoneW;
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
