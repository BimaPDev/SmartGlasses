/* FUN_1003f46c @ 0x1003f46c */

void FUN_1003f46c(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  pbVar2 = DAT_1003f4d8;
  iVar5 = *(int *)PTR_DAT_1003f4d4;
  uVar3 = FUN_100a5b78(((int)PTR_DAT_1003f4cc - (int)PTR_DAT_1003f4d0) * 0x20 & 0xff00U | 0x23c0032,
                       DAT_1003f4e0,DAT_1003f4dc,param_1,*DAT_1003f4d8,param_2,param_3);
  puVar1 = PTR_DAT_1003f4d4;
  if (*pbVar2 == param_1) {
    if (*(int *)PTR_DAT_1003f4d4 == iVar5) {
      return;
    }
  }
  else {
    *pbVar2 = (byte)param_1;
    uVar4 = 0;
    if (*(int *)puVar1 == iVar5) goto LAB_1003f3fc;
  }
  uVar3 = FUN_1013cdc0();
  uVar4 = extraout_r2;
LAB_1003f3fc:
  iVar5 = *DAT_1003f42c;
  FUN_1009eeac(DAT_1003f430,*DAT_1003f434,uVar4,DAT_1003f434,uVar3,iVar5,uVar4,unaff_lr);
  if (*DAT_1003f42c != iVar5) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_1003f430);
  return;
}

