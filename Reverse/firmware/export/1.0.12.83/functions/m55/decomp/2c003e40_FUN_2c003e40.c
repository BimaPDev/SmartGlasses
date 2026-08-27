/* FUN_2c003e40 @ 0x2c003e40 */

void FUN_2c003e40(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_2c003e60 + param_1 * 4);
  do {
  } while (*(int *)(iVar1 + 0xc) << 0x1f < 0);
  if (param_2 != 0) {
    *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | 0x20;
    return;
  }
  *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) & 0xffffffdf;
  return;
}

