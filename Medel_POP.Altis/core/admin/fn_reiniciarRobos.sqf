
/*
por Medel
*/

#include "..\..\script_macros.hpp"

if (FETCH_CONST(life_adminlevel) < 1) exitWith {closeDialog 0; 
	hint parsetext
	"<t color='#DE2828'><t size='3.4'><t align='center'>AVISO
	<br/><t color='#21618C'><t size='1.2'><t align='center'>No tienes suficiente nivel de admin</t>";
};

if (deServicio == 0) exitwith {hint "No estás de servicio";};

Paco setVariable ["reciente", false, true];
Paco setVariable ["robando", false, true];

Manolo setVariable ["reciente", false, true];
Manolo setVariable ["robando", false, true];

Medel setVariable ["reciente", false, true];
Medel setVariable ["robando", false, true];

Repsol setVariable ["reciente", false, true];
Repsol setVariable ["robando", false, true];

Convento setVariable ["reciente", false, true];
Convento setVariable ["robando", false, true];

Casino setVariable ["reciente", false, true];
Casino setVariable ["robando", false, true];

SupermercadoManolo setVariable ["reciente", false, true];
SupermercadoManolo setVariable ["robando", false, true];

SupermercadoPaco setVariable ["reciente", false, true];
SupermercadoPaco setVariable ["robando", false, true];

Almacen setVariable ["reciente", false, true];
Almacen setVariable ["robando", false, true];

Lezo setVariable ["reciente", false, true];
Lezo setVariable ["robando", false, true];

roboArmas setVariable ["robando", false, true];
roboArmas setVariable ["Reciente", false, true];
roboArmas setVariable ["CodigoRobo",[],true];

Laboratorio setVariable ["reciente", false, true];
Laboratorio setVariable ["robando", false, true];

_array = [Paco, Manolo, Medel, Repsol, Convento, Casino, SupermercadoManolo, SupermercadoPaco, Almacen, Lezo, roboArmas, Laboratorio];

hint format ["Has reiniciado los siguientes robos %1", _array];
