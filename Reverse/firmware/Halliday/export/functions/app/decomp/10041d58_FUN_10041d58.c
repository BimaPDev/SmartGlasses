/* FUN_10041d58 @ 0x10041d58 */

void FUN_10041d58(undefined4 param_1)

{
  undefined4 extraout_r2;
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  iVar2 = *DAT_10041d84;
  *DAT_10041d88 = 0;
  uVar1 = 0;
  if (*DAT_10041d84 != iVar2) {
    param_1 = FUN_1013cdc0();
    uVar1 = extraout_r2;
  }
  iVar2 = *DAT_10041d4c;
  FUN_1009eeac(DAT_10041d50,*DAT_10041d54,uVar1,DAT_10041d54,param_1,iVar2,uVar1,unaff_lr);
  if (*DAT_10041d4c != iVar2) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_10041d50);
  return;
}

