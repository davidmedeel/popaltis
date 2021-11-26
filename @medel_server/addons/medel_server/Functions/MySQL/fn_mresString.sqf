
private ["_string","_filter"];
_string = [_this,0,"",[""]] call BIS_fnc_param;
_filter = "'/\`:|;,{}-""<>";

_string = toArray _string; 
_filter = toArray _filter; 

{
    if (_x in _filter) then {
        _string deleteAt _forEachIndex;
    };
} forEach _string;

toString _string;
