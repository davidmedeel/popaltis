
class life_spawn_selection
{
 idd = 38500;
 movingEnabled = 0;
 enableSimulation = 1;
 class controlsBackground
 {
 class life_RscTitleBackground: Life_RscText
 {
 idc = 1000;
 x = 0.0101577 * safezoneW + safezoneX;
 y = 0.0291999 * safezoneH + safezoneY;
 w = 0.170156 * safezoneW;
 h = 0.9438 * safezoneH;
 colorBackground[] = {0.294,0.286,0.286,0.8};
 };

 class Title: Life_RscText
 {
 idc = 1001;
 text = "Selección de Spawn";
 x = 0.0132501 * safezoneW + safezoneX;
 y = 0.0402 * safezoneH + safezoneY;
 w = 0.164999 * safezoneW;
 h = 0.0242 * safezoneH;
 };

 class MapView: Life_RscMapControl
 {
 idc = 38502;
 x = 0.183407 * safezoneW + safezoneX;
 y = 0.0292 * safezoneH + safezoneY;
 w = 0.8085 * safezoneW;
 h = 0.9438 * safezoneH;
 maxSatelliteAlpha = 0.75;
 alphaFadeStartScale = 1.15;
 alphaFadeEndScale = 1.29;
 };
 };

 class controls {
 class spawnList: Life_RscListNbox
 {
 idc = 38510;
 x = 0.0153125 * safezoneW + safezoneX;
 y = 0.071 * safezoneH + safezoneY;
 w = 0.159844 * safezoneW;
 h = 0.847 * safezoneH;
 text = "";
 sizeEx = 0.041;
 coloumns[] = {0,0,0.9};
 drawSideArrows = 1;
 idcLeft = -1;
 idcRight = -1;
 rowHeight = 0.050;
 onLBSelChanged = "_this call life_fnc_spawnPointSelected;";
 };

 class spawnButton: RscButton
 {
 idc = -1;
 text = "Confirmar";
 x = 0.0153125 * safezoneW + safezoneX;
 y = 0.9246 * safezoneH + safezoneY;
 w = 0.159844 * safezoneW;
 h = 0.033 * safezoneH;
 style = "0x02";
 offsetX = 0.003;
 offsetY = 0.003;
 offsetPressedX = 0.002;
 offsetPressedY = 0.002;
 colorShadow[] = {0,0,0,1};
 colorBorder[] = {0,0,0,0};
 borderSize = 0.008;
 onButtonClick = "[] call life_fnc_spawnConfirm";
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
