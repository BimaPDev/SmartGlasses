/* FUN_100430c0 @ 0x100430c0 */

void FUN_100430c0(uint param_1)

{
  undefined4 extraout_r2;
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  iVar2 = *DAT_10043100;
  if (*DAT_10043104 == param_1) {
    if (*DAT_10043100 == iVar2) {
      return;
    }
  }
  else {
    *DAT_10043104 = (byte)param_1;
    uVar1 = 0;
    if (*DAT_10043100 == iVar2) goto LAB_10043084;
  }
  param_1 = FUN_1013cdc0();
  uVar1 = extraout_r2;
LAB_10043084:
  iVar2 = *DAT_100430b4;
  FUN_1009eeac(DAT_100430b8,*DAT_100430bc,uVar1,DAT_100430bc,param_1,iVar2,uVar1,unaff_lr);
  if (*DAT_100430b4 != iVar2) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_100430b8);
  return;
}

