/* FUN_1011feca @ 0x1011feca */

int FUN_1011feca(int param_1)

{
  int iVar1;
  
  if (0 < param_1) {
    iVar1 = (param_1 + 1) * 0x100;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xfff;
    }
    return iVar1 >> 0xc;
  }
  return 0;
}

