
disableSerialization;
_display = findDisplay 2300;
_colorIndex = lbValue[2304, (lbCurSel 2304)];
if (isNull life_3dPreview_object) exitWith {};

[life_3dPreview_object, _colorIndex] call life_fnc_colorVehicle;
