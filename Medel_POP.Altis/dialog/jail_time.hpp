
class jail_time
{
 idd = 26500;
 name = "jail_time";
 movingEnabled = false;
 enableSimulation = true;
 class controlsBackground
 {
 class Life_RscTitleBackground:Life_RscText
 {
 colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
	 idc = -1;
	 x = 0.3;
	 y = 0.2;
	 w = 0.47;
	 h = (1 / 25);
 };
 
 class MainBackground: Life_RscText
 {
	 colorBackground[] = {1,0.6,0.2,1};
	 idc = -1;
	 x = 0.3;
	 y = 0.2 + (11 / 250);
	 w = 0.47;
	 h = 0.3 - (22 / 250);
	};
 };
 
 class controls 
 {

 class Title: Life_RscTitle
 {
	 colorBackground[] = {0, 0, 0, 0};
	 idc = 2651;
	 text = "Enviar a Prisión";
	 x = 0.3;
	 y = 0.2;
	 w = 0.6;
	 h = (1 / 25);
 };
 class InfoMsg: Life_RscText
 {
	 idc = 2601;
	 text = "Tiempo en minutos:";
	 x = 0.3;
	 y = 0.163 + (11 / 250);
	 w = 0.45; 
	 h = 0.12;
 };
 class Textedit: Life_RscEdit 
 {
	 idc = 1400;
	 text = "1";
	 sizeEx = 0.030;
	 x = 0.40; 
	 y = 0.30;
	 w = 0.25; 
	 h = 0.03;
 };
 class payTicket: Life_RscButtonMenu 
 {
	 idc = 2402;
	 text = "Aceptar";
	 colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
	 onButtonClick="[] spawn life_fnc_arrestDialog_Arrest;";
	 x = 0.45;
	 y = 0.35;
	 w = (6.25 / 40);
	 h = (1 / 25);
 };
 class CloseButtonKey : Life_RscButtonMenu 
 {
	 idc = 2400;
	 text = "Cerrar";
	 onButtonClick = "closeDialog 0;";
	 x = 0.45;
	 y = 0.40;
	 w = (6.25 / 40);
	 h = (1 / 25);
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
