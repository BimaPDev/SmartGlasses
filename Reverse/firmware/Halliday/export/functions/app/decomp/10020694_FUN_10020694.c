/* FUN_10020694 @ 0x10020694 */

void FUN_10020694(uint param_1,undefined1 param_2)

{
  undefined4 extraout_r2;
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  iVar2 = *DAT_100206d0;
  if (param_1 < 0x1a) {
    *(undefined1 *)(DAT_100206d4 + param_1) = param_2;
    uVar1 = 0;
    if (*DAT_100206d0 == iVar2) goto LAB_10020658;
  }
  else if (*DAT_100206d0 == iVar2) {
    return;
  }
  param_1 = FUN_1013cdc0();
  uVar1 = extraout_r2;
LAB_10020658:
  iVar2 = *DAT_10020688;
  thunk_FUN_1009efe8(DAT_10020690,DAT_1002068c,0x1a,0,param_1,iVar2,uVar1,unaff_lr);
  if (*DAT_10020688 != iVar2) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_10020690);
  return;
}

