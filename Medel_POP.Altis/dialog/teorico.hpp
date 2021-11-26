
//$[1.063,["ds",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],[2200,"fondo",[1,"",["0.314374 * safezoneW + safezoneX","0.236 * safezoneH + safezoneY","0.37125 * safezoneW","0.528 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],[1100,"texto",[1,"",["0.319531 * safezoneW + safezoneX","0.247 * safezoneH + safezoneY","0.360937 * safezoneW","0.462 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],[1600,"b1",[1,"",["0.319531 * safezoneW + safezoneX","0.72 * safezoneH + safezoneY","0.113437 * safezoneW","0.033 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],[1601,"b2",[1,"",["0.438125 * safezoneW + safezoneX","0.72 * safezoneH + safezoneY","0.118594 * safezoneW","0.033 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],[1602,"b3",[1,"",["0.561875 * safezoneW + safezoneX","0.72 * safezoneH + safezoneY","0.113437 * safezoneW","0.033 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]]

class teorico
{
	idd = -1;
	onLoad = "uiNamespace setVariable ['teorico', _this select 0];";
	onUnLoad = "uiNamespace setVariable ['teorico', nil]; ";

class controls {

class fondo: IGUIBack
{
	idc = -1;
	x = 0.314374 * safezoneW + safezoneX;
	y = 0.236 * safezoneH + safezoneY;
	w = 0.37125 * safezoneW;
	h = 0.528 * safezoneH;
};
class texto: RscStructuredText
{
	idc = 2501;
	font = "Zeppelin33";
	x = 0.319531 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.360937 * safezoneW;
	h = 0.462 * safezoneH;
};
class b1: RscButton
{
	idc = 2502;
	x = 0.319531 * safezoneW + safezoneX;
	y = 0.72 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.033 * safezoneH;
};
class b2: RscButton
{
	idc = 2503;
	x = 0.438125 * safezoneW + safezoneX;
	y = 0.72 * safezoneH + safezoneY;
	w = 0.118594 * safezoneW;
	h = 0.033 * safezoneH;
};
class b3: RscButton
{
	idc = 2504;
	x = 0.561875 * safezoneW + safezoneX;
	y = 0.72 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.033 * safezoneH;
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
