
class MAV_ctrlMenuStrip: MAV_ctrlMenu
{
	type = CT_MENU_STRIP;

	colorStripBackground[] = {0,0,0,1};
	colorStripText[] = {COLOR_TEXT_RGBA};
	colorStripSelect[] = {0,0,0,1};
	colorStripSelectBackground[] = {COLOR_ACTIVE_RGBA};
	colorStripDisabled[] = {COLOR_TEXT_RGB,0.25};

/*
	class Items
	{
		items[] = {File,Edit};
		class File
		{
			text = "File";
			items[] = {New,Separator1,Save,Load};
			data = "test1";
			value = 1;
		};
		class Edit
		{
			text = "Edit";
			items[] = {};
		};
		class SubItem1
		{
			text = "SubItem1";
			picture = "\a3\Ui_f\data\Map\Markers\Military\warning_CA.paa";
			enable = 0;
			shortcuts[] = {};
			action = "systemchat str _this;";
		};
		class Separator1
		{
		};
		class SubItem2: SubItem1
		{
			text = "SubItem2";
			enable = 1;
			shortcuts[] = {};
		};
		class SubItem3: SubItem2
		{
			text = "SubItem3";
			shortcuts[] = {};

			type = "checkbox";
			default = 1;
		};
	};
*/
};
