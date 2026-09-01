/* FUN_10041c48 @ 0x10041c48 */

void FUN_10041c48(undefined4 param_1)

{
  undefined4 extraout_r2;
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  iVar2 = *DAT_10041c74;
  *DAT_10041c78 = 0;
  uVar1 = 0;
  if (*DAT_10041c74 != iVar2) {
    param_1 = FUN_1013cdc0();
    uVar1 = extraout_r2;
  }
  iVar2 = *DAT_10041c3c;
  FUN_1009eeac(DAT_10041c40,*DAT_10041c44,uVar1,DAT_10041c44,param_1,iVar2,uVar1,unaff_lr);
  if (*DAT_10041c3c != iVar2) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_10041c40);
  return;
}

