

#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUTBUTTON   16
#define CT_HITZONES         17
#define CT_CONTROLS_TABLE   19
#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_LISTNBOX         102
#define CT_ITEMSLOT         103
#define CT_CHECKBOX         77
#define CT_VEHICLE_DIRECTION 105

#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0C

#define ST_TYPE           0xF0
#define ST_SINGLE         0x00
#define ST_MULTI          0x10
#define ST_TITLE_BAR      0x20
#define ST_PICTURE        0x30
#define ST_FRAME          0x40
#define ST_BACKGROUND     0x50
#define ST_GROUP_BOX      0x60
#define ST_GROUP_BOX2     0x70
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE   0x90
#define ST_WITH_RECT      0xA0
#define ST_LINE           0xB0
#define ST_UPPERCASE      0xC0
#define ST_LOWERCASE      0xD0

#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400

#define SL_TEXTURES       0x10

#define ST_VERTICAL       0x01
#define ST_HORIZONTAL     0

#define LB_TEXTURES       0x10
#define LB_MULTI          0x20

#define TR_SHOWROOT       1
#define TR_AUTOCOLLAPSE   2

#define MB_BUTTON_OK      1
#define MB_BUTTON_CANCEL  2
#define MB_BUTTON_USER    4
#define MB_ERROR_DIALOG   8

#define true 		  1
#define false 		  0

#define grisFondo {0.2,0.2,0.2,0.88}

class RscObject
{
	model = "\A3\ui_f\objects\face_preview";
	modelWoman = "\A3\ui_f\objects\face_preview";
	idc = 6001;
	type = 82; // u 80
	x = "35 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX)";
	y = "7 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
	z = 1; // 0.28

	// colorBackground[] =	grisFondo; // no va

	positionBack[] = {0, 0, 1};
	xBack = 0; // 0.5
	yBack = 0; // 0.5
	zBack = 2; // 1.2
	
	inBack = 0; // 1
	enableZoom = 0;
	zoomDuration = 0.5;
	
	scale = 0.6;
	direction[] = {0,0,1};
	up[] = {0,1,0};
	
	faceType = "Man_A3";
	selectionLBrow = "lBrow";
	selectionMBrow = "mBrow";
	selectionRBrow = "rBrow";
	selectionLMouth = "lMouth";
	selectionMMouth = "mMouth";
	selectionRMouth = "rMouth";
	selectionEyelid = "eyelids";
	selectionLip = "LLip";
	boneHead = "head";
	boneLEye = "l_eye";
	boneREye = "r_eye";
	boneLEyelidUp = "eye_upl";
	boneREyelidUp = "eye_upr";
	boneLEyelidDown = "eye_lwl";
	boneREyelidDown = "eye_lwr";
	boneLPupil = "l_pupila";
	boneRPupil = "r_pupila";
	selectionPersonality = "personality";
	selectionGlasses = "eyelids";
};


class RscShortcutButton
{
	type = 16;
	x = 0.1;
	y = 0.1;
	class HitZone {
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class ShortcutPos {
		left = 0;
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		w = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		h = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};
	class TextPos {
		left = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0;
	};
	shortcuts[] = {};
	textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
	color[] = {1,1,1,1};
	color2[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] =	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
		1
	};
	colorBackground2[] = {1,1,1,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",	0.09, 1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush", 0.09,	1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",	0.09, 1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape", 0.09,	1};
	class Attributes {
		font = "PuristaMedium";
		color = "#E5E5E5";
		align = "left";
		shadow = "true";
	};
	idc = -1;
	style = 0;
	default = 0;
	shadow = 1;
	w = 0.183825;
	h = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\over_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\focus_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\down_ca.paa";
	periodFocus = 1.2;
	periodOver = 0.8;
	period = 0.4;
	font = "PuristaMedium";
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";
	action = "";
	class AttributesImage {
		font = "PuristaMedium";
		color = "#E5E5E5";
		align = "left";
	};
};

class RscButtonTex
{
	type = 16;
	x = 0.1;
	y = 0.1;
	w = 0.183825;
	h = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
	class HitZone {
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class ShortcutPos {
		left = 0;
		top = 0;
		w = 0;
		h = 0;
	};
	class TextPos {
		left = 0; // "((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5";
		right = 0; // 0.005;
		top = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1))";
		bottom = 0;
	};
	shortcuts[] = {
	};
	textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
	color[] = {1,1,1,1};
	color2[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {1, 1, 1, 0.25};
	colorFocused[] = {1, 0.65, 0, 1}; // txt mouseover
	colorBackgroundFocused[] = {0, 0, 0, 0}; // fondo mouseover
	colorBackground[] =	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
		1
	};
	colorBackground2[] = {
		1,
		1,
		1,
		1
	};
	soundEnter[] = {
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.09,
		1
	};
	soundPush[] = {
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.09,
		1
	};
	soundClick[] = {
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.09,
		1
	};
	soundEscape[] = {
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.09,
		1
	};
	class Attributes {
		font = "PuristaMedium";
		color = "#E5E5E5";
		align = "center";
		shadow = "true";
	};
	idc = -1;
	style = 0x02; // estaba en 0
	default = 0;
	shadow = 1;
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\over_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\focus_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\down_ca.paa";
	periodFocus = 0; //1.2;
	periodOver = 0; //0.8;
	period = 0; //0.4;
	font = "PuristaMedium";
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.4)";
	text = "";
	action = "";
	class AttributesImage {
		font = "PuristaMedium";
		color = "#E5E5E5";
		align = "left";
	};
};

class RscEdit
{
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorBackground[] = {0,0,0,0.3};
	colorText[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {1,1,1,0.25};
	colorSelection[] = {
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
		1
	};
	autocomplete = false;
	text = "";
	size = 0.2;
	style = 0x00 + 0x40;
	font = "PuristaMedium";
	shadow = 2;
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	canModify = 1;
};

class RscEditIntro : RscEdit
{
	style = 16;
};


class RscText
{
	// access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0;
	shadow = 1;
	colorShadow[] =	{0,0,0,0.5};
	font = "PuristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	linespacing = 1;
};

class RscStructuredText
{
	// access = 0;
	type = 13;
	idc = -1;
	style = 0;
	colorText[] = {1,1,1,1};
	class Attributes
	{
		font = "PuristaMedium";
		color = "#ffffff";
		align = "left";
		shadow = 1;
	};

	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 1;

};

class RscPicture
{
	// access = 0;
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] =	{
		0,
		0,
		0,
		0
	};
	colorText[] = {
		1,
		1,
		1,
		1
	};
	font = "PuristaMedium";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};

class RscPictureKeepAspect : RscPicture {
	style = 0x30 + 0x800;
};

class RscVideo : RscPicture {
	autoplay = 1;
	loops = 1;
};

class RscVideoKeepAspect : RscPictureKeepAspect {
	autoplay = 1;
	loops = 1;
};

class RscBarrita
{
	// access = 0;
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] =	{0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "PuristaMedium";
	sizeEx = 0;
	lineSpacing = 0;
	text = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};

class RscProgress
{
	type = 8;
	style = 0;
	x = 0.344;
	y = 0.619;
	w = 0.313726;
	h = 0.0261438;
	texture = "";
	shadow = 2;
	colorFrame[] = {0, 0, 0, 1};
	colorBackground[] = {0,0,0,0.7};
	colorBar[] = {1,0,0,1};
};

class RscProgressV
{
	type = 8;
	style = 0x01;
	x = 0.344;
	y = 0.619;
	w = 0.313726;
	h = 0.0261438;
	texture = "";
	shadow = 2;
	colorFrame[] = {0, 0, 0, 1};
	colorBackground[] = {0,0,0,0.7};
	colorBar[] = {1,0,0,1};
};

class RscProgressSinFrame
{
	type = 8;
	style = 0;
	x = 0.344;
	y = 0.619;
	w = 0.313726;
	h = 0.0261438;
	texture = "";
	shadow = 2;
	colorFrame[] = {0, 0, 0, 0};
	colorBackground[] = {0,0,0,0.7};
	colorBar[] = {1,0,0,1};
};

class RscProgressFrameBlanco
{
	type = 8;
	style = 0;
	x = 0.344;
	y = 0.619;
	w = 0.313726;
	h = 0.0261438;
	texture = "";
	shadow = 2;
	colorFrame[] = {1, 1, 1, 1};
	colorBackground[] = {0,0,0,0.7};
	colorBar[] = {1,0,0,1};
};

class ScrollBar 
{
	color[] = {1, 1, 1, 0.6};
	colorActive[] = {1, 1, 1, 1};
	colorDisabled[] = {1, 1, 1, 0.3};
	thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
	shadow = false;
	scrollSpeed = 0.06;
	width = 0;
	height = 0;
	autoScrollEnabled = 0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
};

class RscControlsGroup 
{
	type = 15;
	idc = -1;
	x = 0;
	y = 0;
	w = 1;
	h = 1;
	shadow = false;
	style = 16;
	
	class VScrollbar : ScrollBar {
		width = 0.021;
		autoScrollEnabled = 1;
	};
	
	class HScrollbar : ScrollBar {
		height = 0.028;
	};
	
	class Controls {};
};

