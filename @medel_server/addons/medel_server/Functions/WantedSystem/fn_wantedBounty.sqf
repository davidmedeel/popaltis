
params [
    ["_uid","",[""]],
    ["_civ",objNull,[objNull]],
    ["_cop",objNull,[objNull]],
    ["_half",false,[false]]
];

if (isNull _civ || isNull _cop) exitWith {};

private _query = format ["SELECT wantedID, wantedName, wantedCrimes, wantedBounty FROM wanted WHERE active='1' AND wantedID='%1'",_uid];
private _queryResult = [_query,2] call DB_fnc_asyncCall;

private "_amount";
if !(count _queryResult isEqualTo 0) then {
    _amount = _queryResult param [3];
    if !(_amount isEqualTo 0) then {
        if (_half) then {
            [((_amount) / 2),_amount] remoteExecCall ["life_fnc_bountyReceive",(owner _cop)];
        } else {
            [_amount,_amount] remoteExecCall ["life_fnc_bountyReceive",(owner _cop)];
        };
    };
};