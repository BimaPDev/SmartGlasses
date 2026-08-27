/* FUN_2c60fce8 @ 0x2c60fce8 */

void FUN_2c60fce8(undefined4 *param_1,int param_2,uint param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_2c601b5c();
  if ((param_3 & 1) == 0) {
    *(byte *)(param_2 + 0x2b) = *(byte *)(param_2 + 0x2b) & 0x7f;
    *(byte *)(*piVar1 + 0x10) = *(byte *)(*piVar1 + 0x10) & 0xbf;
  }
  else {
    FUN_2c62c3b0(*(undefined4 *)(param_2 + 0x14),*(uint *)(param_2 + 0x28) & 0x7fffffff);
    *(byte *)(param_2 + 0x2b) = *(byte *)(param_2 + 0x2b) | 0x80;
    *(byte *)(*piVar1 + 0x10) = *(byte *)(*piVar1 + 0x10) | 0x40;
  }
  *param_1 = *(undefined4 *)(param_2 + 0x14);
  param_1[1] = param_2 + 8;
  param_1[2] = param_2 + 8;
  return;
}

