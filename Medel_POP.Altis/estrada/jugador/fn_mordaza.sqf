
if (cursorobject getVariable "amordazado") exitWith {
    [player] remoteexec ["est_fnc_amordazar", cursorobject];
    [true, "mordaza", 1] call life_fnc_handleInv;
};

if (life_inv_mordaza < 1) exitWith {
    hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>MORDAZA</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>No tienes ningúna mordaza.</t>";
};
if !(cursorobject getVariable "restrained") exitWith {
    hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>MORDAZA</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>El objetivo no está esposado.</t>";
};

[false, "mordaza", 1] call life_fnc_handleInv;
[cursorObject, "mordaza"] remoteexec ["life_fnc_say3D", -2];
[player] remoteexec["est_fnc_amordazar", cursorobject];
