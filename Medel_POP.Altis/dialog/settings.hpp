
class SettingsMenu
{
    idd = 2900;
    name = "SettingsMenu";
    movingEnable = 1;
    enableSimulation = 1;

    class controlsBackground
    {
        class RscTitleBackground: Life_RscText
        {
            colorBackground[] = {0.32,0.85,0.29,1};
            idc = -1;
            x = 0.3;
            y = 0.2;
            w = 0.5;
            h = (1 / 25);
        };
        class RscMainBackground: Life_RscText
        {
            colorBackground[] = {1,0.6,0.2,1};
            idc = -1;
            x = 0.4175 * safezoneW + safezoneX;
            y = 0.3592 * safezoneH + safezoneY;
            w = 0.20625 * safezoneW;
            h = 0.099 * safezoneH;
        };
        class Title: Life_RscTitle
        {
            idc = -1;
            colorBackground[] = {0,0,0,0};
            text = "Configuración de la Vista";
            x = 0.3;
            y = 0.2;
            w = 0.5;
            h = (1 / 25);
        };
    };

    class controls
    {
        class VDonFoot: Life_RscText
        {
            idc = -1;
            text = "A Pie:";
            x = 0.32;
            y = 0.258;
            w = 0.275;
            h = 0.04;
        };
        class VDinCar: Life_RscText
        {
            idc = -1;
            text = "En Coche:";
            x = 0.32;
            y = 0.305;
            w = 0.275;
            h = 0.04;
        };
        class VDinAir: Life_RscText
        {
            idc = -1;
            text = "En Aire:";
            x = 0.32;
            y = 0.355;
            w = 0.275;
            h = 0.04;
        };
        class VD_onfoot_slider: life_RscXSliderH
        {
            idc = 2901;
            text = "";
            onSliderPosChanged = "[0,_this select 1] call life_fnc_s_onSliderChange;";
            tooltip = "Distancia de vista a pie";
            x = 0.42;
            y = 0.30 - (1 / 25);
            w = "9 *(((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class VD_onfoot_value: Life_RscEdit
        {
            idc = 2902;
            text = "";
            onChar = "[_this select 0, _this select 1,'ground',false] call life_fnc_s_onChar;";
            onKeyUp = "[_this select 0, _this select 1,'ground',true] call life_fnc_s_onChar;";
            x = .70;
            y = .258;
            w = .08;
            h = .04;
        };
        class VD_car_slider: life_RscXSliderH
        {
            idc = 2911;
            text = "";
            onSliderPosChanged = "[1,_this select 1] call life_fnc_s_onSliderChange;";
            tooltip = "Distancia de vista en vehiculo terrestre";
            x = 0.42;
            y = 0.35 - (1 / 25);
            w = "9 *(((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class VD_car_value: Life_RscEdit
        {
            idc = 2912;
            text = "";
            onChar = "[_this select 0, _this select 1,'vehicle',false] call life_fnc_s_onChar;";
            onKeyUp = "[_this select 0, _this select 1,'vehicle',true] call life_fnc_s_onChar;";
            x = .70;
            y = .31;
            w = .08;
            h = .04;
        };
        class VD_air_slider: life_RscXSliderH
        {
            idc = 2921;
            text = "";
            onSliderPosChanged = "[2,_this select 1] call life_fnc_s_onSliderChange;";
            tooltip = "Distancia de vista en vehiculo aéreo";
            x = 0.42;
            y = 0.40 - (1 / 25);
            w = "9 *(((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class VD_air_value: Life_RscEdit
        {
            idc = 2922;
            text = "";
            onChar = "[_this select 0, _this select 1,'air',false] call life_fnc_s_onChar;";
            onKeyUp = "[_this select 0, _this select 1,'air',true] call life_fnc_s_onChar;";
            x = 0.70;
            y = 0.36;
            w = .08;
            h = .04;
        };
        class cerrar: Life_RscButtonMenu
        {
	        text = "X"; //--- ToDo: Localize;
            onButtonClick = "closeDialog 0;"
	        x = 0.608281 * safezoneW + safezoneX;
	        y = 0.335 * safezoneH + safezoneY;
	        w = 0.0154688 * safezoneW;
	        h = 0.022 * safezoneH;
	       colorBackground[] = {1,0.25,0.19,1};
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
