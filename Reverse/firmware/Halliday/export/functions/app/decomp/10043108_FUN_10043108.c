/* FUN_10043108 @ 0x10043108 */

void FUN_10043108(undefined4 param_1)

{
  undefined4 extraout_r2;
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  iVar2 = *DAT_10043134;
  *DAT_10043138 = 0;
  uVar1 = 0;
  if (*DAT_10043134 != iVar2) {
    param_1 = FUN_1013cdc0();
    uVar1 = extraout_r2;
  }
  iVar2 = *DAT_100430b4;
  FUN_1009eeac(DAT_100430b8,*DAT_100430bc,uVar1,DAT_100430bc,param_1,iVar2,uVar1,unaff_lr);
  if (*DAT_100430b4 != iVar2) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_100430b8);
  return;
}

