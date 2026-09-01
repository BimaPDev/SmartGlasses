/* FUN_101277ee @ 0x101277ee */

uint FUN_101277ee(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 0x30 & 0xff;
  if (9 < uVar1) {
    if (0x60 < param_1) {
      param_1 = param_1 - 0x20 & 0xff;
    }
    if (param_1 - 0x41 < 6) {
      uVar1 = param_1 - 0x37 & 0xff;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

