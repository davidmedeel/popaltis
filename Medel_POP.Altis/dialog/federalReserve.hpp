
class Federal_Safe
{
    idd = 3500;
    name = "Federal_Safe";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground
    {
        class RscTitleBackground: Life_RscText
        {
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            idc = -1;
            x = 0.1;
            y = 0.2;
            w = 0.33;
            h = (1 / 25);
        };
        class RscBackground: Life_RscText {
            colorBackground[] = {1,0.6,0.2,1};
            idc = -1;
            x = 0.1;
            y = 0.2 + (11 / 250);
            w = 0.33;
            h = 0.7 - (22 / 250);
        };
        class RscTitleText: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = 3501;
            text = "";
            x = 0.1;
            y = 0.2;
            w = 0.33;
            h = (1 / 25);
        };
        class VehicleWeight : RscTitleText {
            idc = 3504;
            style = 1;
            text = "";
        };
        class RscTrunkText: Life_RscText {
            idc = -1;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            text = "Inventario";
            sizeEx = 0.04;
            x = 0.11;
            y = 0.25;
            w = 0.3;
            h = 0.04;
        };
    };

    class Controls
    {
        class TrunkGear: Life_RscListBox
        {
            idc = 3502;
            text = "";
            sizeEx = 0.030;
            x = 0.11;
            y = 0.29;
            w = 0.3;
            h = 0.42;
        };
        class TrunkEdit: Life_RscEdit
        {
            idc = 3505;
            text = "1";
            sizeEx = 0.030;
            x = 0.11;
            y = 0.72;
            w = 0.3;
            h = 0.03;
        };
        class TakeItem: Life_RscButtonMenu
        {
            idc = -1;
            text = "Coger";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_safeTake;";
            x = 0.19;
            y = 0.78;
            w = (6.25 / 40);
            h = (1 / 25);
        };
        class ButtonClose: Life_RscButtonMenu
        {
            idc = -1;
            text = "Cerrar";
            onButtonClick = "closeDialog 0;";
            x = 0.1;
            y = 0.9 - (1 / 25);
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
