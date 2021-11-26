
_param = param [0];
_veh = param [1];

if (_param  isEqualTo  "trabajo") exitWith {

_trabajoIniciado = player getvariable ["trabajo_granjero_activo",0];

if (_trabajoIniciado > 0) exitwith {};

player setvariable ["trabajo_granjero_activo",1,true];

_time = 60 * 18;

hint "Todo listo, ve a arar la tierra, cuando hayas cumplido tu cuota vuelve y serás recompensado.";
sleep 1;

_veh = nearestObject [player, "pop_tractor"];

_metrosTotal = _veh distance getMarkerPos "granjero_ruta_9";

_destinoIndex = 1;

_destino = format ["granjero_ruta_%1", _destinoIndex];

_metros_entregar = _veh distance getMarkerPos _destino;

_flechaDir = "Sign_Arrow_Direction_F" createVehicleLocal (position _veh);
_flechaDir attachTo [_veh, [0,0,2.2]];
_fromTo = ((position  _veh ) vectorFromTo (getMarkerPos _destino)); 
_flechaDir setDir ((_fromTo select 0) atan2 (_fromTo select 1)) - (getDir _veh);

while {_time > 0} do {

_posDestino = getMarkerPos _destino;
_metros =  _veh distance _posDestino;
    
_metros_entregar = _veh distance getMarkerPos _destino;

_fromTo = ((position  _veh ) vectorFromTo _posDestino); 
_flechaDir setDir ((_fromTo select 0) atan2 (_fromTo select 1)) - (getDir _veh);

    sleep 1;
    _time = _time - 1;

    hintSilent format["Destino: %4 \n Tiempo : %1 \n Distancia: %2m ", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring,round (_metros),_metrosTotal,_destino];

if !(alive player) then {
    _time = 0;
};

if (_metros < 20) then {

    _destinoIndex = _destinoIndex + 1;
    _destino = format["granjero_ruta_%1", _destinoIndex];
    _posDestino = getMarkerPos _destino;
    _metros =  _veh distance _posDestino;
};

if (_time <= 0) then {
    hint "Que tío más lento, no te pagaremos nada por tu trabajo, vuelve a empezar la ruta holgazán.";
    player setvariable ["trabajo_granjero_activo",0,true];
};

if (_destinoIndex isEqualTo  10) then {
    hint "Buen trabajo, ya puedes ir a cobrar.";

    player setvariable ["pagar_granjero",1,true];

    _time = 0;
    };
  }; //final while
};

if (_param  isEqualTo  "cobrarTrabajo") exitWith {

if ((count (nearestObjects [player, ["man"], 10]))>1) exitwith {hint "De uno en uno,por favor"};
   
if ((player getvariable "pagar_granjero") isEqualTo 0) exitwith {hint "Trabaja primero, ¿qué te crees que eres político?"};

if ((player getvariable "pagar_granjero") > 0) exitwith {
hint "Fantástico, has trabajado duro, aquí tienes tu recompensa.";
 
_veh = nearestObject [player, "pop_tractor"];
{
detach _x;
deletevehicle _x;
} forEach attachedObjects _veh;

["pop_cajaalimentos", 8] call royal_fnc_item;	
["+8 cajas de alimento"] call royal_fnc_infolog;
            
_pago = 9000;

medel_din = medel_din + _pago;

_organizacion = cursorTarget getVariable["controlado_por",grpNull];

if (!isNull _organizacion) then { 
    [(round (_pago * 0.01)),_organizacion] call life_fnc_gangExtorsion;  
};

["exp",5] call royal_fnc_arrayexp;

player setvariable ["pagar_granjero",0,true];
player setvariable ["trabajo_granjero_activo",0,true];
[format ["+ %1 €",_pago]] call royal_fnc_infolog;
};
};

if (_param  isEqualTo  "solicito") exitWith {

if ((count (nearestObjects [player, ["man"], 4]))>1) exitwith {hint "De uno en uno, por favor"};

if ((count (nearestObjects [(getMarkerPos "trabajoGranjero"), ["Car_F"], 5]))>1) exitwith {hint "Hay un vehiculo ocupando el spawn"};

if (!license_civ_driver) exitwith {hint "No tienes carnet de conducir B, no puedes conducir este tractor."};

if (medel_din < 10000) exitwith {hint "La fianza del tractor son 10.000€"};

medel_din = medel_din - 10000;
trabajoActual = "Tractores";
_veh = "pop_tractor" createvehicle (getMarkerPos "trabajoGranjero");

clearMagazineCargoGlobal _veh;
clearWeaponCargoGlobal _veh;
clearItemCargoGlobal _veh;

player setvariable ["pagar_granjero",0,true];
_veh setvariable ["propietario",name player,true];

_veh  addAction["Empezar trabajo de granjero.", {["trabajo"] spawn royal_fnc_granjero}];

player setvariable ["uniforme",uniform player,true];
player adduniform "rds_uniform_Villager2";
};

if (_param  isEqualTo  "fianza") exitWith {

if ((count (nearestObjects [player, ["man"], 10]))>1) exitwith {hint "De uno en uno, por favor"};

_veh = nearestObject [player, "pop_tractor"];

if (isnil "_veh") exitwith {hint "No veo cerca ningún tractor."};

if ((player distance _veh)>10) exitwith {hint "Acerca el tractor."};

_propietario = _veh getvariable "propietario";

if (name player != _propietario) exitwith {hint "Este tractor no esta registrado a tu nombre."};

deletevehicle _veh;

_uniforme = player getvariable "uniforme";
player adduniform _uniforme;

medel_din = medel_din + 10000;
[format ["+ %1 €",10000]] call royal_fnc_infolog;

hint "Todo listo, el tractor está guardado en el garage, vuelve a por más trabajo cuando quieras.";
};