class RscListBox
{
	style = 16;
	idc = -1;
	type = 5;
	w = 0.275;
	h = 0.04;
	font = "PuristaMedium";
	colorSelect[] = {1, 1, 1, 1};
	colorSelect2[] = {1, 1, 1, 1};
	colorText[] = {1, 1, 1, 1};
	colorBackground[] = {0.28,0.28,0.28,0.28};
	colorSelectBackground[] = {0.95, 0.95, 0.95, 0.5}; // Al tener un elemento seleccionado pasa de este color al 2
	colorSelectBackground2[] = {1, 1, 1, 0.5};
	colorScrollbar[] = {0.2, 0.2, 0.2, 1};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,1};
	arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
	arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
	color[] = {0.7, 0.7, 0.7, 1};
	colorActive[] = {0,0,0,1};
	colorDisabled[] = {1,1,1,0.4};
	sizeEx = 0.04;
	rowHeight = 0.05;
	wholeHeight = 0.45;
	soundSelect[] = {"",0.1,1};
	soundExpand[] = {"",0.1,1};
	soundCollapse[] = {"",0.1,1};
	maxHistoryDelay = 1;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	class ListScrollBar : ScrollBar {
		color[] = {1, 1, 1, 1};
		autoScrollEnabled = 1;
	};
};

class RscButton
{
	// access = 0;
	type = 1;
	text = "";
	colorText[] = {1,1,1,1};
	
	colorDisabled[] = {
		1,
		0.35,
		0.29,
		1
	};
	colorBackground[] =	{
		0.16, // "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])",
		0.55, // "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])",
		0.12, // "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",
		0.8 // 0.85
	};
	colorBackgroundDisabled[] =	{
		0.06,
		0.45,
		0.12,
		0.7
	};
	colorBackgroundActive[] = { // fondo mouseover
		0.26,
		0.60,
		0.17,
		1
	};
	colorFocused[] = {1, 0.65, 0, 1}; // txt mouseover
	colorBackgroundFocused[] = {0, 0, 0, 0}; // fondo mouseover (no estoy seguro)
	
	// esto desactiva el parpadeo
	periodFocus = 0; //1.2;
	periodOver = 0; //0.8;
	period = 0; //0.4;
	
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};	

	colorShadow[] =	{0,0,0,0};
	colorBorder[] =	{0,0,0,1};
	soundEnter[] =	{"\A3\ui_f\data\sound\onover",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\new1",0,0};
	soundClick[] =	{"\A3\ui_f\data\sound\onclick",0.07,1};
	soundEscape[] =	{"\A3\ui_f\data\sound\onescape",0.09,1};
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};

class RscHitbox
{
	// access = 0;
	type = 1;
	text = "";
	colorText[] = {0,0,0,0};
	colorDisabled[] = {0,0,0,0};
	colorBackground[] =	{0,0,0,0};
	colorBackgroundDisabled[] =	{0,0,0,0};
	colorBackgroundActive[] = {0,0,0,0};
	colorFocused[] = {0,0,0,0}; // txt mouseover
	colorBackgroundFocused[] = {0,0,0,0}; // fondo mouseover
	colorShadow[] =	{0,0,0,0};
	colorBorder[] =	{0,0,0,0};
	
	periodFocus = 0;
	periodOver = 0;
	period = 0;

	soundEnter[] = {"", 0.1, 1};
	soundPush[] = {"", 0.1, 1};
	soundClick[] = {"", 0.1, 1};
	soundEscape[] = {"", 0.1, 1};
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};


class RscButtonLista
{
 // access = 0;
 type = CT_BUTTON;
 style = ST_LEFT;
 x = 0; y = 0; w = 0.3; h = 0.1;
 text = "";
 font = "TahomaB";
 sizeEx = 0.04;
 colorText[] = {0,0,0,1};
 colorDisabled[] = {0.3,0.3,0.3,1};
 colorBackground[] = {0.6,0.6,0.6,1};
 colorBackgroundDisabled[] = {0.6,0.6,0.6,1};
 colorBackgroundActive[] = {1,0.5,0,1};
 offsetX = 0.004;
 offsetY = 0.004;
 offsetPressedX = 0.002;
 offsetPressedY = 0.002;
 colorFocused[] = {0,0,0,1};
 colorShadow[] = {0,0,0,1};
 shadow = 0;
 colorBorder[] = {0,0,0,1};
 borderSize = 0.008;
 soundEnter[] = {"",0.1,1};
 soundPush[] = {"",0.1,1};
 soundClick[] = {"",0.1,1};
 soundEscape[] = {"",0.1,1};
};
class dialog
{
 class controls
 {
   class OK:rscButton
   {
     idc=1;// fixed engine constant
    // x=y=w=y=whatever;
     text="OK";
     default=true;
   };
   class Cancel
   {
     idc=2; // fixed engine constant
    // x=y=somewhere else
     default=false;
   };
  };
};

class RscListNBox
{
	// access = 0; // Control access (0 - ReadAndWrite, 1 - ReadAndCreate, 2 - ReadOnly, 3 - ReadOnlyVerified)
	idc = CT_LISTNBOX; // Control identification (without it, the control won't be displayed)
	type = CT_LISTNBOX; // Type 102
	style = ST_LEFT + LB_TEXTURES; // Style
	default = 0; // Control selected by default (only one within a display can be used)
	blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.

	x = 0; // Horizontal coordinates
	y = 0; // Vertical coordinates
	w = 1; // Width
	h = 1; // Height

	colorSelectBackground[] = {1,0.5,0,1}; // Selected item fill color
	colorSelectBackground2[] = {0,0,0,1}; // Selected item fill color (oscillates between this and colorSelectBackground)

	sizeEx = 0.035; // Text size
	font = "PuristaMedium"; // Font from CfgFontFamilies
	shadow = 0; // Shadow (0 - none, 1 - directional, color affected by colorShadow, 2 - black outline)
	colorText[] = {1,1,1,1}; // Text and frame color
	colorDisabled[] = {1,1,1,0.5}; // Disabled text color
	colorSelect[] = {1,1,1,1}; // Text selection color
	colorSelect2[] = {1,1,1,1}; // Text selection color (oscillates between this and colorSelect)
	colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)
	
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,1};

	columns[] = {0.1,0.5}; // Horizontal coordinates of columns (relative to list width, in range from 0 to 1)

	drawSideArrows = 1; // 1 to draw buttons linked by idcLeft and idcRight on both sides of selected line. They are resized to line height
	idcLeft = 1000; // Left button IDC
	idcRight = 1001; // Right button IDC

	period = 1; // Oscillation time between colorSelect/colorSelectBackground2 and colorSelect2/colorSelectBackground when selected

	rowHeight = 0.045; // Row height
	maxHistoryDelay = 1; // Time since last keyboard type search to reset it

	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1}; // Sound played when an item is selected

	// Scrollbar configuration (applied only when LB_TEXTURES style is used)
	class ListScrollBar
	{
		width = 0; // width of ListScrollBar
		height = 0; // height of ListScrollBar
		scrollSpeed = 0.01; // scrollSpeed of ListScrollBar

		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

		color[] = {1,1,1,1}; // Scrollbar color
	};
	/*
	onCanDestroy = "systemChat str ['onCanDestroy',_this]; true";
	onDestroy = "systemChat str ['onDestroy',_this]; false";
	onSetFocus = "systemChat str ['onSetFocus',_this]; false";
	onKillFocus = "systemChat str ['onKillFocus',_this]; false";
	onKeyDown = "systemChat str ['onKeyDown',_this]; false";
	onKeyUp = "systemChat str ['onKeyUp',_this]; false";
	onMouseButtonDown = "systemChat str ['onMouseButtonDown',_this]; false";
	onMouseButtonUp = "systemChat str ['onMouseButtonUp',_this]; false";
	onMouseButtonClick = "systemChat str ['onMouseButtonClick',_this]; false";
	onMouseButtonDblClick = "systemChat str ['onMouseButtonDblClick',_this]; false";
	onMouseZChanged = "systemChat str ['onMouseZChanged',_this]; false";
	onMouseMoving = "";
	onMouseHolding = "";

	onLBSelChanged = "systemChat str ['onLBSelChanged',_this]; false";
	onLBDblClick = "systemChat str ['onLBDblClick',_this]; false";
	*/
};

class RscSlider
{
	// access = 0;
	type = 3;
	style = 0x400;
	w = 0.3;
	h = 0.025;
	color[] =	{1,1,1,0.8};
	colorActive[] =	{1,1,1,1};
};

class RscSliderV: RscSlider
{
	style = 0;
};

class IGUIBack
{
	type = 0;
	idc = 124;
	style = 128;
	text = "";
	colorText[] = {0,0,0,0};
	font = "PuristaMedium";
	sizeEx = 0;
	shadow = 0;
	x = 0.1;
	y = 0.1;
	w = 0.1;
	h = 0.1;
	/*
	colorbackground[] =
	{
		"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"
	};
	*/
	colorBackground[] = grisFondo;
	enable = false;
};

class IGUIHeader
{
	type = 0;
	idc = 124;
	style = 128;
	text = "";
	colorText[] =
	{
		0,
		0,
		0,
		0
	};
	font="PuristaMedium";
	sizeEx = 0;
	shadow = 0;
	x = 0.1;
	y = 0.1;
	w = 0.1;
	h = 0.1;
	colorbackground[] =
	{
	0,
	0.25,
	0.54,
	1
	};
};

class RscFrame
{
	type = 0;
	idc = -1;
	style = 64;
	shadow = 2;
	colorBackground[] =
	{
		0,
		0,
		0,
		0
	};
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	font="PuristaMedium";
	sizeEx = 0.02;
	text = "";
};


