
params [
    ["_uid","",[""]],
    ["_name","",[""]],
    ["_type","",[""]],
    ["_customBounty",-1,[0]]
];

if (_uid isEqualTo "" || {_type isEqualTo ""} || {_name isEqualTo ""}) exitWith {}; 

private _crimesConfig = getArray(missionConfigFile >> "Life_Settings" >> "crimes");
private _index = [_type,_crimesConfig] call TON_fnc_index;

if (_index isEqualTo -1) exitWith {};

_type = [_type, parseNumber ((_crimesConfig select _index) select 1)];

if (count _type isEqualTo 0) exitWith {}; 

if !(_customBounty isEqualTo -1) then {_type set[1,_customBounty];};

private _query = format ["SELECT wantedID FROM wanted WHERE wantedID='%1'",_uid];
private _queryResult = [_query,2,true] call DB_fnc_asyncCall;
private _val = [_type select 1] call DB_fnc_numberSafe;
private _number = _type select 0;

if !(count _queryResult isEqualTo 0) then {
    _query = format ["SELECT wantedCrimes, wantedBounty FROM wanted WHERE wantedID='%1'",_uid];
    _queryResult = [_query,2] call DB_fnc_asyncCall;
    _pastCrimes = [_queryResult select 0] call DB_fnc_mresToArray;

    if (_pastCrimes isEqualType "") then {_pastCrimes = call compile format ["%1", _pastCrimes];};
    _pastCrimes pushBack _number;
    _pastCrimes = [_pastCrimes] call DB_fnc_mresArray;
    _query = format ["UPDATE wanted SET wantedCrimes = '%1', wantedBounty = wantedBounty + '%2', active = '1' WHERE wantedID='%3'",_pastCrimes,_val,_uid];
    [_query,1] call DB_fnc_asyncCall;
} else {
    _crime = [_type select 0];
    _crime = [_crime] call DB_fnc_mresArray;
    _query = format ["INSERT INTO wanted (wantedID, wantedName, wantedCrimes, wantedBounty, active) VALUES('%1', '%2', '%3', '%4', '1')",_uid,_name,_crime,_val];
    [_query,1] call DB_fnc_asyncCall;
};
