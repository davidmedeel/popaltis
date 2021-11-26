
/*
IDC ---- 999000
IDC btn 1 ---- 999001
IDC btn 2---- 999002
IDC btn 3---- 999003
IDC btn 4---- 999004
IDC btn 5---- 999005
IDC btn 6---- 999006
IDC btn 7---- 999007
IDC btn 8---- 999008
IDC btn 9---- 999009
IDC btn 0---- 999010
IDC btn enter---- 999011
IDC text Display---- 999012
IDC btn Clear---- 999013
IDC btn exit---- 999014
*/

class Cerradura
{
	idd = 999000;
	onUnload = "UsoCodigo = nil";
	class ControlsBackground
	{
		class RscPicture
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.2625;
			y = safeZoneY + safeZoneH * 0.09222223;
			w = safeZoneW * 0.47;
			h = safeZoneH * 0.80333334;
			style = 48;
 			colorBackground[] = {0,0,0,0};
 			colorText[] = {1,1,1,1};
 			font = "TahomaB";
 			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
 			lineSpacing = 0;
 			text = "medel\imagenes\cerradura.paa";
 			fixedWidth = 0;
 			shadow = 0;
		};
	};
	class Controls
	{
		class 1
		{
			type = 1;
			idc = 999001;
			x = safeZoneX + safeZoneW * 0.36625;
			y = safeZoneY + safeZoneH * 0.31111112;
			w = safeZoneW * 0.045;
			h = safeZoneH * 0.07666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.851,0.1451,0.9608,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0.2588};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0.3059};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.149,0.8549,0.0392,0};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "UsoCodigo pushBack 1;['re'] call est_fnc_cerradura";
			
		};
		class 2
		{
			type = 1;
			idc = 999002;
			x = safeZoneX + safeZoneW * 0.428125;
			y = safeZoneY + safeZoneH * 0.30777778;
			w = safeZoneW * 0.045;
			h = safeZoneH * 0.07666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.851,0.1451,0.9608,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0.2588};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0.3059};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.149,0.8549,0.0392,0};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "UsoCodigo pushBack 2;['re'] call est_fnc_cerradura";
			
		};
		class 3
		{
			type = 1;
			idc = 999003;
			x = safeZoneX + safeZoneW * 0.49125;
			y = safeZoneY + safeZoneH * 0.30888889;
			w = safeZoneW * 0.045;
			h = safeZoneH * 0.07666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.851,0.1451,0.9608,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0.2588};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0.3059};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.149,0.8549,0.0392,0};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "UsoCodigo pushBack 3;['re'] call est_fnc_cerradura";
			
		};
		class 4
		{
			type = 1;
			idc = 999004;
			x = safeZoneX + safeZoneW * 0.36875;
			y = safeZoneY + safeZoneH * 0.41666667;
			w = safeZoneW * 0.045;
			h = safeZoneH * 0.07666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.851,0.1451,0.9608,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0.2588};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0.3059};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.149,0.8549,0.0392,0};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "UsoCodigo pushBack 4;['re'] call est_fnc_cerradura";
			
		};
		class 5
		{
			type = 1;
			idc = 999005;
			x = safeZoneX + safeZoneW * 0.428125;
			y = safeZoneY + safeZoneH * 0.41222223;
			w = safeZoneW * 0.045;
			h = safeZoneH * 0.07666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.851,0.1451,0.9608,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0.2588};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0.3059};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.149,0.8549,0.0392,0};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "UsoCodigo pushBack 5;['re'] call est_fnc_cerradura";
			
		};
		class 6
		{
			type = 1;
			idc = 999006;
			x = safeZoneX + safeZoneW * 0.49;
			y = safeZoneY + safeZoneH * 0.41333334;
			w = safeZoneW * 0.045;
			h = safeZoneH * 0.07666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.851,0.1451,0.9608,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0.2588};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0.3059};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.149,0.8549,0.0392,0};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "UsoCodigo pushBack 6;['re'] call est_fnc_cerradura";
		};
		class 7
		{
			type = 1;
			idc = 999007;
			x = safeZoneX + safeZoneW * 0.368125;
			y = safeZoneY + safeZoneH * 0.51666667;
			w = safeZoneW * 0.045;
			h = safeZoneH * 0.07666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.851,0.1451,0.9608,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0.2588};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0.3059};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.149,0.8549,0.0392,0};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "UsoCodigo pushBack 7;['re'] call est_fnc_cerradura";
			
		};
		class 8
		{
			type = 1;
			idc = 999008;
			x = safeZoneX + safeZoneW * 0.43;
			y = safeZoneY + safeZoneH * 0.52111112;
			w = safeZoneW * 0.045;
			h = safeZoneH * 0.07666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.851,0.1451,0.9608,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0.2588};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0.3059};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.149,0.8549,0.0392,0};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "UsoCodigo pushBack 8;['re'] call est_fnc_cerradura";
			
		};
		class 9
		{
			type = 1;
			idc = 999009;
			x = safeZoneX + safeZoneW * 0.49125;
			y = safeZoneY + safeZoneH * 0.52;
			w = safeZoneW * 0.045;
			h = safeZoneH * 0.07666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.851,0.1451,0.9608,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0.2588};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0.3059};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.149,0.8549,0.0392,0};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "UsoCodigo pushBack 9;['re'] call est_fnc_cerradura";

			
		};
		class Enter
		{
			type = 1;
			idc = 999011;
			x = safeZoneX + safeZoneW * 0.554375;
			y = safeZoneY + safeZoneH * 0.52111112;
			w = safeZoneW * 0.07625;
			h = safeZoneH * 0.07666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.851,0.1451,0.9608,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0.2588};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0.3059};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.149,0.8549,0.0392,0};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['enter'] call est_fnc_cerradura";
			
		};
		class 0
		{
			type = 1;
			idc = 999010;
			x = safeZoneX + safeZoneW * 0.43;
			y = safeZoneY + safeZoneH * 0.63111112;
			w = safeZoneW * 0.045;
			h = safeZoneH * 0.07666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.851,0.1451,0.9608,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0.2588};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0.3059};
			colorFocused[] = {0.4,0.302,0.702,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.149,0.8549,0.0392,0};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "UsoCodigo pushBack 0;['re'] call est_fnc_cerradura";
			
		};
		class Display
		{
			type = 0;
			idc = 999012;
			x = safeZoneX + safeZoneW * 0.37625;
			y = safeZoneY + safeZoneH * 0.218;
			w = safeZoneW * 0.24875;
			h = safeZoneH * 0.08222223;
			style = 2;
			text = "456123";
			colorBackground[] = {0.7922,0.9529,0.8471,0};
			colorText[] = {0.1903,0.7869,0.2001,1};
			font = "LucidaConsoleB";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 4);
			
		};
		class Cancel
		{
			type = 1;
			idc = 999014;
			x = safeZoneX + safeZoneW * 0.553125;
			y = safeZoneY + safeZoneH * 0.31;
			w = safeZoneW * 0.07625;
			h = safeZoneH * 0.07666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.851,0.1451,0.9608,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0.2588};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0.3059};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.149,0.8549,0.0392,0};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "closeDialog 0;";
			
		};
		class Clear
		{
			type = 1;
			idc = 999013;
			x = safeZoneX + safeZoneW * 0.55375;
			y = safeZoneY + safeZoneH * 0.41333334;
			w = safeZoneW * 0.07625;
			h = safeZoneH * 0.07666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.851,0.1451,0.9608,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0.2588};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0.3059};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.149,0.8549,0.0392,0};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "UsoCodigo = [];['re'] call est_fnc_cerradura";
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
