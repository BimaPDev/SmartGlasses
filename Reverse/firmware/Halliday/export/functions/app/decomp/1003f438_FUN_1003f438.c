/* FUN_1003f438 @ 0x1003f438 */

void FUN_1003f438(undefined4 param_1)

{
  undefined4 extraout_r2;
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  iVar2 = *DAT_1003f464;
  *DAT_1003f468 = 0;
  uVar1 = 0;
  if (*DAT_1003f464 != iVar2) {
    param_1 = FUN_1013cdc0();
    uVar1 = extraout_r2;
  }
  iVar2 = *DAT_1003f42c;
  FUN_1009eeac(DAT_1003f430,*DAT_1003f434,uVar1,DAT_1003f434,param_1,iVar2,uVar1,unaff_lr);
  if (*DAT_1003f42c != iVar2) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_1003f430);
  return;
}

