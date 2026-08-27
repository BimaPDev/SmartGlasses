/* FUN_2c0078a4 @ 0x2c0078a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_2c0078a4(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0x14) {
    uVar1 = 1 << (param_1 & 0xff) & _DAT_50000034;
  }
  else {
    if (param_1 < 0x30) {
      return (1 << (param_1 - 0x14 & 0xff) & _DAT_5000003c) != 0;
    }
    if (param_1 < 0x50) {
      return (1 << (param_1 - 0x30 & 0xff) & _DAT_50000044) != 0;
    }
    if (param_1 < 0x61) {
      uVar1 = 1 << (param_1 - 0x50 & 0xff) & _DAT_50000170;
    }
    else if (param_1 < 0x73) {
      uVar1 = 1 << (param_1 - 0x61 & 0xff) & _DAT_50000188;
    }
    else if (param_1 < 0x86) {
      uVar1 = 1 << (param_1 - 0x73 & 0xff) & *(uint *)(DAT_2c007968 + 0x10);
    }
    else if (param_1 < 0x91) {
      uVar1 = 1 << (param_1 - 0x86 & 0xff) & *(uint *)(DAT_2c007968 + 200);
    }
    else if (param_1 == 0x91) {
      uVar1 = _DAT_40000034 & 8;
    }
    else {
      uVar1 = _DAT_40000044 & 2;
    }
  }
  return uVar1 != 0;
}

