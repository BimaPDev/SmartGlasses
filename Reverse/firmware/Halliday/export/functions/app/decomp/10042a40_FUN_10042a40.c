/* FUN_10042a40 @ 0x10042a40 */

void FUN_10042a40(void)

{
  int iVar1;
  
  iVar1 = *DAT_10042a6c;
  *DAT_10042a70 = 0x14;
  if (*DAT_10042a6c != iVar1) {
    FUN_1013cdc0();
  }
  FUN_10042a08();
  return;
}

