
class eligeDato
{
	idd = -1;
	onLoad = "uiNamespace setVariable ['eligeDato', _this select 0];";
	onUnLoad = "uiNamespace setVariable ['eligeDato', nil]; ";
	onKeyDown = "if ((_this select 1) == 1) then {true}"; // bloqueo ESC
	
	class controls {

		class fondo: IGUIBack
		{
			idc = 6380;

			x = 0.356642 * safezoneW + safezoneX;
			y = 0.3218 * safezoneH + safezoneY;
			w = 0.289808 * safezoneW;
			h = 0.1474 * safezoneH;
		};
		class txt: RscStructuredText
		{
			idc = 6381;

			text = "Introduce un dato:"; //--- ToDo: Localize;
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.3306 * safezoneH + safezoneY;
			w = 0.280493 * safezoneW;
			h = 0.0902 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class b1: RscButton
		{
			idc = 6383;
			text = "ACEPTAR"; //--- ToDo: Localize;
			x = 0.356642 * safezoneW + safezoneX;
			y = 0.4692 * safezoneH + safezoneY;
			w = 0.145414 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0.32,0.85,0.29,1};
		};
		class b2: RscButton
		{
			idc = 6384;
			text = "CANCELAR"; //--- ToDo: Localize;
			x = 0.502062 * safezoneW + safezoneX;
			y = 0.4692 * safezoneH + safezoneY;
			w = 0.144383 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {1,0.25,0.19,1};
		};
		class desplegable: RscCombo
		{
			idc = 6382;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.1)";
			
			x = 0.358719 * safezoneW + safezoneX;
			y = 0.4274 * safezoneH + safezoneY;
			w = 0.28465 * safezoneW;
			h = 0.0374 * safezoneH;
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
