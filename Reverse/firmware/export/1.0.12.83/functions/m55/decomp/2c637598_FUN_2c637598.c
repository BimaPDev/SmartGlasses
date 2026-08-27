/* FUN_2c637598 @ 0x2c637598 */

void FUN_2c637598(int param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  undefined4 *puVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  int iVar18;
  int iVar19;
  char *pcVar20;
  undefined8 uVar21;
  uint local_64;
  undefined1 local_41;
  int local_40;
  undefined4 local_3c;
  uint local_38;
  short local_34 [2];
  short local_30;
  uint local_2c;
  
  local_2c = *DAT_2c63782c;
  sVar1 = *param_2;
  sVar4 = FUN_2c6033b4(param_1,0,0x12);
  sVar9 = param_2[1];
  sVar5 = FUN_2c6033b4(param_1,0,0x10);
  FUN_2c60747c(param_1,local_34);
  pcVar20 = *(char **)(param_1 + 0x24);
  iVar13 = (int)(short)((local_30 + 1) - local_34[0]);
  iVar10 = FUN_2c6033b4(param_1,0,0x57);
  sVar6 = FUN_2c6033b4(param_1,0,0x59);
  sVar7 = FUN_2c6033b4(param_1,0,0x58);
  sVar2 = *(short *)(iVar10 + 8);
  iVar19 = (int)sVar7;
  local_64 = (*(byte *)(param_1 + 0x52) & 0x1f) >> 4;
  if ((*(byte *)(param_1 + 0x52) & 0x20) != 0) {
    local_64 = local_64 | 2;
  }
  sVar8 = FUN_2c6033b4(param_1,0,1);
  if ((sVar8 == 0x27d1) && (-1 < (int)((uint)*(byte *)(param_1 + 0x23) << 0x1d))) {
    local_64 = local_64 | 4;
  }
  iVar11 = FUN_2c604148(param_1,0,*(undefined4 *)(param_1 + 0x24));
  pcVar17 = pcVar20;
  if (*pcVar20 == '\0') {
    uVar16 = 0;
    uVar15 = 0;
  }
  else {
    iVar18 = 0;
    uVar15 = 0;
    do {
      iVar12 = FUN_2c62b834(pcVar17,iVar10,iVar19,iVar13,0,local_64,iVar13);
      uVar16 = uVar15 + iVar12;
      if ((int)(short)(sVar9 - sVar5) <= iVar18 + sVar2) {
        local_38 = uVar16;
        iVar13 = (*(code *)*DAT_2c637830)(pcVar20,&local_38);
        if ((iVar13 != 10) && (pcVar20[uVar16] == '\0')) {
          uVar16 = uVar16 + 1;
        }
        break;
      }
      pcVar17 = pcVar20 + uVar16;
      iVar18 = (int)(short)((short)iVar18 + sVar2 + sVar6);
      uVar15 = uVar16;
    } while (pcVar20[uVar16] != '\0');
  }
  if (iVar11 == 2) {
    iVar13 = FUN_2c62b85c(pcVar17,uVar16 - uVar15,iVar10,iVar19,local_64);
    iVar19 = (int)(short)((local_30 + 1) - local_34[0]);
    if (iVar19 < 0) {
      iVar19 = iVar19 + 1;
    }
    if (iVar13 < 0) {
      iVar13 = iVar13 + 1;
    }
    iVar13 = (int)(short)((short)(iVar19 >> 1) - (short)(iVar13 >> 1));
  }
  else if (iVar11 == 3) {
    sVar9 = FUN_2c62b85c(pcVar17,uVar16 - uVar15,iVar10,iVar19,local_64);
    iVar13 = (int)(short)(((local_30 + 1) - local_34[0]) - sVar9);
  }
  else {
    iVar13 = 0;
  }
  local_41 = 0;
  local_40 = 0;
  iVar19 = local_40;
  if ((uVar16 != 0) && (uVar15 < uVar16)) {
    pcVar14 = pcVar20 + uVar15;
    iVar11 = 0;
    do {
      while ((FUN_2c62bb98(pcVar17,&local_3c,&local_38,&local_40), (local_64 & 1) == 0 ||
             (iVar19 = FUN_2c62ba40(&local_41,(int)pcVar17[local_40]), iVar19 == 0))) {
        sVar9 = FUN_2c6298c0(iVar10,local_3c,local_38);
        iVar19 = iVar11;
        if (((int)(short)(sVar1 - sVar4) < sVar9 + iVar13) ||
           (((local_40 + uVar15 == uVar16 || (pcVar14[iVar11] == '\0')) ||
            (iVar13 = (int)(short)(sVar9 + (short)iVar13 + sVar7), iVar11 = local_40,
            iVar19 = local_40, uVar16 <= local_40 + uVar15)))) goto LAB_2c63776c;
      }
      iVar19 = local_40;
    } while (local_40 + uVar15 < uVar16);
  }
LAB_2c63776c:
  local_40 = iVar19;
  puVar3 = DAT_2c637834;
  iVar10 = (*(code *)*DAT_2c637834)(pcVar17,local_40);
  uVar21 = (*(code *)*puVar3)(pcVar20,uVar15);
  if ((*DAT_2c63782c ^ local_2c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)uVar21 + iVar10,(int)((ulonglong)uVar21 >> 0x20),*DAT_2c63782c ^ local_2c,0);
}

