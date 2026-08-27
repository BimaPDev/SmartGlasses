/* FUN_2c003ef4 @ 0x2c003ef4 */

void FUN_2c003ef4(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_2c003f14 + param_1 * 4);
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xffffff00 | (uint)param_2;
  *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) & 0xffffff | (uint)param_2 << 0x18;
  return;
}