class RscButtonMenuPausa
{
	// access = 0;
	type = 1;
	text = "";
	colorText[] = {1,1,1,1};
	colorDisabled[] = {0.4,0.4,0.4,1};
	colorBackground[] =	{
		0, //"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])",
		0, //"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])",
		0, //"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",
		0.7
	};
	colorBackgroundDisabled[] =	{
		0.95,
		0.95,
		0.95,
		1
	};
	colorBackgroundActive[] = {
		0.4, // "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])",
		0.4, // "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])",
		0.4, // "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",
		1
	};
	colorFocused[] = {
		0, //"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])",
		0, //"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])",
		0, //"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",
		0.7
	};
	colorShadow[] =	{
		0.15,
		0.15,
		0.15,
		1
	};
	colorBorder[] =	{
		0,
		0,
		0,
		1
	};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter", 0.09, 1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush", 0.09, 1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0.09, 1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape", 0.09, 1};	
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};

class RscButtonSilent
{
	// access = 0;
	type = 1;
	text = "";
	colorText[] =
	{
		0, // 1
		0, // 1
		0, // 1
		0 // 1
	};
	colorDisabled[] =
	{
		0, // 0.4
		0, // 0.4
		0, // 0.4
		1 // 1
	};
	colorBackground[] =
	{
		0, // "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
		0, // "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
		0, // "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
		0 // 0.7
	};
	colorBackgroundDisabled[] =
	{
		0, // 0.95,
		0, // 0.95,
		0, // 0.95,
		0 // 1
	};
	colorBackgroundActive[] =
	{
		0, // "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
		0, // "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
		0, // "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
		0 // 1
	};
	colorFocused[] =
	{
		0, // "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
		0, // "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
		0, // "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
		0 // 1
	};
	colorShadow[] =
	{
		0,
		0,
		0,
		0 // 1
	};
	colorBorder[] =
	{
		0,
		0,
		0,
		1
	};
	soundEnter[] = {"", 0.1, 1};
	soundPush[] = {"", 0.1, 1};
	soundClick[] = {"", 0.1, 1};
	soundEscape[] = {"", 0.1, 1};
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};

class RscCombo
{
	colorSelect[] =	{0,0,0,1};
	colorText[] = {1,1,1,1};
	colorBackground[] =	{0,0,0,1};
	colorScrollbar[] = {1,0,0,1};
	soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};
	soundExpand[] =	{"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
	soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
	class ComboScrollBar
	{
		color[] = {1,1,1,1};
	};
	// access = 0;
	type = 4;
	maxHistoryDelay = 1;
	colorSelectBackground[] = {1,1,1,0.7};
	colorActive[] = {1,0,0,1};
	colorDisabled[] = {1,1,1,0.25};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	style = "0x10 + 0x200";
	x = 0;
	y = 0;
	w = 0.12;
	h = 0.035;
	shadow = 0;
	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
	wholeHeight = 0.45;
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
};


class RscTree 
{

	// access = 0;
	borderSize = 0;
	colorArrow[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
	colorBorder[] = {0,0,0,0};
	colorDisabled[] = {1,1,1,0.25};
	
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,1};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,1};

	colorMarked[] = {0.2,0.3,0.7,1};
	colorMarkedSelected[] = {0,0.5,0.5,1};
	colorMarkedText[] = {0,0,0,1};
	colorSelect[] = {1,1,1,0.7};
	colorSelectBackground[] = {0,0,0,0.5};
	colorSelectText[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	
	expandedTexture = "A3\ui_f\data\gui\rsccommon\rsctree\expandedTexture_ca.paa";
	expandOnDoubleclick = 1;
	font = "PuristaMedium";
	hiddenTexture = "A3\ui_f\data\gui\rsccommon\rsctree\hiddenTexture_ca.paa";
	maxHistoryDelay = 1;
	multiselectEnabled = 0;
	rowHeight = 0.0439091;
	shadow = 0;
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	style = 0;
	type = 12;

	class ScrollBar {
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		autoScrollDelay = 5;
		autoScrollEnabled = 0;
		autoScrollRewind = 0;
		autoScrollSpeed = -1;
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		height = 0;
		scrollSpeed = 0.06;
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		width = 0;
	};
};


class RscCheckBox 
{
	idc = -1;
	type = 77;
	style = 0;
	checked = 0;
	x = "0.375 * safezoneW + safezoneX";
	y = "0.36 * safezoneH + safezoneY";
	w = "0.025 * safezoneW";
	h = "0.04 * safezoneH";
	color[] = {1, 1, 1, 0.7};
	colorFocused[] = {1, 1, 1, 1};
	colorHover[] = {1, 1, 1, 1};
	colorPressed[] = {1, 1, 1, 1};
	colorDisabled[] = {1, 1, 1, 0.2};
	colorBackground[] = {0, 0, 0, 0};
	colorBackgroundFocused[] = {0, 0, 0, 0};
	colorBackgroundHover[] = {0, 0, 0, 0};
	colorBackgroundPressed[] = {0, 0, 0, 0};
	colorBackgroundDisabled[] = {0, 0, 0, 0};
	textureChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureFocusedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureFocusedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureHoverChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureHoverUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	texturePressedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	texturePressedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureDisabledChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureDisabledUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	tooltipColorText[] = {1, 1, 1, 1};
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
	soundEnter[] = {"", 0.1, 1};
	soundPush[] = {"", 0.1, 1};
	soundClick[] = {"", 0.1, 1};
	soundEscape[] = {"", 0.1, 1};
};


class RscTextCheckBox 
{
	idc = -1;
	type = 7;
	style = 0;
	x = "0.375 * safezoneW + safezoneX";
	y = "0.36 * safezoneH + safezoneY";
	w = "0.025 * safezoneW";
	h = "0.04 * safezoneH";
	colorText[] = {1, 0, 0, 1};
	color[] = {0, 0, 0, 0};
	colorBackground[] = {0, 0, 0, 0};
	colorTextSelect[] = {0, 0.8, 0, 1};
	colorSelectedBg[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])", 1};
	colorSelect[] = {0, 0, 0, 1};
	colorTextDisable[] = {0.4, 0.4, 0.4, 1};
	colorDisable[] = {0.4, 0.4, 0.4, 1};
	tooltipColorText[] = {1, 1, 1, 1};
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows = 1;
	columns = 1;
	strings[] = {UNCHECKED};
	checked_strings[] = {CHECKED};
};



class _CT_MAP {
	// access = 0;
	idc = 100;
	type = 101;
	style = 48;
	default = 0;
	enable = 1;
	show = 1;
	fade = 0;
	blinkingPeriod = 0;
	x = "29 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
	w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	h = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	sizeEx = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	font = "RobotoCondensed";
	colorText[] = {0, 0, 0, 1};
	tooltip = CT_MAP;
	tooltipColorShade[] = {0, 0, 0, 1};
	tooltipColorText[] = {1, 1, 1, 1};
	tooltipColorBox[] = {1, 1, 1, 1};
	moveOnEdges = 1;
	ptsPerSquareSea = 5;
	ptsPerSquareTxt = 20;
	ptsPerSquareCLn = 10;
	ptsPerSquareExp = 10;
	ptsPerSquareCost = 10;
	ptsPerSquareFor = 9;
	ptsPerSquareForEdge = 9;
	ptsPerSquareRoad = 6;
	ptsPerSquareObj = 9;
	scaleMin = 0.001;
	scaleMax = 1.0;
	scaleDefault = 0.16;
	alphaFadeStartScale = 0.1;
	alphaFadeEndScale = 0.01;
	maxSatelliteAlpha = 0.85;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	colorBackground[] = {1, 1, 1, 1};
	colorOutside[] = {0, 0, 0, 1};
	colorSea[] = {0.4, 0.6, 0.8, 0.5};
	colorForest[] = {0.6, 0.8, 0.4, 0.5};
	colorForestBorder[] = {0.6, 0.8, 0.4, 1};
	colorRocks[] = {0, 0, 0, 0.3};
	colorRocksBorder[] = {0, 0, 0, 1};
	colorLevels[] = {0.3, 0.2, 0.1, 0.5};
	colorMainCountlines[] = {0.6, 0.4, 0.2, 0.5};
	colorCountlines[] = {0.6, 0.4, 0.2, 0.3};
	colorMainCountlinesWater[] = {0.5, 0.6, 0.7, 0.6};
	colorCountlinesWater[] = {0.5, 0.6, 0.7, 0.3};
	colorPowerLines[] = {0.1, 0.1, 0.1, 1};
	colorRailWay[] = {0.8, 0.2, 0, 1};
	colorNames[] = {1.1, 0.1, 1.1, 0.9};
	colorInactive[] = {1, 1, 0, 0.5};
	colorTracks[] = {0.8, 0.8, 0.7, 0.2};
	colorTracksFill[] = {0.8, 0.7, 0.7, 1};
	colorRoads[] = {0.7, 0.7, 0.7, 1};
	colorRoadsFill[] = {1, 1, 1, 1};
	colorMainRoads[] = {0.9, 0.5, 0.3, 1};
	colorMainRoadsFill[] = {1, 0.6, 0.4, 1};
	colorGrid[] = {0.1, 0.1, 0.1, 0.6};
	colorGridMap[] = {0.1, 0.1, 0.1, 0.6};
	fontLabel = "RobotoCondensed";
	sizeExLabel = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.5";
	fontGrid = "TahomaB";
	sizeExGrid = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.5";
	fontUnits = "TahomaB";
	sizeExUnits = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.5";
	fontNames = "EtelkaNarrowMediumPro";
	sizeExNames = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.5";
	fontInfo = "RobotoCondensed";
	sizeExInfo = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.5";
	fontLevel = "TahomaB";
	sizeExLevel = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.5";
	showCountourInterval = 1;
	
