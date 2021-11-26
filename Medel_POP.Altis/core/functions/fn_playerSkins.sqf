
/*
por: Medel
*/

#include "..\..\script_macros.hpp"

private _skinName = "";

switch (playerSide) do {

  case civilian: {

   //Ropa Militar
  if (uniform player isEqualTo "U_BG_Guerrilla_6_1") then {
    player setObjectTextureGlobal [0, "textures\Ropa\Civil\militar.jpg"];
  };

  //Ropa Mafia
  if (uniform player isEqualTo "U_B_GEN_Commander_F") then {
    player setObjectTextureGlobal [0, "textures\Ropa\Civil\mafioso.jpg"];
  };
  if (backpack player isEqualTo "B_Carryall_cbr") then {
    (backpackContainer player) setObjectTextureGlobal [0, ""];
  };
 };

  case west: {

    /* UEI */
    if (uniform player isEqualTo "U_B_CombatUniform_mcam") then {
      player setObjectTextureGlobal [0, "textures\Ropa\Policia\UEI.jpg"];
    };

    /* Cadete */
    if ((uniform player isEqualTo "U_Rangemaster") && (FETCH_CONST(life_coplevel) >= 1)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\Policia\Cadete.jpg"];
    };

    /* Guardia Civil 1º */
    if ((uniform player isEqualTo "U_Rangemaster") && (FETCH_CONST(life_coplevel) >= 2)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\Policia\GuardiaCivilPrimera.jpg"];
    };

    /* Cabo */
    if ((uniform player isEqualTo "U_Rangemaster") && (FETCH_CONST(life_coplevel) >= 3)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\Policia\Cabo.jpg"];
    };

    /* Cabo Primero */
    if ((uniform player isEqualTo "U_Rangemaster") && (FETCH_CONST(life_coplevel) >= 4)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\Policia\CaboPrimero.jpg"];
    };

    /* Sargento */
    if ((uniform player isEqualTo "U_BG_Guerrilla_6_1") && (FETCH_CONST(life_coplevel) >= 5)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\Policia\Sargento.jpg"];
    };

    /* Sargento 1º */
    if ((uniform player isEqualTo "U_BG_Guerrilla_6_1") && (FETCH_CONST(life_coplevel) >= 6)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\Policia\SargentoPrimero.jpg"];
    };

    /* Brigada */
    if ((uniform player isEqualTo "U_BG_Guerrilla_6_1") && (FETCH_CONST(life_coplevel) >= 7)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\Policia\Brigada.jpg"];
    };

    /* Sub Oficial Mayor */
    if ((uniform player isEqualTo "U_BG_Guerrilla_6_1") && (FETCH_CONST(life_coplevel) >= 8)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\Policia\SubOficialMayor.jpg"];
    };

    /* Alferez */
    if ((uniform player isEqualTo "U_BG_Guerrilla_6_1") && (FETCH_CONST(life_coplevel) >= 9)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\Policia\Teniente.jpg"];
    };

    /* Teniente */
    if ((uniform player isEqualTo "U_BG_Guerrilla_6_1") && (FETCH_CONST(life_coplevel) >= 10)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\Policia\Teniente.jpg"];
    };

    /* Sub Comisario */
    if ((uniform player isEqualTo "U_BG_Guerrilla_6_1") && (FETCH_CONST(life_coplevel) >= 11)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\Policia\SubComisario.jpg"];
    };

    /* Comisario */
    if ((uniform player isEqualTo "U_B_CTRG_1") && (FETCH_CONST(life_coplevel) >= 12)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\Policia\Comisario.jpg"];
    };

    if (backpack player isEqualTo "B_Carryall_cbr") then {
      (backpackContainer player) setObjectTextureGlobal [0, ""];
      };
  };

  case independent: {

    /* GAR */
    if (uniform player isEqualTo "U_B_HeliPilotCoveralls") then {
      player setObjectTextureGlobal [0, "textures\Ropa\EMS\GarEMS.jpg"];
    };

    /* Voluntario */
    if ((uniform player isEqualTo "U_Rangemaster") && (FETCH_CONST(life_mediclevel) >= 1)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\EMS\VoluntarioEMS.jpg"];
    };

    /* Auxiliar */
    if ((uniform player isEqualTo "U_Rangemaster") && (FETCH_CONST(life_mediclevel) >= 2)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\EMS\AuxiliarEMS.jpg"];
    };

    /* Tecnico */
    if ((uniform player isEqualTo "U_Rangemaster") && (FETCH_CONST(life_mediclevel) >= 3)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\EMS\TecnicoEMS.jpg"];
    };

    /* Enfermero */
    if ((uniform player isEqualTo "U_Rangemaster") && (FETCH_CONST(life_mediclevel) >= 4)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\EMS\EnfermeroEMS.jpg"];
    };

   /* Médico */
    if ((uniform player isEqualTo "U_BG_Guerrilla_6_1") && (FETCH_CONST(life_mediclevel) >= 5)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\EMS\MedicoEMS.jpg"];
    };

    /* S.Médico */
    if ((uniform player isEqualTo "U_BG_Guerrilla_6_1") && (FETCH_CONST(life_mediclevel) >= 6)) then {
     player setObjectTextureGlobal [0, "textures\Ropa\EMS\SupervisorMedicoEMS.jpg"];
    };

    /* Doctor */
    if ((uniform player isEqualTo "U_BG_Guerrilla_6_1") && (FETCH_CONST(life_mediclevel) >= 7)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\EMS\DoctorEMS.jpg"];
    };

    /* Coordinador */
    if ((uniform player isEqualTo "U_BG_Guerrilla_6_1") && (FETCH_CONST(life_mediclevel) >= 8)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\EMS\CoordinadorEMS.jpg"];
    };

    /* Jefe Médico */
    if ((uniform player isEqualTo "U_BG_Guerrilla_6_1") && (FETCH_CONST(life_mediclevel) >= 9)) then {
      player setObjectTextureGlobal [0, "textures\Ropa\EMS\JefeMedicoEMS.jpg"];
    };

    if (backpack player isEqualTo "B_Carryall_cbr") then {
      (backpackContainer player) setObjectTextureGlobal [0, ""];
      };
  };
};
