/* FUN_1011ff34 @ 0x1011ff34 */

int FUN_1011ff34(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  for (param_1 = param_1 >> (param_2 & 0xff); (param_1 != 0 && ((int)(param_1 << 0x1f) < 0));
      param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

