
/*
Devuelve verdadero si el objetivo está dañado, de lo contrario devuelve falso
*/

params [
    ["_target",objNull,[objNull]]
];

private _damage = selectMax (getAllHitPointsDamage _target select 2);

(_damage > 0.01);
