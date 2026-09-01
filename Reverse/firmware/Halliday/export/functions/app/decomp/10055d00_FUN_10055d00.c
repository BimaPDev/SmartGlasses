/* FUN_10055d00 @ 0x10055d00 */

uint FUN_10055d00(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r2;
  
  uVar2 = (*DAT_10055d14 & 0xff) >> 4;
  uVar3 = *DAT_10055d14 & 7;
  uVar1 = DAT_10055cec;
  if ((((uVar3 != 0) && (uVar1 = DAT_10055cf0, uVar3 != 1)) && (uVar1 = DAT_10055cf4, uVar3 != 3))
     && ((uVar1 = DAT_10055cf8, uVar3 != 4 && (uVar1 = DAT_10055cfc, uVar3 != 5)))) {
    if (uVar3 == 6) {
      uVar1 = 32000;
    }
    else if (uVar3 == 2) {
      uVar1 = FUN_10055c70();
      uVar2 = extraout_r2;
    }
    else {
      uVar1 = 0;
    }
  }
  if (uVar2 == 0xe) {
    uVar2 = 0xf;
  }
  else {
    if (uVar2 != 0xf) {
      return uVar1 / (uVar2 + 1);
    }
    uVar2 = 0x19;
  }
  return (uVar1 * 10) / uVar2;
}

