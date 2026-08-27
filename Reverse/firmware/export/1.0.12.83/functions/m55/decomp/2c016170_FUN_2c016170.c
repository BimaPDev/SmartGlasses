/* FUN_2c016170 @ 0x2c016170 */

void FUN_2c016170(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  char acStack_34 [4];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined1 uStack_24;
  int iStack_20;
  uint local_1c;
  
  pcVar11 = *(char **)(param_1 + 0x24);
  local_1c = *DAT_2c016410;
  if (pcVar11 == (char *)0x0) {
    uVar6 = 0;
    pcVar9 = *(char **)(param_1 + 0x20);
    if (*(char **)(param_1 + 0x20) != (char *)0x0) {
      do {
        pcVar11 = pcVar9;
        pcVar9 = *(char **)(pcVar11 + 0x1c);
      } while (*(char **)(pcVar11 + 0x1c) != (char *)0x0);
      pcVar11[0x18] = '\x01';
      *(char **)(param_1 + 0x24) = pcVar11;
      cVar1 = *pcVar11;
      cVar3 = *(char *)(param_1 + 0x28);
      piVar4 = DAT_2c016414;
      goto joined_r0x2c016208;
    }
  }
  else {
    cVar1 = *pcVar11;
    cVar3 = *(char *)(param_1 + 0x28);
    piVar4 = DAT_2c016414;
joined_r0x2c016208:
    DAT_2c016414 = piVar4;
    if (cVar1 == '\x01') {
      if (cVar3 == '\x01') {
        iVar5 = *(int *)(pcVar11 + 0x10);
        *piVar4 = 0;
        if (iVar5 != 0) {
          FUN_2c015e74(*(undefined1 *)(param_1 + 1),*(int *)(pcVar11 + 4) + *(int *)(pcVar11 + 0xc))
          ;
          FUN_2c016004(*(undefined1 *)(param_1 + 1),*(int *)(pcVar11 + 4) + *(int *)(pcVar11 + 0xc),
                       *(undefined4 *)(pcVar11 + 0x10));
          iVar5 = FUN_2c0065b4(*(undefined1 *)(param_1 + 1),
                               *(int *)(pcVar11 + 0xc) + *(int *)(pcVar11 + 4),
                               *(int *)(pcVar11 + 0x14) + *(int *)(pcVar11 + 0xc),
                               *(undefined4 *)(pcVar11 + 0x10),0);
          FUN_2c016094(*(undefined1 *)(param_1 + 1),*(int *)(pcVar11 + 4) + *(int *)(pcVar11 + 0xc),
                       *(undefined4 *)(pcVar11 + 0x10));
          if (iVar5 != 0) {
            param_2 = extraout_r1_01;
            if (iVar5 != 1) {
                    /* WARNING: Subroutine does not return */
              FUN_2c00dfac(DAT_2c016420,DAT_2c016418,0x8be,iVar5);
            }
            goto LAB_2c01624c;
          }
        }
      }
      else {
        if (cVar3 != '\x03') goto LAB_2c0163de;
        iVar5 = *(int *)(pcVar11 + 4);
        uVar6 = *(undefined4 *)(pcVar11 + 0x10);
        uVar2 = *(undefined1 *)(param_1 + 1);
        *piVar4 = *piVar4 + 1;
        FUN_2c016004(uVar2,iVar5 + *(int *)(pcVar11 + 0xc),uVar6);
        iVar5 = FUN_2c00669c(*(undefined1 *)(param_1 + 1),0);
        FUN_2c016094(*(undefined1 *)(param_1 + 1),*(int *)(pcVar11 + 4) + *(int *)(pcVar11 + 0xc),
                     *(undefined4 *)(pcVar11 + 0x10));
        if (iVar5 != 0) {
          param_2 = extraout_r1_00;
          if (iVar5 != 1) {
                    /* WARNING: Subroutine does not return */
            FUN_2c00dfac(DAT_2c016434,DAT_2c016418,0x8d5,iVar5,
                         *(int *)(pcVar11 + 0xc) + *(int *)(pcVar11 + 4),
                         *(undefined4 *)(pcVar11 + 0x10));
          }
LAB_2c01624c:
          uVar6 = 1;
          *(undefined1 *)(param_1 + 0x28) = 3;
          goto LAB_2c0161d6;
        }
      }
LAB_2c0162a2:
      uVar12 = FUN_2c00647c(*(undefined1 *)(param_1 + 1),0x7c);
      iVar5 = (int)((ulonglong)uVar12 >> 0x20);
      if ((int)uVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c00dfac(DAT_2c016430,DAT_2c01642c,(int)uVar12);
      }
      *(undefined1 *)(param_1 + 0x28) = 1;
      if ((param_2 == 0) && (*(int *)(param_1 + 0x1c) != 0)) {
        if ((*(int *)(pcVar11 + 0x10) == 0) || (*pcVar11 != '\x01')) {
          if ((*(int *)(pcVar11 + 8) == 0) || (*pcVar11 != '\x02')) goto LAB_2c016304;
          iStack_30 = *(int *)(pcVar11 + 4);
          iStack_2c = *(int *)(pcVar11 + 8);
        }
        else {
          iStack_30 = *(int *)(pcVar11 + 4) + *(int *)(pcVar11 + 0xc);
          iStack_2c = *(int *)(pcVar11 + 0x10);
        }
        FUN_2c016124(*(undefined1 *)(param_1 + 1));
        acStack_34[0] = *pcVar11;
        iVar8 = *(int *)(param_1 + 0x20);
        uStack_24 = 0;
        iVar5 = 0;
        if (iVar8 == 0) {
          iStack_28 = -1;
        }
        else {
          do {
            iStack_28 = iVar5;
            iVar8 = *(int *)(iVar8 + 0x1c);
            iVar5 = iStack_28 + 1;
          } while (iVar8 != 0);
        }
        iStack_20 = *piVar4;
        (**(code **)(param_1 + 0x1c))(acStack_34);
        iVar5 = extraout_r1_02;
      }
LAB_2c016304:
      pcVar9 = *(char **)(param_1 + 0x20);
      if (pcVar9 != (char *)0x0) {
        if (pcVar9 == pcVar11) {
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
        else {
          do {
            pcVar10 = pcVar9;
            pcVar9 = *(char **)(pcVar10 + 0x1c);
            if (pcVar9 == (char *)0x0) goto LAB_2c01631a;
          } while (pcVar9 != pcVar11);
          pcVar10[0x1c] = '\0';
          pcVar10[0x1d] = '\0';
          pcVar10[0x1e] = '\0';
          pcVar10[0x1f] = '\0';
        }
        if (*(int *)(pcVar11 + 0x14) != 0) {
          FUN_2c015fb0(*(undefined1 *)(param_1 + 1));
        }
        FUN_2c015fb0(*(undefined1 *)(param_1 + 1),pcVar11);
        iVar5 = extraout_r1_04;
      }
LAB_2c01631a:
      uVar6 = 1;
      *(undefined4 *)(param_1 + 0x24) = 0;
      param_2 = iVar5;
    }
    else {
      if (cVar3 == '\x01') {
        uVar2 = *(undefined1 *)(param_1 + 1);
        *piVar4 = 0;
        FUN_2c015e74(uVar2,*(undefined4 *)(pcVar11 + 4),*(undefined4 *)(pcVar11 + 8));
        FUN_2c016004(*(undefined1 *)(param_1 + 1),*(undefined4 *)(pcVar11 + 4),
                     *(undefined4 *)(pcVar11 + 8));
        iVar5 = FUN_2c006548(*(undefined1 *)(param_1 + 1),*(undefined4 *)(pcVar11 + 4),
                             *(undefined4 *)(pcVar11 + 8),0);
        FUN_2c016094(*(undefined1 *)(param_1 + 1),*(undefined4 *)(pcVar11 + 4),
                     *(undefined4 *)(pcVar11 + 8));
        if (iVar5 == 0) goto LAB_2c0162a2;
        param_2 = extraout_r1_03;
        if (iVar5 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_2c00dfac(DAT_2c01641c,DAT_2c016418,0x8fe,iVar5);
        }
      }
      else {
        if (cVar3 != '\x06') {
                    /* WARNING: Subroutine does not return */
          FUN_2c00dfac(DAT_2c016424,DAT_2c016418,0x91c);
        }
        uVar2 = *(undefined1 *)(param_1 + 1);
        uVar6 = *(undefined4 *)(pcVar11 + 4);
        uVar7 = *(undefined4 *)(pcVar11 + 8);
        *piVar4 = *piVar4 + 1;
        FUN_2c016004(uVar2,uVar6,uVar7);
        iVar5 = FUN_2c0065b0(*(undefined1 *)(param_1 + 1),0);
        FUN_2c016094(*(undefined1 *)(param_1 + 1),*(undefined4 *)(pcVar11 + 4),
                     *(undefined4 *)(pcVar11 + 8));
        if (iVar5 == 0) goto LAB_2c0162a2;
        param_2 = extraout_r1;
        if (iVar5 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_2c00dfac(DAT_2c016428,DAT_2c016418,0x916,iVar5,*(undefined4 *)(pcVar11 + 4),
                       *(undefined4 *)(pcVar11 + 8));
        }
      }
      uVar6 = 1;
      *(undefined1 *)(param_1 + 0x28) = 6;
    }
  }
LAB_2c0161d6:
  if ((*DAT_2c016410 ^ local_1c) == 0) {
    return;
  }
  FUN_2c00a1f8(uVar6,param_2,*DAT_2c016410 ^ local_1c,0);
LAB_2c0163de:
                    /* WARNING: Subroutine does not return */
  FUN_2c00dfac(DAT_2c016424,DAT_2c016418,0x8dc);
}

