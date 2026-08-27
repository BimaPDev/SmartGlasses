/* FUN_2c562010 @ 0x2c562010 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c562010(int *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  undefined4 *puStack_44;
  uint uStack_40;
  uint uStack_30;
  int iStack_2c;
  
  piVar11 = _LAB_2c5625dc;
  iStack_2c = *_LAB_2c562330;
  piVar2 = (int *)*param_1;
  piVar18 = (int *)param_1[1];
  uVar10 = _LAB_2c562334 * ((int)piVar18 - (int)piVar2 >> 3);
  if (uVar10 - _LAB_2c562338 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c5625e4);
  }
  uVar7 = uVar10;
  if (uVar10 == 0) {
    uVar7 = 1;
  }
  uStack_40 = uVar10 + uVar7;
  if (CARRY4(uVar10,uVar7)) {
    uStack_40 = _LAB_2c562338;
    iVar14 = (int)param_2 - (int)piVar2;
    iVar3 = _DAT_2c5625d8;
LAB_2c562560:
    if (*_LAB_2c5625dc == 0) {
      FUN_2c4723c4();
      *piVar11 = 1;
    }
    puStack_44 = (undefined4 *)FUN_2c47245c(0,iVar3);
  }
  else {
    iVar14 = (int)param_2 - (int)piVar2;
    if (uStack_40 != 0) {
      if (_LAB_2c562338 <= uStack_40) {
        uStack_40 = _LAB_2c562338;
      }
      iVar3 = uStack_40 * 0x28;
      goto LAB_2c562560;
    }
    puStack_44 = (undefined4 *)0x0;
  }
  uVar1 = _LAB_2c562344;
  *(undefined4 *)((int)puStack_44 + iVar14) = _LAB_2c562344;
  iVar3 = (int)puStack_44 + iVar14 + 0xc;
  *(int *)((int)puStack_44 + iVar14 + 4) = iVar3;
  puVar15 = *(undefined1 **)(param_3 + 4);
  uVar10 = *(uint *)(param_3 + 8);
  if ((puVar15 + uVar10 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0)) {
LAB_2c5625be:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c5625e0);
  }
  uStack_30 = uVar10;
  if (uVar10 < 0x10) {
    if (uVar10 == 1) {
      *(undefined1 *)((int)puStack_44 + iVar14 + 0xc) = *puVar15;
      goto LAB_2c5620a0;
    }
    if (uVar10 == 0) goto LAB_2c5620a0;
  }
  else {
    iVar3 = FUN_2c560bac(&uStack_30,0);
    *(int *)((int)puStack_44 + iVar14 + 4) = iVar3;
    *(uint *)((int)puStack_44 + iVar14 + 0xc) = uStack_30;
  }
  FUN_2c674668(iVar3,puVar15,uVar10);
  iVar3 = *(int *)((int)puStack_44 + iVar14 + 4);
LAB_2c5620a0:
  *(uint *)((int)puStack_44 + iVar14 + 8) = uStack_30;
  *(undefined1 *)(iVar3 + uStack_30) = 0;
  iVar3 = *(int *)(param_3 + 0x1c);
  iVar16 = *(int *)(param_3 + 0x20);
  *(undefined4 *)((int)puStack_44 + iVar14 + 0x1c) = 0;
  *(undefined4 *)((int)puStack_44 + iVar14 + 0x20) = 0;
  iVar16 = iVar16 - iVar3;
  *(undefined4 *)((int)puStack_44 + iVar14 + 0x24) = 0;
  piVar11 = _LAB_2c56233c;
  if (iVar16 == 0) {
    iVar3 = 0;
  }
  else {
    if (*_LAB_2c56233c == 0) {
      FUN_2c4723c4();
      *piVar11 = 1;
    }
    iVar3 = FUN_2c47245c(0,iVar16);
  }
  *(int *)((int)puStack_44 + iVar14 + 0x1c) = iVar3;
  *(int *)((int)puStack_44 + iVar14 + 0x20) = iVar3;
  *(int *)((int)puStack_44 + iVar14 + 0x24) = iVar16 + iVar3;
  iVar16 = *(int *)(param_3 + 0x20);
  if (*(int *)(param_3 + 0x1c) != iVar16) {
    iVar13 = iVar3 + 0xb0;
    iVar17 = *(int *)(param_3 + 0x1c);
    do {
      iVar4 = iVar3 + 0xc;
      *(undefined4 *)(iVar13 + -0xb0) = _LAB_2c562340;
      *(int *)(iVar13 + -0xac) = iVar4;
      puVar15 = *(undefined1 **)(iVar17 + 4);
      uVar10 = *(uint *)(iVar17 + 8);
      if ((puVar15 + uVar10 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0))
      goto LAB_2c5625be;
      uStack_30 = uVar10;
      if (uVar10 < 0x10) {
        if (uVar10 == 1) {
          *(undefined1 *)(iVar13 + -0xa4) = *puVar15;
        }
        else if (uVar10 != 0) goto LAB_2c5622da;
      }
      else {
        iVar4 = FUN_2c560bac(&uStack_30,0);
        *(int *)(iVar13 + -0xac) = iVar4;
        *(uint *)(iVar13 + -0xa4) = uStack_30;
LAB_2c5622da:
        FUN_2c674668(iVar4,puVar15,uVar10);
        iVar4 = *(int *)(iVar13 + -0xac);
      }
      *(uint *)(iVar13 + -0xa8) = uStack_30;
      *(undefined1 *)(iVar4 + uStack_30) = 0;
      iVar4 = iVar3 + 0x24;
      *(int *)(iVar13 + -0x94) = iVar4;
      puVar15 = *(undefined1 **)(iVar17 + 0x1c);
      uVar10 = *(uint *)(iVar17 + 0x20);
      if ((puVar15 + uVar10 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0))
      goto LAB_2c5625be;
      uStack_30 = uVar10;
      if (uVar10 < 0x10) {
        if (uVar10 == 1) {
          *(undefined1 *)(iVar13 + -0x8c) = *puVar15;
        }
        else if (uVar10 != 0) goto LAB_2c5622fe;
      }
      else {
        iVar4 = FUN_2c560bac(&uStack_30,0);
        *(int *)(iVar13 + -0x94) = iVar4;
        *(uint *)(iVar13 + -0x8c) = uStack_30;
LAB_2c5622fe:
        FUN_2c674668(iVar4,puVar15,uVar10);
        iVar4 = *(int *)(iVar13 + -0x94);
      }
      *(uint *)(iVar13 + -0x90) = uStack_30;
      *(undefined1 *)(iVar4 + uStack_30) = 0;
      iVar4 = iVar3 + 0x3c;
      *(int *)(iVar13 + -0x7c) = iVar4;
      puVar15 = *(undefined1 **)(iVar17 + 0x34);
      uVar10 = *(uint *)(iVar17 + 0x38);
      if ((puVar15 + uVar10 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0))
      goto LAB_2c5625be;
      uStack_30 = uVar10;
      if (uVar10 < 0x10) {
        if (uVar10 == 1) {
          *(undefined1 *)(iVar13 + -0x74) = *puVar15;
        }
        else if (uVar10 != 0) goto LAB_2c56235e;
      }
      else {
        iVar4 = FUN_2c560bac(&uStack_30,0);
        *(int *)(iVar13 + -0x7c) = iVar4;
        *(uint *)(iVar13 + -0x74) = uStack_30;
LAB_2c56235e:
        FUN_2c674668(iVar4,puVar15,uVar10);
        iVar4 = *(int *)(iVar13 + -0x7c);
      }
      *(uint *)(iVar13 + -0x78) = uStack_30;
      *(undefined1 *)(iVar4 + uStack_30) = 0;
      iVar4 = iVar3 + 0x54;
      *(int *)(iVar13 + -100) = iVar4;
      puVar15 = *(undefined1 **)(iVar17 + 0x4c);
      uVar10 = *(uint *)(iVar17 + 0x50);
      if ((puVar15 + uVar10 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0))
      goto LAB_2c5625be;
      uStack_30 = uVar10;
      if (uVar10 < 0x10) {
        if (uVar10 == 1) {
          *(undefined1 *)(iVar13 + -0x5c) = *puVar15;
        }
        else if (uVar10 != 0) goto LAB_2c562322;
      }
      else {
        iVar4 = FUN_2c560bac(&uStack_30,0);
        *(int *)(iVar13 + -100) = iVar4;
        *(uint *)(iVar13 + -0x5c) = uStack_30;
LAB_2c562322:
        FUN_2c674668(iVar4,puVar15,uVar10);
        iVar4 = *(int *)(iVar13 + -100);
      }
      *(uint *)(iVar13 + -0x60) = uStack_30;
      *(undefined1 *)(iVar4 + uStack_30) = 0;
      iVar4 = iVar3 + 0x6c;
      *(int *)(iVar13 + -0x4c) = iVar4;
      puVar15 = *(undefined1 **)(iVar17 + 100);
      uVar10 = *(uint *)(iVar17 + 0x68);
      if ((puVar15 + uVar10 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0))
      goto LAB_2c5625be;
      uStack_30 = uVar10;
      if (uVar10 < 0x10) {
        if (uVar10 == 1) {
          *(undefined1 *)(iVar13 + -0x44) = *puVar15;
        }
        else if (uVar10 != 0) goto LAB_2c5623ca;
      }
      else {
        iVar4 = FUN_2c560bac(&uStack_30,0);
        *(int *)(iVar13 + -0x4c) = iVar4;
        *(uint *)(iVar13 + -0x44) = uStack_30;
LAB_2c5623ca:
        FUN_2c674668(iVar4,puVar15,uVar10);
        iVar4 = *(int *)(iVar13 + -0x4c);
      }
      *(uint *)(iVar13 + -0x48) = uStack_30;
      *(undefined1 *)(iVar4 + uStack_30) = 0;
      iVar4 = iVar3 + 0x84;
      *(int *)(iVar13 + -0x34) = iVar4;
      puVar15 = *(undefined1 **)(iVar17 + 0x7c);
      uVar10 = *(uint *)(iVar17 + 0x80);
      if ((puVar15 + uVar10 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0))
      goto LAB_2c5625be;
      uStack_30 = uVar10;
      if (uVar10 < 0x10) {
        if (uVar10 == 1) {
          *(undefined1 *)(iVar13 + -0x2c) = *puVar15;
        }
        else if (uVar10 != 0) goto LAB_2c5623a6;
      }
      else {
        iVar4 = FUN_2c560bac(&uStack_30,0);
        *(int *)(iVar13 + -0x34) = iVar4;
        *(uint *)(iVar13 + -0x2c) = uStack_30;
LAB_2c5623a6:
        FUN_2c674668(iVar4,puVar15,uVar10);
        iVar4 = *(int *)(iVar13 + -0x34);
      }
      *(uint *)(iVar13 + -0x30) = uStack_30;
      *(undefined1 *)(iVar4 + uStack_30) = 0;
      iVar4 = iVar3 + 0x9c;
      *(int *)(iVar13 + -0x1c) = iVar4;
      puVar15 = *(undefined1 **)(iVar17 + 0x94);
      uVar10 = *(uint *)(iVar17 + 0x98);
      if ((puVar15 + uVar10 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0))
      goto LAB_2c5625be;
      uStack_30 = uVar10;
      if (uVar10 < 0x10) {
        if (uVar10 == 1) {
          *(undefined1 *)(iVar13 + -0x14) = *puVar15;
        }
        else if (uVar10 != 0) goto LAB_2c562382;
      }
      else {
        iVar4 = FUN_2c560bac(&uStack_30,0);
        *(int *)(iVar13 + -0x1c) = iVar4;
        *(uint *)(iVar13 + -0x14) = uStack_30;
LAB_2c562382:
        FUN_2c674668(iVar4,puVar15,uVar10);
        iVar4 = *(int *)(iVar13 + -0x1c);
      }
      *(uint *)(iVar13 + -0x18) = uStack_30;
      *(undefined1 *)(iVar4 + uStack_30) = 0;
      iVar4 = iVar17 + 0xbc;
      iVar3 = iVar3 + 0xbc;
      *(undefined4 *)(iVar13 + -4) = *(undefined4 *)(iVar17 + 0xac);
      FUN_2c550910(iVar13,iVar17 + 0xb0);
      iVar13 = iVar13 + 0xbc;
      iVar17 = iVar4;
    } while (iVar16 != iVar4);
  }
  *(int *)((int)puStack_44 + iVar14 + 0x20) = iVar3;
  puVar8 = puStack_44;
  if (param_2 != piVar2) {
    piVar5 = piVar2 + 3;
    piVar11 = piVar2;
    do {
      *puVar8 = uVar1;
      puVar8[1] = puVar8 + 3;
      if ((int *)piVar11[1] == piVar5) {
        iVar16 = piVar5[1];
        iVar14 = piVar5[2];
        iVar3 = piVar5[3];
        puVar8[3] = *piVar5;
        puVar8[4] = iVar16;
        puVar8[5] = iVar14;
        puVar8[6] = iVar3;
      }
      else {
        puVar8[1] = (int *)piVar11[1];
        puVar8[3] = piVar11[3];
      }
      piVar6 = piVar11 + 10;
      puVar8[2] = piVar11[2];
      *(undefined1 *)(piVar11 + 3) = 0;
      piVar11[1] = (int)piVar5;
      piVar11[2] = 0;
      puVar8[7] = piVar11[7];
      piVar5 = piVar5 + 10;
      puVar8[8] = piVar11[8];
      puVar8[9] = piVar11[9];
      piVar11[7] = 0;
      piVar11[8] = 0;
      piVar11[9] = 0;
      puVar8 = puVar8 + 10;
      piVar11 = piVar6;
    } while (piVar6 != param_2);
    puVar8 = puStack_44 +
             ((_LAB_2c5625d0 * ((uint)((int)param_2 + (-0x28 - (int)piVar2)) >> 3) & 0x1fffffff) + 1
             ) * 10;
  }
  puVar8 = puVar8 + 10;
  piVar11 = piVar2;
  if (param_2 != piVar18) {
    piVar6 = param_2 + 3;
    puVar9 = puVar8;
    piVar5 = param_2;
    do {
      *puVar9 = uVar1;
      puVar9[1] = puVar9 + 3;
      if ((int *)piVar5[1] == piVar6) {
        iVar16 = piVar6[1];
        iVar14 = piVar6[2];
        iVar3 = piVar6[3];
        puVar9[3] = *piVar6;
        puVar9[4] = iVar16;
        puVar9[5] = iVar14;
        puVar9[6] = iVar3;
      }
      else {
        puVar9[1] = (int *)piVar5[1];
        puVar9[3] = piVar5[3];
      }
      puVar9[2] = piVar5[2];
      *(undefined1 *)(piVar5 + 3) = 0;
      piVar5[1] = (int)piVar6;
      piVar5[2] = 0;
      puVar9[7] = piVar5[7];
      piVar12 = piVar5 + 10;
      piVar6 = piVar6 + 10;
      puVar9[8] = piVar5[8];
      puVar9[9] = piVar5[9];
      piVar5[7] = 0;
      piVar5[8] = 0;
      piVar5[9] = 0;
      puVar9 = puVar9 + 10;
      piVar5 = piVar12;
    } while (piVar12 != piVar18);
    puVar8 = puVar8 + ((_LAB_2c5625d0 * ((uint)((int)piVar18 + (-0x28 - (int)param_2)) >> 3) &
                       0x1fffffff) + 1) * 10;
  }
  for (; piVar11 != piVar18; piVar11 = piVar11 + 10) {
    (**(code **)(*piVar11 + 4))(piVar11);
  }
  if (piVar2 == (int *)0x0) {
    *param_1 = (int)puStack_44;
    param_1[1] = (int)puVar8;
    param_1[2] = (int)(puStack_44 + uStack_40 * 10);
    if (*_LAB_2c5625d4 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,piVar2);
}

