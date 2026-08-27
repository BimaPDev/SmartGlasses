/* FUN_2c003d24 @ 0x2c003d24 */

void FUN_2c003d24(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_2c003d3c + param_1 * 4);
  do {
  } while (*(int *)(iVar1 + 0xc) << 0x1f < 0);
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffe;
  return;
}

