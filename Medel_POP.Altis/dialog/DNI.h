
#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)

#define IDC__TEXTNOMBRE	1000
#define IDC__TEXT		1001
#define IDC__PICTURE	1200

class DNI
{
	idd = 65673;
	movingEnabled = true;
	enableSimulation = true;
	duration = 10;
	name="DNI_dialog";
	onLoad="uiNamespace setVariable ['DNI',_this select 0];";

		
	class ControlsBackground
	{
		class Picture: AkrPicture
		{
			idc = 1200;
			text = "medel\imagenes\DNI.paa";
			x = 39.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 30 * GUI_GRID_W;
			h = 23 * GUI_GRID_H;
		};
	};

	class Controls
	{
		class TextNombre: AkrText
		{
			idc = 656721;
			text = "Persona Nombre Largo"; //--- ToDo: Localize;
			x = 51 * GUI_GRID_W + GUI_GRID_X;
			y = 7.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 17 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,1};
		};
	};
};
