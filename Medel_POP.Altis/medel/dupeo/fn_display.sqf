
/*
por: Medel
Anti Dupeo Coche
*/

disableSerialization;
		
_6381 = (findDisplay 602) displayCtrl 6381;
_6191 = (findDisplay 602) displayCtrl 6191;
_6382 = (findDisplay 602) displayCtrl 6382;
_6192 = (findDisplay 602) displayCtrl 6192;
_6305 = (findDisplay 602) displayCtrl 6305;
_6306 = (findDisplay 602) displayCtrl 6306;
_632 = (findDisplay 602) displayCtrl 632;
_619 = (findDisplay 602) displayCtrl 619;
_texto = (findDisplay 602) displayCtrl 111;

if (vehicle player != player) then {
	_veh = typeof vehicle player;
	_texto ctrlsetText "Por seguridad, no puedes acceder a el chaleco ni a la mochila.";
	_texto ctrlSetTextColor [1, 0, 0, 1];
	_6381 ctrlSetFade 1;
	_6381 ctrlCommit 0;
	_6381 ctrlEnable false;

	_6191 ctrlSetFade 1;
	_6191 ctrlCommit 0;
	_6191 ctrlEnable false;

	_6382 ctrlSetFade 1;
	_6382 ctrlCommit 0;
	_6382 ctrlEnable false;

	_6192 ctrlSetFade 1;
	_6192 ctrlCommit 0;
	_6192 ctrlEnable false;

	_6305 ctrlSetFade 1;
	_6305 ctrlCommit 0;
	_6305 ctrlEnable false;

	_6306 ctrlSetFade 1;
	_6306 ctrlCommit 0;
	_6306 ctrlEnable false;
};
		/*_632 ctrlSetFade 0.7;
		_632 ctrlCommit 0;
		_632 ctrlEnable false;

		_619 ctrlSetFade 0.7;
		_619 ctrlCommit 0;
		_619 ctrlEnable false;
		Habilitar para que no se cojan items del coche
		*/
