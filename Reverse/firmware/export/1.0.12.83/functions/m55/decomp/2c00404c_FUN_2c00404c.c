/* FUN_2c00404c @ 0x2c00404c */

void FUN_2c00404c(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_2c004068 + param_1 * 4);
  *(uint *)(iVar1 + 0xb0) = *(uint *)(iVar1 + 0xb0) & ~(2 << (param_2 & 0xff));
  return;
}

