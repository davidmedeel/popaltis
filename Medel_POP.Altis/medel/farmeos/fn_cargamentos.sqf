
/*
por: Medel

Params:
	0 - STRING 	// param
	1 - STRING 	// zona del cargamento

["Init"] spawn medel_fnc_cargamentos;
["generarCargamento"] spawn medel_fnc_cargamentos;
["param", _zonaCamion] spawn medel_fnc_cargamentos;
*/

_param = param[0];

if (_param isEqualTo "Init") exitWith {

  sleep (60 * 30);

  ["generarCargamento"] spawn medel_fnc_cargamentos;
};

if (_param isEqualTo "generarCargamento") exitWith {

  _random = round random 1;

  _zonaCamion = format ["cargamento_%1", round random 4];

  if (_random isEqualTo 0) then {
    ["cargamentoArmas", _zonaCamion] spawn medel_fnc_cargamentos;
  };

  if (_random isEqualTo 1) then {
    ["cargamentoMunicion", _zonaCamion] spawn medel_fnc_cargamentos;
  };
};

_classNameCamion = "I_Truck_02_transport_F";

_textoMarcador = "!ATENCION! Un convoy se ha estrellado aquí!";

if (_param isEqualTo "cargamentoArmas") exitWith {

  _zona = param [1];

  _pos = getMarkerPos _zona;
  _MarkerN = format["marker_%1", floor(random 1000)];
  _marker = createMarker [_MarkerN, _pos];
  _MarkerN setMarkerColor "ColorRed";
  _MarkerN setMarkerText _textoMarcador;
  _MarkerN setMarkerType "mil_warning";

  _camion = _classNameCamion createvehicle getMarkerPos _zona;
  _camion lock 0;
  _camion setFuel 0;

  clearItemCargoGlobal _camion;

  sleep 1;

  _camion addItemCargoGlobal ["arifle_Katiba_F", 2];
  _camion addItemCargoGlobal ["arifle_AK12_F", 1];
  _camion addItemCargoGlobal ["arifle_MXC_F", 1];
  _camion addItemCargoGlobal ["arifle_MX_F", 1];
  _camion addItemCargoGlobal ["arifle_Mk20_F", 2];

  [10,"Atención",[1,0,0,1],2,("Un camión militar ha perdido un cargamento de armas, se autodestruirá en 8 minutos, no vayan a la zona, puede ser peligroso"),[1,1,1,1],1] remoteexec ["ica_fnc_anuncio", 0];

  sleep (60 * 8);

  _explosion = "DemoCharge_Remote_Ammo_Scripted" createVehicle position _camion;
  _camion setDamage 1;

  deleteMarker _MarkerN;

  sleep (60 * 30);

  ["generarCargamento"] spawn medel_fnc_cargamentos;
};

if (_param isEqualTo "cargamentoMunicion") exitWith {

  _zona = param [1];

  _pos = getMarkerPos _zona;
  _MarkerN = format["marker_%1", floor(random 1000)];
  _marker = createMarker [_MarkerN, _pos];
  _MarkerN setMarkerColor "ColorRed";
  _MarkerN setMarkerText _textoMarcador;
  _MarkerN setMarkerType "mil_warning";

  _camion = _classNameCamion createvehicle getMarkerPos _zona;
  _camion lock 0;
  _camion setFuel 0;

  clearItemCargoGlobal _camion;

  sleep 1;

  _camion addItemCargoGlobal ["30Rnd_762x39_Mag_Tracer_Green_F", 15];
  _camion addItemCargoGlobal ["30Rnd_762x39_AK12_Mag_Tracer_F", 15];
  _camion addItemCargoGlobal ["30Rnd_65x39_caseless_black_mag", 15];
  _camion addItemCargoGlobal ["30Rnd_9x21_Mag", 30];
  _camion addItemCargoGlobal ["30Rnd_65x39_caseless_green_mag_Tracer", 15];
  _camion addItemCargoGlobal ["200Rnd_65x39_cased_Box_Tracer", 10];

  [10,"Atención",[1,0,0,1],2,"Un camión militar ha perdido un cargamento de munición, se autodestruirá en 8 minutos, no vayan a la zona, puede ser peligroso",[1,1,1,1],1] remoteexec ["ica_fnc_anuncio",0];

  sleep (60 * 8);

  _explosion = "DemoCharge_Remote_Ammo_Scripted" createVehicle position _camion;
  _camion setDamage 1;

  deleteVehicle _camion;

  deleteMarker _MarkerN;

  sleep (60 * 30);

  ["generarCargamento"] spawn medel_fnc_cargamentos;
};
