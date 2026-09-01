/* FUN_1003fe20 @ 0x1003fe20 */

void FUN_1003fe20(undefined4 param_1)

{
  undefined4 extraout_r2;
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  iVar2 = *DAT_1003fe4c;
  *DAT_1003fe50 = 0;
  uVar1 = 0;
  if (*DAT_1003fe4c != iVar2) {
    param_1 = FUN_1013cdc0();
    uVar1 = extraout_r2;
  }
  iVar2 = *DAT_1003fe14;
  FUN_1009eeac(DAT_1003fe18,*DAT_1003fe1c,uVar1,DAT_1003fe1c,param_1,iVar2,uVar1,unaff_lr);
  if (*DAT_1003fe14 != iVar2) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_1003fe18);
  return;
}

