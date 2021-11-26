
params [
    ["_caller",objNull,[objNull]],
    ["_callerName","Unknown Player",[""]]
];

if (isNull _caller) exitWith {}; 

["MedicalRequestEmerg",[format [localize "STR_Medic_Request",_callerName]]] call BIS_fnc_showNotification;
