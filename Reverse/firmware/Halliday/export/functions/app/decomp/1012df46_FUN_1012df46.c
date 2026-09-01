/* FUN_1012df46 @ 0x1012df46 */

undefined4 FUN_1012df46(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1011dbc4();
  if (iVar1 == 0) {
    if ((param_1 & 0xfffffffb) == 0xb) {
      uVar2 = 0x1e;
    }
    else if (param_1 == 0x11) {
      uVar2 = 0x10;
    }
    else {
      uVar2 = 100;
    }
  }
  else if ((param_1 & 0xfffffffb) == 0xb) {
    uVar2 = 5;
  }
  else {
    uVar2 = 0xf;
  }
  return uVar2;
}

