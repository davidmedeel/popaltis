
disableSerialization;

private["_control"];

_control = ((findDisplay 38100) displayCtrl 38103);

if(VVS_Checkbox) then {VVS_Checkbox = false;} else {VVS_Checkbox = true;};

if(VVS_Checkbox) then
{
	hint "Has seleccionado que los items (armas, cargadores, items) se borrarán del vehículo.";
	_control ctrlSetText "Si";
	_control ctrlSetTextColor [0,1,0,1];
}
	else
{
	_control ctrlSetText "No";
	_control ctrlSetTextColor [1,0,0,1];
};
