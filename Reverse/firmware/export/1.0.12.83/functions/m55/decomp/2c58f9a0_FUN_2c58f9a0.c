/* FUN_2c58f9a0 @ 0x2c58f9a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c58f9a0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 *puStack_44;
  uint uStack_40;
  uint uStack_30;
  int iStack_2c;
  
  piVar2 = _LAB_2c58fd60;
  iStack_2c = *_LAB_2c58fc10;
  iVar3 = *param_1;
  iVar16 = param_1[1];
  uVar8 = _LAB_2c58fc14 * (iVar16 - iVar3 >> 3);
  if (uVar8 - _LAB_2c58fc18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c58fd64);
  }
  uVar7 = uVar8;
  if (uVar8 == 0) {
    uVar7 = 1;
  }
  uStack_40 = uVar8 + uVar7;
  if (CARRY4(uVar8,uVar7)) {
    uStack_40 = _LAB_2c58fc18;
    iVar11 = param_2 - iVar3;
    iVar4 = _DAT_2c58fd5c;
LAB_2c58fce2:
    if (*_LAB_2c58fd60 == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    puStack_44 = (undefined4 *)FUN_2c47245c(0,iVar4);
  }
  else {
    iVar11 = param_2 - iVar3;
    if (uStack_40 != 0) {
      if (_LAB_2c58fc18 <= uStack_40) {
        uStack_40 = _LAB_2c58fc18;
      }
      iVar4 = uStack_40 * 0x28;
      goto LAB_2c58fce2;
    }
    puStack_44 = (undefined4 *)0x0;
  }
  uVar1 = _LAB_2c58fc1c;
  *(undefined4 *)((int)puStack_44 + iVar11) = _LAB_2c58fc1c;
  iVar4 = (int)puStack_44 + iVar11 + 0xc;
  *(int *)((int)puStack_44 + iVar11 + 4) = iVar4;
  puVar12 = *(undefined1 **)(param_3 + 4);
  uVar8 = *(uint *)(param_3 + 8);
  if ((puVar12 + uVar8 != (undefined1 *)0x0) && (puVar12 == (undefined1 *)0x0)) goto LAB_2c58fd4a;
  uStack_30 = uVar8;
  if (uVar8 < 0x10) {
    if (uVar8 == 1) {
      *(undefined1 *)((int)puStack_44 + iVar11 + 0xc) = *puVar12;
    }
    else if (uVar8 != 0) goto LAB_2c58fd08;
  }
  else {
    iVar4 = FUN_2c58d6c0(&uStack_30,0);
    *(int *)((int)puStack_44 + iVar11 + 4) = iVar4;
    *(uint *)((int)puStack_44 + iVar11 + 0xc) = uStack_30;
LAB_2c58fd08:
    FUN_2c674668(iVar4,puVar12,uVar8);
    iVar4 = *(int *)((int)puStack_44 + iVar11 + 4);
  }
  *(uint *)((int)puStack_44 + iVar11 + 8) = uStack_30;
  *(undefined1 *)(iVar4 + uStack_30) = 0;
  iVar4 = *(int *)(param_3 + 0x1c);
  iVar13 = *(int *)(param_3 + 0x20);
  *(undefined4 *)((int)puStack_44 + iVar11 + 0x1c) = 0;
  *(undefined4 *)((int)puStack_44 + iVar11 + 0x20) = 0;
  iVar13 = iVar13 - iVar4;
  *(undefined4 *)((int)puStack_44 + iVar11 + 0x24) = 0;
  piVar2 = _LAB_2c58fc24;
  if (iVar13 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    if (*_LAB_2c58fc24 == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    puVar5 = (undefined4 *)FUN_2c47245c(0,iVar13);
  }
  *(undefined4 **)((int)puStack_44 + iVar11 + 0x1c) = puVar5;
  *(undefined4 **)((int)puStack_44 + iVar11 + 0x20) = puVar5;
  *(int *)((int)puStack_44 + iVar11 + 0x24) = iVar13 + (int)puVar5;
  puVar14 = *(undefined4 **)(param_3 + 0x1c);
  puVar9 = *(undefined4 **)(param_3 + 0x20);
  while( true ) {
    if (puVar14 == puVar9) {
      *(undefined4 **)((int)puStack_44 + iVar11 + 0x20) = puVar5;
      puVar5 = puStack_44;
      if (param_2 != iVar3) {
        puVar14 = (undefined4 *)(iVar3 + 0xc);
        iVar4 = iVar3;
        do {
          *puVar5 = uVar1;
          puVar5[1] = puVar5 + 3;
          if (*(undefined4 **)(iVar4 + 4) == puVar14) {
            uVar19 = puVar14[1];
            uVar18 = puVar14[2];
            uVar15 = puVar14[3];
            puVar5[3] = *puVar14;
            puVar5[4] = uVar19;
            puVar5[5] = uVar18;
            puVar5[6] = uVar15;
          }
          else {
            puVar5[1] = *(undefined4 **)(iVar4 + 4);
            puVar5[3] = *(undefined4 *)(iVar4 + 0xc);
          }
          iVar11 = iVar4 + 0x28;
          puVar5[2] = *(undefined4 *)(iVar4 + 8);
          *(undefined1 *)(iVar4 + 0xc) = 0;
          *(undefined4 **)(iVar4 + 4) = puVar14;
          *(undefined4 *)(iVar4 + 8) = 0;
          puVar5[7] = *(undefined4 *)(iVar4 + 0x1c);
          puVar14 = puVar14 + 10;
          puVar5[8] = *(undefined4 *)(iVar4 + 0x20);
          puVar5[9] = *(undefined4 *)(iVar4 + 0x24);
          *(undefined4 *)(iVar4 + 0x1c) = 0;
          *(undefined4 *)(iVar4 + 0x20) = 0;
          *(undefined4 *)(iVar4 + 0x24) = 0;
          puVar5 = puVar5 + 10;
          iVar4 = iVar11;
        } while (iVar11 != param_2);
        puVar5 = puStack_44 +
                 ((_LAB_2c58fc20 * ((uint)((param_2 + -0x28) - iVar3) >> 3) & 0x1fffffff) + 1) * 10;
      }
      puVar5 = puVar5 + 10;
      if (param_2 != iVar16) {
        puVar9 = (undefined4 *)(param_2 + 0xc);
        puVar14 = puVar5;
        iVar4 = param_2;
        do {
          *puVar14 = uVar1;
          puVar14[1] = puVar14 + 3;
          if (*(undefined4 **)(iVar4 + 4) == puVar9) {
            uVar19 = puVar9[1];
            uVar18 = puVar9[2];
            uVar15 = puVar9[3];
            puVar14[3] = *puVar9;
            puVar14[4] = uVar19;
            puVar14[5] = uVar18;
            puVar14[6] = uVar15;
          }
          else {
            puVar14[1] = *(undefined4 **)(iVar4 + 4);
            puVar14[3] = *(undefined4 *)(iVar4 + 0xc);
          }
          puVar14[2] = *(undefined4 *)(iVar4 + 8);
          *(undefined1 *)(iVar4 + 0xc) = 0;
          *(undefined4 **)(iVar4 + 4) = puVar9;
          *(undefined4 *)(iVar4 + 8) = 0;
          puVar14[7] = *(undefined4 *)(iVar4 + 0x1c);
          iVar11 = iVar4 + 0x28;
          puVar9 = puVar9 + 10;
          puVar14[8] = *(undefined4 *)(iVar4 + 0x20);
          puVar14[9] = *(undefined4 *)(iVar4 + 0x24);
          *(undefined4 *)(iVar4 + 0x1c) = 0;
          *(undefined4 *)(iVar4 + 0x20) = 0;
          *(undefined4 *)(iVar4 + 0x24) = 0;
          puVar14 = puVar14 + 10;
          iVar4 = iVar11;
        } while (iVar11 != iVar16);
        puVar5 = puVar5 + ((_LAB_2c58fd54 * ((iVar16 - param_2) - 0x28U >> 3) & 0x1fffffff) + 1) *
                          10;
      }
      if (iVar3 != iVar16) {
        iVar11 = iVar3 + 0xc;
        iVar4 = iVar3;
        do {
          *(undefined4 *)(iVar11 + -0xc) = uVar1;
          iVar13 = *(int *)(iVar11 + 0x10);
          iVar17 = *(int *)(iVar11 + 0x14);
          if (iVar13 != iVar17) {
            iVar10 = iVar13 + 8;
            do {
              if (iVar10 != *(int *)(iVar10 + -8)) {
                    /* WARNING: Subroutine does not return */
                FUN_2c472680(0);
              }
              iVar13 = iVar13 + 0x18;
              iVar10 = iVar10 + 0x18;
            } while (iVar17 != iVar13);
            iVar17 = *(int *)(iVar11 + 0x10);
          }
          if (iVar17 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,iVar17);
          }
          if (*(int *)(iVar11 + -8) != iVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          iVar4 = iVar4 + 0x28;
          iVar11 = iVar11 + 0x28;
        } while (iVar4 != iVar16);
      }
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,iVar3);
      }
      param_1[2] = (int)(puStack_44 + uStack_40 * 10);
      piVar2 = _LAB_2c58fd58;
      *param_1 = (int)puStack_44;
      param_1[1] = (int)puVar5;
      if (*piVar2 == iStack_2c) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    *puVar5 = puVar5 + 2;
    puVar12 = (undefined1 *)*puVar14;
    uVar8 = puVar14[1];
    if ((puVar12 + uVar8 != (undefined1 *)0x0) && (puVar12 == (undefined1 *)0x0)) break;
    uStack_30 = uVar8;
    if (uVar8 < 0x10) {
      puVar6 = (undefined1 *)*puVar5;
      if (uVar8 == 1) {
        *puVar6 = *puVar12;
        puVar6 = (undefined1 *)*puVar5;
      }
      else if (uVar8 != 0) goto LAB_2c58fad4;
    }
    else {
      puVar6 = (undefined1 *)FUN_2c58d6c0(&uStack_30,0);
      *puVar5 = puVar6;
      puVar5[2] = uStack_30;
LAB_2c58fad4:
      FUN_2c674668(puVar6,puVar12,uVar8);
      puVar6 = (undefined1 *)*puVar5;
    }
    puVar14 = puVar14 + 6;
    puVar5[1] = uStack_30;
    puVar6[uStack_30] = 0;
    puVar5 = puVar5 + 6;
  }
LAB_2c58fd4a:
                    /* WARNING: Subroutine does not return */
  FUN_2c658674(_DAT_2c58fd68);
}

