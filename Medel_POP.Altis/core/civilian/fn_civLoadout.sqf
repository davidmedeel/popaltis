
private ["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

_clothings = ["U_C_Poloshirt_burgundy","U_C_Poloshirt_stripped","U_C_Poloshirt_tricolour","U_C_Poloshirt_salmon","U_C_Poloshirt_redwhite","U_C_Commoner1_1"];
player addUniform (selectRandom _clothings);

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
