
//[Plataforma] call est_fnc_policia;

//["debug"] call est_fnc_policia;

_param = param [0];

if (_param isEqualTo "debug") exitWith {
    if (missionNamespace getVariable "nopolicia" isEqualTo false) then {
        missionNamespace setVariable ["nopolicia", true, true];
        hint "Robos Modo debug";
    } else {
        missionNamespace setVariable ["nopolicia", false, true];
        hint "Robos Modo debug off";
    };
};

	_polis = 0;
	_poli = false;
	Poli = false;
	switch (_param) do {
		case "Paco": { _polis = 2;};

		case "Manolo": { _polis = 2;};

		case "Medel": { _polis = 2;};

		case "Repsol": { _polis = 2;};

		case "Convento": { _polis = 6;};

		case "SupermercadoManolo": { _polis = 4;};

		case "SupermercadoPaco": { _polis = 4;};

		case "Almacen": { _polis = 7;};

		case "Casino": { _polis = 11;};

		case "Lezo": { _polis = 10;};

		case "roboArmas": { _polis = 12;};

		case "Laboratorio": { _polis = 6;};

		default {_polis = 2;};
	};

	_polisOn = {side _x == WEST} count playableUnits;

    if !(_polisOn >= _polis) then { 
        hint parseText format  
  
        ["<t size = ""2"" color=""#DE2828"" align='center'>ALERTA <br/> 
        <t size = ""1"" color=""#21618C"" align='left'>Tienen que estar al menos %1 policias conectados, sino corres el riesgo de que se tome justicia por cuenta propia y te salga el tiro por la culata ... ¿quieres probar?.</t></t>  

        ",_polis]; 
  		_poli = true; 
 		} else {_poli = false;};
	if ((missionNamespace getVariable "nopolicia") isEqualTo true) then {_poli = false;};

	Poli = _poli;
