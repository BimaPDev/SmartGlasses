/* FUN_1004229c @ 0x1004229c */

void FUN_1004229c(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  iVar1 = DAT_10042308;
  iVar4 = DAT_10042304;
  iVar5 = *DAT_100422fc;
  if (*DAT_10042300 == param_1) {
    if (*DAT_100422fc == iVar5) {
      return;
    }
  }
  else {
    *DAT_10042300 = param_1 != 0;
    uVar2 = FUN_100a5b78((iVar1 - iVar4) * 0x20 & 0xff00U | 0x2680031,DAT_10042310,DAT_1004230c,
                         param_1 != 0,param_1);
    uVar3 = 0;
    if (*DAT_100422fc == iVar5) goto LAB_10041d1c;
  }
  uVar2 = FUN_1013cdc0();
  uVar3 = extraout_r2;
LAB_10041d1c:
  iVar4 = *DAT_10041d4c;
  FUN_1009eeac(DAT_10041d50,*DAT_10041d54,uVar3,DAT_10041d54,uVar2,iVar4,uVar3,unaff_lr);
  if (*DAT_10041d4c != iVar4) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_10041d50);
  return;
}

