
_Cfg = configFile >> "CfgVehicles";

VVS_pre_Car = [];
VVS_pre_Air = [];
VVS_pre_Ship = [];
VVS_pre_Armored = [];
VVS_pre_Autonomous = [];
VVS_pre_Support = [];

if(count VVS_Car > 0) then {VVS_pre_Car = VVS_Car;};

if(count VVS_Air > 0) then {VVS_pre_Air = VVS_Air;};
if(count VVS_Ship > 0) then {VVS_pre_Ship = VVS_Ship;};

if(count VVS_Armored > 0) then {VVS_pre_Armored = VVS_Armored;};

if(count VVS_Autonomous > 0) then {VVS_pre_Autonomous = VVS_Autonomous;};
if(count VVS_Support > 0) then {VVS_pre_Support = VVS_Support;};

if(VVS_Premade_List) exitWith {};

for "_i" from 0 to (count _Cfg)-1 do
{
	_class = _Cfg select _i;
	if(isClass _class) then
	{
		_className = configName _class;
		if(_className != "") then
		{
			_cfgInfo = [_className] call VVS_fnc_cfgInfo;
			if(count _cfgInfo > 0) then
			{
				_scope = _cfgInfo select 1;
				_picture = _cfgInfo select 2;
				_displayName = _cfgInfo select 3;
				_vehicleClass = _cfgInfo select 4;
				_side = _cfgInfo select 5;	
				_superClass = _cfgInfo select 7;    

				if(_scope >= 2 && _picture != "" && _displayName != "" && _vehicleClass in ["Car","Ship","Air","Armored","Submarine","Autonomous","Support","rhs_vehclass_apc","rhs_vehclass_ifv","rhs_vehclass_car","rhs_vehclass_truck","rhs_vehclass_tank","rhs_vehclass_artillery","rhs_vehclass_radar","rhs_vehclass_targeting","rhs_vehclass_launcher","rhs_vehclass_aircraft","rhs_vehclass_helicopter","rhs_vehclass_aa"] // << ADD YOUR VEHICLE CLASS AT THE END OF THE CLASSES ARRAY ","YOUR CLASS"]
				&& !(_className in VVS_R_Car) && !(_superClass in VVS_R_Car)
				&& !(_className in VVS_R_Air) && !(_superClass in VVS_R_Air)
				&& !(_className in VVS_R_Ship) && !(_superClass in VVS_R_Ship)
				&& !(_className in VVS_R_Armored) && !(_superClass in VVS_R_Armored)
				&& !(_className in VVS_R_Autonomous) && !(_superClass in VVS_R_Autonomous)
				&& !(_className in VVS_R_Support) && !(_superClass in VVS_R_Support)
				) then
				{

					if ((count VVS_Car == 0) && (_vehicleClass in ["Car","rhs_vehclass_car","rhs_vehclass_truck"])) then
					{ VVS_pre_Car set[count VVS_pre_Car,_className]; };

					if ((count VVS_Ship == 0) && (_vehicleClass in ["Ship","Submarine"])) then
					{ VVS_pre_Ship set[count VVS_pre_Ship,_className]; };

					if ((count VVS_Air == 0) && (_vehicleClass in ["Air","rhs_vehclass_aircraft","rhs_vehclass_helicopter"])) then
					{ VVS_pre_Air set[count VVS_pre_Air,_className]; };

					if ((count VVS_Armored == 0) && (_vehicleClass in ["Armored","rhs_vehclass_tank","rhs_vehclass_apc","rhs_vehclass_ifv","rhs_vehclass_artillery"])) then
					{ VVS_pre_Armored set[count VVS_pre_Armored,_className]; };

					if ((count VVS_Autonomous == 0) && (_vehicleClass in ["Autonomous","rhs_vehclass_aa"])) then
					{ VVS_pre_Autonomous set[count VVS_pre_Autonomous,_className]; };

					if ((count VVS_Support == 0) && (_vehicleClass in ["Support","rhs_vehclass_radar","rhs_vehclass_launcher","rhs_vehclass_targeting"])) then
					{ VVS_pre_Support set[count VVS_pre_Support,_className]; };
				};
			};
		};
	};
};
