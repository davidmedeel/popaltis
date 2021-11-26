
_param = param [0];

if (_param isEqualTo "Init") exitWith {
	createDialog "IncautarDinero";
};

if (_param isEqualTo "ok") exitWith {
	_porcentaje = ctrlText 999017;
	if (!([_porcentaje] call TON_fnc_isnumber)) exitWith { hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>INCAUTACIONES<br/></t> <br/><t color='#e7ad3e' size='2'></t> <t color='#FFFFFF' size='1.5'>Formato Inválido.</t>"; };
	_porcentaje = parseNumber(_porcentaje);
	if ((_porcentaje > 100) or (_porcentaje < 1)) exitWith {
		hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>INCAUTACIONES<br/></t> <br/><t color='#e7ad3e' size='2'></t> <t color='#FFFFFF' size='1.5'>Formato Inválido.</t>";
	};
	closeDialog 0;
	["quitar",_porcentaje,player] remoteexec ["est_fnc_dinero", life_pInact_curTarget, false];
};
if (_param isEqualTo "quitar") exitWith {
	_porcentaje = param [1];
	_player = param [2];
	
	_porcentajeF = round (medel_din * _porcentaje / 100);
	medel_din = medel_din - _porcentajeF;
	hint parsetext format ["<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>INCAUTACIONES<br/></t> <br/><t color='#e7ad3e' size='2'></t> <t color='#FFFFFF' size='1.5'>Te han incautado el %1%3 [%2€].</t>", _porcentaje, _porcentajeF, "%"];
	["dar",_porcentajeF,_porcentaje] remoteexec ["est_fnc_dinero", _player, false];
};
if (_param isEqualTo "dar") exitWith {
	_porcentajeF = param [1];
	_porcentaje = param [2];
	medel_din = abs medel_din;
	medel_din = medel_din + _porcentajeF;
	hint parsetext format ["<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>INCAUTACIONES<br/></t> <br/><t color='#e7ad3e' size='2'></t> <t color='#FFFFFF' size='1.5'>Has incautado el %1%3 [%2€].</t>", _porcentaje, _porcentajeF, "%"];
};
