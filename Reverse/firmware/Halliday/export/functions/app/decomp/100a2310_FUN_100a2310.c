/* FUN_100a2310 @ 0x100a2310 */

void FUN_100a2310(void)

{
  int iVar1;
  
  iVar1 = *DAT_100a2320;
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) | 2;
  }
  return;
}

