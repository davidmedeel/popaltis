
disableSerialization;

private _dialog = findDisplay 2700;
private _list = _dialog displayCtrl 2701;
private _sel = lbCurSel _list;

if (_sel isEqualTo -1) exitWith {
    hint localize "STR_NOTF_noDataSelected"
};

if (_list lbData _sel isEqualTo "") exitWith {
    hint localize "STR_NOTF_didNotSelectVehicle"
};

private _index = parseNumber (_list lbData _sel);
private _vehicle = life_vehicles param [_index, objNull, [objNull]];
if isNull _vehicle exitWith {};


if (_vehicle isKindOf "House_F") exitWith {
    hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>LLAVERO</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>No puedes tirar las llaves de tu vivienda.</t>";
};


if (objectParent player isEqualTo _vehicle && {locked _vehicle isEqualTo 2}) exitWith {
    hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>LLAVERO</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>No puedes tirar las llaves de un vehículo que está cerrado y estás dentro de el.</t>";
};

life_vehicles = life_vehicles - [_vehicle];


private _owners = _vehicle getVariable ["vehicle_info_owners", []];
_owners deleteAt _index;
_vehicle setVariable ["vehicle_info_owners", _owners, true];


call life_fnc_keyMenu
