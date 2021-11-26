
_param = param [0];
_npc = param [1];

_Reciente = _npc getVariable "Reciente";
_Robando = _npc getVariable "robando";
_robosEnCurso = missionNamespace getVariable "RobosEnCurso";
_check = false;
Check = false;

if (_param isEqualTo "menos") exitWith {

	_npc setVariable ["robando", false, true];

	[_npc] spawn {
        _npc = param [0];
        sleep 900;
        _npc setVariable ["Reciente", false, true];
    };

    [] spawn {
        sleep 210;
        _robosEnCurso = missionNamespace getVariable "RobosEnCurso";
        _robosEnCurso = _robosEnCurso - 1;
        missionNamespace setVariable ["RobosEnCurso", _robosEnCurso, true];
    };
};

if (_param isEqualTo "add") then {

 	if (count (nearestObjects [player, ["C_man_1"], 10]) > 2) exitWith {
        hint parsetext
 
        "<t size = ""2"" color=""#DE2828"" align='center'>ALERTA <br/>
        <t size = ""1"" color=""#21618C"" align='left'>Debes alejar a todo el mundo antes de comenzar el robo.</t></t> 
            
        ";
    };
 
    if (_Reciente) exitWith {
        hint parsetext
 
        "<t size = ""2"" color=""#DE2828"" align='center'>AVISO <br/>
        <t size = ""1"" color=""#21618C"" align='left'>Me han robado hace poco y la caja esta vacia, será mejor que robes en otro lado.</t></t> 
            
        ";
    };
 
    if (_Robando) exitWith {
         hint parsetext

        "<t size = ""2"" color=""#DE2828"" align='center'>ALERTA <br/>
        <t size = ""1"" color=""#21618C"" align='left'>Ya están robando</t></t> 
            
        ";
    };
 
    if (_robosEnCurso >= 2) exitWith {
        hint parsetext
 
        "<t size = ""2"" color=""#DE2828"" align='center'>AVISO <br/>
        <t size = ""1"" color=""#21618C"" align='left'>Ya hay demasiados robos en curso, Espera que finalicen algunos</t></t> 
            
        ";
    };

        [[_npc] call BIS_fnc_objectVar] call est_fnc_policia;
        if (Poli) exitWith {};

    if ((primaryWeapon player isEqualTo "") AND (handgunWeapon player isEqualTo "")) exitWith {
        hint parsetext
 
        "<t size = ""2"" color=""#DE2828"" align='center'>AVISO <br/>
        <t size = ""1"" color=""#21618C"" align='left'>¿Qué quieres tú? ¿que quieres 50€ asi de gratis? vete y ponte a trabajar</t></t> 
            
        ";
        };

    if !(((player ammo handgunWeapon player) > 1) or ((count primaryWeaponMagazine player) >= 1)) exitWith {
        hint parsetext
 
        "<t size = ""2"" color=""#DE2828"" align='center'>AVISO <br/>
        <t size = ""1"" color=""#21618C"" align='left'>¿Con eso me amenazas?, almenos ponle balas.?</t></t> 
            
        ";
        };

    _robosEnCurso = _robosEnCurso + 1;
    
    missionNamespace setVariable ["RobosEnCurso", _robosEnCurso, true];

    _npc setVariable ["Reciente", true, true];
 
    _npc setVariable ["robando", true, true];

	_check = true;
    
    Check = _check;
};
