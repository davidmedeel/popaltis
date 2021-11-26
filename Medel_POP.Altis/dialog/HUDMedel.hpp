
class HUDMedel {
	idd = -1;
	movingEnable = 0;
	duration = 9e+012;
	onLoad = "uiNamespace setVariable ['HUDMedel', _this select 0];";
	onUnLoad = "uiNamespace setVariable ['HUDMedel', nil]; ";

    class controls {
		class cinturon: RscPicture
		{
			idc = 4203;
			text = "";
			x = 0.952292 * safezoneW + safezoneX;
			y = 0.574333 * safezoneH + safezoneY;
			w = 0.0331042 * safezoneW;
			h = 0.0589743 * safezoneH;
		};
		class tapones: RscPicture
		{
			idc = 3007;
			text = "";
			x = 0.952292 * safezoneW + safezoneX;
			y = 0.640333 * safezoneH + safezoneY;
			w = 0.0331042 * safezoneW;
			h = 0.0589743 * safezoneH;
		};
		class vida: RscPicture
		{
			idc = 3202;
			text = "";
			x = 0.952292 * safezoneW + safezoneX;
			y = 0.706333 * safezoneH + safezoneY;
			w = 0.0331042 * safezoneW;
			h = 0.0589743 * safezoneH;
		};
		class comida: RscPicture
		{
			idc = 3200;
			text = "";
			x = 0.952292 * safezoneW + safezoneX;
			y = 0.772333 * safezoneH + safezoneY;
			w = 0.0331042 * safezoneW;
			h = 0.0589743 * safezoneH;
		};
		class sed: RscPicture
		{
			idc = 3201;
			text = "";
			x = 0.952292 * safezoneW + safezoneX;
			y = 0.838333 * safezoneH + safezoneY;
			w = 0.0331042 * safezoneW;
			h = 0.0589743 * safezoneH;
		};
		class barraExp: RscProgress
		{
			idc = 6005;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.230844 * safezoneW + safezoneX;
			y = 0.9928 * safezoneH + safezoneY;
			w = 0.53625 * safezoneW;
			h = 0.0088 * safezoneH;
		};
		class txtExp: RscStructuredText
		{
			idc = 6010;
			text = "Nivel 1000"; //--- ToDo: Localize;
			x = 0.223622 * safezoneW + safezoneX;
			y = 0.973 * safezoneH + safezoneY;
			w = 0.0546561 * safezoneW;
			h = 0.0176 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0};
		};
		class txt2: RscStructuredText
		{
			idc = 6014;
			text = "Energía: 1000/1000 | SP: 50"; //--- ToDo: Localize;
			x = 0.643241 * safezoneW + safezoneX;
			y = 0.973 * safezoneH + safezoneY;
			w = 0.201094 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
		};
		class separador: RscStructuredText
		{
			idc = 6011;
			text = "|"; //--- ToDo: Localize;
			x = 0.494845 * safezoneW + safezoneX;
			y = 0.9864 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0};
		};
        class icono_policia: RscPicture
        {
	        idc = -1;
        	text = "icons\ico_policia.paa"; //--- ToDo: Localize;
	        x = 0.844953 * safezoneW + safezoneX;
	        y = 0.96992 * safezoneH + safezoneY;
	        w = 0.01459 * safezoneW;
	        h = 0.026 * safezoneH;
	        colorBackground[] = {0.02,0.06,0.06,1};
        };
        class policias: RscText
        {
	        idc = 6006;
	        text = "0"; //--- ToDo: Localize;
	        x = 0.859288 * safezoneW + safezoneX;
	        y = 0.973 * safezoneH + safezoneY;
	        w = 0.0360937 * safezoneW;
	        h = 0.02 * safezoneH;
	        colorBackground[] = {0.06,0.06,0.06,0.8};
        };
        class icono_medico: RscPicture
        {
	        idc = -1;
	        text = "icons\ico_ems.paa"; //--- ToDo: Localize;
	        x = 0.896516 * safezoneW + safezoneX;
	        y = 0.96992 * safezoneH + safezoneY;
	        w = 0.01459 * safezoneW;
	        h = 0.026 * safezoneH;
	        colorBackground[] = {0.02,0.06,0.06,1};
        };
        class medicos: RscText
        {
	        idc = 6007;
	        text = "0"; //--- ToDo: Localize;
	        x = 0.911881 * safezoneW + safezoneX;
	        y = 0.973 * safezoneH + safezoneY;
	        w = 0.0360937 * safezoneW;
	        h = 0.02 * safezoneH;
	        colorBackground[] = {0.06,0.06,0.06,0.8};
        };
        class icono_civil: RscPicture
        {
            idc = -1;
	        text = "icons\ico_civil.paa"; //--- ToDo: Localize;
	        x = 0.948078 * safezoneW + safezoneX;
	        y = 0.96992 * safezoneH + safezoneY;
	        w = 0.01459 * safezoneW;
	        h = 0.026 * safezoneH;
	        colorBackground[] = {0.02,0.06,0.06,1};
        };
        class civiles: RscText
        {
	        idc = 6008;
	        text = "0"; //--- ToDo: Localize;
	        x = 0.963341 * safezoneW + safezoneX;
	        y = 0.973 * safezoneH + safezoneY;
	        w = 0.0360937 * safezoneW;
	        h = 0.02 * safezoneH;
	        colorBackground[] = {0.06,0.06,0.06,0.8};
        };
        class nombre: RscStructuredText
        {
	        idc = 6000;
			x = 0.842384 * safezoneW + safezoneX;
			y = 0.9378 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
        };
		class sombrainfolog: RscListBox
		{
			idc = 6013;
			text = ""; //--- ToDo: Localize;
			x = 0.87100 * safezoneW + safezoneX;
			y = 0.72855 * safezoneH + safezoneY;
			w = 0.0763125 * safezoneW;
			h = 0.2024 * safezoneH;
			colorBackground[] = {0,0,0,0};
			sizeEx = 0.034;
			rowHeight = 0.02;
		};
		class infolog: RscListBox
		{
			idc = 6012;
			text = ""; //--- ToDo: Localize;
			x = 0.87125 * safezoneW + safezoneX;
			y = 0.7288 * safezoneH + safezoneY;
			w = 0.0763125 * safezoneW;
			h = 0.2024 * safezoneH;
			colorBackground[] = {0,0,0,0};
			sizeEx = 0.034;
			rowHeight = 0.02;
		};
        class comunidad: RscText
        {
	        idc = -1;
	        text = "POP Altis Life"; //--- ToDo: Localize;
	        x = 0.938281 * safezoneW + safezoneX;
	        y = 0.907 * safezoneH + safezoneY;
	        w = 0.108281 * safezoneW;
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
