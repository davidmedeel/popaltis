
/*
por: Medel
*/

_param = param[0];

if (_param isEqualTo "Init") exitWith {

    _npc = NPC_MEDEL_TALLER;

    _npc addAction
    [
        "<t size='1.5'>Cambiar propietario del vehículo [50.000€]<t\>",
        {
            ["usarTaller",_npc] spawn medel_fnc_taller;
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
};

if (_param isEqualTo "usarTaller") exitWith {
    //cheeks
    if (isNull objectParent player) exitWith {
        hint "Tienes que estar en un vehículo";
    };

    if (medel_din < 50000) exitwith {hint "El trabajo cuesta 50.000€"};

    //esta dentro del coche
    if (vehicle player != player) exitWith { 
        //vars
        _vehicle = vehicle player;

        //quitar dinero
        medel_din = medel_din - 50000;

        //barrita de espera
        [10, "Cambiando titular del vehículo..."] spawn ica_fnc_barrita;
        sleep 10;

        //generar nombre al azar
        _nombre = ["Sergio","Fernando","David","Alejandro","Tete","Miguel","José", "Ica", "Manolo", "Paco","Nico","Jesus","Ruben","Juanjo","Santiago","Manuel","Hassin","Antonio","Akdabr"] call BIS_fnc_selectRandom;
        _apellido = ["Yunqueras", "Costa", "Estrada", "Pacheco","Reyes","Ruk","Walker","Esparta","Perez","Flores","Hamed","Petrov","Capone","Medel","Delgado","Villas","Sanchez"] call BIS_fnc_selectRandom;
        _infoOwner = _nombre +" "+ _apellido;

        //cambiar info del coche [["76561198844937661","David Medel"]]
        _uid = getPlayerUID player;
        _infoOwner = [[_uid,_infoOwner]];

        _vehicle setVariable ["vehicle_info_owners",_infoOwner,true];

        //reparar
        _vehicle  setDamage 0;

        //info al jugador
        _txt = format ["Todo listo, el nombre falso de tu matricula es %1, gracias por confiar en los talleres Medel",_nombre +" "+ _apellido];
        titleText[_txt, "PLAIN"];
    };
};
