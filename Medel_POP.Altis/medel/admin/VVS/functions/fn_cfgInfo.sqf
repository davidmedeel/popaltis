
private["_class","_scope","_picture","_displayName","_vehicleClass","_side","_faction","_superClass"];

_class = [_this,0,"",[""]] call BIS_fnc_param;
if(_class == "") exitWith {[]};
if(!isClass (configFile >> "CfgVehicles" >> _class)) exitWith {[]};

_scope = -1;
_picture = "";
_displayName = "";
_vehicleClass = "";
_side = -1;
_faction = "";

_scope = getNumber(configFile >> "CfgVehicles" >> _class >> "scope");
_picture = getText(configFile >> "CfgVehicles" >> _class >> "picture");
_displayName = getText(configFile >> "CfgVehicles" >> _class >> "displayName");
_vehicleClass = getText(configFile >> "CfgVehicles" >> _class >> "vehicleClass");
_side = getNumber(configFile >> "CfgVehicles" >> _class >> "side");
_faction = getText(configFile >> "CfgVehicles" >> _class >> "faction");
_superClass = configName(inheritsFrom (configFile >> "CfgVehicles" >> _class));

[_class,_scope,_picture,_displayName,_vehicleClass,_side,_faction,_superClass];
