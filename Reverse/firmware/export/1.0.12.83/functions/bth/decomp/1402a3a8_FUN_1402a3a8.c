/* FUN_1402a3a8 @ 0x1402a3a8 */

void FUN_1402a3a8(int param_1,uint param_2,int param_3,char *param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  char acStack_30 [8];
  undefined1 local_28;
  undefined1 local_27;
  uint local_24;
  
  local_24 = *DAT_1402a52c;
  FUN_140e5848();
  uVar3 = FUN_140e5548();
  uVar12 = FUN_1402a350(param_3,param_4,DAT_1402a530,uVar3);
  pcVar10 = (char *)uVar12;
  pcVar9 = pcVar10 + 2;
  if (pcVar9 < param_4) {
    pcVar10[param_3] = *(char *)(DAT_1402a534 + param_1);
    pcVar4 = pcVar10 + 9;
    pcVar10[param_3 + 1] = '/';
    pcVar10 = pcVar9;
    if (pcVar4 < param_4) {
LAB_1402a470:
      iVar5 = FUN_14028180(param_2);
      uVar7 = DAT_1402a544;
      if (iVar5 == 0) {
        pcVar4 = pcVar10 + 1;
        pcVar10[param_3] = 'M';
        pcVar10 = pcVar4 + param_3;
        pcVar9 = acStack_30;
        do {
          pcVar11 = pcVar9;
          uVar6 = (uint)((ulonglong)uVar7 * (ulonglong)param_2 >> 0x23);
          cVar2 = (char)param_2 + (char)uVar6 * -10 + '0';
          *pcVar11 = cVar2;
          bVar1 = 9 < param_2;
          pcVar9 = pcVar11 + 1;
          param_2 = uVar6;
        } while (bVar1);
        pcVar4[param_3] = cVar2;
        iVar5 = 1;
        do {
          if (pcVar11 <= acStack_30) {
            iVar8 = iVar5 + 1;
            goto LAB_1402a504;
          }
          pcVar11 = pcVar11 + -1;
          iVar5 = iVar5 + 1;
          pcVar10 = pcVar10 + 1;
          *pcVar10 = *pcVar11;
        } while (iVar5 != 5);
        iVar8 = 6;
LAB_1402a504:
        pcVar10 = pcVar4 + iVar5;
        if (iVar8 != 6) {
LAB_1402a50a:
          pcVar4 = &Reserved2;
          pcVar9 = pcVar10 + param_3;
          do {
            pcVar11 = pcVar9 + 1;
            *pcVar9 = ' ';
            pcVar9 = pcVar11;
          } while (pcVar10 + ((param_3 + 6) - iVar8) != pcVar11);
          pcVar10 = pcVar10 + (6 - iVar8);
        }
      }
      else {
        iVar8 = 0;
        pcVar9 = (char *)(iVar5 + -1);
        pcVar11 = pcVar10 + param_3;
        do {
          pcVar9 = pcVar9 + 1;
          if (*pcVar9 == '\0') goto LAB_1402a50a;
          iVar8 = iVar8 + 1;
          pcVar4 = pcVar11 + 1;
          *pcVar11 = *pcVar9;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar4;
        } while (iVar8 != 6);
      }
      uVar12 = CONCAT44(pcVar4,pcVar10 + 1);
      pcVar10[param_3] = '/';
      goto LAB_1402a49a;
    }
    uVar7 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar7 = getCurrentExceptionNumber();
      uVar7 = uVar7 & 0x1ff;
    }
    if (uVar7 != 0) goto LAB_1402a434;
LAB_1402a3f6:
    uVar3 = FUN_140e5988();
    FUN_1402a350(acStack_30,10,DAT_1402a538,uVar3);
  }
  else {
    if (pcVar10 + 7 < param_4) goto LAB_1402a470;
LAB_1402a49a:
    pcVar9 = (char *)uVar12;
    if (param_4 <= pcVar9) goto LAB_1402a420;
    uVar7 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar7 = getCurrentExceptionNumber();
      uVar7 = uVar7 & 0x1ff;
    }
    if (uVar7 == 0) goto LAB_1402a3f6;
LAB_1402a434:
    uVar3 = FUN_14039b58();
    iVar5 = FUN_1402a350(acStack_30,10,DAT_1402a540,uVar3);
    if (iVar5 + 1U < 10) {
      acStack_30[iVar5] = 'E';
      acStack_30[iVar5 + 1] = '\0';
    }
    else {
      local_28 = 0x2e;
    }
  }
  local_27 = 0;
  uVar12 = FUN_1402a350(pcVar9 + param_3,(int)param_4 - (int)pcVar9,DAT_1402a53c,acStack_30);
  uVar12 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),pcVar9 + (int)uVar12);
LAB_1402a420:
  if ((*DAT_1402a52c ^ local_24) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),*DAT_1402a52c ^ local_24,0);
  }
  return;
}

