/* FUN_2c003e88 @ 0x2c003e88 */

void FUN_2c003e88(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_2c003ea4 + param_1 * 4);
  if (param_2 != 0) {
    *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | 8;
    return;
  }
  *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) & 0xfffffff7;
  return;
}

