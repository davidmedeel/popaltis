
#include "..\..\script_macros.hpp"

disableSerialization;
private ["_price","_item","_itemInfo","_bad"];
if ((lbCurSel 38403) isEqualTo -1) exitWith { hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>Tienda General<br/></t> <br/><t color='#e7ad3e' size='2'></t> <t color='#FFFFFF' size='1.5'>Necesitas seleccionar un objeto para vender o comprar."; };
_price = lbValue[38403,(lbCurSel 38403)]; if (isNil "_price") then {_price = 0;};
_item = lbData[38403,(lbCurSel 38403)];
_itemInfo = [_item] call life_fnc_fetchCfgDetails;

_bad = "";

if ((_itemInfo select 6) != "CfgVehicles") then {
    if ((_itemInfo select 4) in [4096,131072]) then {
        if (!(player canAdd _item) && (uiNamespace getVariable ["Weapon_Shop_Filter",0]) != 1) exitWith {_bad = (localize "STR_NOTF_NoRoom")};
    };
};

if (_bad != "") exitWith {hint _bad};

if ((uiNamespace getVariable ["Weapon_Shop_Filter",0]) isEqualTo 1) then {
    CASH = CASH + _price;
    [_item,false] call life_fnc_handleItem;
    hint parsetext format ["<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>Tienda General<br/></t> <br/><t color='#e7ad3e' size='2'></t> <t color='#FFFFFF' size='1.5'>Has vendido un %1 por %2€.", _itemInfo select 1,[_price] call life_fnc_numberText];
    [nil,(uiNamespace getVariable ["Weapon_Shop_Filter",0])] call life_fnc_weaponShopFilter; 
} else {
    private _altisArray = ["Land_u_Barracks_V2_F","Land_i_Barracks_V2_F"];
    private _tanoaArray = ["Land_School_01_F","Land_Warehouse_03_F","Land_House_Small_02_F"];
    private _hideoutObjs = [[["Altis", _altisArray], ["Tanoa", _tanoaArray]]] call TON_fnc_terrainSort;
    private _hideout = (nearestObjects[getPosATL player,_hideoutObjs,25]) select 0;
    if (!isNil "_hideout" && {!isNil {group player getVariable "gang_bank"}} && {(group player getVariable "gang_bank") >= _price}) then {
        _action = [
            format [(localize "STR_Shop_Virt_Gang_FundsMSG")+ "<br/><br/>" +(localize "STR_Shop_Virt_Gang_Funds")+ " <t color='#8cff9b'>%1€</t><br/>" +(localize "STR_Shop_Virt_YourFunds")+ " <t color='#8cff9b'>%2€</t>",
                [(group player getVariable "gang_bank")] call life_fnc_numberText,
                [CASH] call life_fnc_numberText
            ],
            localize "STR_Shop_Virt_YourorGang",
            localize "STR_Shop_Virt_UI_GangFunds",
            localize "STR_Shop_Virt_UI_YourCash"
        ] call BIS_fnc_guiMessage;
        if (_action) then {
            hint parsetext format ["<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>Tienda General<br/></t> <br/><t color='#e7ad3e' size='2'></t> <t color='#FFFFFF' size='1.5'>Has comprado un %1 por %2€ con el dinero de tu banda.", _itemInfo select 1,[_price] call life_fnc_numberText];
            _funds = group player getVariable "gang_bank";
            _funds = _funds - _price;
            group player setVariable ["gang_bank",_funds,true];
            [_item,true] call life_fnc_handleItem;

            if (life_HC_isActive) then {
                [1,group player] remoteexeccall ["HC_fnc_updateGang",HC_Life];
            } else {
                [1,group player] remoteexeccall ["TON_fnc_updateGang",RSERV];
            };


        } else {
            if (_price > CASH) exitWith {hint localize "STR_NOTF_NotEnoughMoney"};
            hint parsetext format ["<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>Tienda General</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Te has gastado %2€ en %1</t>",_itemInfo select 1,[_price] call life_fnc_numberText];
            CASH = CASH - _price;
            [_item,true] call life_fnc_handleItem;
        };
    } else {
        if (_price > CASH) exitWith {hint localize "STR_NOTF_NotEnoughMoney"};
        hint parsetext format ["<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>Tienda General</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Te has gastado %2€ en %1</t>",_itemInfo select 1,[_price] call life_fnc_numberText];
        CASH = CASH - _price;
        [_item,true] call life_fnc_handleItem;
    };
};
[0] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;
