/* FUN_1402db00 @ 0x1402db00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1402db00(uint param_1)

{
  uint uVar1;
  
  if (0x3b < param_1) {
    return false;
  }
  if (param_1 < 0x14) {
    uVar1 = 1 << (param_1 & 0xff) & _DAT_40000000;
  }
  else {
    if (param_1 < 0x1e) {
      return (1 << (param_1 - 0x14 & 0xff) & _DAT_40000008) != 0;
    }
    if (param_1 < 0x29) {
      uVar1 = 1 << (param_1 - 0x1e & 0xff) & _DAT_40000010;
    }
    else {
      uVar1 = 1 << (param_1 - 0x29 & 0xff) & *(uint *)(DAT_1402db64 + 0x40);
    }
  }
  return uVar1 != 0;
}

