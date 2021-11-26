
/*
por: Medel
	["menu"] call medel_fnc_multas;
*/

_param = _this select 0;

_temas = [
	"Multas de Robo", // 0
	"Multas de Tráfico", // 1
	"Multas de Público", // 2
	"Multas de Homicidios",  // 3
	"Multas de Objetos Ilegales", // 4
	"Multas de Secuestros", // 5
	"Penas de Prisión", // 6
	"Multas por Armamento", // 7
	"Delitos contra el Estado" // 8
];

_respuesta0 = parseText "<t size='0.97' font='PuristaMedium'>
	Robo de vehículo --> 5.000€ <br/>
	Robo de vehículo policial --> 10.000€ <br/>
	Robo a persona --> 7.500€ <br/>
	Robo a agente del estado --> 45.000€ <br/>
	Robo de vehículo policial --> 15.500€ <br/>
	Robo de casa --> 20.000€ <br/>
	Intento de robo a vehiculo --> 5.000€ <br/>
	Robo a gasolineras --> 5000€ <br/>
	Robo a supermercados --> 15.000€ <br/>
	Robo al convento --> 20.000€ <br/>
	Robo al almacén --> 20.000€ <br/>
	Robo al laboratorio --> 30.000€ <br/>
	Robo a Casino --> 40.000€ <br/>
	Robo a reserva federal --> 150.000€ <br/>
</t>";

_respuesta1 = parseText "<t size='0.97' font='PuristaMedium'>
	Fuga de la policía --> 17.500€ <br/>
	Saltarse un control --> 15.000€ <br/>
	Exceso de velocidad --> 2.000€ <br/>
	Conducción campo a través --> 2.500€ <br/>
	Conducción temeraria --> 7.500€ <br/>
	Conducir sin luces --> 1.000€ <br/>
	Conducir Quad sin casco --> 1.000€ <br/>
	Conducir sin licencia --> 5.000€ + retirada del vehículo si no puede conducirlo nadie <br/>
	Romper mobiliario urbano --> 2.500€ <br/>
	Retirada de vehículo de las dependencias policiales --> 2500€ <br/>
	Conducción de vehiculo ilegal --> 7.500€ + retirada del vehiculo <br/>
	Aparcar mal un vehiculo --> 2.000€ <br/>
	Posesión de vehiculo ilegal --> 15.000 <br/>
	Aterrizar en zona ilegal ---> 5.000 + Retirada del helicoptero por miembro del G.A.P <br/>
</t>";

_respuesta2 = parseText "<t size='0.92' font='PuristaMedium'>
	Denuncia Falsa --> 15.000€ <br/>
	Intento de suicidio --> 5.000€ <br/>
	Entrar en zona restringida --> 15.000€ <br/>
	Desorden publico --> 10.000€ <br/>
	Obstrucción a la justicia --> 10.000€ <br/>
	Falta de respeto (X insulto o borderia) --> 20.000€ <br/>
	Desacato a la autoridad --> 12.500€ <br/>
	Interrupción de labores policiales --> 12.500€ <br/>
	Invadir sin permiso un perímetro/recinto policial --> 10.000€ <br/>
</t>";

_respuesta3 = parseText "<t size='0.97' font='PuristaMedium'>
	Asesinato --> 20.000€ <br/>
	Asesinato a agente del estado --> 35.000€ <br/>
	Intento de homicidio --> 10.000€ <br/>
	Intento de homicidio a agente del estado --> 20.000€ <br/>
	Asesinato en serie (+10 asesinatos) --> 50.000€ +15.000€ por asesinato <br/>
</t>";

_respuesta4 = parseText "<t size='0.97' font='PuristaMedium'>
	Posesión de Ganzúa --> 2000€ <br/>
	Trafico de Armas --> 20.000 + el arma con el que trafica <br/>
	Posesión de droga (Marihuana, heroína...) sin procesar (lo que se saque del vehículo) --> 2000€ por cada una <br/>
	Posesión de droga procesada (lo que se encuentre en el vehículo) --> 2500€ por cada una <br/>
	Posesión de Diamantes --> 20000€ por unidad <br/>
	Posesión de Oro --> 15000€ por unidad <br/>
	Trafico de droga --> 10.000€ <br/>
</t>";

_respuesta5 = parseText "<t size='0.97' font='PuristaMedium'>
	Secuestro de civil --> 35.000€ <br/>
	Secuestro de agente del estado --> 45.000€ <br/>
</t>";

_respuesta6 = parseText "<t size='0.97' font='PuristaMedium'>
	De 0 a 25.000 € --> de 5 a 10 minutos <br/>
	De 25.000 € a 50.000 € --> de 10 a 15 minutos <br/>
	De 50.000 € a 75.000 € --> de 15 a 30 minutos <br/>
	De 75.000 € a 100.000 € --> de 30 a 40 minutos <br/>
	De 100.000 € a 125.000 € --> de 40 a 50 minutos <br/>
	De 125.000 € a 150.000 € --> de 50 a 60 minutos <br/>
	De 150.000€ --> de 60 a 70 minutos <br/>
</t>";

_respuesta7 = parseText "<t size='0.97' font='PuristaMedium'>
	Arma legal sin licencia --> 7.500€ + Retirada del arma <br/>
	Arma legal con licencia usada en un acto criminal --> 5.000€ + Retirada del arma <br/>
	Ropa Guillie sin licencia de donador --> 10.000€ + Retirada de la ropa <br/>
	Chaleco con protección sin licencia de donador --> 10.000€ + Retirada del chaleco <br/>
	Fusil de asalto 5,56 --> 20.000€ + retirada de arma <br/>
	Fusil de asalto 6.5 (Katiba,mxc mx) --> 25.000€ + retirada de arma <br/>
	Fusil de asalto 7.62 (AKM ,AK-12) --> 30.000€ + retirada de arma <br/>
	Tirador designado 6.5 7,62 (MK14,MXM) 35.000€ + retirada de arma <br/>
	Francotirador 7.62 (Rahim mk1) --> 40.000€ + retirada de arma <br/>
	Francotirador + 7.62 --> 45.000€ + retirada de arma <br/>
	LMG (Ametralladoras Ligeras/Pesadas/Spar-16S zafir mk200 etc) --> 60.000€  + retirada de arma <br/>
	Accesorios --> 5000€ <br/>
	Cargadores --> 2500€ <br/>
</t>";

_respuesta8 = parseText "<t size='0.97' font='PuristaMedium'>
	Terrorismo --> Pena máxima directa. <br/>
</t>";

if (_param == "menu") exitWith {
	createDialog "multas";
	_ui = uiNameSpace getVariable "multas";
	_lista = (_ui displayCtrl 5056);
	["actualiza"] call medel_fnc_multas;

	_idx = 0;
	while {_idx < (count _temas)} do { // pongo en la lista los temas
		_lista lbAdd (_temas select _idx);
		_lista lbSetData [_idx, (_temas select _idx)];
		_idx = _idx + 1;
	};
	_lista lbSetCurSel 0;
};

if (_param == "actualiza") exitWith {
	_ui = uiNameSpace getVariable "multas";
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
