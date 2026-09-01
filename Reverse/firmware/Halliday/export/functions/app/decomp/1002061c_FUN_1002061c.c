/* FUN_1002061c @ 0x1002061c */

void FUN_1002061c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_1002064c;
  thunk_FUN_1009efe8(DAT_10020654,DAT_10020650,0x1a,0,param_1,iVar1,param_3);
  if (*DAT_1002064c != iVar1) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_10020654);
  return;
}

