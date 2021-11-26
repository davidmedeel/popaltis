
/*
por: Medel
*/

_param = param [0];

if (_param isEqualTo "Init") exitWith {

  _npc = Correos;

  player setvariable ["trabajo_correos_activo",0,true];
  player setvariable ["pagar_correos",0,true];
  player setvariable ["paquete_entregado_correos",0,true];

  _npc addAction ["<t size='1.5'><t color=""#DE2828"">" + "Empezar Trabajo",{["solicito"] spawn medel_fnc_correos;},[],1.5,true,true,"","(playerside isEqualTo civilian)",5,false,"",""];
  _npc addAction ["<t size='1.5'><t color=""#21618C"">" + "Cobrar",{["cobro"] spawn medel_fnc_correos;},[],1.0,true,true,"","(playerside isEqualTo civilian)",5,false,"",""];
  _npc addAction ["<t size='1.5'><t color=""#00ff26"">" + "Cancelar Trabajo",{["cancelo"] spawn medel_fnc_correos;},[],0.5,true,true,"","(playerside isEqualTo civilian)",5,false,"",""];
  _npc addAction ["<t size='1.5'><t color=""#ad0707"">" + "Debug",{["debug"] spawn medel_fnc_correos;},[],0.5,true,true,"","(playerside isEqualTo civilian)",5,false,"",""];
};

_classNameCamion = "C_Van_01_transport_F";

_costeTrabajo = 5000;
_dineroRecompensa = 3000 + _costeTrabajo;

if (_param isEqualTo "solicito") exitWith {

  if (medel_din < _costeTrabajo) exitwith { hint parsetext format ["<t color='#DE2828'><t size='3.4'><t align='center'>CARTERO<br/><t color='#21618C'><t size='1.2'><t align='center'>La fianza de el camion son %1€</t>", __costeTrabajo]; };

  if ((player getvariable "trabajo_correos_activo") > 0) exitwith {
    hint parsetext "<t color='#DE2828'><t size='3.4'><t align='center'>Correos<br/><t color='#21618C'><t size='1.2'><t align='center'>Ya estás lleno ¡A trabajar!</t>";
  };

  player setvariable ["trabajo_correos_activo",1,true];

  _camion = _classNameCamion createvehicle getmarkerpos "vehiculocorreos";

  clearItemCargoGlobal _camion;

  _camion setvariable ["propietario", name player, true];

	player setvariable ["camion", _camion];

	player moveInDriver _camion;

  medel_din = medel_din - _costeTrabajo;

  ["- 5000"] spawn ica_fnc_menosuno;
  [format ["- %1€", _costeTrabajo]] spawn ica_fnc_menosuno;;

  ["generoZona"] spawn medel_fnc_correos;
};

if (_param isEqualTo "generoZona") exitWith {

  _zonaGenerada = format ["correos_%1", round random 4];

  ["empiezo", _zonaGenerada] spawn medel_fnc_correos;
};

if (_param isEqualTo "empiezo") exitWith {

  _zona = param [1];

  player setVariable ["posicion_destino_correos", (getmarkerPos _zona)];

  _pos = getMarkerPos _zona;
	entregaCorreos = player createSimpleTask ["Entrega el Paquete"];
	entregaCorreos setSimpleTaskDestination _pos;
	entregaCorreos setSimpleTaskDescription ["Tienes que entregar el paquete en esta ubicación", "Entrega el Paquete", "Ve a la Entrega"];
	entregaCorreos setTaskState "Assigned";

  hint parsetext "<t color='#DE2828'><t size='3.4'><t align='center'>Correos<br/><t color='#21618C'><t size='1.2'><t align='center'>Te he marcado el punto de entrega en el mapa, pulsa la tecla K para entregar el paquete cuando estés a menos de 20 metros de la vivienda</t>";

  tecla = (findDisplay 46) displayaddEventHandler ["KeyDown", "if ((_this select 1) isEqualto 37) then {['entrego'] spawn medel_fnc_correos;}"];
};

if (_param isEqualTo "entrego") exitWith {

  _marcador = player getVariable "posicion_destino_correos";

  if ((player distance _marcador) > 20) exitwith { hint parsetext "<t color='#DE2828'><t size='3.4'><t align='center'>Correos<br/><t color='#21618C'><t size='1.2'><t align='center'>Aún estás muy lejos del punto de entrega</t>";};

  if (player getvariable "paquete_entregado_correos" isEqualTo 1) exitwith {};

  _camion = player getvariable ["camion", objnull];

  _propietario = _camion getvariable "propietario";

  if (name player != _propietario) exitwith {
    hint parsetext "<t color='#DE2828'><t size='3.4'><t align='center'>Correos<br/><t color='#21618C'><t size='1.2'><t align='center'>Esta avioneta no está a tu nombre merluzo</t>";
  };

  hint parsetext "<t color='#DE2828'><t size='3.4'><t align='center'>Correos<br/><t color='#21618C'><t size='1.2'><t align='center'>Muy bien, has entregado el paquete, ve a cobrar</t>";

	cobroCorreos = player createSimpleTask ["Vuelve a Cobrar"];
	cobroCorreos setSimpleTaskDestination  (getMarkerPos "vehiculocorreos");
	cobroCorreos setSimpleTaskDescription ["Vuelve a la oficina a Cobrar", "Vuelve a Cobrar", "Ve a la oficina"];
	cobroCorreos setTaskState "Assigned";

  player setvariable ["paquete_entregado_correos",1,true];
  player setvariable ["pagar_correos",1,true];

	player removeSimpleTask entregaCorreos;
	entregaCorreos = nil;

	_paquete = "Land_CargoBox_V1_F" createvehiclelocal (position (vehicle player));
	_paquete setDir 90;

	sleep 60;

	deletevehicle _paquete;
};