	class Task {
		icon = "#(argb,8,8,3)color(1,1,1,1)";
		color[] = {1, 1, 0, 1};
		iconCreated = "#(argb,8,8,3)color(1,1,1,1)";
		colorCreated[] = {0, 0, 0, 1};
		iconCanceled = "#(argb,8,8,3)color(1,1,1,1)";
		colorCanceled[] = {0, 0, 0, 0.5};
		iconDone = "#(argb,8,8,3)color(1,1,1,1)";
		colorDone[] = {0, 1, 0, 1};
		iconFailed = "#(argb,8,8,3)color(1,1,1,1)";
		colorFailed[] = {1, 0, 0, 1};
		size = 8;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
	};
	
	class ActiveMarker {
		color[] = {0, 0, 0, 1};
		size = 2;
	};
	
	class Waypoint {
		coefMax = 1;
		coefMin = 4;
		color[] = {0, 0, 0, 1};
		icon = "#(argb,8,8,3)color(0,0,0,1)";
		importance = 1;
		size = 2;
	};
	
	class WaypointCompleted : Waypoint {};
	
	class CustomMark : Waypoint {};
	
	class Command : Waypoint {};
	
	class Bush : Waypoint {};
	
	class Rock : Waypoint {};
	
	class SmallTree : Waypoint {};
	
	class Tree : Waypoint {};
	
	class BusStop : Waypoint {};
	
	class FuelStation : Waypoint {};
	
	class Hospital : Waypoint {};
	
	class Church : Waypoint {};
	
	class Lighthouse : Waypoint {};
	
	class Power : Waypoint {};
	
	class PowerSolar : Waypoint {};
	
	class PowerWave : Waypoint {};
	
	class PowerWind : Waypoint {};
	
	class Quay : Waypoint {};
	
	class Transmitter : Waypoint {};
	
	class Watertower : Waypoint {};
	
	class Cross : Waypoint {};
	
	class Chapel : Waypoint {};
	
	class Shipwreck : Waypoint {};
	
	class Bunker : Waypoint {};
	
	class Fortress : Waypoint {};
	
	class Fountain : Waypoint {};
	
	class Ruin : Waypoint {};
	
	class Stack : Waypoint {};
	
	class Tourism : Waypoint {};
	
	class ViewTower : Waypoint {};
	onCanDestroy = "debugLog ['Log: onCanDestroy',ctrlClassname (_this select 0),_this]; true";
	onDestroy = "debugLog ['Log: onDestroy',ctrlClassname (_this select 0),_this]; false";
	onSetFocus = "debugLog ['Log: onSetFocus',ctrlClassname (_this select 0),_this]; false";
	onKillFocus = "debugLog ['Log: onKillFocus',ctrlClassname (_this select 0),_this]; false";
	onKeyDown = "debugLog ['Log: onKeyDown',ctrlClassname (_this select 0),_this]; false";
	onKeyUp = "debugLog ['Log: onKeyUp',ctrlClassname (_this select 0),_this]; false";
	onMouseButtonDown = "debugLog ['Log: onMouseButtonDown',ctrlClassname (_this select 0),_this]; false";
	onMouseButtonUp = "debugLog ['Log: onMouseButtonUp',ctrlClassname (_this select 0),_this]; false";
	onMouseButtonClick = "debugLog ['Log: onMouseButtonClick',ctrlClassname (_this select 0),_this]; false";
	onMouseButtonDblClick = "debugLog ['Log: onMouseButtonDblClick',ctrlClassname (_this select 0),_this]; false";
	onMouseZChanged = "debugLog ['Log: onMouseZChanged',ctrlClassname (_this select 0),_this]; false";
	onMouseMoving = "";
	onMouseHolding = "";
	onDraw = "";
};

class RscMapControl {
	type = 101;
	style = 0x30;
	moveOnEdges = 1;
	x = 0.1;
	y = 0.1;
	w = 0.3;
	h = 0.3;
	shadow = 0;
	ptsPerSquareSea = 5;
	ptsPerSquareTxt = 20;
	ptsPerSquareCLn = 10;
	ptsPerSquareExp = 10;
	ptsPerSquareCost = 10;
	ptsPerSquareFor = 9;
	ptsPerSquareForEdge = 9;
	ptsPerSquareRoad = 6;
	ptsPerSquareObj = 9;
	showCountourInterval = 0;
	scaleMin = 0.001;
	scaleMax = 1.0;
	scaleDefault = 0.16;
	maxSatelliteAlpha = 0.85;
	alphaFadeStartScale = 2;
	alphaFadeEndScale = 2;
	
	colorBackground[] = {0.969, 0.957, 0.949, 1.0};
	colorSea[] = {0.467, 0.631, 0.851, 0.5};
	colorForest[] = {0.624, 0.78, 0.388, 0.5};
	colorForestBorder[] = {0.0, 0.0, 0.0, 0.0};
	colorRocks[] = {0.0, 0.0, 0.0, 0.3};
	colorRocksBorder[] = {0.0, 0.0, 0.0, 0.0};
	colorLevels[] = {0.286, 0.177, 0.094, 0.5};
	colorMainCountlines[] = {0.572, 0.354, 0.188, 0.5};
	colorCountlines[] = {0.572, 0.354, 0.188, 0.25};
	colorMainCountlinesWater[] = {0.491, 0.577, 0.702, 0.6};
	colorCountlinesWater[] = {0.491, 0.577, 0.702, 0.3};
	colorPowerLines[] = {0.1, 0.1, 0.1, 1.0};
	colorRailWay[] = {0.8, 0.2, 0.0, 1.0};
	colorNames[] = {0.1, 0.1, 0.1, 0.9};
	colorInactive[] = {1.0, 1.0, 1.0, 0.5};
	colorOutside[] = {0.0, 0.0, 0.0, 1.0};
	colorTracks[] = {0.84, 0.76, 0.65, 0.15};
	colorTracksFill[] = {0.84, 0.76, 0.65, 1.0};
	colorRoads[] = {0.7, 0.7, 0.7, 1.0};
	colorRoadsFill[] = {1.0, 1.0, 1.0, 1.0};
	colorMainRoads[] = {0.9, 0.5, 0.3, 1.0};
	colorMainRoadsFill[] = {1.0, 0.6, 0.4, 1.0};
	colorGrid[] = {0.1, 0.1, 0.1, 0.6};
	colorGridMap[] = {0.1, 0.1, 0.1, 0.6};
	colorTrails[] = {0.84, 0.76, 0.65, 0.15};
	colorTrailsFill[] = {0.84, 0.76, 0.65, 0.65};
	widthRailWay = 4.0;
	
	font = "RobotoCondensed";
	fontLabel = "RobotoCondensed";
	sizeExLabel = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	fontGrid = "TahomaB";
	sizeExGrid = 0.02;
	fontUnits = "TahomaB";
	sizeExUnits = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	fontNames = "EtelkaNarrowMediumPro";
	sizeExNames = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";
	fontInfo = "RobotoCondensed";
	sizeExInfo = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	fontLevel = "TahomaB";
	sizeEx = 0.02;
	sizeExLevel = 0.02;
	colorText[] = {0,0,0,1};
	text = "#(argb,8,8,3)color(1,1,1,1)";
	idcMarkerColor = -1;
	idcMarkerIcon = -1;
	textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
	showMarkers = 1;

	class LineMarker {
		lineWidthThin = 0.008;
		lineWidthThick = 0.014;
		lineDistanceMin = 3e-005;
		lineLengthMin = 5;
	};

	class Legend {
		x = "SafeZoneX + (((safezoneW / safezoneH) min 1.2) / 40)";
		y = "SafeZoneY + safezoneH - 4.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
		h = "3.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		font = "PuristaMedium";
		sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		colorBackground[] = {1,1,1,0.5};
		color[] = {0,0,0,1};
	};
	
	class Task {
		icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
		iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
		iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
		iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
		iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
		color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorCreated[] = {1,1,1,1};
		colorCanceled[] = {0.7,0.7,0.7,1};
		colorDone[] = {0.7,1,0.3,1};
		colorFailed[] = {1,0.3,0.2,1};
		size = 27;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
	};
	
	class ActiveMarker {
		color[] = {0, 0, 0, 1};
		size = 2;
	};

	class Waypoint {
		coefMax = 1;
		coefMin = 4;
		color[] = {0, 0, 0, 1};
		icon = "#(argb,8,8,3)color(0,0,0,1)";
		importance = 1;
		size = 2;
	};
	
	class WaypointCompleted {
		coefMax = 1;
		coefMin = 4;
		color[] = {0, 0, 0, 1};
		icon = "#(argb,8,8,3)color(0,0,0,1)";
		importance = 1;
		size = 2;
	};
	
	class CustomMark {
		icon = "\a3\ui_f\data\map\mapcontrol\custommark_ca.paa";
		size = 18;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
		color[] = {1, 1, 1, 1};
	};
	
	class Command {
		icon = "\a3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		size = 18;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
		color[] = {1, 1, 1, 1};
	};
	
	class Bush {
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		color[] = {0.45, 0.64, 0.33, 0.4};
		size = 14/2;
		importance = 0.2 * 14 * 0.05 * 0.05;
		coefMin = 0.25;
		coefMax = 4;
	};
	
	class Rock {
		icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
		color[] = {0.1, 0.1, 0.1, 0.8};
		size = 12;
		importance = 0.5 * 12 * 0.05;
		coefMin = 0.25;
		coefMax = 4;
	};
	
	class SmallTree {
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		color[] = {0.45, 0.64, 0.33, 0.4};
		size = 12;
		importance = 0.6 * 12 * 0.05;
		coefMin = 0.25;
		coefMax = 4;
	};
	
	class Tree {
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		color[] = {0.45, 0.64, 0.33, 0.4};
		size = 12;
		importance = 0.9 * 16 * 0.05;
		coefMin = 0.25;
		coefMax = 4;
	};
	
