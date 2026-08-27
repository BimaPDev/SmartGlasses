/* FUN_1402ce98 @ 0x1402ce98 */

undefined4 FUN_1402ce98(uint param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 unaff_lr;
  
  uVar8 = DAT_1402cfe4;
  puVar4 = DAT_1402cfe0;
  pbVar10 = DAT_1402cfdc;
  if (0x26 < param_1) {
    return 1;
  }
  if (0x12 < param_2) {
    return 2;
  }
  iVar11 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar11 = getBasePriority();
  }
  uVar6 = param_1;
  uVar7 = param_2;
  if (iVar11 != 0x40) {
    uVar6 = (uint)*DAT_1402cfdc;
    *DAT_1402cfe0 = 0x1402ceb6;
    puVar4[1] = unaff_lr;
    lVar3 = (ulonglong)uVar8 * (ulonglong)(uVar6 + 1);
    uVar7 = (uint)lVar3;
    *pbVar10 = (char)(uVar6 + 1) + (char)(uint)((ulonglong)lVar3 >> 0x23) * -10;
    *(undefined4 *)(DAT_1402cfe8 + uVar6 * 4) = unaff_lr;
  }
  pbVar10 = DAT_1402cff0;
  pbVar5 = DAT_1402cfec;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  uVar8 = (uint)*DAT_1402cfec;
  if (uVar8 < 0x27) {
    uVar8 = (uint)DAT_1402cff0[uVar8];
    DAT_1402cff0[param_1] = (byte)param_2;
  }
  else {
    uVar8 = FUN_140e5088(uVar6,uVar7,uVar8,0x40);
    pbVar10 = DAT_1402cff0;
    DAT_1402cff0[param_1] = (byte)param_2;
  }
  if (param_2 == uVar8) {
    *pbVar5 = (byte)param_1;
    goto LAB_1402cf2e;
  }
  if (param_2 < uVar8) {
    if (*pbVar5 != param_1) {
      if (*pbVar5 != 0x27) goto LAB_1402cf2e;
      goto LAB_1402cef4;
    }
    param_2 = (uint)*pbVar10;
    uVar7 = 0;
    uVar6 = 1;
    pbVar10 = DAT_1402cff0;
    do {
      pbVar10 = pbVar10 + 1;
      if (param_2 < *pbVar10) {
        uVar7 = uVar6 & 0xff;
        param_2 = (uint)*pbVar10;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x27);
    *pbVar5 = (byte)uVar7;
    if (param_2 == uVar8) goto LAB_1402cf2e;
  }
  else {
LAB_1402cef4:
    *pbVar5 = (byte)param_1;
  }
  uVar6 = (uint)*DAT_1402cff4;
  if (param_2 == 0) {
    param_2 = 6;
  }
  if (uVar6 < 0x13) {
    if (uVar6 <= param_2) {
      param_2 = uVar6;
    }
    uVar9 = (uint)*DAT_1402cff8;
    uVar7 = param_2 & 0xff;
    if ((param_2 & 0xff) < uVar9) {
      uVar7 = uVar9;
    }
    if (uVar8 == 0) {
      uVar8 = 6;
    }
    if (uVar6 <= uVar8) {
      uVar8 = uVar6;
    }
    uVar8 = uVar8 & 0xff;
  }
  else {
    uVar9 = (uint)*DAT_1402cff8;
    if (param_2 < uVar9) {
      param_2 = uVar9;
    }
    if (uVar8 == 0) {
      uVar8 = 6;
    }
    uVar7 = param_2 & 0xff;
  }
  if (uVar9 < uVar8) {
    uVar9 = uVar8;
  }
  if ((uVar9 & 0xff) != uVar7) {
    FUN_1402dc78(uVar7);
  }
LAB_1402cf2e:
  if (iVar11 == 0) {
    *DAT_1402cfe0 = 0xffffffff;
  }
  pbVar10 = DAT_1402cffc;
  bVar1 = *DAT_1402cffc;
  *(undefined4 *)(DAT_1402d000 + (uint)bVar1 * 4) = unaff_lr;
  uVar8 = bVar1 + 1;
  *pbVar10 = (char)uVar8 + (char)(uint)((ulonglong)DAT_1402cfe4 * (ulonglong)uVar8 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar11);
  }
  return 0;
}