if (_param isEqualTo "cobro") exitWith {

  _camion = nearestObject [player, "C_Van_01_transport_F"];
  _propietario = _camion getvariable "propietario";

  if ((player getvariable "pagar_correos") isEqualTo 0) exitwith {
    hint parsetext "<t color='#DE2828'><t size='3.4'><t align='center'>Correos<br/><t color='#21618C'><t size='1.2'><t align='center'>!Trabaja primero! ¿Qué te crees político?</t>";
  };

  if ((count (nearestObjects [player, ["man"], 10]))>2) exitwith {
    hint parsetext "<t color='#DE2828'><t size='3.4'><t align='center'>Correos<br/><t color='#21618C'><t size='1.2'><t align='center'>Debes alejar a todo el mundo para devolverme la avioneta</t>";
  };

  if (isnil "_camion") exitwith {
    hint parsetext "<t color='#DE2828'><t size='3.4'><t align='center'>Correos<br/><t color='#21618C'><t size='1.2'><t align='center'>No veo ningúna avioneta cerca</t>";
  };

  if ((player distance _camion) > 25) exitwith {
    hint parsetext "<t color='#DE2828'><t size='3.4'><t align='center'>Correos<br/><t color='#21618C'><t size='1.2'><t align='center'>Acerca la avioneta</t>";
  };

  if (name player != _propietario) exitwith {
    hint parsetext "<t color='#DE2828'><t size='3.4'><t align='center'>Correos<br/><t color='#21618C'><t size='1.2'><t align='center'>Esta avioneta no está a tu nombre merluzo</t>";
  };

  if ((player getvariable "pagar_correos") > 0) exitwith {

	player removeSimpleTask cobroCorreos;
	cobroCorreos = nil;

  player setvariable ["trabajo_correos_activo",0,true];
  player setvariable ["pagar_correos",0,true];
  player setvariable ["paquete_entregado_correos",0,true];

  deleteVehicle _camion;

  medel_din = medel_din + _dineroRecompensa;

  [format ["+ %1€", _dineroRecompensa]] spawn ica_fnc_masuno;

  ["EntregaTerminada"] spawn mav_ttm_fnc_addExp;

  hint parsetext "<t color='#DE2828'><t size='3.4'><t align='center'>Correos<br/><t color='#21618C'><t size='1.2'><t align='center'>Has trabajado duro, aquí tienes tu recompensa</t>";
  };
};

if (_param isEqualTo "cancelo") exitWith {

  _camion = nearestObject [player, "C_Van_01_transport_F"];
  _propietario = _camion getvariable "propietario";

  if ((player getvariable "trabajo_correos_activo") isEqualTo 0) exitwith {
    hint parsetext "<t color='#DE2828'><t size='3.4'><t align='center'>Correos<br/><t color='#21618C'><t size='1.2'><t align='center'>No estás trabajando</t>";
  };

  if ((count (nearestObjects [player, ["man"], 10]))>2) exitwith {
    hint parsetext "<t color='#DE2828'><t size='3.4'><t align='center'>Correos<br/><t color='#21618C'><t size='1.2'><t align='center'>Debes alejar a todo el mundo para devolverme la avioneta</t>";
  };

  if (isnil "_camion") exitwith {
    hint parsetext "<t color='#DE2828'><t size='3.4'><t align='center'>Correos<br/><t color='#21618C'><t size='1.2'><t align='center'>No veo ningúna avioneta cerca</t>";
  };

  if ((player distance _camion) > 25) exitwith {
    hint parsetext "<t color='#DE2828'><t size='3.4'><t align='center'>Correos<br/><t color='#21618C'><t size='1.2'><t align='center'>Acerca la avioneta</t>";
  };

  if (name player != _propietario) exitwith {
    hint parsetext "<t color='#DE2828'><t size='3.4'><t align='center'>Correos<br/><t color='#21618C'><t size='1.2'><t align='center'>Esta avioneta no está a tu nombre merluzo</t>";
  };

  player setvariable ["trabajo_correos_activo",0,true];
  player setvariable ["pagar_correos",0,true];
  player setvariable ["paquete_entregado_correos",0,true];

	player removeSimpleTask entregaCorreos;
	entregaCorreos = nil;

	player removeSimpleTask cobroCorreos;
	cobroCorreos = nil;

  [format ["+ %1€", _costeTrabajo]] spawn ica_fnc_masuno;

  hint parsetext "<t color='#DE2828'><t size='3.4'><t align='center'>Correos<br/><t color='#21618C'><t size='1.2'><t align='center'>Has cancelado el trabajo de repartidor de correos<br/>Te he devuelto el dinero de la fianza</t>";

  deleteVehicle _camion;
};

if (_param isEqualTo "debug") exitWith {

  _camion = player getvariable ["camion", objnull];

  if ((player getvariable "trabajo_correos_activo") isEqualTo 0) exitwith {
    hint parsetext "<t color='#DE2828'><t size='3.4'><t align='center'>Correos<br/><t color='#21618C'><t size='1.2'><t align='center'>No estás trabajando</t>";
  };

  player setvariable ["pagar_correos",0,true];
  player setvariable ["paquete_entregado_correos",0,true];
  player setvariable ["trabajo_correos_activo",0,true];

	player removeSimpleTask entregaCorreos;
	entregaCorreos = nil;

	player removeSimpleTask cobroCorreos;
	cobroCorreos = nil;

  hint parsetext "<t color='#DE2828'><t size='3.4'><t align='center'>Correos<br/><t color='#21618C'><t size='1.2'><t align='center'>Ya no estás bugueado</t>";

  deleteVehicle _camion;
};
