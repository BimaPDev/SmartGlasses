/* FUN_1001946c @ 0x1001946c */

void FUN_1001946c(void)

{
  int iVar1;
  
  iVar1 = *DAT_10019498;
  FUN_10019344();
  *(undefined4 *)(DAT_1001949c + 0xc) = 0;
  if (*DAT_10019498 != iVar1) {
    FUN_1013cdc0();
  }
  return;
}

