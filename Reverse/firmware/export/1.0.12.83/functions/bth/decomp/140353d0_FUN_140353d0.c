/* FUN_140353d0 @ 0x140353d0 */

void FUN_140353d0(int param_1)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  int *piVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint extraout_r1;
  uint extraout_r2;
  uint uVar9;
  int iVar10;
  uint extraout_r2_00;
  int iVar11;
  int iVar12;
  undefined4 unaff_lr;
  undefined8 uVar13;
  
  uVar13 = FUN_140e5848();
  piVar4 = DAT_14035500;
  uVar8 = (uint)((ulonglong)uVar13 >> 0x20);
  iVar11 = *DAT_14035500;
  uVar9 = extraout_r2;
  if (iVar11 == 0) {
    FUN_1402e55c();
    iVar11 = *piVar4;
    uVar8 = extraout_r1;
    uVar9 = extraout_r2_00;
  }
  *piVar4 = iVar11 + 1;
  uVar7 = DAT_1403550c;
  puVar6 = DAT_14035508;
  pbVar5 = DAT_14035504;
  iVar11 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar11 = getBasePriority();
  }
  if (iVar11 != 0x40) {
    uVar8 = (uint)*DAT_14035504;
    *DAT_14035508 = 0x140353f8;
    puVar6[1] = unaff_lr;
    uVar9 = uVar8 + 1;
    *pbVar5 = (char)uVar9 + (char)(uint)((ulonglong)uVar7 * (ulonglong)uVar9 >> 0x23) * -10;
    *(undefined4 *)(DAT_14035510 + uVar8 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  if (param_1 == 0) {
    FUN_14036294(0,uVar8,uVar9,0x40);
    iVar12 = *piVar4;
    if (iVar12 == 0) {
      FUN_1402e55c();
      iVar12 = *piVar4;
      iVar10 = *DAT_14035514;
      if (iVar10 == 0) goto LAB_140354a2;
    }
    else {
      iVar10 = *DAT_14035514;
      if (iVar10 == 0) goto LAB_1403543a;
    }
    *(undefined1 *)(iVar10 + 0xb) = 0;
  }
  else {
    FUN_14036294(1,uVar8,uVar9,0x40);
    iVar12 = *piVar4;
    if (iVar12 == 0) {
      FUN_1402e55c();
      iVar12 = *piVar4;
      iVar10 = *DAT_14035514;
      if (iVar10 == 0) goto LAB_140354a2;
    }
    else {
      iVar10 = *DAT_14035514;
      if (iVar10 == 0) goto LAB_1403543a;
    }
    *(undefined1 *)(iVar10 + 0xb) = 1;
  }
LAB_140354a2:
  if (iVar12 == 0) {
    FUN_1402e5f8();
  }
LAB_1403543a:
  if (iVar11 == 0) {
    *DAT_14035508 = 0xffffffff;
  }
  pbVar5 = DAT_14035518;
  uVar8 = DAT_1403550c;
  bVar1 = *DAT_14035518;
  *(undefined4 *)(DAT_1403551c + (uint)bVar1 * 4) = unaff_lr;
  uVar9 = bVar1 + 1;
  lVar3 = (ulonglong)uVar8 * (ulonglong)uVar9;
  *pbVar5 = (char)uVar9 + (char)(uint)((ulonglong)lVar3 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar11);
  }
  iVar11 = *piVar4;
  *piVar4 = iVar11 + -1;
  if (iVar11 + -1 == 0) {
    FUN_1402e5f8((int)lVar3);
  }
  iVar11 = FUN_140e5848();
  uVar8 = (iVar11 - (int)uVar13) * 1000;
  if (0x1f4f < uVar8) {
    FUN_1402a6e8(4,0xefc,DAT_1403552c,DAT_14035528,DAT_14035524,DAT_14035520,uVar8 >> 4);
    return;
  }
  return;
}

