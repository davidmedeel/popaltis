
/*
Por Medel
El q me lo robe le mando a los juzgados en moto
*/

private ["_coste"];

if ({side _x == INDEPENDENT} count playableUnits > 6)  exitWith { hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>MÉDICO</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Lo siento, no estoy de servicio ahora mismo. Acude a un compañero...</t>"; };

if ((damage player) < 0.01) exitWith { hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>MÉDICO</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>No necesitas ser curado.</t>"; };

_coste = 500;

if (medel_din < _coste) exitWith { hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>MÉDICO</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Mis servicios cuestan 500€.</t>"; };

    _t = (round (random 30) + 15);
    [_t + 1, "Recibiendo tratamiento médico. No te alejes!"] spawn ica_fnc_barrita;
    closeDialog 0;
    uiSleep _t;
    if (player distance (_this select 0) > 5) exitWith { hintSilent parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>MÉDICO</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Te has alejado demasiado ¡Te lo dije!</t>"; };
    hintSilent parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>MÉDICO</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Ya estás curado, vuelve cuando quieras.</t>";
    player setDamage 0;
    medel_din = medel_din - _coste;
