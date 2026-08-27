/* FUN_2c0040c4 @ 0x2c0040c4 */

void FUN_2c0040c4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_2c0040e4 + param_1 * 4);
  if ((*(uint *)(iVar1 + 0x34) & 0x100) == 0) {
    *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 0x100;
    do {
    } while (*(int *)(iVar1 + 0xc) << 0x1f < 0);
  }
  return;
}

