/* FUN_1002e108 @ 0x1002e108 */

void FUN_1002e108(int param_1)

{
  int iVar1;
  
  iVar1 = *DAT_1002e130;
  *(undefined1 *)(param_1 + 1) = 0xff;
  if (*DAT_1002e130 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_1002dd8c();
  return;
}

