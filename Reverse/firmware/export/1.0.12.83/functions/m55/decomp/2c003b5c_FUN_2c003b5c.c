/* FUN_2c003b5c @ 0x2c003b5c */

void FUN_2c003b5c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_2c003b74 + param_1 * 4);
  do {
  } while ((*(uint *)(iVar1 + 0xc) & 1) != 0);
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x2000000;
  return;
}

