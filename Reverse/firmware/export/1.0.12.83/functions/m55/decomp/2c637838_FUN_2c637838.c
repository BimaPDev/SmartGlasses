/* FUN_2c637838 @ 0x2c637838 */

void FUN_2c637838(int param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  undefined8 uVar17;
  uint local_5c;
  undefined1 local_49;
  uint local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  short local_3c [2];
  short local_38;
  uint local_34;
  
  local_34 = *DAT_2c637aac;
  FUN_2c60747c(param_1,local_3c,0);
  pcVar12 = *(char **)(param_1 + 0x24);
  sVar1 = (local_38 + 1) - local_3c[0];
  iVar6 = FUN_2c6033b4(param_1,0,0x57);
  sVar2 = FUN_2c6033b4(param_1,0,0x59);
  sVar3 = FUN_2c6033b4(param_1,0,0x58);
  sVar5 = *(short *)(iVar6 + 8);
  iVar7 = FUN_2c604148(param_1,0,*(undefined4 *)(param_1 + 0x24));
  iVar16 = (int)sVar3;
  local_5c = (*(byte *)(param_1 + 0x52) & 0x1f) >> 4;
  if ((*(byte *)(param_1 + 0x52) & 0x20) != 0) {
    local_5c = local_5c | 2;
  }
  sVar4 = FUN_2c6033b4(param_1,0,1);
  if ((sVar4 == 0x27d1) && (-1 < (int)((uint)*(byte *)(param_1 + 0x23) << 0x1d))) {
    local_5c = local_5c | 4;
  }
  pcVar15 = pcVar12;
  if (*pcVar12 == '\0') {
    uVar11 = 0;
    uVar10 = 0;
  }
  else {
    iVar14 = 0;
    uVar10 = 0;
    do {
      iVar8 = FUN_2c62b834(pcVar15,iVar6,iVar16,(int)sVar1,0,local_5c);
      uVar11 = uVar10 + iVar8;
      if ((int)param_2[1] <= iVar14 + sVar5) break;
      pcVar15 = pcVar12 + uVar11;
      iVar14 = (int)(short)((short)iVar14 + sVar5 + sVar2);
      uVar10 = uVar11;
    } while (pcVar12[uVar11] != '\0');
  }
  if (iVar7 == 2) {
    iVar7 = FUN_2c62b85c(pcVar15,uVar11 - uVar10,iVar6,iVar16,local_5c);
    iVar14 = (int)(short)((local_38 + 1) - local_3c[0]);
    if (iVar14 < 0) {
      iVar14 = iVar14 + 1;
    }
    if (iVar7 < 0) {
      iVar7 = iVar7 + 1;
    }
    iVar7 = (int)(short)((short)(iVar14 >> 1) - (short)(iVar7 >> 1));
  }
  else if (iVar7 == 3) {
    sVar5 = FUN_2c62b85c(pcVar15,uVar11 - uVar10,iVar6,iVar16,local_5c);
    iVar7 = (int)(short)(((local_38 + 1) - local_3c[0]) - sVar5);
  }
  else {
    iVar7 = 0;
  }
  local_49 = 0;
  local_44 = 0;
  uStack_40 = 0;
  if (uVar11 == 0) {
    iVar14 = 0;
  }
  else {
    uVar11 = uVar11 - 1;
    if (uVar11 < uVar10) {
      iVar14 = 0;
    }
    else {
      uVar13 = uVar10;
      iVar8 = 0;
      local_48 = uVar10;
      do {
        while ((iVar14 = iVar7, FUN_2c62bb98(pcVar12,&local_44,&uStack_40,&local_48),
               (local_5c & 1) == 0 ||
               (iVar7 = FUN_2c62ba40(&local_49,(int)pcVar12[local_48]), iVar7 == 0))) {
          sVar5 = FUN_2c6298c0(iVar6,local_44,uStack_40);
          sVar5 = sVar5 + (short)iVar14;
          uVar10 = uVar13;
          if ((*param_2 < sVar5) ||
             (uVar13 = local_48, iVar7 = (int)(short)(sVar5 + sVar3), iVar8 = iVar14,
             uVar10 = local_48, uVar11 < local_48)) goto LAB_2c6379ca;
        }
        iVar7 = iVar14;
        iVar14 = iVar8;
        uVar10 = local_48;
      } while (local_48 <= uVar11);
    }
  }
LAB_2c6379ca:
  local_48 = uVar10;
  uVar17 = FUN_2c6298c0(iVar6,local_44,uStack_40);
  if ((int)*param_2 < iVar14 - iVar16) {
    uVar9 = 0;
  }
  else if (iVar14 + iVar16 + (int)uVar17 + 1 < (int)*param_2) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  if ((*DAT_2c637aac ^ local_34) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar9,(int)((ulonglong)uVar17 >> 0x20),*DAT_2c637aac ^ local_34,0);
  }
  return;
}

