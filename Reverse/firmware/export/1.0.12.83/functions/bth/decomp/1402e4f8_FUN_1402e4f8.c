/* FUN_1402e4f8 @ 0x1402e4f8 */

void FUN_1402e4f8(void)

{
  int iVar1;
  
  iVar1 = DAT_1402e514;
  *(uint *)(DAT_1402e514 + 0x4c) = *(uint *)(DAT_1402e514 + 0x4c) & 0xfffffffd;
  *(undefined4 *)(iVar1 + 0x40) = 0x10000;
  *(undefined4 *)(iVar1 + 4) = 0x100;
  return;
}

