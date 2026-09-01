/* FUN_1003f59c @ 0x1003f59c */

void FUN_1003f59c(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  uVar1 = DAT_1003f5f0;
  iVar4 = DAT_1003f5e8;
  iVar5 = *DAT_1003f5e4;
  *DAT_1003f5ec = 1;
  uVar6 = (DAT_1003f5f4 - iVar4) * 0x20 & 0xff00;
  FUN_100a5b78(uVar1 | uVar6,DAT_1003f5f8,DAT_1003f5fc,uVar6,param_1);
  uVar2 = FUN_10067ae0(1);
  uVar3 = 0;
  if (*DAT_1003f5e4 != iVar5) {
    uVar2 = FUN_1013cdc0();
    uVar3 = extraout_r2;
  }
  iVar4 = *DAT_1003f37c;
  FUN_1009eeac(DAT_1003f380,*DAT_1003f384,uVar3,DAT_1003f384,uVar2,iVar4,uVar3,unaff_lr);
  if (*DAT_1003f37c != iVar4) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_1003f380);
  return;
}

