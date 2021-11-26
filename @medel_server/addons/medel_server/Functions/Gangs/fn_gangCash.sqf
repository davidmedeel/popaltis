
[] spawn {
	while {true} do {
		
		sleep 900;

		_players = count allPlayers;

		_money = _players * 500;

		_Zona_1 = Zona_1 getVariable "owner";
		_Zona_2 = Zona_2 getVariable "owner";
		_Zona_3 = Zona_3 getVariable "owner";

		_libre_1 = false;
		_libre_2 = false;
		_libre_3 = false;

		if (_Zona_1 isEqualTo "Libre") then {
			_libre_1 = true;
		};

		if (_Zona_2 isEqualTo "Libre") then {
			_libre_2 = true;
		};

		if (_Zona_3 isEqualTo "Libre") then {
			_libre_3 = true;
		};

		if (_libre_1 isEqualTo false) then {

			_Bank_1 = _Zona_1 getvariable "gang_bank";

			_bank_1_new = _Bank_1 + _money;

			_Zona_1 setvariable ["gang_bank",_bank_1_new,true];

			[1,_Zona_1] remoteexec ["TON_fnc_updateGang",2];

		};

		if (_libre_2 isEqualTo false) then {

			_Bank_2 = _Zona_2 getvariable "gang_bank";

			_bank_2_new = _Bank_2 + _money;

			_Zona_2 setvariable ["gang_bank",_bank_2_new,true];

			[1,_Zona_2] remoteexec ["TON_fnc_updateGang",2];

		};

		if (_libre_3 isEqualTo false) then {

			_Bank_3 = _Zona_3 getvariable "gang_bank";

			_bank_3_new = _Bank_3 + _money;

			_Zona_3 setvariable ["gang_bank",_bank_3_new,true];

			[1,_Zona_3] remoteexec ["TON_fnc_updateGang",2];

		};
	};
};
