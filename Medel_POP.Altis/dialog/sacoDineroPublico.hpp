
class sacoDineroPublico {
	idd = -1;
	movingEnable = 0;
	onLoad = "uiNamespace setVariable ['sacoDineroPublico', _this select 0]; abierto = true;";
	onUnLoad = "uiNamespace setVariable ['sacoDineroPublico', nil]; abierto = nil";

	class controls {
		class fondo: IGUIBack
		{
			idc = -1;
			x = 0.377281 * safezoneW + safezoneX;
			y = 0.3614 * safezoneH + safezoneY;
			w = 0.254719 * safezoneW;
			h = 0.3014 * safezoneH;
		};
		class btn: RscButton
		{
			idc = -1;
			text = "SACAR"; //--- ToDo: Localize;
			x = 0.451531 * safezoneW + safezoneX;
			y = 0.6034 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.0352 * safezoneH;
			action = "[ctrlText 5052] spawn medel_fnc_sacoDineroPublico";
		};
		class entrada: RscEdit
		{
			idc = 5052;
			x = 0.424718 * safezoneW + safezoneX;
			y = 0.5154 * safezoneH + safezoneY;
			w = 0.16086 * safezoneW;
			h = 0.0572 * safezoneH;
		};
		class txt: RscText
		{
			idc = 5053;
			x = 0.39997 * safezoneW + safezoneX;
			y = 0.4054 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.088 * safezoneH;
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
