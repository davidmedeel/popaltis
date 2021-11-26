
/*
por: Icaruk & Medel
	["menu"] call ica_fnc_ayudador;
*/

_param = param [0];

_temas = [
	"Controles", // 0
	"¿Cómo empiezo?", // 1
	"Farmeos Básicos", // 2
	"Experiencia",  // 3
	"Sistema Médico", // 4
	"Drogas", // 5
	"Sistema de Crafteo", // 6
	"Reinicios", // 7
	"Créditos" // 8
];

_respuesta0 = parseText "<t size='0.97' font='PuristaMedium'>
	Y --- Menú del Jugador <br/>
	U --- Abrir / Cerrar Vehículo <br/>
	T --- Abrir maletero del Vehículo <br/>
	F1 --- Tapones <br/>
	º (arriba del TAB) --- Enseñar Identificación <br/>
	Windows --- Interactuar <br/>
	F5 --- Rendirse / Levantar las Manos <br/>
	shift + G --- Noquear / Golpear con Arma <br/>
	ctrl + H --- Sacar el Arma <br/>
	shift + H --- Guardar Arma <br/>
	ctrl + T --- Ver Ramas de Experiencia <br/>
	ctrl + O --- Función Reporte <br/>
	C --- Cinturón <br/>
	P --- Activar / Desactivar Gestos <br/>
	shift + F1 --- Recargar Ropa / Skin <br/>
</t>";

_respuesta1 = parseText "<t size='0.97' font='PuristaMedium'>
	Primero tienes que ir a la Tienda de Licencias para comprarte la Licencia de Conducir. Cuesta 2500€.<br/><br/>
	
	Después, te compras un 'SUV' en la Tienda de Coches y una mochila en la Tienda de Ropa.<br/><br/>
	
	Ahora estás preparado para empezar con los farmeos básicos.
</t>";

_respuesta2 = parseText "<t size='0.92' font='PuristaMedium'>
	Correos:<br/>
	Deberás transportar con el camión que te deja Correos los paquetes que te da el NPC desde la oficina de Correos que hay en Kavala, hasta las coordenadas que te indique el NPC.<br/> <br/>

	Petróleo:<br/>
	Puedes coger petróleo en el campo y procesarlo para venderlo en el Comerciante General. <br/><br/>

	Melocotones:<br/>
	Puedes ir a coger melocotones al campo de melocotones y luego venderlos en el Comerciante de Fruta. <br/><br/>

	Manzanas:<br/>
	Puedes ir a coger manzanas al campo de manzanas y luego venderlas en el Comerciante de Fruta.<br/><br/>

	Pesca:<br/>
	Deberás de comprar la licencia de barcos, ir al puerto de Kavala y comprar un 'Bote Salvavidas' que tendrá un coste de 5.000€, tendrás que ir a la zona designada para pescar, después de pescar, puedes vender el pescado en el Mercado de Pescado.<br/><br/>

	Agua:<br/>
	Puedes ir a coger botellas en la depuradora de agua y luego venderlas en el Mercado de Altis. <br/><br/>

	Mineria:<br/>
	Deberás ir a el Mercado de Altis y comprar un 'Pico'. Después deberás ir a las minas más cercanas ya sean de 'Cobre, Hierro, Diamante , Azufre, Carbón, Arena'. Después deberás ir al procesador correspondiente de cada mineral para procesarlo y posteriormente venderlo en el Comerciante General o en el Comerciante de Diamantes.<br/><br/>

	El farmeo de diamantes es ilegal, si te pilla la Policía con diamantes, podrá arrestarte.<br/>
</t>";

_respuesta3 = parseText "<t size='0.97' font='PuristaMedium'>
	Haciendo trabajos puedes conseguir experiencia. La experiencia sirve para adquirir más conocimientos y acceder a los desbloqueos de cada rama.
</t>";

