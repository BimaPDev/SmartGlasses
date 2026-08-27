/* FUN_2c00b4d4 @ 0x2c00b4d4 */

void FUN_2c00b4d4(int param_1,uint param_2,int param_3,uint param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined8 uVar15;
  char acStack_30 [8];
  undefined1 local_28;
  undefined1 local_27;
  uint local_24;
  undefined1 *puVar14;
  
  local_24 = *DAT_2c00b65c;
  FUN_2c013858();
  uVar3 = FUN_2c0138bc();
  uVar15 = FUN_2c00b47c(param_3,param_4,DAT_2c00b660,uVar3);
  uVar9 = (uint)uVar15;
  uVar11 = uVar9 + 2;
  if (uVar11 < param_4) {
    *(undefined1 *)(param_3 + uVar9) = *(undefined1 *)(DAT_2c00b664 + param_1);
    uVar4 = uVar9 + 9;
    *(undefined1 *)(param_3 + uVar9 + 1) = 0x2f;
    uVar9 = uVar11;
    if (uVar4 < param_4) {
LAB_2c00b59c:
      iVar5 = FUN_2c013dcc(param_2);
      uVar11 = DAT_2c00b674;
      if (iVar5 == 0) {
        iVar5 = uVar9 + 1;
        pcVar8 = (char *)(param_3 + iVar5);
        *(undefined1 *)(param_3 + uVar9) = 0x4d;
        pcVar6 = acStack_30;
        do {
          pcVar7 = pcVar6;
          uVar9 = (uint)((ulonglong)uVar11 * (ulonglong)param_2 >> 0x23);
          cVar2 = (char)param_2 + (char)uVar9 * -10 + '0';
          *pcVar7 = cVar2;
          bVar1 = 9 < param_2;
          pcVar6 = pcVar7 + 1;
          param_2 = uVar9;
        } while (bVar1);
        iVar12 = 1;
        *(char *)(param_3 + iVar5) = cVar2;
        do {
          if (pcVar7 <= acStack_30) {
            iVar10 = iVar12 + 1;
            goto LAB_2c00b632;
          }
          iVar12 = iVar12 + 1;
          pcVar7 = pcVar7 + -1;
          pcVar8 = pcVar8 + 1;
          *pcVar8 = *pcVar7;
        } while (iVar12 != 5);
        iVar10 = 6;
LAB_2c00b632:
        uVar9 = iVar12 + iVar5;
        if (iVar10 != 6) {
LAB_2c00b638:
          pcVar8 = &Reserved2;
          puVar14 = (undefined1 *)(param_3 + uVar9);
          do {
            puVar13 = puVar14 + 1;
            *puVar14 = 0x20;
            puVar14 = puVar13;
          } while ((undefined1 *)((param_3 + 6 + uVar9) - iVar10) != puVar13);
          uVar9 = (uVar9 + 6) - iVar10;
        }
      }
      else {
        pcVar6 = (char *)(iVar5 + -1);
        iVar10 = 0;
        pcVar7 = (char *)(param_3 + uVar9);
        do {
          pcVar6 = pcVar6 + 1;
          if (*pcVar6 == '\0') goto LAB_2c00b638;
          iVar10 = iVar10 + 1;
          uVar9 = uVar9 + 1;
          pcVar8 = pcVar7 + 1;
          *pcVar7 = *pcVar6;
          pcVar7 = pcVar8;
        } while (iVar10 != 6);
      }
      uVar15 = CONCAT44(pcVar8,uVar9 + 1);
      *(undefined1 *)(param_3 + uVar9) = 0x2f;
      goto LAB_2c00b5c4;
    }
    uVar9 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar9 = getCurrentExceptionNumber();
      uVar9 = uVar9 & 0x1ff;
    }
    if (uVar9 != 0) goto LAB_2c00b560;
LAB_2c00b522:
    uVar3 = FUN_2c013d9c();
    FUN_2c00b47c(acStack_30,10,DAT_2c00b668,uVar3);
  }
  else {
    if (uVar9 + 7 < param_4) goto LAB_2c00b59c;
LAB_2c00b5c4:
    uVar11 = (uint)uVar15;
    if (param_4 <= uVar11) goto LAB_2c00b54c;
    uVar9 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar9 = getCurrentExceptionNumber();
      uVar9 = uVar9 & 0x1ff;
    }
    if (uVar9 == 0) goto LAB_2c00b522;
LAB_2c00b560:
    uVar3 = FUN_2c013c0c();
    iVar5 = FUN_2c00b47c(acStack_30,10,DAT_2c00b670,uVar3);
    if (iVar5 + 1U < 10) {
      acStack_30[iVar5] = 'E';
      acStack_30[iVar5 + 1] = '\0';
    }
    else {
      local_28 = 0x2e;
    }
  }
  local_27 = 0;
  uVar15 = FUN_2c00b47c(param_3 + uVar11,param_4 - uVar11,DAT_2c00b66c,acStack_30);
  uVar15 = CONCAT44((int)((ulonglong)uVar15 >> 0x20),(int)uVar15 + uVar11);
LAB_2c00b54c:
  if ((*DAT_2c00b65c ^ local_24) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),*DAT_2c00b65c ^ local_24,0);
  }
  return;
}

