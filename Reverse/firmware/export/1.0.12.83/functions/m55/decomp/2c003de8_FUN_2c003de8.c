/* FUN_2c003de8 @ 0x2c003de8 */

void FUN_2c003de8(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_2c003e08 + param_1 * 4);
  do {
  } while (*(int *)(iVar1 + 0xc) << 0x1f < 0);
  *(uint *)(iVar1 + 0x14) = (param_2 & 0xff) << 0x10 | *(uint *)(iVar1 + 0x14) & 0xff00ffff;
  return;
}

