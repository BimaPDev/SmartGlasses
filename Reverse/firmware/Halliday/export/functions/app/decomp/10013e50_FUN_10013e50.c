/* FUN_10013e50 @ 0x10013e50 */

void FUN_10013e50(int param_1)

{
  int iVar1;
  
  iVar1 = *DAT_10013e98;
  FUN_101164a0(param_1 + 0x264,DAT_10013e9c,0,0,param_1);
  FUN_101164a0(param_1 + 0x248,DAT_10013ea0,0);
  if (*DAT_10013e98 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_101164a0(param_1 + 0x29c,DAT_10013ea4,param_1);
  return;
}

