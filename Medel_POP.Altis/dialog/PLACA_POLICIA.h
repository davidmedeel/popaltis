
#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)

class PLACA_POLICIA
{
	idd = 65672;
	movingEnabled = true;
	enableSimulation = true;
	duration = 10;
	name="PLACA_POLICIA";
	onLoad="uiNamespace setVariable ['PLACA_POLICIA',_this select 0];";

	class ControlsBackground
	{
		class AkrPicture_1200: AkrPicture
		{
			idc = 1200;
			text = "medel\imagenes\PLACA_POLICIA.paa";
			x = 40.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 28 * GUI_GRID_W;
			h = 20 * GUI_GRID_H;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {1,1,1,0.5};
		};
	};

	class Controls {
		class TextAgentName: AkrText
		{
			idc = 656711;
			text = "Agente Nombre Largo"; //--- ToDo: Localize;
			x = 57 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 11 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,1};
		};
		class TextBadge: AkrText
		{
			idc = 656712;
			text = "055418"; //--- ToDo: Localize;
			x = 62 * GUI_GRID_W + GUI_GRID_X;
			y = 17 * GUI_GRID_H + GUI_GRID_Y;
			w = 8 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,1};
		};
	};
};
