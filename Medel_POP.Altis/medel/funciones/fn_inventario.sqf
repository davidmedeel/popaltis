
  fnc_test = { 
    	_idc = ctrlIDC (_this select 0);

    	_selectedIndex = _this select 1;

    	_data = format ["Data\n%1\n________\n",lbData [_idc, _selectedIndex]];

    	_text = format ["Text\n%1\n________\n",lbText [_idc, _selectedIndex]];

    	_value = format ["Value\n%1\n________\n",lbValue [_idc, _selectedIndex]];

    	_pic = format ["Picture\n%1\n________\n",lbPicture [_idc, _selectedIndex]]; 

    	hint format["Selected Uniform Index: %1\n%2%3%4%5",_selectedIndex,_data,_text,_value,_pic];

    	false

    while {true} do {

        waituntil {!(isnull (finddisplay 602))}; //waituntil inventory UI is opened

        ((findDisplay 602) displayCtrl 633) ctrlSetEventHandler ["LBDblClick", "_this call fnc_test"]; //run this function when item is double click

        waituntil {isnull (finddisplay 602)};

    };

};  
