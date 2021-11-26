
private ["_jugador", "_numeroPlaca"];

_jugador = player;
_numeroPlaca = getPlayerUID player;

_substring = {
	_string = [_this, 0, "", [""]] call BIS_fnc_param;
	_start = [_this, 1, -1, [-1]] call BIS_fnc_param;
	_end = [_this, 2, -1,[-1]] call BIS_fnc_param;
	
	_stringAr = toArray _string;
	_outAr = [];
	
	for "_i" from _start to _end do {
		_outAr pushBack (_stringAr select _i);
	};
	
	toString _outAr
};

if (vehicle player != player) exitWith {
["normal", "IDENTIFICACIÓN", "No puedes enseñar tu identificación desde un vehículo."] call medel_fnc_hint;
};

if (ensenando_dni) exitWith {
	switch (side _jugador) do {
		case civilian : {
			["normal", "IDENTIFICACIÓN", "Ya estás enseñando tu DNI."] call medel_fnc_hint;
		};
		case independent : {
			["normal", "IDENTIFICACIÓN", "Ya estás enseñando tu Placa."] call medel_fnc_hint;
		};
		case west : {
			["normal", "IDENTIFICACIÓN", "Ya estás enseñando tu Placa."] call medel_fnc_hint;
		};
	};
};

switch (side _jugador) do {
	case civilian : {
		["normal", "IDENTIFICACIÓN", "Has enseñado tu DNI."] call medel_fnc_hint;
	};
	case independent : {
		["normal", "IDENTIFICACIÓN", "Has enseñado tu Placa."] call medel_fnc_hint;
	};
	case west : {
		["normal", "IDENTIFICACIÓN", "Has enseñado tu Placa."] call medel_fnc_hint;
	};
};

ensenando_dni = true;

{
	if(isPlayer _x && (player distance _x) < 3) then {
		if( _x != _jugador) then {
			[_jugador, ([_badgeNumber, (count _badgeNumber) - 7, (count _badgeNumber) - 1] call _substring)] remoteexec ["medel_fnc_DNI",_x];
		};
	};
} forEach ((position _jugador) nearObjects["Man", 10]);

[] spawn {
	sleep 10;
	ensenando_dni = false;
};
