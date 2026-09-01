/* FUN_1004cb0c @ 0x1004cb0c */

void FUN_1004cb0c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r2;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint unaff_r4;
  undefined4 unaff_r5;
  uint uVar8;
  
  iVar5 = *DAT_1004cb78;
  iVar2 = FUN_10124372();
  iVar3 = FUN_1012437a(param_1);
  if ((iVar3 == 7) || ((iVar3 == 0xd && (iVar3 = FUN_100871bc(param_1), iVar3 == 10)))) {
    FUN_10094174(4,DAT_1004cb80,0x33,DAT_1004cb84,DAT_1004cb7c,*(undefined4 *)(iVar2 + 0x10));
    uVar1 = 0;
    uVar7 = extraout_r1;
    if (*DAT_1004cb78 != iVar5) goto LAB_1004cb4a;
  }
  else {
    if (*DAT_1004cb78 == iVar5) {
      return;
    }
LAB_1004cb4a:
    FUN_1013cdc0();
    uVar7 = extraout_r1_00;
    uVar1 = extraout_r2;
  }
  uVar4 = (uint)*(byte *)(iVar2 + 0x10);
  iVar2 = *DAT_1004cae8;
  iVar3 = *DAT_1004caec;
  if (iVar3 == 0) {
    if (*DAT_1004cae8 == iVar2) {
      return;
    }
  }
  else {
    uVar6 = (DAT_1004caf0 - DAT_1004caf4) * 0x20 & 0xff00;
    if (uVar4 < 2) {
      uVar8 = *(uint *)(DAT_1004cb00 + uVar4 * 4);
      FUN_100a5b78(uVar6 | 0x240032,DAT_1004cafc,DAT_1004cb04,uVar8,uVar4,uVar7,uVar1,iVar2,unaff_r4
                   ,unaff_r5);
      (**(code **)(DAT_1004cb08 + 8))(uVar8 & 0xff);
      FUN_100486d0();
      uVar7 = *(undefined4 *)(iVar3 + 8);
      uVar1 = FUN_1004cf14(0xe3);
      FUN_10097998(uVar7,uVar1);
      unaff_r4 = *(uint *)(iVar3 + 0xc);
      uVar1 = FUN_1004cf14(0x12f);
      if (*DAT_1004cae8 == iVar2) {
        FUN_10097998(unaff_r4,uVar1);
        return;
      }
    }
    else {
      unaff_r4 = uVar6;
      if (*DAT_1004cae8 == iVar2) goto LAB_1004ca6a;
    }
  }
  uVar4 = FUN_1013cdc0();
LAB_1004ca6a:
  FUN_100a5b78(unaff_r4 | 0x1f0031,DAT_1004cafc,DAT_1004caf8,uVar4);
  return;
}

