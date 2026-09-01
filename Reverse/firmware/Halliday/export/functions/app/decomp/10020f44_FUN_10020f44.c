/* FUN_10020f44 @ 0x10020f44 */

void FUN_10020f44(void)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  iVar3 = *DAT_10020f6c;
  uVar1 = FUN_10020ebc();
  uVar2 = 0;
  if (*DAT_10020f6c != iVar3) {
    uVar1 = FUN_1013cdc0();
    uVar2 = extraout_r2;
  }
  iVar3 = *DAT_10020688;
  thunk_FUN_1009efe8(DAT_10020690,DAT_1002068c,0x1a,0,uVar1,iVar3,uVar2,unaff_lr);
  if (*DAT_10020688 != iVar3) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_10020690);
  return;
}

