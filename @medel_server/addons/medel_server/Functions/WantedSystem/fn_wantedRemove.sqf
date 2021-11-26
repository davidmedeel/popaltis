
private _uid = param [0,"",[""]];

if (_uid isEqualTo "") exitWith {};

private _query = format ["UPDATE wanted SET active = '0', wantedCrimes = '[]', wantedBounty = 0 WHERE wantedID='%1'",_uid];
[_query,2] call DB_fnc_asyncCall;