/* FUN_100552b8 @ 0x100552b8 */

void FUN_100552b8(void)

{
  int iVar1;
  
  iVar1 = FUN_1011a5a2(*DAT_100552cc);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0x20;
  }
  return;
}

