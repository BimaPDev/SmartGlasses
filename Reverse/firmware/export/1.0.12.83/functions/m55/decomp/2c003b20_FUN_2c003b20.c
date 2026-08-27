/* FUN_2c003b20 @ 0x2c003b20 */

void FUN_2c003b20(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_2c003b3c + param_1 * 4);
  do {
  } while ((*(uint *)(iVar1 + 0xc) & 1) != 0);
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffff00f | param_2 << 4;
  return;
}

