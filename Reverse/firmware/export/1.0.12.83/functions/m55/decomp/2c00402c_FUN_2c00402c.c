/* FUN_2c00402c @ 0x2c00402c */

void FUN_2c00402c(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_2c004048 + param_1 * 4);
  *(uint *)(iVar1 + 0xb0) = 2 << (param_2 & 0xff) | *(uint *)(iVar1 + 0xb0) | 1;
  return;
}