	class busstop {
		icon = "\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1, 1, 1, 1};
	};
	
	class fuelstation {
		icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1, 1, 1, 1};
	};
	
	class hospital {
		icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1, 1, 1, 1};
	};
	
	class church {
		icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1, 1, 1, 1};
	};
	
	class lighthouse {
		icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1, 1, 1, 1};
	};
	
	class power {
		icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1, 1, 1, 1};
	};
	
	class powersolar {
		icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1, 1, 1, 1};
	};
	
	class powerwave {
		icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1, 1, 1, 1};
	};
	
	class powerwind {
		icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1, 1, 1, 1};
	};
	
	class quay {
		icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1, 1, 1, 1};
	};
	
	class transmitter {
		icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1, 1, 1, 1};
	};
	
	class watertower {
		icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {1, 1, 1, 1};
	};
	
	class Cross {
		icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {0, 0, 0, 1};
	};
	
	class Chapel {
		icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {0, 0, 0, 1};
	};
	
	class Shipwreck {
		icon = "\A3\ui_f\data\map\mapcontrol\Shipwreck_CA.paa";
		size = 24;
		importance = 1;
		coefMin = 0.85;
		coefMax = 1.0;
		color[] = {0, 0, 0, 1};
	};
	
	class Bunker {
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		size = 14;
		importance = 1.5 * 14 * 0.05;
		coefMin = 0.25;
		coefMax = 4;
		color[] = {0, 0, 0, 1};
	};
	
	class Fortress {
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		size = 16;
		importance = 2 * 16 * 0.05;
		coefMin = 0.25;
		coefMax = 4;
		color[] = {0, 0, 0, 1};
	};
	
	class Fountain {
		icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
		size = 11;
		importance = 1 * 12 * 0.05;
		coefMin = 0.25;
		coefMax = 4;
		color[] = {0, 0, 0, 1};
	};
	
	class Ruin {
		icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
		size = 16;
		importance = 1.2 * 16 * 0.05;
		coefMin = 1;
		coefMax = 4;
		color[] = {0, 0, 0, 1};
	};
	
	class Stack {
		icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
		size = 16;
		importance = 2 * 16 * 0.05;
		coefMin = 0.4;
		coefMax = 2;
		color[] = {0, 0, 0, 1};
	};
	
	class Tourism {
		icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
		size = 16;
		importance = 1 * 16 * 0.05;
		coefMin = 0.7;
		coefMax = 4;
		color[] = {0, 0, 0, 1};
	};
	
	class ViewTower {
		icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
		size = 16;
		importance = 2.5 * 16 * 0.05;
		coefMin = 0.5;
		coefMax = 4;
		color[] = {0, 0, 0, 1};
	};
};

class RscMapControlEmpty : RscMapControl {
	type = 101;
	ptsPerSquareSea = 1000;
	ptsPerSquareTxt = 1000;
	ptsPerSquareCLn = 1000;
	ptsPerSquareExp = 1000;
	ptsPerSquareCost = 1000;
	ptsPerSquareFor = 1000;
	ptsPerSquareForEdge = 1000;
	ptsPerSquareRoad = 1000;
	ptsPerSquareObj = 1000;
	alphaFadeStartScale = 0;
	alphaFadeEndScale = 0;
	colorBackground[] = {1, 1, 1, 1};
	colorOutside[] = {1, 1, 1, 1};
	colorSea[] = {0, 0, 0, 0};
	colorForest[] = {0, 0, 0, 0};
	colorForestBorder[] = {0, 0, 0, 0};
	colorRocks[] = {0, 0, 0, 0};
	colorRocksBorder[] = {0, 0, 0, 0};
	colorLevels[] = {0, 0, 0, 0};
	colorMainCountlines[] = {0, 0, 0, 0};
	colorCountlines[] = {0, 0, 0, 0};
	colorMainCountlinesWater[] = {0, 0, 0, 0};
	colorCountlinesWater[] = {0, 0, 0, 0};
	colorPowerLines[] = {0, 0, 0, 0};
	colorRailWay[] = {0, 0, 0, 0};
	colorNames[] = {0, 0, 0, 0};
	colorInactive[] = {0, 0, 0, 0};
	colorGrid[] = {0, 0, 0, 0};
	colorGridMap[] = {0, 0, 0, 0};
	
