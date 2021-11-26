
/*
    por: Medel
*/

_param = param[0];

if (_param isEqualTo "Init") exitWith {

    NPC_POLI_KAVALA addAction
    [
        "<t size='1.5'>Gestionar Alertas<t\>",
        {
            ["menu",NPC_POLI_KAVALA] spawn medel_fnc_alertas;
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

    NPC_POLI_PYRGOS addAction
    [
        "<t size='1.5'>Gestionar Alertas<t\>",
        {
            ["menu",NPC_POLI_PYRGOS] spawn medel_fnc_alertas;
        },
        [],
        1.0,
        true,
        true,
        "",
        "(playerside isEqualTo west)",
        5,
        false,
        "",
        ""
    ];

    NPC_POLI_AGIOS addAction
    [
        "<t size='1.5'>Gestionar Alertas<t\>",
        {
            ["menu",NPC_POLI_AGIOS] spawn medel_fnc_alertas;
        },
        [],
        0.5,
        true,
        true,
        "",
        "(playerside isEqualTo west)",
        5,
        false,
        "",
        ""
    ];

    NPC_POLI_SOFIA addAction
    [
        "<t size='1.5'>Gestionar Alertas<t\>",
        {
            ["menu",NPC_POLI_SOFIA] spawn medel_fnc_alertas;
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
