/* FUN_10041ce8 @ 0x10041ce8 */

void FUN_10041ce8(void)

{
  int iVar1;
  
  iVar1 = *DAT_10041d14;
  *DAT_10041d18 = 0x28;
  if (*DAT_10041d14 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_10041cac();
  return;
}

