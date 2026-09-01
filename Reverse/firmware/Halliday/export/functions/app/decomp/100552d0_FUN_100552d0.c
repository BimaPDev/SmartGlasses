/* FUN_100552d0 @ 0x100552d0 */

void FUN_100552d0(void)

{
  int iVar1;
  
  iVar1 = FUN_1011a5a2(*DAT_100552e4);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0x40;
  }
  return;
}

