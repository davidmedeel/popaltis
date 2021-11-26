
[] call compile preprocessFileLineNumbers "\medel_server\init.sqf";

missionNamespace setVariable ["fondosPublicosSacados", 0, true];

_listaRobos = [];
missionNamespace setVariable ["ActualRobos",0,true];
missionNamespace setVariable ["ListaRobos",_listaRobos,true];
missionNamespace setVariable ["RobosEnCurso", 0, true];
missionNamespace setVariable ["nopolicia", false, true];

Zona_1 setVariable ["capturando", false, true];

Zona_2 setVariable ["capturando", false, true];

Zona_3 setVariable ["capturando", false, true];

Zona_1 setVariable ["owner", "Libre", true];

Zona_2 setVariable ["owner", "Libre", true];

Zona_3 setVariable ["owner", "Libre", true];

_Pos1 = position Zona_1;
_Pos2 = position Zona_2;
_Pos3 = position Zona_3;

_capT1 = "Zona1_Marker";
_capT2 = "Zona2_Marker";
_capT3 = "Zona3_Marker";

_capText = "Esta zona esta controlada por la policía";

_capM1 = createMarker [_capT1, _Pos1];
_capM2 = createMarker [_capT2, _Pos2];
_capM3 = createMarker [_capT3, _Pos3];

_capM1 setMarkerColor "ColorBlue";
_capM2 setMarkerColor "ColorBlue";
_capM3 setMarkerColor "ColorBlue";
	
_capM1 setMarkerText _capText;
_capM2 setMarkerText _capText;
_capM3 setMarkerText _capText;

_capM1 setMarkerType "b_art";
_capM2 setMarkerType "b_art";
_capM3 setMarkerType "b_art";

Zona_1 setVariable ["marker", _capM1, true];

Zona_2 setVariable ["marker", _capM2, true];

Zona_3 setVariable ["marker", _capM3, true];

missionNamespace setVariable ["robosPequenos",0,true];
missionNamespace setVariable ["robosMedianos",0,true];
missionNamespace setVariable ["robosGrandes",0,true];

Paco setVariable ["reciente", false, true];
Paco setVariable ["robando", false, true];

Manolo setVariable ["reciente", false, true];
Manolo setVariable ["robando", false, true];

Medel setVariable ["reciente", false, true];
Medel setVariable ["robando", false, true];

Repsol setVariable ["reciente", false, true];
Repsol setVariable ["robando", false, true];

Convento setVariable ["reciente", false, true];
Convento setVariable ["robando", false, true];

Casino setVariable ["reciente", false, true];
Casino setVariable ["robando", false, true];

SupermercadoManolo setVariable ["reciente", false, true];
SupermercadoManolo setVariable ["robando", false, true];

SupermercadoPaco setVariable ["reciente", false, true];
SupermercadoPaco setVariable ["robando", false, true];

Almacen setVariable ["reciente", false, true];
Almacen setVariable ["robando", false, true];

Lezo setVariable ["reciente", false, true];
Lezo setVariable ["robando", false, true];

roboArmas setVariable ["robando", false, true];
roboArmas setVariable ["Reciente", false, true];
roboArmas setVariable ["CodigoRobo",[],true];

Laboratorio setVariable ["reciente", false, true];
Laboratorio setVariable ["robando", false, true];
