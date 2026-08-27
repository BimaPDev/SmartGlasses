/* FUN_2c00408c @ 0x2c00408c */

void FUN_2c00408c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_2c0040ac + param_1 * 4);
  do {
  } while (*(int *)(iVar1 + 0xc) << 0x1f < 0);
  if (param_2 != 0) {
    *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) | 0xc;
    return;
  }
  *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) & 0xfffffff3;
  return;
}

