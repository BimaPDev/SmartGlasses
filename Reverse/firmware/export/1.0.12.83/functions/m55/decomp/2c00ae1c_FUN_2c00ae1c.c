/* FUN_2c00ae1c @ 0x2c00ae1c */

bool FUN_2c00ae1c(void)

{
  bool bVar1;
  undefined4 *puVar2;
  short *psVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  undefined4 unaff_lr;
  bool bVar11;
  
  puVar2 = DAT_2c00aeac;
  iVar10 = 0;
  bVar11 = (bool)isCurrentModePrivileged();
  if (bVar11) {
    iVar10 = getBasePriority();
  }
  if (iVar10 != 0x40) {
    *DAT_2c00aeac = 0x2c00ae2c;
    puVar2[1] = unaff_lr;
  }
  psVar3 = DAT_2c00aeb0;
  bVar11 = (bool)isCurrentModePrivileged();
  if (bVar11) {
    setBasePriority(0x40);
  }
  if (*(char *)((int)DAT_2c00aeb0 + 9) == '\0') {
    iVar7 = FUN_2c013858();
    pbVar5 = DAT_2c00aeb8;
    puVar4 = DAT_2c00aeb4;
    while (sVar9 = psVar3[1], sVar6 = sVar9, *psVar3 != sVar9) {
      iVar8 = FUN_2c013858();
      if (31999 < (uint)(iVar8 - iVar7)) {
        sVar9 = *psVar3;
        sVar6 = psVar3[1];
        break;
      }
      do {
        iVar8 = FUN_2c013aec(*puVar4);
      } while (iVar8 != 0);
      iVar8 = FUN_2c013d7c(*puVar4);
      if (((iVar8 != 0) && (*(char *)((int)psVar3 + 9) == '\0')) && (*pbVar5 - 2 < 2)) {
        FUN_2c00aa48();
      }
    }
    bVar11 = sVar9 != sVar6;
  }
  else {
    bVar11 = false;
  }
  if (iVar10 == 0) {
    *DAT_2c00aeac = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar10);
  }
  return bVar11;
}

