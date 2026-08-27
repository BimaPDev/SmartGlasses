/* FUN_2c57af10 @ 0x2c57af10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c57af10(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  uint uStack_40;
  undefined1 auStack_3c [16];
  int iStack_2c;
  
  iStack_2c = *DAT_2c57b114;
  if (param_2 != 0) {
    piVar11 = *(int **)(param_1 + 0xc);
    if (piVar11 == (int *)0x0) {
      iVar4 = FUN_2c64ca5c(0xc);
      *(undefined4 *)(iVar4 + 8) = 0;
      piVar11 = *(int **)(param_1 + 0xc);
      *(int *)(param_1 + 0xc) = iVar4;
      *(int *)iVar4 = iVar4;
      *(int *)(iVar4 + 4) = iVar4;
      if (piVar11 != (int *)0x0) {
        piVar9 = (int *)*piVar11;
        if (piVar9 != piVar11) {
          piVar9[2] = _LAB_2c57b118;
          if ((int *)piVar9[3] == piVar9 + 5) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,piVar9);
          }
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        thunk_FUN_2c669588(piVar11,0xc);
      }
    }
    else {
      piVar9 = (int *)*piVar11;
      if (piVar9 != piVar11) {
        piVar9[2] = _LAB_2c57b118;
        if ((int *)piVar9[3] == piVar9 + 5) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0,piVar9);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      *piVar11 = (int)piVar11;
      piVar11[1] = (int)piVar11;
      piVar11[2] = 0;
    }
    iVar4 = FUN_2c48e3b8(param_2);
    if (iVar4 != 0) {
      iVar5 = FUN_2c48e3f0();
      piVar11 = _LAB_2c57b120;
      uVar1 = _LAB_2c57b118;
      if (iVar5 < 1) {
        FUN_2c48dea0(iVar4);
        iVar4 = 1;
        *(undefined4 *)(param_1 + 8) = 1;
      }
      else {
        iVar10 = 0;
        do {
          iVar7 = FUN_2c48e408(iVar4,iVar10);
          if (iVar7 != 0) {
            uStack_40 = 0;
            auStack_3c[0] = 0;
            uStack_48 = uVar1;
            puStack_44 = auStack_3c;
            iVar7 = FUN_2c557554(iVar7,&uStack_48);
            if (iVar7 < 0) {
              FUN_2c48dea0(iVar4);
              uStack_48 = uVar1;
              if (puStack_44 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
                FUN_2c472680(0);
              }
              goto LAB_2c57b064;
            }
            iVar7 = *(int *)(param_1 + 0xc);
            if (*piVar11 == 0) {
              FUN_2c4723c4();
              *piVar11 = 1;
            }
            iVar6 = FUN_2c47245c(0,0x24);
            uVar3 = uStack_40;
            puVar2 = puStack_44;
            *(undefined4 *)(iVar6 + 8) = uVar1;
            iVar8 = iVar6 + 0x14;
            *(int *)(iVar6 + 0xc) = iVar8;
            if ((puStack_44 + uStack_40 != (undefined1 *)0x0) && (puStack_44 == (undefined1 *)0x0))
            {
                    /* WARNING: Subroutine does not return */
              FUN_2c658674(DAT_2c57b11c);
            }
            uStack_4c = uStack_40;
            if (uStack_40 < 0x10) {
              if (uStack_40 == 1) {
                *(undefined1 *)(iVar6 + 0x14) = *puStack_44;
              }
              else if (uStack_40 != 0) goto LAB_2c57b040;
            }
            else {
              iVar8 = FUN_2c57a9fc(&uStack_4c,0);
              *(int *)(iVar6 + 0xc) = iVar8;
              *(uint *)(iVar6 + 0x14) = uStack_4c;
LAB_2c57b040:
              FUN_2c674668(iVar8,puVar2,uVar3);
              iVar8 = *(int *)(iVar6 + 0xc);
            }
            *(uint *)(iVar6 + 0x10) = uStack_4c;
            *(undefined1 *)(iVar8 + uStack_4c) = 0;
            FUN_2c64cdb4(iVar6,iVar7);
            uStack_48 = uVar1;
            *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
            if (puStack_44 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
              FUN_2c472680(0);
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar5 != iVar10);
        FUN_2c48dea0(iVar4);
        iVar4 = 1;
        *(undefined4 *)(param_1 + 8) = 1;
        bVar14 = *(int *)(param_1 + 4) != 0;
        iVar10 = 0;
        if (bVar14) {
          iVar10 = iVar5 + -1;
        }
        bVar12 = iVar10 < 0;
        bVar15 = iVar5 != 1;
        bVar13 = bVar14 && SBORROW4(iVar5,1);
        if ((bVar14 && bVar15) && bVar12 == bVar13) {
          iVar5 = 1;
        }
        if ((!bVar14 || !bVar15) || bVar12 != bVar13) {
          iVar5 = 0;
        }
        if ((bVar14 && bVar15) && bVar12 == bVar13) {
          FUN_2c57e4f8(*(int *)(param_1 + 4),param_1 + 0xc);
          iVar4 = iVar5;
        }
      }
      goto LAB_2c57b066;
    }
  }
LAB_2c57b064:
  iVar4 = 0;
LAB_2c57b066:
  if (*DAT_2c57b114 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar4;
}

