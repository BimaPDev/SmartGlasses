/* FUN_10000be4 @ 0x10000be4 */

void FUN_10000be4(void)

{
  int iVar1;
  
  iVar1 = DAT_10000bfc;
  *(undefined4 *)(DAT_10000bfc + 0x100) = *DAT_10000bf8;
  *(undefined4 *)(iVar1 + 0x104) = *DAT_10000c00;
  return;
}

