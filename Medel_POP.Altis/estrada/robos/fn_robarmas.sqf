
_param = param [0];

_npc = roboArmas;
if (_param isEqualTo "Init") exitWith {
 

    _npc addAction
    [
        "<t size='1.5'><t color=""#DE2828"">" + "Hackear Código",
        {
            ["Robo"] spawn est_fnc_robarmas;
        },
        [],
        1.5,
        true,
        true,
        "",
        "(playerside isEqualTo civilian)",
        5,
        false,
        "",
        ""
    ];
    TabletArmas addAction
    [
        "<t size='1.5'><t color=""#DE2828"">" + "Introducir Código",
        {
            ["Init"] call est_fnc_cerradura;
        },
        [],
        1.5,
        true,
        true,
        "",
        "((playerside isEqualTo civilian) and !(roboArmas getVariable 'CodigoRobo' isEqualTo []))",
        5,
        false,
        "",
        ""
    ];
};

if (_param isEqualTo "Robo") exitWith {

    ["add",_npc] call est_fnc_check;

    if !(Check) exitWith {};

    puertaRoboArmas animate ["Door_1_Move", 0];

    [10,"Alarma - Robo",[1,0,0,1],2,("Están Hackeando el código del Almacén Policial"),[1,1,1,1],1.5] remoteexec ["ica_fnc_anuncio", west];
    
    [_npc, 3] call BIS_fnc_DataTerminalAnimate;
    
    _Pos = position player;
    _MarkerN = format ["%1_Marker",[_npc] call BIS_fnc_objectVar];
    _MarkerT = "!ATENCIÓN! El Almacén Policial está siendo asaltado";
    _marker = createMarker [_MarkerN, _Pos];
    _MarkerN setMarkerColor "ColorRed";
    _MarkerN setMarkerText _MarkerT;
    _MarkerN setMarkerType "mil_warning";

    _tF = 60 * 10;
    _t = 0;
    _s = 0;
    _m = 0;
    _sF = 0;
    _mF = 10;
    _metros = 15;
    _fuera = false;
    while {!(_tF <= 0)} do {

        if (((player distance _npc) > _metros) or !(alive player)) exitWith {
        hint parseText  

        "<t size = ""2"" color=""#DE2828"" align='center'>AVISO <br/>
        <t size = ""1"" color=""#21618C"" align='left'>Buen intento pero te has alejado demasiado de la zona.</t></t>";

            _fuera = true;
        };

        if (_s isEqualTo 59) then {
            _s = 0;
            _m = _m + 1;
        } else {
            _s = _s + 1;
        };

    hintSilent parseText format ["<t size = ""2"" color=""#DE2828"" align='center' >Hackeando Código<br/>
        <t size = ""1.2"" color=""#21618C"" align='left'>          Tiempo: <t size = ""1.2"" color=""#17A589"" align='left'>%1:%2/%3:%4 <t size = ""1.2"" color=""#21618C"" align='left'>minutos <br/> 
        <t size = ""1.2"" color=""#21618C"" align='left'>     Distancia:<t size = ""1.2"" color=""#17A589"" align='left'> %5/%6 <t size = ""1.2"" color=""#21618C"" align='left'>metros</t></t></t></t></t></t></t>",_m,_s,_mF,_sF,round (player distance _npc),_metros];
        _tF = _tF - 1;
        sleep 1;
    };

    [roboArmas, 0] call BIS_fnc_DataTerminalAnimate;

    deleteMarker _MarkerN;

    ["menos",_npc] remoteexec ["est_fnc_check", 2];
    
    if (_fuera) exitWith {};

    "RoboRDM" remoteexec ["mav_ttm_fnc_addExp", group player];

    _CodigoRobo = [];

    _CodigoRobo pushBack round(random 9);
    _CodigoRobo pushBack round(random 9);
    _CodigoRobo pushBack round(random 9);
    _CodigoRobo pushBack round(random 9);
    _CodigoRobo pushBack round(random 9);
    _CodigoRobo pushBack round(random 9);

    _npc setVariable ["CodigoRobo",_CodigoRobo,true];

    _code = _CodigoRobo joinString "-";

    hint format ["El código de Acceso es --> %1", _code];

    while {true} do {

        _Armas = [
        ["srifle_GM6_F",round (random [0, 0, 1])],
        ["srifle_LRR_F",round (random [0, 0, 1])],
        ["srifle_DMR_02_F",round(random 1)],
        ["srifle_DMR_03_F",round(random 1)],
        ["srifle_DMR_04_F",round(random 1)],
        ["srifle_DMR_05_blk_F",round(random 1)],
        ["MMG_02_black_F",round(random 1)],
        ["srifle_DMR_07_blk_F",round(random 1)]
        ];

        _Narmas = 0;
        {
            _can = ((_Armas select _forEachIndex) select 1);
        
            _Narmas = _Narmas + _can;

        } forEach _Armas;

        if (_Narmas > 3) exitWith {

        {

        _nom =  ((_Armas select _forEachIndex) select 0);
        _can = ((_Armas select _forEachIndex) select 1);
        
        CajaArmas addWeaponCargoGlobal [_nom,_can];

        } forEach _Armas;

        };
    };

    while {true} do {

    _Silenciadores = [
    ["muzzle_snds_338_black",round (random 2)], 
    ["muzzle_snds_B",round (random 2)], 
    ["muzzle_snds_93mmg",round (random 2)],
    ["muzzle_snds_338_black",round(random 2)], 
    ["muzzle_snds_H_snd_F",round(random 1)],
    ["muzzle_snds_H_khk_F",round(random 1)],
    ["optic_tws",round(random 1)],
    ["optic_tws_mg",round(random 1)],
    ["optic_Nightstalker",round (random [0, 0, 1])],
    ["optic_NVS",round(random 1)]
    ];

        _Narmas = 0;
        {
            _can = ((_Silenciadores select _forEachIndex) select 1);
        
            _Narmas = _Narmas + _can;

        } forEach _Silenciadores;

        if (_Narmas > 3) exitWith {

        {

        _nom =  ((_Silenciadores select _forEachIndex) select 0);
        _can = ((_Silenciadores select _forEachIndex) select 1);
        
        CajaSilenciadores addItemCargoGlobal [_nom,_can];  

        } forEach _Silenciadores;

        };
      };
    };
