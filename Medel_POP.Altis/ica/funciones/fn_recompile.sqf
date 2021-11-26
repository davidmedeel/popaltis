//////////////////////////////////////////////////////////////////////////////
//																			//
//		           		  		DESOLATION						     		//
//                 		    by Icaruk & nerkaid								//
//		                                                      			    //
//		   If you want to use our code or part of it coctact us at:         //
//	 	Si quieres usar nuestro código o parte del mismo contáctanos en:	//
//                    Email: support@desolationmod.com						//
//                    Web: http://www.desolationmod.com						//
//															                //
//////////////////////////////////////////////////////////////////////////////

/*
	Script: Recarga todas las funciones
	Archivo: fn_recompile.sqf
	Creador: Icaruk
	Versión: 0.8

Params: 
	0 SCALAR - Modo, según esta lista:
		1 - Todo
		2 - uiNamespace
		3 - missionNamespace e inicializar misión
		4 - missionNamespace
	
	Recompila todas las funciones de la misión al vuelo. Requiere "allowFunctionsRecompile = 1" en description.ext.
	
	3 call ica_fnc_recompile;
*/


// Recogemos funciones
private _fnc = getText (configfile >> "CfgFunctions" >> "init");


// Si no hay salimos
if (_fnc isEqualTo "") exitWith {hint "Error: No se encontraron funciones";};


// Precompilamos las líneas
_this call compile preProcessFileLineNumbers _fnc;

// Flash negro
titleText ["", "BLACK IN", 0.05];
hint "";