_respuesta4 = parseText "<t size='0.97' font='PuristaMedium'>
	Las Vendas, sólo te las puedes aplicar tu mismo, añade 10% más de salud a tu personaje.<br/><br/>

	Las Vendas Compresivas no puedes aplicartelas a ti mismo, se las tienes que aplicar a otro jugador, añade 10% más de salud.<br/><br/>

	Los Tramadoles, sólo te los puedes aplicar tu mismo, añade 20% más de salud a tu personaje.<br/><br/>

	Las Morfinas no puedes aplicartelas a ti mismo, se las tienes que aplicar a otro jugador, añade 20% más de salud.<br/><br/>

	Las Bolsas de Sangre no puedes aplicartelas a ti mismo, se lo tienes que aplicar a otro jugador, añade 50% más de salud. Médicamento exclusivo para la EMS<br/><br/>

	Las Pildoras eliminan la vista borrosa de tu personaje. Puedes encontrarlas en cualquier Mercado. Sólo te las puedes aplicar a ti mismo<br/><br/>
</t>";

_respuesta5 = parseText "<t size='0.97' font='PuristaMedium'>
	Las drogas son la forma más rápida de ganar dinero pero de una forma ilegal. <br/><br/>

	Tendrás que ir a los campos marcados en el mapa (Marihuana, Cocaina, Opio) y recoger la droga con la tecla 'Windows'.<br/><br/>

	Luego tendrás que ir a las zonas de procesamiento marcadas en el mapa (Procesador de Marihuana, Cocaina, Opio) para procesar la droga que has recogido.<br/><br/>
</t>";

_respuesta6 = parseText "<t size='0.97' font='PuristaMedium'>
	Tienes que ir a una Fabrica de Objetos, hay 3 repartidas por todo el mapa. <br/><br/>

	Al entrar a la fábrica, te encontrarás con un NPC con el que podrás interactuar para fabricar tus objetos.<br/><br/>

	Cualquier objeto fisico que fabriques, se añadirá automáticamente a la caja naranja de alado del NPC.
</t>";

_respuesta7 = parseText "<t size='0.97' font='PuristaMedium'>
	Horarios del Restart:<br/>
	15:00 | 21:00 | 3:00 | 9:00<br/>
</t>";

_respuesta8 = parseText "<t size='0.97' font='PuristaMedium'>
	Programación:<br/>
	Medel, Icaruk y José Estrada<br/> <br/>

	Mapeo:<br/>
	Davide Sousa y Oscar Montero<br/><br/>

	Diseño:<br/>
	Miguel Perez<br/><br/>

	Equipo de desarrollo POP Altis Life.<br/>
</t>";

if (_param == "menu") exitWith {
	createDialog "ayudador";
	_ui = uiNameSpace getVariable "ayudador";
	_lista = (_ui displayCtrl 5056);
	["actualiza"] call ica_fnc_ayudador;

	_idx = 0;
	while {_idx < (count _temas)} do { // pongo en la lista los temas
		_lista lbAdd (_temas select _idx);
		_lista lbSetData [_idx, (_temas select _idx)];
		_idx = _idx + 1;
	};
	_lista lbSetCurSel 0;
};

if (_param == "actualiza") exitWith {
	_ui = uiNameSpace getVariable "ayudador";
	_txt = (_ui displayCtrl 5055);
	_lista = (_ui displayCtrl 5056);
	_idxLista = lbCurSel 5056;
	
	switch (_idxLista) do {
		case 0: {	_txt ctrlSetStructuredText _respuesta0;	};
		case 1: {	_txt ctrlSetStructuredText _respuesta1;	};
		case 2: {	_txt ctrlSetStructuredText _respuesta2;	};
		case 3: {	_txt ctrlSetStructuredText _respuesta3;	};
		case 4: {	_txt ctrlSetStructuredText _respuesta4;	};
		case 5: {	_txt ctrlSetStructuredText _respuesta5;	};
		case 6: {	_txt ctrlSetStructuredText _respuesta6;	};
		case 7: {	_txt ctrlSetStructuredText _respuesta7;	};
		case 8: {	_txt ctrlSetStructuredText _respuesta8;	};
	};
};
