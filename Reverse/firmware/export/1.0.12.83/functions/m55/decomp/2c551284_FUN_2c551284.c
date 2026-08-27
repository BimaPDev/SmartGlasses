/* FUN_2c551284 @ 0x2c551284 */

void FUN_2c551284(int *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined4 *local_48;
  uint local_44;
  uint local_30;
  int local_2c;
  
  piVar11 = DAT_2c55179c;
  local_2c = *DAT_2c551564;
  piVar2 = (int *)*param_1;
  piVar16 = (int *)param_1[1];
  uVar10 = DAT_2c551568 * ((int)piVar16 - (int)piVar2 >> 3);
  if (uVar10 - DAT_2c55156c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(DAT_2c5517a4);
  }
  uVar8 = uVar10;
  if (uVar10 == 0) {
    uVar8 = 1;
  }
  local_44 = uVar10 + uVar8;
  if (CARRY4(uVar10,uVar8)) {
    local_44 = DAT_2c55156c;
    iVar12 = (int)param_2 - (int)piVar2;
    iVar3 = DAT_2c551798;
LAB_2c5516ca:
    if (*DAT_2c55179c == 0) {
      FUN_2c4723c4();
      *piVar11 = 1;
    }
    local_48 = (undefined4 *)FUN_2c47245c(0,iVar3);
  }
  else {
    iVar12 = (int)param_2 - (int)piVar2;
    if (local_44 != 0) {
      if (DAT_2c55156c <= local_44) {
        local_44 = DAT_2c55156c;
      }
      iVar3 = local_44 * 0x58;
      goto LAB_2c5516ca;
    }
    local_48 = (undefined4 *)0x0;
  }
  uVar1 = DAT_2c551578;
  *(undefined4 *)((int)local_48 + iVar12) = DAT_2c551578;
  iVar3 = (int)local_48 + iVar12 + 0xc;
  *(int *)((int)local_48 + iVar12 + 4) = iVar3;
  puVar13 = *(undefined1 **)(param_3 + 4);
  uVar10 = *(uint *)(param_3 + 8);
  if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0)) goto LAB_2c55177e;
  local_30 = uVar10;
  if (uVar10 < 0x10) {
    if (uVar10 == 1) {
      *(undefined1 *)((int)local_48 + iVar12 + 0xc) = *puVar13;
    }
    else if (uVar10 != 0) goto LAB_2c551742;
  }
  else {
    iVar3 = FUN_2c54f538(&local_30,0);
    *(int *)((int)local_48 + iVar12 + 4) = iVar3;
    *(uint *)((int)local_48 + iVar12 + 0xc) = local_30;
LAB_2c551742:
    FUN_2c674668(iVar3,puVar13,uVar10);
    iVar3 = *(int *)((int)local_48 + iVar12 + 4);
  }
  *(uint *)((int)local_48 + iVar12 + 8) = local_30;
  *(undefined1 *)(iVar3 + local_30) = 0;
  iVar3 = (int)local_48 + iVar12 + 0x24;
  *(int *)((int)local_48 + iVar12 + 0x1c) = iVar3;
  puVar13 = *(undefined1 **)(param_3 + 0x1c);
  uVar10 = *(uint *)(param_3 + 0x20);
  if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0)) goto LAB_2c55177e;
  local_30 = uVar10;
  if (uVar10 < 0x10) {
    if (uVar10 == 1) {
      *(undefined1 *)((int)local_48 + iVar12 + 0x24) = *puVar13;
    }
    else if (uVar10 != 0) goto LAB_2c5516fe;
  }
  else {
    iVar3 = FUN_2c54f538(&local_30,0);
    *(int *)((int)local_48 + iVar12 + 0x1c) = iVar3;
    *(uint *)((int)local_48 + iVar12 + 0x24) = local_30;
LAB_2c5516fe:
    FUN_2c674668(iVar3,puVar13,uVar10);
    iVar3 = *(int *)((int)local_48 + iVar12 + 0x1c);
  }
  *(uint *)((int)local_48 + iVar12 + 0x20) = local_30;
  *(undefined1 *)(iVar3 + local_30) = 0;
  iVar14 = *(int *)(param_3 + 0x34);
  iVar3 = *(int *)(param_3 + 0x38);
  *(undefined4 *)((int)local_48 + iVar12 + 0x34) = 0;
  *(undefined4 *)((int)local_48 + iVar12 + 0x38) = 0;
  iVar3 = iVar3 - iVar14;
  *(undefined4 *)((int)local_48 + iVar12 + 0x3c) = 0;
  piVar11 = DAT_2c551570;
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    if (*DAT_2c551570 == 0) {
      FUN_2c4723c4();
      *piVar11 = 1;
    }
    puVar4 = (undefined4 *)FUN_2c47245c(0,iVar3);
  }
  *(undefined4 **)((int)local_48 + iVar12 + 0x34) = puVar4;
  *(undefined4 **)((int)local_48 + iVar12 + 0x38) = puVar4;
  *(int *)((int)local_48 + iVar12 + 0x3c) = iVar3 + (int)puVar4;
  puVar9 = *(undefined4 **)(param_3 + 0x38);
  for (puVar15 = *(undefined4 **)(param_3 + 0x34); puVar15 != puVar9; puVar15 = puVar15 + 6) {
    *puVar4 = puVar4 + 2;
    puVar13 = (undefined1 *)*puVar15;
    uVar10 = puVar15[1];
    if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0))
    goto LAB_2c55177e;
    local_30 = uVar10;
    if (uVar10 < 0x10) {
      puVar5 = (undefined1 *)*puVar4;
      if (uVar10 == 1) {
        *puVar5 = *puVar13;
        puVar5 = (undefined1 *)*puVar4;
      }
      else if (uVar10 != 0) goto LAB_2c5513f8;
    }
    else {
      puVar5 = (undefined1 *)FUN_2c54f538(&local_30,0);
      *puVar4 = puVar5;
      puVar4[2] = local_30;
LAB_2c5513f8:
      FUN_2c674668(puVar5,puVar13,uVar10);
      puVar5 = (undefined1 *)*puVar4;
    }
    puVar4[1] = local_30;
    puVar5[local_30] = 0;
    puVar4 = puVar4 + 6;
  }
  iVar3 = (int)local_48 + iVar12 + 0x48;
  *(undefined4 **)((int)local_48 + iVar12 + 0x38) = puVar4;
  *(int *)((int)local_48 + iVar12 + 0x40) = iVar3;
  puVar13 = *(undefined1 **)(param_3 + 0x40);
  uVar10 = *(uint *)(param_3 + 0x44);
  if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0)) {
LAB_2c55177e:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c5517a0);
  }
  local_30 = uVar10;
  if (uVar10 < 0x10) {
    if (uVar10 == 1) {
      *(undefined1 *)((int)local_48 + iVar12 + 0x48) = *puVar13;
      goto LAB_2c551442;
    }
    if (uVar10 == 0) goto LAB_2c551442;
  }
  else {
    iVar3 = FUN_2c54f538(&local_30,0);
    *(int *)((int)local_48 + iVar12 + 0x40) = iVar3;
    *(uint *)((int)local_48 + iVar12 + 0x48) = local_30;
  }
  FUN_2c674668(iVar3,puVar13,uVar10);
  iVar3 = *(int *)((int)local_48 + iVar12 + 0x40);
