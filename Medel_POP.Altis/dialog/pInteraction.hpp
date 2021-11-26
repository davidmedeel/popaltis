
#define BGX 0.35
#define BGY 0.2
#define BGW 0.46

class pInteraction_Menu {
    idd = 37400;
    onLoad = "playSound 'HintExpand';";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class RscTitleBackground: RscText {
            colorBackground[] = {0.16,0.55,0.12,0.8};
            idc = -1;
            x = BGX;
            y = BGY;
            w = BGW;
            h = (1 / 25);
        };

        class MainBackground: RscText
        {
            idc = -1;
            colorBackground[] = {0.2,0.2,0.2,0.8};
            x = BGX;
            y = BGY + (11 / 250);
            w = BGW;
            h = 0.6 - (22 / 250) + 0.05;
        };

        class Title: RscText
        {
            colorBackground[] = {0,0,0,0};
            idc = 37401;
            text = "$STR_pInAct_Title";
            x = BGX;
            y = BGY;
            w = BGW;
            h = (1 / 25);
        };
    };

    class controls {
        class ButtonClose: RscButton
        {
            idc = -1;
            text = "Cerrar";
            onButtonClick = "closeDialog 0;";
            x = BGX;
            y = 0.8 - (1 / 25) + 0.05;
            w = (6.25 / 40);
            h = (1 / 25);
        };

        class ButtonOne: Life_RscButtonMenu
        {
            idc = 37450;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.07;
            w = 0.4;
            h = 0.038;
        };

        class ButtonTwo: Life_RscButtonMenu
        {
            idc = 37451;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.12;
            w = 0.4;
            h = 0.038;
        };

        class ButtonThree: Life_RscButtonMenu
        {
            idc = 37452;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.17;
            w = 0.4;
            h = 0.038;
        };

        class ButtonFour: Life_RscButtonMenu
        {
            idc = 37453;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.22;
            w = 0.4;
            h = 0.038;
        };

        class ButtonFive: Life_RscButtonMenu
        {
            idc = 37454;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.27;
            w = 0.4;
            h = 0.038;
        };

        class ButtonSix: Life_RscButtonMenu
        {
            idc = 37455;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.32;
            w = 0.4;
            h = 0.038;
        };

        class ButtonSeven: Life_RscButtonMenu
        {
            idc = 37456;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.37;
            w = 0.4;
            h = 0.038;
        };

        class ButtonEight: Life_RscButtonMenu
        {
            idc = 37457;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.42;
            w = 0.4;
            h = 0.038;
        };
        class ButtonNine: Life_RscButtonMenu
        {
            idc = 37458;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.47;
            w = 0.4;
            h = 0.038;
        };
        class Button10: Life_RscButtonMenu
        {
            idc = 37459;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.52;
            w = 0.4;
            h = 0.038;
        };
    };
};

// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class vInteraction_Menu
{
    idd = 37400;
    onLoad = "playSound 'HintExpand';";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class RscTitleBackground: RscText {
            colorBackground[] = {0.16,0.55,0.12,0.8};
            idc = -1;
            x = BGX;
            y = BGY;
            w = BGW;
            h = (1 / 25);
        };

        class MainBackground: RscText {
            idc = -1;
            colorBackground[] = {0.2,0.2,0.2,0.8};
            x = BGX;
            y = BGY + (11 / 250);
            w = BGW;
            h = 0.6 - (22 / 250);
        };

        class Title: RscText {
            colorBackground[] = {0,0,0,0};
            idc = 37401;
            text = "$STR_vInAct_Title";
            x = BGX;
            y = BGY;
            w = BGW;
            h = (1 / 25);
        };
    };

    class controls {
        class ButtonClose: RscButton
        {
            idc = -1;
            text = "Cerrar";
            onButtonClick = "closeDialog 0;";
            x = BGX;
            y = 0.8 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };

        class ButtonOne: Life_RscButtonMenu {
            idc = 37450;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.07;
            w = 0.4;
            h = 0.038;
        };

        class ButtonTwo: Life_RscButtonMenu {
            idc = 37451;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.12;
            w = 0.4;
            h = 0.038;
        };

        class ButtonThree: Life_RscButtonMenu {
            idc = 37452;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.17;
            w = 0.4;
            h = 0.038;
        };

        class ButtonFour: Life_RscButtonMenu {
            idc = 37453;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.22;
            w = 0.4;
            h = 0.038;
        };

        class ButtonFive: Life_RscButtonMenu {
            idc = 37454;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.27;
            w = 0.4;
            h = 0.038;
        };

        class ButtonSix: Life_RscButtonMenu {
            idc = 37455;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.32;
            w = 0.4;
            h = 0.038;
        };

        class ButtonSeven: Life_RscButtonMenu {
            idc = 37456;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.37;
            w = 0.4;
            h = 0.038;
        };
        class ButtonEight: Life_RscButtonMenu {
            idc = 37457;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.42;
            w = 0.4;
            h = 0.038;
        };
        class ButtonNine: Life_RscButtonMenu {
            idc = 37458;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.47;
            w = 0.4;
            h = 0.038;
        };
        class Button10: Life_RscButtonMenu {
            idc = 37459;
            colorBackground[] = {0.16,0.55,0.12,0.8};
            text = "";
            sizeEx = 0.025;
            x = BGX + 0.03;
            y = BGY + 0.52;
            w = 0.4;
            h = 0.038;
        };
    };
};
