/* FUN_2c4c26a8 @ 0x2c4c26a8 */

char FUN_2c4c26a8(char *param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  undefined4 unaff_lr;
  
  puVar3 = DAT_2c4c2808;
  pcVar10 = DAT_2c4c2804;
  if ((DAT_2c4c2804 + 0x118 < param_1) || (param_1 < DAT_2c4c2804)) {
    return '\x02';
  }
  iVar12 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar12 = getBasePriority();
  }
  if (iVar12 != 0x40) {
    *DAT_2c4c2808 = 0x2c4c26c8;
    puVar3[1] = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  cVar4 = *param_1;
  if (cVar4 == '\x01') {
    cVar4 = '\0';
  }
  else {
    if (cVar4 == '\x02') {
      pcVar7 = *(char **)(pcVar10 + 0x130);
      if (pcVar7 == param_1) {
        uVar5 = FUN_2c674798();
        uVar8 = *(uint *)(*(int *)(pcVar10 + 0x130) + 8);
        if (uVar8 == 0) {
          uVar8 = 1;
        }
        if (uVar8 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_2c673ca8(DAT_2c4c2818,uVar5);
        }
        FUN_2c6739f8();
        iVar9 = *(int *)(*(int *)(pcVar10 + 0x130) + 4);
        if (iVar9 != 0) {
          if (uVar5 == 0) {
            uVar5 = FUN_2c674458();
            uVar8 = *(uint *)(*(int *)(pcVar10 + 0x130) + 8);
            if (uVar5 + 1 < uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_2c673ca8(DAT_2c4c2814,uVar5);
            }
            uVar13 = 0;
            iVar6 = iVar9;
            if (uVar8 < uVar5) {
              uVar13 = uVar5 - uVar8;
            }
            do {
              uVar5 = *(uint *)(iVar6 + 8);
              if (uVar13 < uVar5) {
                *(uint *)(iVar6 + 8) = uVar5 - uVar13;
                break;
              }
              *(undefined4 *)(iVar6 + 8) = 0;
              uVar13 = uVar13 - uVar5;
              piVar1 = (int *)(iVar6 + 4);
              iVar6 = *piVar1;
            } while (*piVar1 != 0);
            iVar6 = *(int *)(iVar9 + 8);
          }
          else {
            iVar6 = *(int *)(iVar9 + 8) + uVar5;
            *(int *)(iVar9 + 8) = iVar6;
          }
          FUN_2c6742c8(iVar6);
        }
        *(int *)(pcVar10 + 0x130) = iVar9;
      }
      else {
        if (pcVar7 == (char *)0x0) {
LAB_2c4c2760:
                    /* WARNING: Subroutine does not return */
          FUN_2c673ca8(DAT_2c4c280c,param_1);
        }
        pcVar10 = *(char **)(pcVar7 + 4);
        if ((param_1 == pcVar10) || (pcVar10 == (char *)0x0)) {
LAB_2c4c275c:
          if (param_1 != pcVar10) goto LAB_2c4c2760;
        }
        else {
          do {
            pcVar7 = pcVar10;
            pcVar11 = *(char **)(pcVar7 + 4);
            pcVar10 = (char *)0x0;
            if (pcVar11 == (char *)0x0) goto LAB_2c4c275c;
            pcVar10 = pcVar11;
          } while (param_1 != pcVar11);
        }
        iVar9 = *(int *)(param_1 + 4);
        *(int *)(pcVar7 + 4) = iVar9;
        if (iVar9 != 0) {
          *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + *(int *)(param_1 + 8);
        }
      }
    }
    else {
      if (cVar4 != '\x03') {
        if (cVar4 != '\x04') {
          cVar4 = '\x03';
        }
        goto LAB_2c4c26e6;
      }
      pcVar7 = *(char **)(pcVar10 + 0x134);
      if (pcVar7 == param_1) {
        *(undefined4 *)(pcVar10 + 0x134) = *(undefined4 *)(param_1 + 4);
      }
      else {
        if (pcVar7 == (char *)0x0) {
LAB_2c4c276e:
                    /* WARNING: Subroutine does not return */
          FUN_2c673ca8(DAT_2c4c2810,param_1);
        }
        pcVar10 = *(char **)(pcVar7 + 4);
        if ((pcVar10 == (char *)0x0) || (param_1 == pcVar10)) {
LAB_2c4c276a:
          if (param_1 != pcVar10) goto LAB_2c4c276e;
        }
        else {
          do {
            pcVar7 = pcVar10;
            pcVar11 = *(char **)(pcVar7 + 4);
            pcVar10 = (char *)0x0;
            if (pcVar11 == (char *)0x0) goto LAB_2c4c276a;
            pcVar10 = pcVar11;
          } while (param_1 != pcVar11);
        }
        *(undefined4 *)(pcVar7 + 4) = *(undefined4 *)(param_1 + 4);
      }
    }
    cVar4 = '\0';
    *param_1 = '\x01';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
LAB_2c4c26e6:
  if (iVar12 == 0) {
    *DAT_2c4c2808 = 0xffffffff;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar12);
  }
  return cVar4;
}