LAB_2c551442:
  *(uint *)((int)local_48 + iVar12 + 0x44) = local_30;
  *(undefined1 *)(iVar3 + local_30) = 0;
  puVar4 = local_48;
  if (param_2 != piVar2) {
    piVar6 = piVar2 + 3;
    piVar11 = piVar2;
    do {
      *puVar4 = uVar1;
      puVar4[1] = puVar4 + 3;
      if ((int *)piVar11[1] == piVar6) {
        iVar14 = piVar6[1];
        iVar12 = piVar6[2];
        iVar3 = piVar6[3];
        puVar4[3] = *piVar6;
        puVar4[4] = iVar14;
        puVar4[5] = iVar12;
        puVar4[6] = iVar3;
      }
      else {
        puVar4[1] = (int *)piVar11[1];
        puVar4[3] = piVar11[3];
      }
      puVar4[2] = piVar11[2];
      *(undefined1 *)(piVar11 + 3) = 0;
      piVar11[1] = (int)piVar6;
      piVar11[2] = 0;
      puVar4[7] = puVar4 + 9;
      if ((int *)piVar11[7] == piVar11 + 9) {
        iVar14 = piVar11[10];
        iVar12 = piVar11[0xb];
        iVar3 = piVar11[0xc];
        puVar4[9] = piVar11[9];
        puVar4[10] = iVar14;
        puVar4[0xb] = iVar12;
        puVar4[0xc] = iVar3;
      }
      else {
        puVar4[7] = (int *)piVar11[7];
        puVar4[9] = piVar11[9];
      }
      puVar4[8] = piVar11[8];
      *(undefined1 *)(piVar11 + 9) = 0;
      piVar11[7] = (int)(piVar11 + 9);
      piVar11[8] = 0;
      puVar4[0xd] = piVar11[0xd];
      puVar4[0xe] = piVar11[0xe];
      puVar4[0xf] = piVar11[0xf];
      piVar11[0xd] = 0;
      piVar11[0xe] = 0;
      piVar11[0xf] = 0;
      puVar4[0x10] = puVar4 + 0x12;
      if ((int *)piVar11[0x10] == piVar11 + 0x12) {
        iVar14 = piVar11[0x13];
        iVar12 = piVar11[0x14];
        iVar3 = piVar11[0x15];
        puVar4[0x12] = piVar11[0x12];
        puVar4[0x13] = iVar14;
        puVar4[0x14] = iVar12;
        puVar4[0x15] = iVar3;
      }
      else {
        puVar4[0x10] = (int *)piVar11[0x10];
        puVar4[0x12] = piVar11[0x12];
      }
      piVar7 = piVar11 + 0x16;
      piVar6 = piVar6 + 0x16;
      puVar4[0x11] = piVar11[0x11];
      *(undefined1 *)(piVar11 + 0x12) = 0;
      piVar11[0x10] = (int)(piVar11 + 0x12);
      piVar11[0x11] = 0;
      puVar4 = puVar4 + 0x16;
      piVar11 = piVar7;
    } while (piVar7 != param_2);
    puVar4 = local_48 +
             (DAT_2c551574 * ((uint)((int)param_2 + (-0x58 - (int)piVar2)) >> 3) & 0x1fffffff) *
             0x16 + 0x16;
  }
  puVar4 = puVar4 + 0x16;
  piVar11 = piVar2;
  if (param_2 != piVar16) {
    piVar7 = param_2 + 3;
    puVar15 = puVar4;
    piVar6 = param_2;
    do {
      *puVar15 = uVar1;
      puVar15[1] = puVar15 + 3;
      if ((int *)piVar6[1] == piVar7) {
        iVar14 = piVar7[1];
        iVar12 = piVar7[2];
        iVar3 = piVar7[3];
        puVar15[3] = *piVar7;
        puVar15[4] = iVar14;
        puVar15[5] = iVar12;
        puVar15[6] = iVar3;
      }
      else {
        puVar15[1] = (int *)piVar6[1];
        puVar15[3] = piVar6[3];
      }
      puVar15[2] = piVar6[2];
      *(undefined1 *)(piVar6 + 3) = 0;
      piVar6[1] = (int)piVar7;
      piVar6[2] = 0;
      puVar15[7] = puVar15 + 9;
      if (piVar6 + 9 == (int *)piVar6[7]) {
        iVar12 = piVar6[10];
        iVar14 = piVar6[0xb];
        iVar3 = piVar6[0xc];
        puVar15[9] = piVar6[9];
        puVar15[10] = iVar12;
        puVar15[0xb] = iVar14;
        puVar15[0xc] = iVar3;
      }
      else {
        puVar15[7] = (int *)piVar6[7];
        puVar15[9] = piVar6[9];
      }
      puVar15[8] = piVar6[8];
      piVar6[7] = (int)(piVar6 + 9);
      piVar6[8] = 0;
      *(undefined1 *)(piVar6 + 9) = 0;
      puVar15[0xd] = piVar6[0xd];
      puVar15[0xe] = piVar6[0xe];
      puVar15[0xf] = piVar6[0xf];
      piVar6[0xd] = 0;
      piVar6[0xe] = 0;
      piVar6[0xf] = 0;
      puVar15[0x10] = puVar15 + 0x12;
      if (piVar6 + 0x12 == (int *)piVar6[0x10]) {
        iVar12 = piVar6[0x13];
        iVar14 = piVar6[0x14];
        iVar3 = piVar6[0x15];
        puVar15[0x12] = piVar6[0x12];
        puVar15[0x13] = iVar12;
        puVar15[0x14] = iVar14;
        puVar15[0x15] = iVar3;
      }
      else {
        puVar15[0x10] = (int *)piVar6[0x10];
        puVar15[0x12] = piVar6[0x12];
      }
      piVar7 = piVar7 + 0x16;
      puVar15[0x11] = piVar6[0x11];
      *(undefined1 *)(piVar6 + 0x12) = 0;
      piVar6[0x10] = (int)(piVar6 + 0x12);
      piVar6[0x11] = 0;
      piVar6 = piVar6 + 0x16;
      puVar15 = puVar15 + 0x16;
    } while (piVar6 != piVar16);
    puVar4 = puVar4 + (DAT_2c551790 * ((uint)((int)piVar16 + (-0x58 - (int)param_2)) >> 3) &
                      0x1fffffff) * 0x16 + 0x16;
  }
  for (; piVar11 != piVar16; piVar11 = piVar11 + 0x16) {
    (**(code **)(*piVar11 + 4))(piVar11);
  }
  if (piVar2 == (int *)0x0) {
    *param_1 = (int)local_48;
    param_1[1] = (int)puVar4;
    param_1[2] = (int)(local_48 + local_44 * 0x16);
    if (*DAT_2c551794 != local_2c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,piVar2);
}

