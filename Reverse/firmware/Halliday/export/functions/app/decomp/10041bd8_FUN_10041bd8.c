/* FUN_10041bd8 @ 0x10041bd8 */

void FUN_10041bd8(void)

{
  int iVar1;
  
  iVar1 = *DAT_10041c04;
  *DAT_10041c08 = 0x28;
  if (*DAT_10041c04 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_10041b10();
  return;
}

