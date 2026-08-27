/* FUN_1403443c @ 0x1403443c */

void FUN_1403443c(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  uint extraout_r1;
  uint uVar6;
  uint extraout_r2;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 unaff_lr;
  
  piVar3 = DAT_14034574;
  iVar8 = *DAT_14034574;
  if (iVar8 == 0) {
    FUN_1402e55c();
    iVar8 = *piVar3;
    param_2 = extraout_r1;
    param_3 = extraout_r2;
  }
  *piVar3 = iVar8 + 1;
  uVar6 = DAT_14034580;
  puVar5 = DAT_1403457c;
  pbVar4 = DAT_14034578;
  iVar8 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar8 = getBasePriority();
  }
  if (iVar8 != 0x40) {
    param_2 = (uint)*DAT_14034578;
    *DAT_1403457c = 0x1403445c;
    puVar5[1] = unaff_lr;
    param_3 = param_2 + 1;
    *pbVar4 = (char)param_3 + (char)(uint)((ulonglong)uVar6 * (ulonglong)param_3 >> 0x23) * -10;
    *(undefined4 *)(DAT_14034584 + param_2 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  if (param_1 != 1) {
    if (param_1 != 2) goto LAB_1403448c;
    FUN_14036238(0,param_2,param_3,0x40);
    iVar9 = *piVar3;
    if (iVar9 == 0) {
      FUN_1402e55c();
      iVar9 = *piVar3;
      iVar7 = *DAT_14034590;
      if (iVar7 != 0) goto LAB_1403450a;
LAB_1403450e:
      if (iVar9 == 0) {
        FUN_1402e5f8();
      }
    }
    else {
      iVar7 = *DAT_14034590;
      if (iVar7 != 0) {
LAB_1403450a:
        *(undefined1 *)(iVar7 + 10) = 0;
        goto LAB_1403450e;
      }
    }
    iVar9 = DAT_14034594;
    *(uint *)(DAT_14034594 + 0x2c0) = *(uint *)(DAT_14034594 + 0x2c0) & 0xffffff7f | 0x80;
    *(uint *)(iVar9 + 0x2c0) = *(uint *)(iVar9 + 0x2c0) & 0xfff000ff | 0x8000;
    goto LAB_1403448c;
  }
  FUN_14036238(1,param_2,param_3,0x40);
  iVar9 = *piVar3;
  if (iVar9 == 0) {
    FUN_1402e55c();
    iVar9 = *piVar3;
    iVar7 = *DAT_14034590;
    if (iVar7 != 0) goto LAB_140344ea;
  }
  else {
    iVar7 = *DAT_14034590;
    if (iVar7 == 0) goto LAB_1403448c;
LAB_140344ea:
    *(undefined1 *)(iVar7 + 10) = 1;
  }
  if (iVar9 == 0) {
    FUN_1402e5f8();
  }
LAB_1403448c:
  if (iVar8 == 0) {
    *DAT_1403457c = 0xffffffff;
  }
  bVar1 = *DAT_14034588;
  uVar6 = bVar1 + 1;
  *DAT_14034588 =
       (char)uVar6 + (char)(uint)((ulonglong)DAT_14034580 * (ulonglong)uVar6 >> 0x23) * -10;
  *(undefined4 *)(DAT_1403458c + (uint)bVar1 * 4) = unaff_lr;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar8);
  }
  iVar8 = *piVar3;
  *piVar3 = iVar8 + -1;
  if (iVar8 + -1 == 0) {
    FUN_1402e5f8();
    return;
  }
  return;
}

