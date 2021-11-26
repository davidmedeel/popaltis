
/*
por: Estrada
*/

_param = param [0];

if (_param isEqualTo "Init") exitWith {

	Zona_1 addAction
    [
        "<t size='1.5'><t color=""#DE2828"">" + "Capturar Zona",
        {
            ["con",_this select 0] spawn est_fnc_captura;
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
	Zona_2 addAction
    [
        "<t size='1.5'><t color=""#DE2828"">" + "Capturar Zona",
        {
            ["con",_this select 0] spawn est_fnc_captura;
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
	Zona_3 addAction
    [
        "<t size='1.5'><t color=""#DE2828"">" + "Capturar Zona",
        {
            ["con",_this select 0] spawn est_fnc_captura;
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

// -- Poli

	Zona_1 addAction
    [
        "<t size='1.5'><t color=""#1a6aed"">" + "Liberar Zona",
        {
            ["lib",_this select 0] spawn est_fnc_captura;
        },
        [],
        1.5,
        true,
        true,
        "",
        "(playerside isEqualTo west)",
        5,
        false,
        "",
        ""
    ];
	Zona_2 addAction
    [
        "<t size='1.5'><t color=""#1a6aed"">" + "Liberar Zona",
        {
            ["lib",_this select 0] spawn est_fnc_captura;
        },
        [],
        1.5,
        true,
        true,
        "",
        "(playerside isEqualTo west)",
        5,
        false,
        "",
        ""
    ];
	Zona_3 addAction
    [
        "<t size='1.5'><t color=""#1a6aed"">" + "Liberar Zona",
        {
            ["lib",_this select 0] spawn est_fnc_captura;
        },
        [],
        1.5,
        true,
        true,
        "",
        "(playerside isEqualTo west)",
        5,
        false,
        "",
        ""
    ];
};

if (_param isEqualTo "con") exitWith {
	
	_zona = Param [1];

	_Capturando = _zona getVariable "capturando";

	_grupo = _zona getVariable "owner";

	if (count (nearestObjects [player, ["C_man_1","B_RangeMaster_F"], 20]) >= 2) exitWith {
        hint parseText  
 
        "<t size = ""2"" color=""#DE2828"" align='center'>ALERTA <br/>
        <t size = ""1"" color=""#21618C"" align='left'>Debes alejar a todo el mundo antes de comenzar la captura.</t></t> 
            
        ";
    };

    if (_Capturando) exitWith {
        hint parseText  
 
        "<t size = ""2"" color=""#DE2828"" align='center'>ALERTA <br/>
        <t size = ""1"" color=""#21618C"" align='left'>Ya están conquistando la zona</t></t> 
            
        ";
    };

    if ((primaryWeapon player isEqualTo "") AND (handgunWeapon player isEqualTo "")) exitWith {
        hint parseText  
 
        "<t size = ""2"" color=""#DE2828"" align='center'>AVISO <br/>
        <t size = ""1"" color=""#21618C"" align='left'>¿Qué quieres tú? ¿que quieres 50€ asi de gratis? vete y ponte a trabajar</t></t> 
            
        ";
        };
 
	if (isNil {group player getVariable "gang_name"}) exitWith {       
		hint parseText  
 
        "<t size = ""2"" color=""#DE2828"" align='center'>AVISO <br/>
        <t size = ""1"" color=""#21618C"" align='left'>Para capturar una zona debes tener una banda</t></t> 
            
        ";
		};

	if (_grupo isEqualTo group player) exitWith {
		hint parseText  
 
        "<t size = ""2"" color=""#DE2828"" align='center'>AVISO <br/>
        <t size = ""1"" color=""#21618C"" align='left'>Tu banda ya tiene el control de esta zona</t></t>

        ";
		};

    _zona setVariable ["capturando", true, true];

	_ZonaT = "";

	if (_grupo isEqualTo "Libre") then {
		_ZonaT = format ["!ATENCIÓN! Esta zona está siendo capturada por %1", group player getVariable 'gang_name'];
	} else {
		_ZonaT = "!ATENCIÓN! Esta zona está siendo disputada entre 2 bandas";
	};

	_zonaM = _zona getVariable "marker";

    _oldC = MarkerColor _zonaM;
    _oldT = MarkerText _zonaM;
    _oldTy = MarkerType _zonaM;

	_zonaM setMarkerColor "ColorRed";
    _zonaM setMarkerText _ZonaT;
    _zonaM setMarkerType "mil_warning";

	if (_grupo isEqualTo "Libre") then {
    [10,"Conquista de Zona",[1,0,0,1],2,(format["La banda %2 ha empezado a capturar una zona - %1", mapGridPosition player, (group player) getVariable "gang_name"]),[1,1,1,1],1.5] remoteexec ["ica_fnc_anuncio",0];
	} else {
    [10,"Conquista de Zona",[1,0,0,1],2,(format["La Banda %2 esta disputando el poder de una zona - %1", mapGridPosition player, group player getVariable 'gang_name']),[1,1,1,1],1.5] remoteexec ["ica_fnc_anuncio",0];
	};

	_tF = 60 * 5; //210 3:30
    _t = 0;
    _s = 0;
    _m = 0;
    _sF = 0;
    _mF = 5;
    _metros = 45;
    _fuera = false;

    while {!(_tF <= 0)} do {

        if (((player distance _zona) > _metros) or !(alive player)) exitWith {
        hint parseText  

        "<t size = ""2"" color=""#DE2828"" align='center'>AVISO <br/>
        <t size = ""1"" color=""#21618C"" align='left'>Buen intento pero te has alejado demasiado de la zona.</t></t>";

		_zona setVariable ["capturando", false, true];

        _zonaM setMarkerColor _oldC;
        _zonaM setMarkerText _oldT;
        _zonaM setMarkerType _oldTy;

        _fuera = true;
        };
 
        if (_s isEqualTo 59) then {
            _s = 0;
            _m = _m + 1;
        } else{
            _s = _s + 1;
 
        };

    hintSilent parseText format ["<t size = ""2"" color=""#DE2828"" align='center' >Capturando Zona<br/>
        <t size = ""1.2"" color=""#21618C"" align='left'>          Tiempo: <t size = ""1.2"" color=""#17A589"" align='left'>%1:%2/%3:%4 <t size = ""1.2"" color=""#21618C"" align='left'>minutos <br/> 
        <t size = ""1.2"" color=""#21618C"" align='left'>     Distancia:<t size = ""1.2"" color=""#17A589"" align='left'> %5/%6 <t size = ""1.2"" color=""#21618C"" align='left'>metros</t></t></t></t></t></t></t>",_m,_s,_mF,_sF,round (player distance _zona),_metros];
        _tF = _tF - 1;
        sleep 1;
    };

	if (_fuera) exitWith {};

    hint "Has capturado una zona";

    [10,"Conquista de Zona",[1,0,0,1],2,(format["La banda %2 ha capturado una Zona - %1", mapGridPosition player, (group player) getVariable "gang_name"]),[1,1,1,1],1.5] remoteexec ["ica_fnc_anuncio",0];

	_zona setVariable ["owner", group player, true];

	_zona setVariable ["capturando", false, true];

	"ZonaCapturada" remoteexec ["mav_ttm_fnc_addExp", group player];

	_ZonaT = format ["!ATENCIÓN, Esta zona está controlada por %1", group player getVariable 'gang_name'];

	_zonaM = _zona getVariable "marker";

	_zonaM setMarkerColor "ColorRed";
    _zonaM setMarkerText _ZonaT;
    _zonaM setMarkerType "mil_warning";
};

if (_param isEqualTo "lib") exitWith {

	_zona = Param [1];

	_Capturando = _zona getVariable "capturando";

	_grupo = _zona getVariable "owner";

	if (count (nearestObjects [player, ["C_man_1","B_RangeMaster_F"], 20]) >= 2) exitWith {
        hint parseText  
 
        "<t size = ""2"" color=""#DE2828"" align='center'>ALERTA <br/>
        <t size = ""1"" color=""#21618C"" align='left'>Debes alejar a todo el mundo antes de liberar esta zona.</t></t> 
            
        ";
    };
 
    if (_Capturando) exitWith {
        hint parseText  
 
        "<t size = ""2"" color=""#DE2828"" align='center'>ALERTA <br/>
        <t size = ""1"" color=""#21618C"" align='left'>Están conquistando esta zona</t></t> 
            
        ";
    };

	if ((_grupo isEqualTo group player) or (_grupo isEqualTo "Libre")) exitWith {		
		hint parseText  
 
        "<t size = ""2"" color=""#DE2828"" align='center'>AVISO <br/>
        <t size = ""1"" color=""#21618C"" align='left'>Esta zona ya esta libre</t></t>

        ";
		};

    _zona setVariable ["capturando", true, true];

	_ZonaT = "!ATENCIÓN! Esta zona está siendo liberada por la Policía";

	_zonaM = _zona getVariable "marker";

    _oldC = MarkerColor _zonaM;
    _oldT = MarkerText _zonaM;
    _oldTy = MarkerType _zonaM;

	_zonaM setMarkerColor "ColorOrange";
    _zonaM setMarkerText _ZonaT;
    _zonaM setMarkerType "mil_warning";

    [10,"Conquista de Zona",[1,0,0,1],2,(format["La Policía ha empezado a liberar una zona - %1", mapGridPosition player]),[1,1,1,1],1.5] remoteexec ["ica_fnc_anuncio",0];

	_tF = 60 * 5;
    _t = 0;
    _s = 0;
    _m = 0;
    _sF = 0;
    _mF = 5;
    _metros = 45;
    _fuera = false;

    while {!(_tF <= 0)} do {
       
        if (((player distance _zona) > _metros) or !(alive player)) exitWith {
        hint parseText
 
        "<t size = ""2"" color=""#DE2828"" align='center'>AVISO <br/>
        <t size = ""1"" color=""#21618C"" align='left'>Buen intento pero te has alejado demasiado de la zona.</t></t>";

		_zona setVariable ["capturando", false, true];

        _zonaM setMarkerColor _oldC;
        _zonaM setMarkerText _oldT;
        _zonaM setMarkerType _oldTy;

        _fuera = true;
        };

        if (_s isEqualTo 59) then {
            _s = 0;
            _m = _m + 1;
        } else{
            _s = _s + 1;
 
        };     

    hintSilent parseText format ["<t size = ""2"" color=""#DE2828"" align='center' >Liberando Zona<br/>
        <t size = ""1.2"" color=""#21618C"" align='left'>          Tiempo: <t size = ""1.2"" color=""#17A589"" align='left'>%1:%2/%3:%4 <t size = ""1.2"" color=""#21618C"" align='left'>minutos <br/> 
        <t size = ""1.2"" color=""#21618C"" align='left'>     Distancia:<t size = ""1.2"" color=""#17A589"" align='left'> %5/%6 <t size = ""1.2"" color=""#21618C"" align='left'>metros</t></t></t></t></t></t></t>",_m,_s,_mF,_sF,round (player distance _zona),_metros];
        _tF = _tF - 1;
        sleep 1;
    };

	if (_fuera) exitWith {};

    hint "Has liberado una zona";

    [10,"Conquista de Zona",[1,0,0,1],2,(format["La Policía ha liberado una Zona - %1", mapGridPosition player]),[1,1,1,1],1.5] remoteexec ["ica_fnc_anuncio",0];

	_zona setVariable ["owner", "Libre", true];

	_zona setVariable ["capturando", false, true];

	"ZonaLiberada" remoteexec ["mav_ttm_fnc_addExp", west];

	_capText = "Esta zona está controlada por la Policía";

	_zonaM = _zona getVariable "marker";

    _zonaM setMarkerColor "ColorBlue";
	
    _zonaM setMarkerText _capText;

    _zonaM setMarkerType "b_art";
};
