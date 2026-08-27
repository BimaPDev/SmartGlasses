/* FUN_2c6514c8 @ 0x2c6514c8 */

void FUN_2c6514c8(uint param_1,uint param_2)

{
  int iVar1;
  
  if (0xffffffe < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(DAT_2c65151c);
  }
  if ((param_2 < param_1) && (param_1 < param_2 << 1)) {
    param_1 = param_2 << 1;
  }
  iVar1 = (param_1 + 4) * 4;
  if ((0x1000 < iVar1 + 0x10U) && (param_2 < param_1)) {
    param_1 = param_1 + (0x1000 - (iVar1 + 0x10U & 0xfff) >> 2);
    if (DAT_2c651520 <= param_1) {
      param_1 = DAT_2c651520;
    }
    iVar1 = (param_1 + 4) * 4;
  }
  iVar1 = FUN_2c64ca5c(iVar1);
  *(uint *)(iVar1 + 4) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}

