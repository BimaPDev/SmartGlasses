/* FUN_1402e940 @ 0x1402e940 */

void FUN_1402e940(undefined4 param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  ushort uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  ushort uVar11;
  undefined4 uVar12;
  byte *pbVar13;
  undefined4 uVar14;
  uint uVar15;
  uint extraout_r2;
  uint extraout_r2_00;
  char cVar16;
  int iVar17;
  ushort uVar18;
  undefined4 unaff_lr;
  undefined8 uVar19;
  ushort local_26;
  uint local_24;
  
  puVar7 = DAT_1402eb98;
  pbVar5 = DAT_1402eb94;
  local_24 = *DAT_1402eb90;
  iVar17 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar17 = getBasePriority();
  }
  if (iVar17 != 0x40) {
    bVar1 = *DAT_1402eb94;
    *DAT_1402eb98 = 0x1402e960;
    puVar7[1] = unaff_lr;
    param_3 = bVar1 + 1;
    *pbVar5 = (char)param_3 +
              (char)(uint)((ulonglong)DAT_1402eb9c * (ulonglong)param_3 >> 0x23) * -10;
    *(undefined4 *)(DAT_1402eba0 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  FUN_1402e1fc(0x5e,&local_26,param_3,0x40);
  uVar4 = local_26 & 0xc00;
  uVar18 = local_26 & 0xc00;
  if ((local_26 & 0x18) == 0) {
    uVar11 = local_26 & 0x18;
    if ((local_26 & 0xc00) != 0) goto LAB_1402ead4;
  }
  else {
    uVar11 = 1;
LAB_1402ead4:
    uVar18 = uVar11;
    FUN_1402e37c(0x5e);
  }
  if (iVar17 == 0) {
    *DAT_1402eb98 = 0xffffffff;
  }
  iVar9 = DAT_1402eba8;
  pbVar5 = DAT_1402eba4;
  uVar8 = DAT_1402eb9c;
  bVar1 = *DAT_1402eba4;
  *(undefined4 *)(DAT_1402eba8 + (uint)bVar1 * 4) = unaff_lr;
  uVar15 = bVar1 + 1;
  *pbVar5 = (char)uVar15 + (char)(uint)((ulonglong)uVar8 * (ulonglong)uVar15 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar17);
  }
  if ((uVar4 != 0) && ((code *)*DAT_1402ebac != (code *)0x0)) {
    (*(code *)*DAT_1402ebac)(local_26,(int)((ulonglong)uVar8 * (ulonglong)uVar15));
    uVar15 = extraout_r2;
  }
  if ((uVar18 != 0) && ((code *)DAT_1402ebac[3] != (code *)0x0)) {
    (*(code *)DAT_1402ebac[3])(local_26);
    uVar15 = extraout_r2_00;
  }
  uVar8 = DAT_1402eb9c;
  puVar7 = DAT_1402eb98;
  pbVar6 = DAT_1402eb94;
  iVar17 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar17 = getBasePriority();
  }
  if (iVar17 != 0x40) {
    bVar1 = *DAT_1402eb94;
    *DAT_1402eb98 = 0x1402ea0c;
    puVar7[1] = unaff_lr;
    uVar15 = bVar1 + 1;
    *pbVar6 = (char)uVar15 + (char)(uint)((ulonglong)uVar8 * (ulonglong)uVar15 >> 0x23) * -10;
    *(undefined4 *)(DAT_1402eba0 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  uVar12 = FUN_1402e1fc(0x53,&local_26,uVar15,0x40);
  pcVar10 = DAT_1402ebb8;
  uVar4 = local_26 & 0x1fff;
  uVar18 = local_26 & 0x1fff;
  if ((local_26 & 0x6000) == 0) {
    if ((local_26 & 0x1fff) == 0) goto LAB_1402ea6a;
    cVar16 = *DAT_1402ebb8;
    uVar18 = local_26 & 0x6000;
    if (cVar16 == '\0') goto LAB_1402eaea;
LAB_1402ea5e:
    if (cVar16 == '\x03') {
      uVar12 = 0x51;
    }
    else {
      uVar12 = 0x52;
    }
  }
  else {
    uVar18 = 1;
    cVar16 = *DAT_1402ebb8;
    if (cVar16 != '\0') goto LAB_1402ea5e;
LAB_1402eaea:
    uVar12 = 0x51;
  }
  uVar12 = FUN_1402e37c(uVar12);
LAB_1402ea6a:
  if (iVar17 == 0) {
    *DAT_1402eb98 = 0xffffffff;
  }
  uVar8 = DAT_1402eb9c;
  bVar1 = *pbVar5;
  *(undefined4 *)(iVar9 + (uint)bVar1 * 4) = unaff_lr;
  uVar15 = bVar1 + 1;
  lVar3 = (ulonglong)uVar8 * (ulonglong)uVar15;
  uVar14 = (undefined4)lVar3;
  *pbVar5 = (char)uVar15 + (char)(uint)((ulonglong)lVar3 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar17);
  }
  uVar19 = CONCAT44(uVar14,uVar12);
  if ((uVar4 != 0) && (uVar19 = CONCAT44(uVar14,uVar12), (code *)DAT_1402ebac[1] != (code *)0x0)) {
    uVar19 = (*(code *)DAT_1402ebac[1])(local_26,uVar14);
  }
  if ((uVar18 != 0) && ((code *)DAT_1402ebac[2] != (code *)0x0)) {
    uVar19 = (*(code *)DAT_1402ebac[2])(local_26);
  }
  uVar8 = DAT_1402eb9c;
  puVar7 = DAT_1402eb98;
  pbVar6 = DAT_1402eb94;
  if (*pcVar10 == '\x02') {
    iVar17 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar17 = getBasePriority();
    }
    pbVar13 = (byte *)uVar19;
    if (iVar17 != 0x40) {
      bVar1 = *DAT_1402eb94;
      *DAT_1402eb98 = 0x1402eb02;
      puVar7[1] = unaff_lr;
      uVar15 = bVar1 + 1;
      *pbVar6 = (char)uVar15 + (char)(uint)((ulonglong)uVar8 * (ulonglong)uVar15 >> 0x23) * -10;
      *(undefined4 *)(DAT_1402eba0 + (uint)bVar1 * 4) = unaff_lr;
      pbVar13 = pbVar6;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    if (((*DAT_1402ebb0 == '\0') ||
        (pbVar13 = (byte *)FUN_1402e1fc(0x114,&local_26), (local_26 & 0x30) != 0)) &&
       ((code *)DAT_1402ebac[4] != (code *)0x0)) {
      pbVar13 = (byte *)(*(code *)DAT_1402ebac[4])(local_26);
      *DAT_1402ebb4 = 4;
    }
    if (iVar17 == 0) {
      *DAT_1402eb98 = 0xffffffff;
    }
    uVar8 = DAT_1402eb9c;
    bVar1 = *pbVar5;
    *(undefined4 *)(iVar9 + (uint)bVar1 * 4) = unaff_lr;
    uVar15 = bVar1 + 1;
    lVar3 = (ulonglong)uVar8 * (ulonglong)uVar15;
    uVar12 = (undefined4)lVar3;
    *pbVar5 = (char)uVar15 + (char)(uint)((ulonglong)lVar3 >> 0x23) * -10;
    bVar2 = (bool)isCurrentModePrivileged();
    uVar19 = CONCAT44(uVar12,pbVar13);
    if (bVar2) {
      setBasePriority(iVar17);
      uVar19 = CONCAT44(uVar12,pbVar13);
    }
  }
  if ((*DAT_1402eb90 ^ local_24) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),*DAT_1402eb90 ^ local_24,0);
}

