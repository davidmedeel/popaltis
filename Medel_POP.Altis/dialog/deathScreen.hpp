
class DeathScreen
{
    idd = 7300;
    name = "Life_Death_Screen";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {};

class Controls {
	
class fondo: Life_IGUIBack
{
	idc = 2200;
	x = -0.015625 * safezoneW + safezoneX;
	y = 0.082 * safezoneH + safezoneY;
	w = 1.03125 * safezoneW;
	h = 0.979 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
class MedicsOnline: Life_RscText
{
	idc = 7304;
	text = "Médicos Conectados: 1"; //--- ToDo: Localize;
	x = 0.00499997 * safezoneW + safezoneX;
	y = 0.049 * safezoneH + safezoneY;
	w = 0.33 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,0};
};
class MedicsNearby: Life_RscText
{
	idc = 7305;
	text = "Médicos Cerca: No";
	x = 0.00499997 * safezoneW + safezoneX;
	y = 0.027 * safezoneH + safezoneY;
	w = 0.33 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,0};
};
class respawnTime: Life_RscText
{
	idc = 7301;
	x = 0.386562 * safezoneW + safezoneX;
	y = 0.038 * safezoneH + safezoneY;
	w = 0.165 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,0.5};
};
class RespawnBtn: Life_RscButtonMenu
{
	idc = 7302;
	onButtonClick = "closeDialog 0; life_respawned = true; [] call life_fnc_spawnMenu;";
	text = "Respawn"; //--- ToDo: Localize;
	x = 0.9 * safezoneW + safezoneX;
	y = 0.015 * safezoneH + safezoneY;
	w = 0.0928125 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0.32,0.85,0.29,1};
};
class MedicBtn: Life_RscButtonMenu
{
	idc = 7303;
	onButtonClick = "[] call life_fnc_requestMedic;";
	text = "SOLICITAR EMS"; //--- ToDo: Localize;
	x = 0.9 * safezoneW + safezoneX;
	y = 0.04 * safezoneH + safezoneY;
	w = 0.0928125 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0.32,0.85,0.29,1};
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
