/* FUN_14029e30 @ 0x14029e30 */

bool FUN_14029e30(void)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  short *psVar5;
  undefined1 *puVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  short sVar11;
  int iVar12;
  undefined4 unaff_lr;
  bool bVar13;
  
  puVar4 = DAT_14029f08;
  pbVar3 = DAT_14029f04;
  iVar12 = 0;
  bVar13 = (bool)isCurrentModePrivileged();
  if (bVar13) {
    iVar12 = getBasePriority();
  }
  if (iVar12 != 0x40) {
    bVar1 = *DAT_14029f04;
    *DAT_14029f08 = 0x14029e44;
    puVar4[1] = unaff_lr;
    uVar10 = bVar1 + 1;
    *pbVar3 = (char)uVar10 + (char)(uint)((ulonglong)DAT_14029f0c * (ulonglong)uVar10 >> 0x23) * -10
    ;
    *(undefined4 *)(DAT_14029f10 + (uint)bVar1 * 4) = unaff_lr;
  }
  psVar5 = DAT_14029f14;
  bVar13 = (bool)isCurrentModePrivileged();
  if (bVar13) {
    setBasePriority(0x40);
  }
  if (*(char *)((int)DAT_14029f14 + 9) == '\0') {
    iVar8 = FUN_140e5848();
    pbVar3 = DAT_14029f24;
    puVar6 = DAT_14029f20;
    while (sVar11 = psVar5[1], sVar7 = sVar11, *psVar5 != sVar11) {
      iVar9 = FUN_140e5848();
      if (31999 < (uint)(iVar9 - iVar8)) {
        sVar11 = *psVar5;
        sVar7 = psVar5[1];
        break;
      }
      do {
        iVar9 = FUN_14028a0c(*puVar6);
      } while (iVar9 != 0);
      iVar9 = FUN_140289c4(*puVar6);
      if (((iVar9 != 0) && (*(char *)((int)psVar5 + 9) == '\0')) && (*pbVar3 - 1 < 2)) {
        FUN_140297f4();
      }
    }
    bVar13 = sVar11 != sVar7;
  }
  else {
    bVar13 = false;
  }
  if (iVar12 == 0) {
    *DAT_14029f08 = 0xffffffff;
  }
  bVar1 = *DAT_14029f18;
  uVar10 = bVar1 + 1;
  *DAT_14029f18 =
       (char)uVar10 + (char)(uint)((ulonglong)DAT_14029f0c * (ulonglong)uVar10 >> 0x23) * -10;
  *(undefined4 *)(DAT_14029f1c + (uint)bVar1 * 4) = unaff_lr;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar12);
  }
  return bVar13;
}

