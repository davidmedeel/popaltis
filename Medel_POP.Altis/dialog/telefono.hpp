
class Life_cell_phone {
    idd = 3000;
    name= "life_cell_phone";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_cellphone";
 
class controls {

class fondo: IGUIBack
{
	idc = 2200;
	x = 0.407187 * safezoneW + safezoneX;
	y = 0.39 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.308 * safezoneH;
	colorBackground[] = {0.2,0.2,0.2,0.8};
};
class botonEnviar: RscButton
{
	idc = 3015;
	text = "Enviar"; //--- ToDo: Localize;
    onButtonClick = "[] call TON_fnc_cell_textmsg";
	x = 0.427812 * safezoneW + safezoneX;
	y = 0.478 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.022 * safezoneH;
};
class escriboTexto: RscEdit
{
	idc = 3003;
	x = 0.422656 * safezoneW + safezoneX;
	y = 0.412 * safezoneH + safezoneY;
	w = 0.0670312 * safezoneW;
	h = 0.022 * safezoneH;
};
class enviarPolicia: RscButton
{
	idc = 3016;
	text = "Policia"; //--- ToDo: Localize;
    onButtonClick = "[] call TON_fnc_cell_textcop";
    tooltip = "Enviar a Policia";
	x = 0.427812 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.022 * safezoneH;
};
class enviarCruzroja: RscButton
{
	idc = 3022;
	text = "Cruz Roja"; //--- ToDo: Localize;
	onButtonClick = "[] call TON_fnc_cell_emsrequest";
	tooltip = "Enviar a Cruz Roja";
	x = 0.427812 * safezoneW + safezoneX;
	y = 0.621 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.022 * safezoneH;
};
class enviarAdmin: RscButton
{
	idc = 3017;
	text = "Admin"; //--- ToDo: Localize;
    onButtonClick = "[] call TON_fnc_cell_textadmin";
    tooltip = "Enviar a Admin";
	x = 0.427812 * safezoneW + safezoneX;
	y = 0.654 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.022 * safezoneH;
};
class cabecera: RscText
{
	idc = 1000;
	text = "Teléfono"; //--- ToDo: Localize;
	x = 0.407187 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.0979687 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0.16,0.55,0.12,0.8};
};
class listaJugadores: RscCombo
{
	idc = 3004;
	x = 0.422656 * safezoneW + safezoneX;
	y = 0.445 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.022 * safezoneH;
};
class iconoX: RscPicture
{
	idc = 1200;
	text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
	x = 0.489687 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.0154688 * safezoneW;
	h = 0.022 * safezoneH;
};
class botonCerrar: life_RscButtonMenu
{
	idc = 2400;
    onButtonClick = "closeDialog 0;";
	x = 0.489687 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.0154688 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,0};
};
class global: RscButton
{
	idc = 3021;
	text = "Global"; //--- ToDo: Localize;
    tooltip = "Enviar Mensaje Global";
    onButtonClick = "[] call TON_fnc_cell_adminmsgall";
	x = 0.427812 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.022 * safezoneH;
};
class mensajeDeAdmin: RscButton
{
	idc = 3022;
	text = "MSG Admin"; //--- ToDo: Localize;
	tooltip = "Mensaje de Admin";
    onButtonClick = "[] call TON_fnc_cell_adminmsg";
	x = 0.427812 * safezoneW + safezoneX;
	y = 0.522 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
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
