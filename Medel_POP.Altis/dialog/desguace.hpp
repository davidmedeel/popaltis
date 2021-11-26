
class desguace
{
	idd = -1;
	onLoad = "uiNamespace setVariable ['desguace', _this select 0];";
	onUnLoad = "uiNamespace setVariable ['desguace', nil]; ";

	class controls {

		class fondo: IGUIBack
		{
			idc = -1;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.55 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class cabecera: RscText
		{
			idc = -1;
			text = "Desguace"; //--- ToDo: Localize;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.24,0.24,0.24,1};
		};
		class cerrar: RscPicture
		{
			idc = -1;
			onButtonclick = "closeDialog 0;";
			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x = 0.690781 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class lista: RscListbox
		{
			idc = 1000000;
			x = 0.298905 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.528 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,1};
		};
		class boton: RscButton
		{
			idc = 1000001;
			text = "Reparar"; //--- ToDo: Localize;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.033 * safezoneH;
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