	class Task : Task {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		iconCreated = "#(argb,8,8,3)color(0,0,0,0)";
		iconCanceled = "#(argb,8,8,3)color(0,0,0,0)";
		iconDone = "#(argb,8,8,3)color(0,0,0,0)";
		iconFailed = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		colorCreated[] = {0, 0, 0, 0};
		colorCanceled[] = {0, 0, 0, 0};
		colorDone[] = {0, 0, 0, 0};
		colorFailed[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class Waypoint : Waypoint {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class WaypointCompleted : WaypointCompleted {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class CustomMark : CustomMark {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class Command : Command {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class Bush : Bush {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class Rock : Rock {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class SmallTree : SmallTree {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class Tree : Tree {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class busstop : busstop {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class fuelstation : fuelstation {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class hospital : hospital {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class church : church {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class lighthouse : lighthouse {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class power : power {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class powersolar : powersolar {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class powerwave : powerwave {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class powerwind : powerwind {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class quay : quay {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class shipwreck : Shipwreck {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class transmitter : transmitter {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class watertower : watertower {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class Bunker : Bunker {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class Cross : Cross {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class Fortress : Fortress {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class Fountain : Fountain {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class Chapel : Chapel {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class Ruin : Ruin {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class Stack : Stack {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class Tourism : Tourism {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
	
	class ViewTower : ViewTower {
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0, 0, 0, 0};
		size = 0;
	};
};

class RscMap {
	idd = -1;
	// access = 0;
	

	class controls
	{
		class Map: RscMapControl
		{
			moveOnEdges = 0;
			x = "SafeZoneXAbs";
			y = "SafeZoneY";
			w = "SafeZoneWAbs";
			h = "SafeZoneH";

		};
	};
};

/*
class CA_Mainback {};
class CA_Black_Back : CA_Mainback {};
class RscMapSignalBackground {};
class RscMapSignalPicture {};
class RscMapSignalText {};
class RscMapControlTooltip {};
class RscActiveText {};
class RscButtonTextOnly {};
class RscHTML {};
class RscControlsGroupNoScrollBars {};
class RscButtonMenu {};

class RscDisplayMainMap {
	scriptName = "RscDiary";
	scriptPath = GUI;
	onLoad = "[""onLoad"",_this,""RscDiary"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDiary"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	saveParams = 1;
	
	class controlsBackground {
		
		class Map {
			
			class lighthouse {
				icon = "";
				size = 23;
				importance = 1;
				coefMin = 0.85;
				coefMax = 1.0;
				color[] = {0, 0, 0, 0};
			};

		};
		class CA_Black : CA_Black_Back {};
		class CA_RscMapSignalBackground : RscMapSignalBackground {};
		class CA_RscMapSignalPicture : RscMapSignalPicture {};
		class CA_RscMapSignalText : RscMapSignalText {};
		class CA_Map  {
			
			idcMarkerColor = 1090;
			idcMarkerIcon = 1091;

			type = 101;
			style = 0x30;
			moveOnEdges = 1;
			x = 0.1;
			y = 0.1;
			w = 0.3;
			h = 0.3;
			shadow = 0;
			ptsPerSquareSea = 5;
			ptsPerSquareTxt = 20;
			ptsPerSquareCLn = 10;
			ptsPerSquareExp = 10;
			ptsPerSquareCost = 10;
			ptsPerSquareFor = 9;
			ptsPerSquareForEdge = 9;
			ptsPerSquareRoad = 6;
			ptsPerSquareObj = 9;
			showCountourInterval = 0;
			scaleMin = 0.001;
			scaleMax = 1.0;
			scaleDefault = 0.16;
			maxSatelliteAlpha = 0.85;
			alphaFadeStartScale = 2;
			alphaFadeEndScale = 2;
			
			colorBackground[] = {0.969, 0.957, 0.949, 1.0};
			colorSea[] = {0.467, 0.631, 0.851, 0.5};
			colorForest[] = {0.624, 0.78, 0.388, 0.5};
			colorForestBorder[] = {0.0, 0.0, 0.0, 0.0};
			colorRocks[] = {0.0, 0.0, 0.0, 0.3};
			colorRocksBorder[] = {0.0, 0.0, 0.0, 0.0};
			colorLevels[] = {0.286, 0.177, 0.094, 0.5};
			colorMainCountlines[] = {0.572, 0.354, 0.188, 0.5};
			colorCountlines[] = {0.572, 0.354, 0.188, 0.25};
			colorMainCountlinesWater[] = {0.491, 0.577, 0.702, 0.6};
			colorCountlinesWater[] = {0.491, 0.577, 0.702, 0.3};
			colorPowerLines[] = {0.1, 0.1, 0.1, 1.0};
			colorRailWay[] = {0.8, 0.2, 0.0, 1.0};
			colorNames[] = {0.1, 0.1, 0.1, 0.9};
			colorInactive[] = {1.0, 1.0, 1.0, 0.5};
			colorOutside[] = {0.0, 0.0, 0.0, 1.0};
			colorTracks[] = {0.84, 0.76, 0.65, 0.15};
			colorTracksFill[] = {0.84, 0.76, 0.65, 1.0};
			colorRoads[] = {0.7, 0.7, 0.7, 1.0};
			colorRoadsFill[] = {1.0, 1.0, 1.0, 1.0};
			colorMainRoads[] = {0.9, 0.5, 0.3, 1.0};
			colorMainRoadsFill[] = {1.0, 0.6, 0.4, 1.0};
			colorGrid[] = {0.1, 0.1, 0.1, 0.6};
			colorGridMap[] = {0.1, 0.1, 0.1, 0.6};
			colorTrails[] = {0.84, 0.76, 0.65, 0.15};
			colorTrailsFill[] = {0.84, 0.76, 0.65, 0.65};
			
			font = "RobotoCondensed";
			fontLabel = "RobotoCondensed";
			sizeExLabel = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			fontGrid = "TahomaB";
			sizeExGrid = 0.02;
			fontUnits = "TahomaB";
			sizeExUnits = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			fontNames = "EtelkaNarrowMediumPro";
			sizeExNames = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";
			fontInfo = "RobotoCondensed";
			sizeExInfo = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			fontLevel = "TahomaB";
			sizeEx = 0.02;
			sizeExLevel = 0.02;
			colorText[] = {0,0,0,1};
			text = "#(argb,8,8,3)color(1,1,1,1)";
			// idcMarkerColor = -1;
			// idcMarkerIcon = -1;
			textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
			showMarkers = 1;

			class LineMarker {
				lineWidthThin = 0.008;
				lineWidthThick = 0.014;
				lineDistanceMin = 3e-005;
				lineLengthMin = 5;
			};

			class Legend {
				x = "SafeZoneX + (((safezoneW / safezoneH) min 1.2) / 40)";
				y = "SafeZoneY + safezoneH - 4.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
				h = "3.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				font = "PuristaMedium";
				sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
				colorBackground[] = {1,1,1,0.5};
				color[] = {0,0,0,1};
			};
			
			class Task {
				icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
				iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
				iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
				iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
				iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
				color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				colorCreated[] = {1,1,1,1};
				colorCanceled[] = {0.7,0.7,0.7,1};
				colorDone[] = {0.7,1,0.3,1};
				colorFailed[] = {1,0.3,0.2,1};
				size = 27;
				importance = 1;
				coefMin = 1;
				coefMax = 1;
			};
			
			class ActiveMarker {
				color[] = {0, 0, 0, 1};
				size = 2;
			};

			class Waypoint {
				coefMax = 1;
				coefMin = 4;
				color[] = {0, 0, 0, 1};
				icon = "#(argb,8,8,3)color(0,0,0,1)";
				importance = 1;
				size = 2;
			};
			
			class WaypointCompleted {
				coefMax = 1;
				coefMin = 4;
				color[] = {0, 0, 0, 1};
				icon = "#(argb,8,8,3)color(0,0,0,1)";
				importance = 1;
				size = 2;
			};
			
			class CustomMark {
				icon = "\a3\ui_f\data\map\mapcontrol\custommark_ca.paa";
				size = 18;
				importance = 1;
				coefMin = 1;
				coefMax = 1;
				color[] = {1, 1, 1, 1};
			};
			
			class Command {
				icon = "\a3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
				size = 18;
				importance = 1;
				coefMin = 1;
				coefMax = 1;
				color[] = {1, 1, 1, 1};
			};
			
			class Bush {
				icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
				color[] = {0.45, 0.64, 0.33, 0.4};
				size = 14/2;
				importance = 0.2 * 14 * 0.05 * 0.05;
				coefMin = 0.25;
				coefMax = 4;
			};
			
			class Rock {
				icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
				color[] = {0.1, 0.1, 0.1, 0.8};
				size = 12;
				importance = 0.5 * 12 * 0.05;
				coefMin = 0.25;
				coefMax = 4;
			};
			
			class SmallTree {
				icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
				color[] = {0.45, 0.64, 0.33, 0.4};
				size = 12;
				importance = 0.6 * 12 * 0.05;
				coefMin = 0.25;
				coefMax = 4;
			};
			
			class Tree {
				icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
				color[] = {0.45, 0.64, 0.33, 0.4};
				size = 12;
				importance = 0.9 * 16 * 0.05;
				coefMin = 0.25;
				coefMax = 4;
			};
			
			class busstop {
				icon = "\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";
				size = 24;
				importance = 1;
				coefMin = 0.85;
				coefMax = 1.0;
				color[] = {1, 1, 1, 1};
			};
			
			class fuelstation {
				icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
				size = 24;
				importance = 1;
				coefMin = 0.85;
				coefMax = 1.0;
				color[] = {1, 1, 1, 1};
			};
			
			class hospital {
				icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
				size = 24;
				importance = 1;
				coefMin = 0.85;
				coefMax = 1.0;
				color[] = {1, 1, 1, 1};
			};
			
			class church {
				icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
				size = 24;
				importance = 1;
				coefMin = 0.85;
				coefMax = 1.0;
				color[] = {1, 1, 1, 1};
			};
			
			class lighthouse {
				icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
				size = 24;
				importance = 1;
				coefMin = 0.85;
				coefMax = 1.0;
				color[] = {0, 0, 0, 0};
			};
			
			class power {
				icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
				size = 24;
				importance = 1;
				coefMin = 0.85;
				coefMax = 1.0;
				color[] = {1, 1, 1, 1};
			};
			
			class powersolar {
				icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
				size = 24;
				importance = 1;
				coefMin = 0.85;
				coefMax = 1.0;
				color[] = {1, 1, 1, 1};
			};
			
			class powerwave {
				icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
				size = 24;
				importance = 1;
				coefMin = 0.85;
				coefMax = 1.0;
				color[] = {1, 1, 1, 1};
			};
			
			class powerwind {
				icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
				size = 24;
				importance = 1;
				coefMin = 0.85;
				coefMax = 1.0;
				color[] = {1, 1, 1, 1};
			};
			
			class quay {
				icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
				size = 24;
				importance = 1;
				coefMin = 0.85;
				coefMax = 1.0;
				color[] = {1, 1, 1, 1};
			};
			
			class transmitter {
				icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
				size = 24;
				importance = 1;
				coefMin = 0.85;
				coefMax = 1.0;
				color[] = {1, 1, 1, 1};
			};
			
			class watertower {
				icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
				size = 24;
				importance = 1;
				coefMin = 0.85;
				coefMax = 1.0;
				color[] = {1, 1, 1, 1};
			};
			
			class Cross {
				icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
				size = 24;
				importance = 1;
				coefMin = 0.85;
				coefMax = 1.0;
				color[] = {0, 0, 0, 1};
			};
			
			class Chapel {
				icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
				size = 24;
				importance = 1;
				coefMin = 0.85;
				coefMax = 1.0;
				color[] = {0, 0, 0, 1};
			};
			
			class Shipwreck {
				icon = "\A3\ui_f\data\map\mapcontrol\Shipwreck_CA.paa";
				size = 24;
				importance = 1;
				coefMin = 0.85;
				coefMax = 1.0;
				color[] = {0, 0, 0, 1};
			};
			
			class Bunker {
				icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
				size = 14;
				importance = 1.5 * 14 * 0.05;
				coefMin = 0.25;
				coefMax = 4;
				color[] = {0, 0, 0, 1};
			};
			
			class Fortress {
				icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
				size = 16;
				importance = 2 * 16 * 0.05;
				coefMin = 0.25;
				coefMax = 4;
				color[] = {0, 0, 0, 1};
			};
			
			class Fountain {
				icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
				size = 11;
				importance = 1 * 12 * 0.05;
				coefMin = 0.25;
				coefMax = 4;
				color[] = {0, 0, 0, 1};
			};
			
			class Ruin {
				icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
				size = 16;
				importance = 1.2 * 16 * 0.05;
				coefMin = 1;
				coefMax = 4;
				color[] = {0, 0, 0, 1};
			};
			
			class Stack {
				icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
				size = 16;
				importance = 2 * 16 * 0.05;
				coefMin = 0.4;
				coefMax = 2;
				color[] = {0, 0, 0, 1};
			};
			
			class Tourism {
				icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
				size = 16;
				importance = 1 * 16 * 0.05;
				coefMin = 0.7;
				coefMax = 4;
				color[] = {0, 0, 0, 1};
			};
			
			class ViewTower {
				icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
				size = 16;
				importance = 2.5 * 16 * 0.05;
				coefMin = 0.5;
				coefMax = 4;
				color[] = {0, 0, 0, 1};
			};

		};
	};
	
	class controls {
		class DiaryIndex {};
		class DiaryAdd {};
		class DiarySort {};
		class DiaryFilter {};
		class Diary {};
		
		class BriefingIntroBackgroundLayer : RscText {
			idc = 1102;
			show = 0;
			colorBackground[] = {0, 0, 0, 1};
			x = "safezoneXabs";
			y = "safezoneY";
			w = "safezoneWabs";
			h = "safezoneH";
		};
		
		class BriefingIntroGraphicsLayer : RscPictureKeepAspect {
			idc = 1101;
			show = 0;
			color[] = {1, 1, 1, 1};
			x = "safezoneXabs";
			y = "safezoneY";
			w = "safezoneWabs";
			h = "safezoneH";
		};
		
		class BriefingIntroVideoLayer : BriefingIntroGraphicsLayer {
			idc = 1100;
		};
		
		class Tooltip : RscMapControlTooltip {};
		
		class CA_MouseOver : RscText {
			style = 0x00 + 0x10;
			x = -10;
			y = -10;
			shadow = false;
			idc = 1016;
			w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {0.7, 0.1, 0, 1};
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class CA_MainBackground : RscText {
			idc = 1020;
			x = "safezoneXAbs";
			w = "safezoneWAbs";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1, 0.1, 0.1, 1};
		};
		
		class CA_MainBackgroundGradient : RscPicture {
			x = "safezoneXAbs";
			w = "safezoneWAbs";
			idc = 1200;
			text = "\A3\ui_f\data\map\diary\gradient_gs.paa";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {1, 1, 1, 0.15};
		};
		
		class CA_TopicsBackground : RscText {
			idc = 1021;
			colorbackgroundx[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "18 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1, 0.1, 0.1, 0.8};
		};
		
		class CA_SubTopicsBackground : RscText {
			idc = 1022;
			colorbackgroundx[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			x = "7.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "18 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1, 0.1, 0.1, 0.8};
		};
		
		class CA_ContentBackgroundd : RscText {
			idc = 1023;
			colorbackgroundx[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])", "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])", "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			x = "17.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "18 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0.1, 0.1, 0.1, 0.8};
		};
		
		class ButtonBack : RscActiveText {
			idc = 2;
			style = 48;
			color[] = {1, 1, 1, 0.7};
			text = "\A3\ui_f\data\map\diary\back_gs.paa";
			x = "-0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {1, 1, 1, 0.7};
			colorActive[] = {1, 1, 1, 1};
			tooltip = $STR_DISP_CLOSE;
		};
		
		class CA_MissionName : RscText {
			idc = 112;
			shadow = false;
			font = "RobotoCondensedLight";
			text = $STR_DIARY_MISSION_NAME;
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "14 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {1, 1, 1, 1};
			sizeEx = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class TopRight : RscControlsGroup {
			x = "safezoneX + safezoneW - (26 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			
			class VScrollbar : VScrollbar {
				width = 0;
			};
			
			class HScrollbar : HScrollbar {
				height = 0;
			};
			idc = 2302;
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "26 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			
			class controls {
				class CA_PlayerName : RscText {
					idc = 111;
					style = 1;
					font = "RobotoCondensedLight";
					text = $STR_DIARY_PLAYER_NAME;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class ProfileBackground : RscText {
					idc = 1014;
					x = "10.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {1, 1, 1, 0.2};
				};
				
				class ProfilePicture : RscPicture {
					idc = 116;
					text = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
					x = "10.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class Separator1 : RscPicture {
					idc = 1205;
					text = "\A3\ui_f\data\map\diary\separator_ca.paa";
					x = "11.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class MarkerColor : RscCombo {
					idc = 1090;
					x = "11.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					tooltip = "$STR_A3_rscDiary_MarkerColor_tooltip";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class MarkerIcon : RscCombo {
					idc = 1091;
					x = "14.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					tooltip = "$STR_A3_rscDiary_MarkerIcon_tooltip";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class ButtonPlayer : RscActiveText {
					onbuttonclick = "with uinamespace do {['ButtonPlayer',_this,''] call RscDiary_script};";
					style = 48;
					color[] = {1, 1, 1, 0.7};
					idc = 1202;
					text = "\A3\ui_f\data\igui\cfg\islandmap\iconplayer_ca.paa";
					x = "18.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorText[] = {1, 1, 1, 0.7};
					colorActive[] = {1, 1, 1, 1};
					tooltip = $STR_A3_RSCDIARY_BUTTONPLAYER_TOOLTIP;
				};
				
				class ButtonTextures : RscActiveText {
					onbuttonclick = "with uinamespace do {['ButtonTextures',_this,''] call RscDiary_script};";
					style = 48;
					color[] = {1, 1, 1, 0.7};
					idc = 1201;
					text = "\A3\ui_f\data\map\diary\textures_ca.paa";
					x = "19.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorText[] = {1, 1, 1, 0.7};
					colorActive[] = {1, 1, 1, 1};
					tooltip = $STR_A3_RSCDIARY_BUTTONTEXTURES_TOOLTIP;
				};
				
				class Separator2 : RscPicture {
					idc = 1204;
					text = "\A3\ui_f\data\map\diary\separator_ca.paa";
					x = "20.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class Clock : RscText {
					idc = 101;
					style = 0;
					shadow = false;
					font = "RobotoCondensedLight";
					x = "20.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "-0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorText[] = {1, 1, 1, 0.7};
					sizeEx = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		
		class ButtonTexturesReal : RscText {
			idc = 107;
			x = -1;
			y = -1;
			w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class DiaryList : RscListNBox {
			idc = 1001;
			default = 1;
			h = "safezoneH - 7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.2};
			colorSelectBackground2[] = {1, 1, 1, 0.3};
			colorSelectRight[] = {1, 1, 1, 1};
			colorSelect2Right[] = {1, 1, 1, 1};
			columns[] = {0};
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			colorBackground[] = {0, 0, 0, 0};
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class CA_DiaryIndex : RscListNBox {
			idc = 1002;
			h = "safezoneH - 7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			padding = 0.004;
			colorSelect[] = {1, 1, 1, 1};
			colorSelect2[] = {1, 1, 1, 1};
			colorSelectBackground[] = {1, 1, 1, 0.2};
			colorSelectBackground2[] = {1, 1, 1, 0.3};
			colorSelectRight[] = {1, 1, 1, 1};
			colorSelect2Right[] = {1, 1, 1, 1};
			colorBackground[] = {0, 0, 0, 0};
			shadowPictureLeft = 0;
			shadowPictureRight = 0;
			shadowTextLeft = 0;
			shadowTextRight = 0;
			columns[] = {"7.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)", "15.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)"};
			
			class MuteCheckBoxTemplate : RscCheckBox {
				x = 0;
				y = 0;
				w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				textureChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				textureUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
				textureFocusedChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				textureFocusedUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
				textureHoverChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				textureHoverUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
				texturePressedChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				texturePressedUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
				textureDisabledChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
				textureDisabledUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
			};
			x = "7.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "3.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class ButtonPlayers : RscButtonTextOnly {
			idc = 117;
			style = 0;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			colorFocused[] = {1, 1, 1, 0.5};
			colorFocused2[] = {1, 1, 1, 0.1};
			period = 1.2;
			text = $STR_A3_RSCDISPLAYMULTIPLAYERSETUP_TEXTPLAYERSPOOL;
			x = "7.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "8.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class SortPlayers : RscPicture {
			idc = 118;
			sortUp = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_up_ca.paa";
			sortDown = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_down_ca.paa";
			text = "\a3\ui_f\data\gui\rsc\rscdisplaymultiplayer\arrow_up_ca.paa";
			x = "15 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class MuteAll : RscCheckBox {
			idc = 119;
			textureChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
			textureUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
			textureFocusedChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
			textureFocusedUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
			textureHoverChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
			textureHoverUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
			texturePressedChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
			texturePressedUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
			textureDisabledChecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_ca.paa";
			textureDisabledUnchecked = "\A3\Ui_f\data\IGUI\RscIngameUI\RscDisplayChannel\MuteVON_crossed_ca.paa";
			x = "15.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class CA_DiaryGroup : RscControlsGroup {
			idc = 1013;
			h = "safezoneH - 7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			x = "17.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX)";
			y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "21.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			
			class controls {
				class CA_Diary : RscHTML {
					idc = 1003;
					cycleLinks = 0;
					cycleAllLinks = 0;
					colorLink[] = {1, 0.72, 0.3, 1};
					colorLinkActive[] = {1, 0.72, 0.3, 1};
					
					class H1 {
						font = "RobotoCondensed";
						fontBold = "RobotoCondensedBold";
						sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
					};
					
					class P {
						font = "RobotoCondensed";
						fontBold = "RobotoCondensedBold";
						sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					};
					shadow = false;
					h = 100;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "20.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				};
			};
		};
		
		class GPS : RscControlsGroup {
			idc = 106;
			x = -1;
			y = -1;
			w = 0;
			h = 0;
			
			class controls {
				class GPSSquare : RscText {
					idc = 75;
					style = 1;
					font = "RobotoCondensedBold";
					shadow = 2;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class GPSAlt : RscText {
					idc = 77;
					style = 1;
					font = "RobotoCondensedBold";
					shadow = 2;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class GPS_ALTMeasurement : RscText {
					shadow = 2;
					font = "RobotoCondensedBold";
					idc = 1008;
					x = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class GPSHeading : RscText {
					idc = 78;
					style = 1;
					font = "RobotoCondensedBold";
					shadow = 2;
					x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class GPS_HeadingMeasurement : RscText {
					shadow = 2;
					font = "RobotoCondensedBold";
					idc = 1015;
					x = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		
		class Copyright : RscText {
			style = 1;
			shadow = 2;
			font = "RobotoCondensedBold";
			x = "safezoneX + safezoneW - (12 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "safezoneY + safezoneH - (1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 1005;
			w = "11.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.6*0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class WalkieTalkie : RscControlsGroup {
			idc = 103;
			x = -1;
			y = -1;
			w = 0;
			h = 0;
			
			class controls {
				class RadioAlpha : RscActiveText {
					idc = 63;
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class RadioBravo : RadioAlpha {
					idc = 64;
					x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class RadioCharlie : RadioAlpha {
					idc = 65;
					x = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class RadioDelta : RadioAlpha {
					idc = 66;
					x = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class RadioEcho : RadioAlpha {
					idc = 67;
					x = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class RadioFoxtrot : RadioAlpha {
					idc = 68;
					x = "0.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class RadioGolf : RadioAlpha {
					idc = 69;
					x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class RadioHotel : RadioAlpha {
					idc = 70;
					x = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class RadioIndia : RadioAlpha {
					idc = 71;
					x = "5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class RadioJuliet : RadioAlpha {
					idc = 72;
					x = "6.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		
		class FadeEffect : RscText {
			idc = 1099;
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
			colorBackground[] = {0, 0, 0, 1};
		};
		
		class RespawnControlsGroup : RscControlsGroupNoScrollbars {
			fade = 1;
			idc = 88800;
			onLoad = "(_this select 0) ctrlEnable false;_this execVM 'a3\ui_f\scripts\gui\RscRespawnControls.sqf'";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "(15 - 1.15 ) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "38 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "(9.7 + 1.15 ) * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			
			class controls {
				class LocBackground : RscText {
					idc = 88802;
					x = "0.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(2.9 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "5.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0.1, 0.1, 0.1, 0.8};
				};
				
				class RoleBackground : RscText {
					idc = 88803;
					x = "12.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(2.9 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "5.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0.1, 0.1, 0.1, 0.8};
				};
				
				class GearBackground : RscText {
					idc = 88804;
					x = "25.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(2.9 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "5.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0.1, 0.1, 0.1, 0.8};
				};
				
				class HeaderBackground : RscText {
					idc = 88801;
					x = "0.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.2 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "38.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "2.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0.1, 0.1, 0.1, 0.8};
				};
				
				class OverHeaderBackground : RscText {
					idc = 88870;
					show = 0;
					x = "0.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "38.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "(1.15  - 0.1) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0.1, 0.1, 0.1, 0.8};
				};
				
				class OverHeaderLeft : RscStructuredText {
					idc = 88871;
					size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					show = 0;
					x = "0.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "19.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "(1.15  - 0.3) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
				
				class OverHeaderRight : RscStructuredText {
					idc = 88872;
					size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					show = 0;
					x = "19.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "19.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "(1.15  - 0.3) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
				
				class ButtonSpectate : RscButtonMenu {
					idc = 88811;
					
					class Attributes {
						align = "center";
						color = "#E5E5E5";
						font = "PuristaLight";
						shadow = "false";
					};
					text = "$STR_A3_RscRespawnControls_Spectate";
					x = "12.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(8.5 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class LocList : RscListBox {
					idc = 88808;
					colorPictureSelected[] = {0, 0, 0, 1};
					x = "0.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(4.4 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
					sizeEx = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class RoleList : RscListBox {
					idc = 88809;
					colorPictureSelected[] = {0, 0, 0, 1};
					x = "12.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(4.4 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
					sizeEx = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class CounterText : RscStructuredText {
					idc = 88826;
					size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					x = "15.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.35 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "0.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
				
				class Counter : RscStructuredText {
					idc = 88806;
					x = "15.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(1.10 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.55 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
				
				class AutoRespawn : RscActiveText {
					idc = 88830;
					style = 48;
					color[] = {1, 1, 1, 0.7};
					text = "\a3\ui_f\data\map\respawn\icon_autorespawn_ca.paa";
					x = "20.95 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(1.75 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "0.60 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "0.60 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorText[] = {1, 1, 1, 0.3};
					colorBackground[] = {1, 1, 1, 0.3};
					colorActive[] = {1, 1, 1, 1};
				};
				
				class TeamText : RscStructuredText {
					idc = 88827;
					size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					x = "0.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.625 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "0.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
				
				class Team : RscStructuredText {
					idc = 88805;
					x = "0.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(1.375 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.00 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
				
				class ReviveInfo : RscText {
					idc = 88874;
					show = 0;
					x = "12.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.5 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "0.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "2.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
				
				class ReviveInfoTitle : RscStructuredText {
					idc = 88875;
					show = 0;
					x = "6.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.625 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "5.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "2.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
				
				class ReviveInfoOption : RscStructuredText {
					idc = 88876;
					show = 0;
					x = "6.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(1.475 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "5.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "2.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
				
				class TicketsText : RscStructuredText {
					idc = 88828;
					size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					x = "30.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.625 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "0.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
				
				class Tickets : RscStructuredText {
					idc = 88807;
					x = "30.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(1.375 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.00 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
				
				class RespawnInfo : RscText {
					idc = 88877;
					show = 0;
					x = "25.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.5 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "0.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "2.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
				
				class RespawnInfoTitle : RscStructuredText {
					idc = 88878;
					show = 0;
					x = "25.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.625 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "5.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "2.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
				
				class RespawnInfoOption : RscStructuredText {
					idc = 88879;
					show = 0;
					x = "25.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(1.475 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "5.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "2.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
				
				class HeaderRespawnButton : RscButtonMenu {
					idc = 88829;
					
					class Attributes {
						align = "center";
						color = "#E5E5E5";
						font = "PuristaLight";
						shadow = "false";
					};
					
					class TextPos {
						bottom = 0;
						left = "0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						right = 0.005;
						top = "0.65 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					text = "$STR_A3_RscRespawnControls_Respawn";
					x = "12.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.35 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "2.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
				};
				
				class Warning : RscStructuredText {
					idc = 88831;
					text = "";
					x = "9.475 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.35 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "19.05 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "2.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0.7, 0, 0, 1};
				};
				
				class ComboLoadout : RscCombo {
					idc = 88813;
					wholeHeight = 0.22;
					x = "25.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(4.4 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class ButtonDetails : RscButtonMenu {
					idc = 88814;
					
					class Attributes {
						align = "center";
						color = "#E5E5E5";
						font = "PuristaLight";
						shadow = "false";
					};
					
					class TextPos {
						bottom = 0;
						left = "0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						right = 0.005;
						top = "0.12 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					text = "$STR_A3_RscRespawnControls_Details";
					x = "31.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(7.0 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "6.15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.35 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class BackgroungPrimaryWeapon : RscPicture {
					idc = 88822;
					text = "#(argb,8,8,3)color(1,1,1,0.3)";
					x = "25.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(5.55 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "6.15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.35 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class BackgroungSecondaryWeapon : RscPicture {
					idc = 88823;
					text = "#(argb,8,8,3)color(1,1,1,0.3)";
					x = "31.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(5.55 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "6.15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.35 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class BackgroungOptics : RscPicture {
					idc = 88824;
					text = "#(argb,8,8,3)color(1,1,1,0.3)";
					x = "25.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(7.0 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "3.025 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.35 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class BackgroungItem : RscPicture {
					idc = 88825;
					text = "#(argb,8,8,3)color(1,1,1,0.3)";
					x = "28.625 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(7.0 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "3.025 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.35 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class PicturePrimaryWeapon : RscPicture {
					idc = 88815;
					x = "27.225 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(5.55 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.35 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class PictureSecondaryWeapon : RscPicture {
					idc = 88816;
					x = "33.475 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(5.55 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.35 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class PictureOptics : RscPicture {
					idc = 88817;
					x = "26.3375 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(7.0 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1.35 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.35 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class PictureItem : RscPicture {
					idc = 88818;
					x = "29.4625 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(7.0 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "1.35 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1.35 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				
				class LocTitle : RscStructuredText {
					idc = 88819;
					size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					x = "0.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(3.275 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "0.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
				
				class RoleTitle : RscStructuredText {
					idc = 88820;
					size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					x = "12.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(3.275 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "0.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
				
				class GearTitle : RscStructuredText {
					idc = 88821;
					size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					x = "25.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(3.275 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "0.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
				
				class LocDisabled : RscStructuredText {
					idc = 88832;
					text = "$STR_A3_RscRespawnControls_LocDisabled";
					x = "0.0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(4.4 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
				
				class RoleDisabled : RscStructuredText {
					idc = 88833;
					text = "$STR_A3_RscRespawnControls_RoleDisabled";
					x = "12.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(4.4 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
				
				class LoadoutDisabled : RscStructuredText {
					idc = 88834;
					text = "$STR_A3_RscRespawnControls_LoadoutDisabled";
					x = "25.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(4.4 + 1.15 ) * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0};
				};
			};
		};
		
		class RespawnDetailsControlsGroup : RscControlsGroupNoScrollbars {
			fade = 1;
			idc = 88850;
			onLoad = "(_this select 0) ctrlEnable false";
			x = "26.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "0.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "12.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "14.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			
			class controls {
				class BackgroundDetails : RscText {
					idc = 88851;
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "14.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0.1, 0.1, 0.1, 0.8};
				};
				
				class DetailsTitle : RscStructuredText {
					idc = 88852;
					x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "11.85 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "0.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0, 0, 0, 0.9};
				};
				
				class ButtonDetailsClose : RscButton {
					idc = 88853;
					x = "11.85 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "0.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "0.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {1, 1, 1, 1};
				};
				
				class RespawnDetailsListControlsGroup : RscControlsGroup {
					idc = 88860;
					x = "0.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "1.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "12.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "13.45 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					
					class controls {
						class DetailsList : RscStructuredText {
							idc = 88861;
							x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
							y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							w = "11.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
							h = "12.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
							colorBackground[] = {1, 1, 1, 0.3};
						};
					};
				};
			};
		};
		
		class HC_tooltip_back : IGUIBack {
			idc = 1124;
			x = 0.0;
			y = 0.0;
			w = 0.0;
			h = 0.0;
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
		};
		
		class HC_tooltip_text : RscStructuredText {
			idc = 1125;
			x = 0.0;
			y = 0.0;
			w = 0.0;
			h = 0.0;
			size = 0.035;
			
			class Attributes {
				font = "RobotoCondensedBold";
				color = "#B6F862";
				align = "left";
				shadow = true;
			};
		};
	};
	
	class objects {
		class Compass : RscObject {
			model = "\A3\ui_f\objects\Compass.p3d";
			selectionArrow = "";
			x = 0.16;
			xBack = 0.6;
			y = 0.925;
			yBack = 0.5;
			z = 0.2;
			zBack = 0.1;
			enableZoom = 1;
			direction[] = {1, 0, 0};
			up[] = {0, 1, 0};
			scale = 0.35;
		};
		class Watch {};
		class GPS {};
		class WalkieTalkie {};
	};
};
*/