
if(player getVariable ["amordazado",false]) then {
  hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>MORDAZA</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Te han quitado una mordaza.</t>";
  3 enableChannel true;
  4 enableChannel true;
  5 enableChannel true;
  player setvariable ["amordazado",false,true];
 } else {
  hint parsetext "<br/><t color='#e7ad3e' size='2' shadow='1'shadowColor='#7e521c'>MORDAZA</t> <br/><t color='#e7ad3e' size='2'></t> <br/><t color='#FFFFFF' size='1.5'>Te han puesto una mordaza.</t>";
  3 enableChannel false;
  4 enableChannel false;
  5 enableChannel false;
  player setvariable ["amordazado",true,true];
};
