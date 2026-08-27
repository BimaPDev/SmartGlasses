/* FUN_2c135678 @ 0x2c135678 */

uint FUN_2c135678(int param_1,uint param_2,int param_3,uint param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar13;
  int iVar14;
  char acStack_30 [8];
  undefined1 local_28;
  undefined1 local_27;
  int local_24;
  undefined1 *puVar12;
  
  local_24 = *DAT_2c13581c;
  FUN_2c14486c();
  uVar3 = FUN_2c1448c4();
  uVar4 = FUN_2c135620(param_3,param_4,DAT_2c135820,uVar3);
  if (((code *)*DAT_2c135824 == (code *)0x0) || (param_4 <= uVar4)) {
    uVar13 = uVar4 + 2;
    if (param_4 <= uVar13) goto LAB_2c135726;
LAB_2c1356b8:
    *(undefined1 *)(param_3 + uVar4) = *(undefined1 *)(DAT_2c135828 + param_1);
    *(undefined1 *)(param_3 + uVar4 + 1) = 0x2f;
    if (uVar4 + 9 < param_4) {
LAB_2c135730:
      iVar5 = FUN_2c138738(param_2);
      uVar4 = DAT_2c135838;
      if (iVar5 == 0) {
        iVar5 = uVar13 + 1;
        *(undefined1 *)(param_3 + uVar13) = 0x4d;
        pcVar6 = (char *)(param_3 + iVar5);
        pcVar8 = acStack_30;
        do {
          pcVar7 = pcVar8;
          uVar13 = (uint)((ulonglong)uVar4 * (ulonglong)param_2 >> 0x23);
          cVar2 = (char)param_2 + (char)uVar13 * -10 + '0';
          *pcVar7 = cVar2;
          bVar1 = 9 < param_2;
          pcVar8 = pcVar7 + 1;
          param_2 = uVar13;
        } while (bVar1);
        *(char *)(param_3 + iVar5) = cVar2;
        iVar14 = 1;
        do {
          if (pcVar7 <= acStack_30) {
            iVar9 = iVar14 + 1;
            goto LAB_2c1357f4;
          }
          pcVar7 = pcVar7 + -1;
          iVar14 = iVar14 + 1;
          pcVar6 = pcVar6 + 1;
          *pcVar6 = *pcVar7;
        } while (iVar14 != 5);
        iVar9 = 6;
LAB_2c1357f4:
        uVar13 = iVar14 + iVar5;
        if (iVar9 != 6) {
LAB_2c1357fa:
          puVar12 = (undefined1 *)(param_3 + uVar13);
          do {
            puVar11 = puVar12 + 1;
            *puVar12 = 0x20;
            puVar12 = puVar11;
          } while ((undefined1 *)((param_3 + 6 + uVar13) - iVar9) != puVar11);
          uVar13 = (uVar13 + 6) - iVar9;
        }
      }
      else {
        iVar9 = 0;
        pcVar6 = (char *)(iVar5 + -1);
        pcVar8 = (char *)(param_3 + uVar13);
        do {
          pcVar6 = pcVar6 + 1;
          if (*pcVar6 == '\0') goto LAB_2c1357fa;
          iVar9 = iVar9 + 1;
          *pcVar8 = *pcVar6;
          uVar13 = uVar13 + 1;
          pcVar8 = pcVar8 + 1;
        } while (iVar9 != 6);
      }
      uVar4 = uVar13 + 1;
      *(undefined1 *)(param_3 + uVar13) = 0x2f;
      goto LAB_2c13575a;
    }
    uVar10 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar10 = getCurrentExceptionNumber();
      uVar10 = uVar10 & 0x1ff;
    }
    uVar4 = uVar13;
    if (uVar10 != 0) goto LAB_2c13576a;
LAB_2c1356d4:
    uVar3 = FUN_2c141354();
    FUN_2c135620(acStack_30,10,DAT_2c13582c,uVar3);
  }
  else {
    iVar5 = (*(code *)*DAT_2c135824)(param_3 + uVar4,param_4 - uVar4);
    uVar4 = uVar4 + iVar5;
    uVar13 = uVar4 + 2;
    if (uVar13 < param_4) goto LAB_2c1356b8;
LAB_2c135726:
    uVar13 = uVar4;
    if (uVar4 + 7 < param_4) goto LAB_2c135730;
LAB_2c13575a:
    if (param_4 <= uVar4) goto LAB_2c1356fe;
    uVar13 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar13 = getCurrentExceptionNumber();
      uVar13 = uVar13 & 0x1ff;
    }
    if (uVar13 == 0) goto LAB_2c1356d4;
LAB_2c13576a:
    uVar3 = FUN_2c134240();
    iVar5 = FUN_2c135620(acStack_30,10,DAT_2c135834,uVar3);
    if (iVar5 + 1U < 10) {
      acStack_30[iVar5] = 'E';
      acStack_30[iVar5 + 1] = '\0';
    }
    else {
      local_28 = 0x2e;
    }
  }
  local_27 = 0;
  iVar5 = FUN_2c135620(param_3 + uVar4,param_4 - uVar4,DAT_2c135830,acStack_30);
  uVar4 = iVar5 + uVar4;
LAB_2c1356fe:
  if (*DAT_2c13581c != local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_2c13424c();
  }
  return uVar4;
}

