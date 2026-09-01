/* FUN_100a2324 @ 0x100a2324 */

void FUN_100a2324(void)

{
  int iVar1;
  
  iVar1 = *DAT_100a2334;
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) & 0xfd;
  }
  return;
}

