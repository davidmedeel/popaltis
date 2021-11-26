
class life_admin_menu
{
    idd = 2900;
    name= "life_admin_menu";
    movingEnable = false;
    enableSimulation = true;
    onLoad = "[] spawn infidel_fnc_adminMenu; uiNameSpace setVariable ['life_admin_menu', _this select 0];";
	onUnLoad = "uiNameSpace setVariable ['life_admin_menu', nil];";

class controlsBackground {

class fondo: RscText
{
	idc = 1000;
	x = 0.298906 * safezoneW + safezoneX;
	y = 0.324 * safezoneH + safezoneY;
	w = 0.489844 * safezoneW;
	h = 0.594 * safezoneH;
	colorBackground[] = {0,0,0,0.7};
};
class cabecera: RscText
{
	idc = 1001;
	text = "Panel de Administración - infidel"; //--- ToDo: Localize;
	x = 0.298906 * safezoneW + safezoneX;
	y = 0.302 * safezoneH + safezoneY;
	w = 0.474375 * safezoneW;
	h = 0.022 * safezoneH;
	colorText[] = {0.702,0.102,0.102,1};
	colorBackground[] = {0,0,0,0.7};
};
};

class controls {

class listaJugadores: RscListBox
{
	idc = 2902;
	sizeEx = 0.040;
	onLBSelChanged = "[_this] spawn infidel_fnc_adminquery";
	x = 0.309219 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.198 * safezoneH;
	colorBackground[] = {0,0,0,0.7};
};
class infoJugador: RscStructuredText
{
	idc = 2903;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.632 * safezoneH + safezoneY;
	w = 0.273281 * safezoneW;
	h = 0.275 * safezoneH;
	colorBackground[] = {0,0,0,0.7};
};
class cerrar: Life_RscButtonMenu
{
	idc = 2906;
	onButtonClick = "closeDialog 0;";
	x = 0.773281 * safezoneW + safezoneX;
	y = 0.302 * safezoneH + safezoneY;
	w = 0.0154689 * safezoneW;
	h = 0.022 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {1,0.25,0.19,1};
};
class reparar: RscButton
{
	idc = 2904;
	onButtonClick = "[] spawn infidel_fnc_adminReparar;";
	text = "Reparar"; //--- ToDo: Localize;
	x = 0.309219 * safezoneW + safezoneX;
	y = 0.72 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class llaves: RscButton
{
	idc = 2905;
	onButtonClick = "[] call infidel_fnc_adminLlaves;";
	text = "Llaves"; //--- ToDo: Localize;
	x = 0.309219 * safezoneW + safezoneX;
	y = 0.654 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class licencias: RscButton
{
	idc = 2907;
	onButtonClick = "[] call infidel_fnc_adminLicencias;";
	text = "Licencias"; //--- ToDo: Localize;
	x = 0.309219 * safezoneW + safezoneX;
	y = 0.621 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class fuego: RscButton
{
	idc = 2908;
	onButtonClick = "[] call infidel_fnc_adminParticulas";
	text = "Fuego"; //--- ToDo: Localize;
	x = 0.37625 * safezoneW + safezoneX;
	y = 0.753 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class crashear: RscButton
{
	idc = 2911;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn infidel_fnc_adminCrasheo;";
	text = "Crashear"; //--- ToDo: Localize;
	x = 0.309219 * safezoneW + safezoneX;
	y = 0.753 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class cachear: RscButton
{
	idc = 2405;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn ica_fnc_cacheo;";
	text = "Cachear"; //--- ToDo: Localize;
	x = 0.309219 * safezoneW + safezoneX;
	y = 0.687 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class iconoX: RscPicture
{
	idc = 1200;
	text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
	x = 0.773281 * safezoneW + safezoneX;
	y = 0.302 * safezoneH + safezoneY;
	w = 0.0154689 * safezoneW;
	h = 0.022 * safezoneH;
};
class marcadores: RscButton
{
	idc = 2908;
	onButtonClick = "[] spawn infidel_fnc_adminMarcadores;";
	text = "Marcadores"; //--- ToDo: Localize;
	x = 0.37625 * safezoneW + safezoneX;
	y = 0.621 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class nombres: RscButton
{
	idc = 2908;
	onButtonClick = "[] spawn infidel_fnc_nombres;";
	text = "Nombres"; //--- ToDo: Localize;
	x = 0.37625 * safezoneW + safezoneX;
	y = 0.654 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class vestirse: RscButton
{
	idc = 2908;
	onButtonClick = "[] spawn infidel_fnc_adminvestirse;";
	text = "Vestirse"; //--- ToDo: Localize;
	x = 0.37625 * safezoneW + safezoneX;
	y = 0.72 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class congelar: RscButton
{
	idc = 2908;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn infidel_fnc_adminCongelar;";
	text = "Congelar"; //--- ToDo: Localize;
	x = 0.37625 * safezoneW + safezoneX;
	y = 0.687 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class voyATI: RscButton
{
	idc = 2908;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn infidel_fnc_voyati;";
	text = "VOY A TI"; //--- ToDo: Localize;
	x = 0.309219 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class invisible: RscButton
{
	idc = 2911;
	onButtonClick = "[] call infidel_fnc_invisible;";
	text = "Invisible"; //--- ToDo: Localize;
	x = 0.309219 * safezoneW + safezoneX;
	y = 0.786 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class revivir: RscButton
{
	idc = 2911;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn infidel_fnc_adminRevivir;";
	text = "Revivir"; //--- ToDo: Localize;
	x = 0.37625 * safezoneW + safezoneX;
	y = 0.786 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class buscador: RscEdit
{
	idc = 1400;
	x = 0.309219 * safezoneW + safezoneX;
	y = 0.335 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {1,1,1,1};
};
class venAMI: RscButton
{
	idc = 2908;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn infidel_fnc_venami;";
	text = "VEN A MI"; //--- ToDo: Localize;
	x = 0.37625 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class curar: RscButton
{
	idc = 2908;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn infidel_fnc_adminCurar;";
	text = "Curar"; //--- ToDo: Localize;
	x = 0.443281 * safezoneW + safezoneX;
	y = 0.588 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class espectador: RscButton
{
	idc = 2908;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn infidel_fnc_adminEspectador;";
	text = "Espectador"; //--- ToDo: Localize;
	x = 0.443281 * safezoneW + safezoneX;
	y = 0.72 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class recoil: RscButton
{
	idc = 2908;
	onButtonClick = "[] spawn infidel_fnc_recoil;";
	text = "No Recoil"; //--- ToDo: Localize;
	x = 0.443281 * safezoneW + safezoneX;
	y = 0.753 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class texto: RscEdit
{
	idc = 1700;
	x = 0.298906 * safezoneW + safezoneX;
	y = 0.929 * safezoneH + safezoneY;
	w = 0.427969 * safezoneW;
	h = 0.044 * safezoneH;
};
class enviar: RscButton
{
	idc = 2911;
	onButtonClick = "[] call infidel_fnc_mensaje;";
	text = "Enviar"; //--- ToDo: Localize;
	x = 0.732031 * safezoneW + safezoneX;
	y = 0.929 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.044 * safezoneH;
};
class gasolina: RscButton
{
	idc = 2908;
	onButtonClick = "[] spawn infidel_fnc_llenarVehiculo;";
	text = "Gasolina"; //--- ToDo: Localize;
	x = 0.443281 * safezoneW + safezoneX;
	y = 0.654 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class matar: RscButton
{
	idc = 2908;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn infidel_fnc_killAdmin;";
	text = "Matar"; //--- ToDo: Localize;
	x = 0.443281 * safezoneW + safezoneX;
	y = 0.621 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class marcadoresVehiculo: RscButton
{
	idc = 2908;
	onButtonClick = "[] spawn infidel_fnc_marcadoresVehiculo;";
	text = "Veh Markers"; //--- ToDo: Localize;
	x = 0.443281 * safezoneW + safezoneX;
	y = 0.786 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class dia: RscButton
{
	idc = 2908;
	onButtonClick = "[] call infidel_fnc_dedia;";
	text = "Dia"; //--- ToDo: Localize;
	x = 0.443281 * safezoneW + safezoneX;
	y = 0.687 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class arsenal: RscButton
{
	idc = 2908;
	onButtonClick = "[] call infidel_fnc_adminarsenal";
	text = "Arsenal"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.335 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};
class gesRol: RscButton
{
	idc = 2908;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};
class vehGOD: RscButton
{
	idc = 2908;
	onButtonClick = "[] spawn infidel_fnc_vehGOD;";
	text = "God Mode Veh"; //--- ToDo: Localize;
	x = 0.649531 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};
class dejarEnBolas: RscButton
{
	idc = 2908;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn infidel_fnc_equipo;";
	text = "Dejar en Bolas"; //--- ToDo: Localize;
	x = 0.649531 * safezoneW + safezoneX;
	y = 0.335 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};
class forzarDesconexion: RscButton
{
	idc = 2908;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn infidel_fnc_forzarDesconexionAdmin;";
	text = "Forzar Desconexion"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.434 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};
class kick: RscButton
{
	idc = 2908;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn infidel_fnc_kickAdmin;";
	text = "Kick"; //--- ToDo: Localize;
	x = 0.649531 * safezoneW + safezoneX;
	y = 0.434 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};
class explotar: RscButton
{
	idc = 2908;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn infidel_fnc_explotar;";
	text = "Explotar Jugador"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};
class sacarDelVehiculo: RscButton
{
	idc = 2908;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn infidel_fnc_sacarDelVehiculo;";
	text = "Expulsar del Vehiculo"; //--- ToDo: Localize;
	x = 0.649531 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};
class voyAtuVeh: RscButton
{
	idc = 2908;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn infidel_fnc_voyatuVeh;";
	text = "Voy a tu Vehiculo"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};
class venAmiVeh: RscButton
{
	idc = 2908;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn infidel_fnc_moverEnMiVeh;";
	text = "Ven a mi Vehiculo"; //--- ToDo: Localize;
	x = 0.649531 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};
class gesDineroC: RscButton
{
	idc = 2908;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.533 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};
class gesDineroB: RscButton
{
	idc = 2908;
	x = 0.649531 * safezoneW + safezoneX;
	y = 0.533 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};
class reiniciarRobosEnCurso: RscButton
{
	idc = 2908;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.566 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};
class reiniciarRobos: RscButton
{
	idc = 2908;
	x = 0.649531 * safezoneW + safezoneX;
	y = 0.566 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};
class luna: RscButton
{
	idc = 2911;
	onButtonClick = "[] remoteexec ['infidel_fnc_luna', 0];";
	text = "Luna"; //--- ToDo: Localize;
	x = 0.309219 * safezoneW + safezoneX;
	y = 0.819 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class esposar: RscButton
{
	idc = 2911;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn infidel_fnc_esposarJugador;";
	text = "Esposar"; //--- ToDo: Localize;
	x = 0.37625 * safezoneW + safezoneX;
	y = 0.819 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class quitarEsposas: RscButton
{
	idc = 2911;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn infidel_fnc_desesposarJugador;";
	text = "Desesposar"; //--- ToDo: Localize;
	x = 0.443281 * safezoneW + safezoneX;
	y = 0.819 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class entrarServicio: RscButton
{
	idc = 5908;
	onButtonClick = "[] spawn infidel_fnc_entrarServicio;";
	text = "Entrar / Salir de Servicio"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};
class spawnearVehiculo: RscButton
{
	idc = 2908;
	onButtonClick = "[] spawn VVS_fnc_openVVS;";
	text = "Spawnear Vehiculo"; //--- ToDo: Localize;
	x = 0.649531 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};
class quitarNiebla: RscButton
{
	idc = 2911;
	onButtonClick = "[] remoteexec ['infidel_fnc_quitarNiebla', 0];";
	text = "Quitar Niebla"; //--- ToDo: Localize;
	x = 0.309219 * safezoneW + safezoneX;
	y = 0.852 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.022 * safezoneH;
};
class quitarLluvia: RscButton
{
	idc = 2911;
	onButtonClick = "[] remoteexec ['infidel_fnc_quitarLluvia', 0];";
	text = "Quitar Lluvia"; //--- ToDo: Localize;
	x = 0.309219 * safezoneW + safezoneX;
	y = 0.885 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.022 * safezoneH;
};
class copiarEquipa: RscButton
{
	idc = 2908;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn infidel_fnc_copiarEquipacion;";
	text = "Copiar Equipacion"; //--- ToDo: Localize;
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.599 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};
class ponerEquipa: RscButton
{
	idc = 2908;
	onButtonClick = "[call compile format ['%1', (lbData [2902, lbCurSel (2902)])]] spawn infidel_fnc_ponEquipacion;";
	text = "Poner Equipacion"; //--- ToDo: Localize;
	x = 0.649531 * safezoneW + safezoneX;
	y = 0.599 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.022 * safezoneH;
};
};
};
