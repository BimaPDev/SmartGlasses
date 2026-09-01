/* FUN_1004b86c @ 0x1004b86c */

void FUN_1004b86c(undefined4 param_1)

{
  undefined4 extraout_r2;
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  iVar2 = *DAT_1004b898;
  *DAT_1004b89c = 0;
  uVar1 = 0;
  if (*DAT_1004b898 != iVar2) {
    param_1 = FUN_1013cdc0();
    uVar1 = extraout_r2;
  }
  iVar2 = *DAT_1004b860;
  FUN_1009eeac(DAT_1004b864,*DAT_1004b868,uVar1,DAT_1004b868,param_1,iVar2,uVar1,unaff_lr);
  if (*DAT_1004b860 != iVar2) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_1004b864);
  return;
}

