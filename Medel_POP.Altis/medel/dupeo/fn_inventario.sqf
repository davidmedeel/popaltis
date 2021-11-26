
WaitUntil {sleep 1; !IsNull (FindDisplay 602)}; 
		
call medel_fnc_display;
nul = [] spawn medel_fnc_pesoMonitor;

WaitUntil {IsNull (FindDisplay 602)};

nul = [] spawn medel_fnc_inventario;
