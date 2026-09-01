/* FUN_10016460 @ 0x10016460 */

void FUN_10016460(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_100164a4;
  FUN_100a4fc4(param_1 + 0x38,param_2,param_3,0,param_1,iVar1,param_3);
  if (*DAT_100164a4 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_100a5b78((DAT_100164ac - DAT_100164a8) * 0x20 & 0xff00U | 0x4b0031,DAT_100164b4,DAT_100164b0);
  return;
}

