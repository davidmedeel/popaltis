
class Life_atm_management
{
    idd = 2700;
    name= "life_atm_menu";
    movingEnable = 0;
    enableSimulation = 1;

class controlsBackground {

class Title: life_RscText
{
	idc = 1000;
	text = "Cuenta Bancaria"; //--- ToDo: Localize;
	x = 0.324275 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.351508 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0,0,0,0.8};
};
class balancebg: life_RscText
{
	idc = 1001;
	x = 0.324275 * safezoneW + safezoneX;
	y = 0.324 * safezoneH + safezoneY;
	w = 0.160246 * safezoneW;
	h = 0.143 * safezoneH;
	colorBackground[] = {0,0,0,0.8};
};
class sendbg: life_RscText
{
	idc = 1002;
	x = 0.489687 * safezoneW + safezoneX;
	y = 0.324 * safezoneH + safezoneY;
	w = 0.186092 * safezoneW;
	h = 0.308 * safezoneH;
	colorBackground[] = {0,0,0,0.8};
};
};

class controls {

class CashTitle: life_RscStructuredText
{
	idc = 2701;
	x = 0.329431 * safezoneW + safezoneX;
	y = 0.335 * safezoneH + safezoneY;
	w = 0.149908 * safezoneW;
	h = 0.088 * safezoneH;
};
class retirar: Life_RscShopButton
{
	idc = 2400;
	text = "Retirar"; //--- ToDo: Localize;
	onButtonClick = "[] call life_fnc_bankWithdraw";
	x = 0.324275 * safezoneW + safezoneX;
	y = 0.478 * safezoneH + safezoneY;
	w = 0.0775384 * safezoneW;
	h = 0.044 * safezoneH;
};
class depositar: Life_RscShopButton
{
	idc = 2401;
	text = "Depositar"; //--- ToDo: Localize;
	onButtonClick = "[] call life_fnc_bankDeposit";
	x = 0.406981 * safezoneW + safezoneX;
	y = 0.478 * safezoneH + safezoneY;
	w = 0.0775384 * safezoneW;
	h = 0.044 * safezoneH;
};
class moneyEdit: life_RscEdit
{
	idc = 2702;
	text = "1"; //--- ToDo: Localize;
	x = 0.329431 * safezoneW + safezoneX;
	y = 0.434 * safezoneH + safezoneY;
	w = 0.149908 * safezoneW;
	h = 0.022 * safezoneH;
};
class PlayerList: life_RscListBox
{
	idc = 2703;
	x = 0.494844 * safezoneW + safezoneX;
	y = 0.335 * safezoneH + safezoneY;
	w = 0.175754 * safezoneW;
	h = 0.242 * safezoneH;
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75)";
};
class transferir: Life_RscShopButton
{
	idc = 2402;
	text = "Transferir"; //--- ToDo: Localize;
	onButtonClick = "[] call life_fnc_bankTransfer";
	x = 0.567237 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.103385 * safezoneW;
	h = 0.033 * safezoneH;
};
class retirarBanda: Life_RscShopButton
{
	idc = 2705;
	text = "Retirar de la Banda"; //--- ToDo: Localize;
	onButtonClick = "[] call life_fnc_gangWithdraw";
	x = 0.324275 * safezoneW + safezoneX;
	y = 0.533 * safezoneH + safezoneY;
	w = 0.160246 * safezoneW;
	h = 0.044 * safezoneH;
};
class depositarBanda: Life_RscShopButton
{
	idc = 2706;
	text = "Depositar en la Banda"; //--- ToDo: Localize;
	onButtonClick = "[] call life_fnc_gangDeposit";
	x = 0.324275 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.160246 * safezoneW;
	h = 0.044 * safezoneH;
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
