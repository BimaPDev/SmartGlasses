/* FUN_2c576d04 @ 0x2c576d04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c576d04(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int iStack_48;
  undefined4 *puStack_34;
  uint uStack_30;
  int iStack_2c;
  
  piVar3 = _LAB_2c576fcc;
  iStack_2c = *_LAB_2c576fc0;
  if (param_2 == param_1) goto LAB_2c576de6;
  iStack_48 = param_2[1];
  iVar16 = *param_2;
  puVar9 = (undefined4 *)*param_1;
  uVar7 = iStack_48 - iVar16;
  if ((uint)(param_1[2] - (int)puVar9) < uVar7) {
    if (uVar7 == 0) {
      puVar9 = (undefined4 *)0x0;
      uVar4 = _LAB_2c576fc8;
      uVar1 = _LAB_2c5771a4;
      puStack_34 = puVar9;
    }
    else {
      if (*_LAB_2c576fcc == 0) {
        FUN_2c4723c4();
        *piVar3 = 1;
      }
      puVar9 = (undefined4 *)FUN_2c47245c(0,uVar7);
      uVar4 = _LAB_2c576fc8;
      uVar1 = _LAB_2c5771a4;
      puStack_34 = puVar9;
    }
    for (; uVar2 = _LAB_2c576fc8, _LAB_2c5771a4 = uVar1, iVar16 != iStack_48; iVar16 = iVar16 + 0x28
        ) {
      puVar18 = puVar9 + 3;
      *puVar9 = _LAB_2c576fc8;
      _LAB_2c576fc8 = uVar4;
      puVar9[1] = puVar18;
      puVar11 = *(undefined1 **)(iVar16 + 4);
      uVar8 = *(uint *)(iVar16 + 8);
      if ((puVar11 + uVar8 != (undefined1 *)0x0) && (puVar11 == (undefined1 *)0x0))
      goto LAB_2c577194;
      uStack_30 = uVar8;
      if (uVar8 < 0x10) {
        if (uVar8 == 1) {
          *(undefined1 *)(puVar9 + 3) = *puVar11;
        }
        else if (uVar8 != 0) goto LAB_2c57716e;
      }
      else {
        puVar18 = (undefined4 *)FUN_2c576880(&uStack_30,0);
        puVar9[1] = puVar18;
        puVar9[3] = uStack_30;
LAB_2c57716e:
        FUN_2c674668(puVar18,puVar11,uVar8);
        puVar18 = (undefined4 *)puVar9[1];
      }
      puVar9[2] = uStack_30;
      *(undefined1 *)((int)puVar18 + uStack_30) = 0;
      iVar6 = *(int *)(iVar16 + 0x1c);
      iVar14 = *(int *)(iVar16 + 0x20);
      puVar9[7] = 0;
      puVar9[8] = 0;
      iVar14 = iVar14 - iVar6;
      puVar9[9] = 0;
      if (iVar14 == 0) {
        puVar18 = (undefined4 *)0x0;
      }
      else {
        if (*_LAB_2c576fcc == 0) {
          FUN_2c4723c4();
          *_LAB_2c5771a0 = 1;
        }
        puVar18 = (undefined4 *)FUN_2c47245c(0,iVar14);
      }
      puVar9[7] = puVar18;
      puVar9[8] = puVar18;
      puVar9[9] = iVar14 + (int)puVar18;
      puVar17 = *(undefined4 **)(iVar16 + 0x20);
      for (puVar12 = *(undefined4 **)(iVar16 + 0x1c); puVar12 != puVar17; puVar12 = puVar12 + 6) {
        *puVar18 = puVar18 + 2;
        puVar11 = (undefined1 *)*puVar12;
        uVar8 = puVar12[1];
        if ((puVar11 + uVar8 != (undefined1 *)0x0) && (puVar11 == (undefined1 *)0x0))
        goto LAB_2c577194;
        uStack_30 = uVar8;
        if (uVar8 < 0x10) {
          puVar5 = (undefined1 *)*puVar18;
          if (uVar8 == 1) {
            *puVar5 = *puVar11;
            puVar5 = (undefined1 *)*puVar18;
          }
          else if (uVar8 != 0) goto LAB_2c5770a8;
        }
        else {
          puVar5 = (undefined1 *)FUN_2c576880(&uStack_30,0);
          *puVar18 = puVar5;
          puVar18[2] = uStack_30;
LAB_2c5770a8:
          FUN_2c674668(puVar5,puVar11,uVar8);
          puVar5 = (undefined1 *)*puVar18;
        }
        puVar18[1] = uStack_30;
        puVar5[uStack_30] = 0;
        puVar18 = puVar18 + 6;
      }
      puVar9[8] = puVar18;
      puVar9 = puVar9 + 10;
      uVar4 = _LAB_2c576fc8;
      uVar1 = _LAB_2c5771a4;
      _LAB_2c576fc8 = uVar2;
    }
    iVar16 = *param_1;
    iVar14 = param_1[1];
    _LAB_2c576fc8 = uVar4;
    if (iVar16 != iVar14) {
      iVar6 = iVar16 + 0xc;
      do {
        *(undefined4 *)(iVar6 + -0xc) = uVar1;
        iVar13 = *(int *)(iVar6 + 0x10);
        iVar15 = *(int *)(iVar6 + 0x14);
        if (iVar13 != iVar15) {
          iVar10 = iVar13 + 8;
          do {
            if (*(int *)(iVar10 + -8) != iVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_2c472680(0);
            }
            iVar13 = iVar13 + 0x18;
            iVar10 = iVar10 + 0x18;
          } while (iVar15 != iVar13);
          iVar15 = *(int *)(iVar6 + 0x10);
        }
        if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0,iVar15);
        }
        if (*(int *)(iVar6 + -8) != iVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        iVar16 = iVar16 + 0x28;
        iVar6 = iVar6 + 0x28;
      } while (iVar14 != iVar16);
      iVar14 = *param_1;
    }
    if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,iVar14);
    }
    iVar16 = uVar7 + (int)puStack_34;
    *param_1 = (int)puStack_34;
    param_1[2] = iVar16;
  }
  else {
    puVar18 = (undefined4 *)param_1[1];
    uVar8 = (int)puVar18 - (int)puVar9;
    if (uVar8 < uVar7) {
      iVar14 = _LAB_2c576fc4 * ((int)uVar8 >> 3);
      if (0 < (int)uVar8) {
        puVar9 = puVar9 + 1;
        iVar16 = iVar16 + 4;
        do {
          FUN_2c52f5f4(puVar9,iVar16);
          iVar6 = iVar16 + 0x18;
          iVar16 = iVar16 + 0x28;
          FUN_2c576ad0(puVar9 + 6,iVar6);
          iVar14 = iVar14 + -1;
          puVar9 = puVar9 + 10;
        } while (iVar14 != 0);
        iVar16 = *param_2;
        iStack_48 = param_2[1];
        puVar9 = (undefined4 *)*param_1;
        puVar18 = (undefined4 *)param_1[1];
        uVar8 = (int)puVar18 - (int)puVar9;
      }
      uVar4 = _LAB_2c576fc8;
      iVar16 = iVar16 + uVar8;
      if (iVar16 != iStack_48) {
        do {
          puVar9 = puVar18 + 3;
          *puVar18 = uVar4;
          puVar18[1] = puVar9;
          puVar11 = *(undefined1 **)(iVar16 + 4);
          uVar8 = *(uint *)(iVar16 + 8);
          if ((puVar11 + uVar8 != (undefined1 *)0x0) && (puVar11 == (undefined1 *)0x0)) {
LAB_2c577194:
                    /* WARNING: Subroutine does not return */
            FUN_2c658674(_DAT_2c5771a8);
          }
          uStack_30 = uVar8;
          if (uVar8 < 0x10) {
            if (uVar8 == 1) {
              *(undefined1 *)(puVar18 + 3) = *puVar11;
            }
            else if (uVar8 != 0) goto LAB_2c577074;
          }
          else {
            puVar9 = (undefined4 *)FUN_2c576880(&uStack_30,0);
            puVar18[1] = puVar9;
            puVar18[3] = uStack_30;
LAB_2c577074:
            FUN_2c674668(puVar9,puVar11,uVar8);
            puVar9 = (undefined4 *)puVar18[1];
          }
          puVar18[2] = uStack_30;
          *(undefined1 *)((int)puVar9 + uStack_30) = 0;
          iVar6 = *(int *)(iVar16 + 0x1c);
          iVar14 = *(int *)(iVar16 + 0x20);
          puVar18[7] = 0;
          puVar18[8] = 0;
          iVar14 = iVar14 - iVar6;
          puVar18[9] = 0;
          if (iVar14 == 0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            if (*_LAB_2c576fcc == 0) {
              FUN_2c4723c4();
              *_LAB_2c5771a0 = 1;
            }
            puVar9 = (undefined4 *)FUN_2c47245c(0,iVar14);
          }
          puVar18[7] = puVar9;
          puVar18[8] = puVar9;
          puVar18[9] = iVar14 + (int)puVar9;
          puVar17 = *(undefined4 **)(iVar16 + 0x20);
          for (puVar12 = *(undefined4 **)(iVar16 + 0x1c); puVar12 != puVar17; puVar12 = puVar12 + 6)
          {
            *puVar9 = puVar9 + 2;
            puVar11 = (undefined1 *)*puVar12;
            uVar8 = puVar12[1];
            if ((puVar11 + uVar8 != (undefined1 *)0x0) && (puVar11 == (undefined1 *)0x0))
            goto LAB_2c577194;
            uStack_30 = uVar8;
            if (uVar8 < 0x10) {
              puVar5 = (undefined1 *)*puVar9;
              if (uVar8 == 1) {
                *puVar5 = *puVar11;
                puVar5 = (undefined1 *)*puVar9;
              }
              else if (uVar8 != 0) goto LAB_2c57702e;
            }
            else {
              puVar5 = (undefined1 *)FUN_2c576880(&uStack_30,0);
              *puVar9 = puVar5;
              puVar9[2] = uStack_30;
LAB_2c57702e:
              FUN_2c674668(puVar5,puVar11,uVar8);
              puVar5 = (undefined1 *)*puVar9;
            }
            puVar9[1] = uStack_30;
            puVar5[uStack_30] = 0;
            puVar9 = puVar9 + 6;
          }
          iVar16 = iVar16 + 0x28;
          puVar18[8] = puVar9;
          puVar18 = puVar18 + 10;
        } while (iStack_48 != iVar16);
        goto LAB_2c576dda;
      }
    }
    else {
      if (0 < (int)uVar7) {
        iVar16 = iVar16 + 4;
        puVar18 = puVar9 + 1;
        iVar14 = _LAB_2c576fc4 * ((int)uVar7 >> 3);
        do {
          FUN_2c52f5f4(puVar18,iVar16);
          iVar6 = iVar16 + 0x18;
          iVar16 = iVar16 + 0x28;
          FUN_2c576ad0(puVar18 + 6,iVar6);
          iVar14 = iVar14 + -1;
          puVar18 = puVar18 + 10;
        } while (iVar14 != 0);
        puVar18 = (undefined4 *)param_1[1];
        uVar8 = uVar7;
        if ((int)uVar7 < 1) {
          uVar8 = 0x28;
        }
        puVar9 = (undefined4 *)((int)puVar9 + uVar8);
      }
      uVar4 = _LAB_2c576fc8;
      if (puVar9 != puVar18) {
        puVar12 = puVar9 + 3;
        do {
          puVar12[-3] = uVar4;
          iVar14 = puVar12[4];
          iVar16 = puVar12[5];
          if (iVar14 != iVar16) {
            iVar6 = iVar14 + 8;
            do {
              if (iVar6 != *(int *)(iVar6 + -8)) {
                    /* WARNING: Subroutine does not return */
                FUN_2c472680(0);
              }
              iVar14 = iVar14 + 0x18;
              iVar6 = iVar6 + 0x18;
            } while (iVar16 != iVar14);
            iVar16 = puVar12[4];
          }
          if (iVar16 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,iVar16);
          }
          if (puVar12 != (undefined4 *)puVar12[-2]) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          puVar9 = puVar9 + 10;
          puVar12 = puVar12 + 10;
        } while (puVar9 != puVar18);
      }
LAB_2c576dda:
      puVar9 = (undefined4 *)*param_1;
    }
    iVar16 = (int)puVar9 + uVar7;
  }
  param_1[1] = iVar16;
LAB_2c576de6:
  if (*_LAB_2c576fc0 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

