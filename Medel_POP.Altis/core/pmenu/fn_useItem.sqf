
#include "..\..\script_macros.hpp"

private "_item";

disableSerialization;

if ((lbCurSel 2005) isEqualTo -1) exitWith {hint localize "STR_ISTR_SelectItemFirst";};

_item = CONTROL_DATA(2005);

switch (true) do
{
    case (_item in ["waterBottle","coffee","redgull"]): {
        if ([false,_item,1] call life_fnc_handleInv) then
        {
            life_thirst = 100;
            if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1) then {player setFatigue 0;};
            if (_item isEqualTo "redgull" && {LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1}) then
            {
                [] spawn {
                    life_redgull_effect = time;
                    titleText[localize "STR_ISTR_RedGullEffect","PLAIN"];
                    player enableFatigue false;
                    waitUntil {!alive player || ((time - life_redgull_effect) > (10 * 60))};
                    player enableFatigue true;
                };
            };
        };
    };

    case (_item isEqualTo "boltcutter"):
    {
        [cursorObject] spawn life_fnc_boltcutter;
        closeDialog 0;
    };

    case (_item isEqualTo "blastingcharge"):
    {
        player reveal fed_bank;
        (group player) reveal fed_bank;
        [cursorObject] spawn life_fnc_blastingCharge;
        closeDialog 0;
    };

    case (_item isEqualTo "defusekit"):
    {
        [cursorObject] spawn life_fnc_defuseKit;
        closeDialog 0;
    };

    case (_item isEqualTo "storagesmall"):
    {
        [false] call life_fnc_storageBox;
    };

    case (_item isEqualTo "storagebig"):
    {
        [true] call life_fnc_storageBox;
    };

    case (_item isEqualTo "spikeStrip"):
    {
        if (!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"; closeDialog 0};
        if ([false,_item,1] call life_fnc_handleInv) then
        {
            [] spawn life_fnc_spikeStrip;
            closeDialog 0;
        };
    };

    case (_item isEqualTo "fuelFull"):
    {
        if !(isNull objectParent player) exitWith {hint localize "STR_ISTR_RefuelInVehicle"};
        [] spawn life_fnc_jerryRefuel;
        closeDialog 0;
    };

    case (_item isEqualTo "fuelEmpty"):
    {
        [] spawn life_fnc_jerryCanRefuel;
        closeDialog 0;
    };

    case (_item isEqualTo "lockpick"):
    {
        [] spawn life_fnc_lockpick;
        closeDialog 0;
    };

    case (_item isEqualTo "vendas"):
    {
        [] spawn medel_fnc_vendas;
        closeDialog 0;
    };

    case (_item isEqualTo "tramadol"):
    {
        [] spawn medel_fnc_tramadol;
        closeDialog 0;
    };

    case (_item isEqualTo "pildora"):
    {
        [] spawn medel_fnc_pildora;
        closeDialog 0;
    };

    case (_item isEqualTo "vendasCompresivas"): {
        if (isPlayer cursorObject && cursorObject isKindOf "Man") then {
            [cursorObject] spawn medel_fnc_vendasCompresivas;
            closeDialog 0;
        } else {
           hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>Sistema Médico</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>No estás apuntando a nadie.</t>";
           closeDialog 0;
        };
    };

    case (_item isEqualTo "sangre"): {
      if !(playerSide isEqualTo independent) exitWith { hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>Sistema Médico</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Si no sabes no toques.</t>"; };
        if (isPlayer cursorObject && cursorObject isKindOf "Man") then {
            [cursorObject] spawn medel_fnc_sangre;
            closeDialog 0;
        } else {
           hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>Sistema Médico</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>No estás apuntando a nadie.</t>";
           closeDialog 0;
        };
    };

    case (_item isEqualTo "morfina"): {
        if (isPlayer cursorObject && cursorObject isKindOf "Man") then {
            [cursorObject] spawn medel_fnc_morfina;
            closeDialog 0;
        } else {
           hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>Sistema Médico</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>No estás apuntando a nadie.</t>";
           closeDialog 0;
        };
    };

    case (_item in ["apple","rabbit","salema","ornate","mackerel","tuna","mullet","catshark","turtle_soup","hen","rooster","sheep","goat","donuts","tbacon","peach"]): {
        if (!(M_CONFIG(getNumber,"VirtualItems",_item,"edible") isEqualTo -1)) then
        {
            if ([false,_item,1] call life_fnc_handleInv) then
            {
                _val = M_CONFIG(getNumber,"VirtualItems",_item,"edible");
                _sum = life_hunger + _val;
                switch (true) do {
                    case (_val < 0 && _sum < 1): {life_hunger = 5;};
                    case (_sum > 100): {life_hunger = 100;};
                    default {life_hunger = _sum;};
                };
            };
        };
    };

    default {
        hint "Este Objeto no es utilizable";
    };
};

[] call life_fnc_p_updateMenu;
[] call medel_fnc_actualizaHUD;
