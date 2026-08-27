/* FUN_14025b98 @ 0x14025b98 */

char FUN_14025b98(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 unaff_lr;
  
  uVar11 = DAT_14025d44;
  puVar7 = DAT_14025d40;
  pbVar6 = DAT_14025d3c;
  pcVar4 = DAT_14025d38;
  if ((param_1 < DAT_14025d38) || (DAT_14025d38 + 0x118 < param_1)) {
    return '\x02';
  }
  iVar15 = 0;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    iVar15 = getBasePriority();
  }
  if (iVar15 != 0x40) {
    bVar2 = *DAT_14025d3c;
    *DAT_14025d40 = 0x14025bba;
    puVar7[1] = unaff_lr;
    uVar10 = bVar2 + 1;
    *pbVar6 = (char)uVar10 + (char)(uint)((ulonglong)uVar11 * (ulonglong)uVar10 >> 0x23) * -10;
    *(undefined4 *)(DAT_14025d48 + (uint)bVar2 * 4) = unaff_lr;
  }
  uVar13 = 0x40;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(0x40);
  }
  cVar8 = *param_1;
  if (cVar8 == '\x01') {
    cVar8 = '\0';
  }
  else {
    if (cVar8 == '\x02') {
      pcVar12 = *(char **)(pcVar4 + 0x130);
      if (pcVar12 != param_1) {
        if (pcVar12 != (char *)0x0) {
          pcVar4 = pcVar12;
          for (pcVar5 = *(char **)(pcVar12 + 4); uVar13 = 0, pcVar5 != (char *)0x0;
              pcVar5 = *(char **)(pcVar5 + 4)) {
            if (param_1 == pcVar5) {
              iVar14 = *(int *)(pcVar5 + 4);
              *(int *)(pcVar4 + 4) = iVar14;
              if (iVar14 != 0) {
                *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + *(int *)(param_1 + 8);
              }
              goto LAB_14025c68;
            }
            pcVar4 = pcVar5;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_14025d54,param_1,pcVar12,uVar13,param_4);
      }
      uVar11 = FUN_140293b0();
      uVar10 = *(uint *)(*(int *)(pcVar4 + 0x130) + 8);
      if ((uVar10 < uVar11) && (1 < uVar11)) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_14025d60,uVar11,uVar10,*(int *)(pcVar4 + 0x130),param_4);
      }
      FUN_14029378();
      iVar14 = *(int *)(*(int *)(pcVar4 + 0x130) + 4);
      if (iVar14 != 0) {
        if (uVar11 == 0) {
          uVar11 = FUN_140293bc();
          uVar10 = *(uint *)(*(int *)(pcVar4 + 0x130) + 8);
          if (uVar11 + 1 < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_1402b0f8(DAT_14025d5c,uVar11,uVar10,uVar11 + 1,param_4);
          }
          uVar16 = 0;
          iVar9 = iVar14;
          if (uVar10 < uVar11) {
            uVar16 = uVar11 - uVar10;
          }
          do {
            uVar11 = *(uint *)(iVar9 + 8);
            if (uVar16 < uVar11) {
              *(uint *)(iVar9 + 8) = uVar11 - uVar16;
              break;
            }
            *(undefined4 *)(iVar9 + 8) = 0;
            piVar1 = (int *)(iVar9 + 4);
            uVar16 = uVar16 - uVar11;
            iVar9 = *piVar1;
          } while (*piVar1 != 0);
          iVar9 = *(int *)(iVar14 + 8);
        }
        else {
          iVar9 = *(int *)(iVar14 + 8) + uVar11;
          *(int *)(iVar14 + 8) = iVar9;
        }
        FUN_14029348(iVar9);
      }
      *(int *)(pcVar4 + 0x130) = iVar14;
    }
    else {
      if (cVar8 != '\x03') {
        if (cVar8 != '\x04') {
          cVar8 = '\x03';
        }
        goto LAB_14025bf6;
      }
      pcVar12 = *(char **)(pcVar4 + 0x134);
      if (pcVar12 != param_1) {
        if (pcVar12 != (char *)0x0) {
          pcVar4 = pcVar12;
          for (pcVar5 = *(char **)(pcVar12 + 4); uVar13 = 0, pcVar5 != (char *)0x0;
              pcVar5 = *(char **)(pcVar5 + 4)) {
            if (param_1 == pcVar5) {
              *(undefined4 *)(pcVar4 + 4) = *(undefined4 *)(pcVar5 + 4);
              goto LAB_14025c68;
            }
            pcVar4 = pcVar5;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_14025d58,param_1,pcVar12,uVar13,param_4);
      }
      *(undefined4 *)(pcVar4 + 0x134) = *(undefined4 *)(param_1 + 4);
    }
LAB_14025c68:
    cVar8 = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    *param_1 = '\x01';
  }
LAB_14025bf6:
  if (iVar15 == 0) {
    *DAT_14025d40 = 0xffffffff;
  }
  bVar2 = *DAT_14025d4c;
  uVar11 = bVar2 + 1;
  *DAT_14025d4c =
       (char)uVar11 + (char)(uint)((ulonglong)DAT_14025d44 * (ulonglong)uVar11 >> 0x23) * -10;
  *(undefined4 *)(DAT_14025d50 + (uint)bVar2 * 4) = unaff_lr;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(iVar15);
  }
  return cVar8;
}

