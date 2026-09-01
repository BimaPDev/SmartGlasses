/* FUN_1013b044 @ 0x1013b044 */

undefined4 FUN_1013b044(uint param_1)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  
  if (param_1 < 0x426) {
    if (0x418 < param_1) {
      return 0;
    }
    if (param_1 < 0x409) {
      if (param_1 < 0x400) {
        uVar1 = 7;
      }
      else {
        uVar1 = 0;
      }
      return uVar1;
    }
    bVar3 = param_1 != 0x40a;
    bVar2 = param_1 == 0x40b;
  }
  else {
    bVar3 = 4 < param_1 - 0x427;
    bVar2 = param_1 - 0x427 == 5;
  }
  if (!bVar3 || bVar2) {
    uVar1 = 0;
  }
  else {
    uVar1 = 7;
  }
  return uVar1;
}

