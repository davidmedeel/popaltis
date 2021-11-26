
private _unit = param [0,objNull,[objNull]];

if (isNull _unit) exitWith {[]};

private _uid = getPlayerUID _unit;
private _query = format ["SELECT wantedID, wantedName, wantedBounty FROM wanted WHERE active='1' AND wantedID='%1'",_uid];
private _queryResult = [_query,2] call DB_fnc_asyncCall;

if (count _queryResult isEqualTo 0) exitWith {[]};
_queryResult;
