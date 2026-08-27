/* FUN_2c54a8e8 @ 0x2c54a8e8 */

void FUN_2c54a8e8(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  int iVar17;
  undefined4 *local_3c;
  uint local_38;
  
  piVar11 = DAT_2c54abf8;
  piVar13 = (int *)*param_1;
  piVar12 = (int *)param_1[1];
  uVar9 = DAT_2c54abe8 * ((int)piVar12 - (int)piVar13 >> 2);
  if (uVar9 - DAT_2c54abec == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(DAT_2c54ac7c);
  }
  uVar5 = uVar9;
  if (uVar9 == 0) {
    uVar5 = 1;
  }
  local_38 = uVar5 + uVar9;
  if (CARRY4(uVar5,uVar9)) {
    local_38 = DAT_2c54abec;
    iVar14 = (int)param_2 - (int)piVar13;
    iVar2 = DAT_2c54abf4;
LAB_2c54ab8c:
    if (*DAT_2c54abf8 == 0) {
      FUN_2c4723c4();
      *piVar11 = 1;
    }
    local_3c = (undefined4 *)FUN_2c47245c(0,iVar2);
  }
  else {
    iVar14 = (int)param_2 - (int)piVar13;
    if (local_38 != 0) {
      if (DAT_2c54abec <= local_38) {
        local_38 = DAT_2c54abec;
      }
      iVar2 = local_38 * 0x3c;
      goto LAB_2c54ab8c;
    }
    local_3c = (undefined4 *)0x0;
  }
  uVar1 = DAT_2c54abfc;
  *(undefined4 *)((int)local_3c + iVar14) = DAT_2c54abfc;
  iVar2 = (int)local_3c + iVar14 + 0x14;
  uVar6 = *(undefined4 *)(param_3 + 4);
  uVar10 = *(undefined4 *)(param_3 + 8);
  *(int *)((int)local_3c + iVar14 + 0xc) = iVar2;
  *(undefined4 *)((int)local_3c + iVar14 + 4) = uVar6;
  *(undefined4 *)((int)local_3c + iVar14 + 8) = uVar10;
  puVar16 = *(undefined1 **)(param_3 + 0xc);
  uVar9 = *(uint *)(param_3 + 0x10);
  if ((puVar16 + uVar9 != (undefined1 *)0x0) && (puVar16 == (undefined1 *)0x0)) goto LAB_2c54ac6c;
  if (uVar9 < 0x10) {
    if (uVar9 == 1) {
      *(undefined1 *)((int)local_3c + iVar14 + 0x14) = *puVar16;
    }
    else if (uVar9 != 0) goto LAB_2c54ac1c;
  }
  else {
    if ((int)uVar9 < 0) goto LAB_2c54ac72;
    if (*DAT_2c54ac78 == 0) {
      FUN_2c4723c4();
      *DAT_2c54ac78 = 1;
    }
    iVar2 = FUN_2c47245c(0,uVar9 + 1);
    *(uint *)((int)local_3c + iVar14 + 0x14) = uVar9;
    *(int *)((int)local_3c + iVar14 + 0xc) = iVar2;
LAB_2c54ac1c:
    FUN_2c674668(iVar2,puVar16,uVar9);
    iVar2 = *(int *)((int)local_3c + iVar14 + 0xc);
  }
  *(uint *)((int)local_3c + iVar14 + 0x10) = uVar9;
  *(undefined1 *)(iVar2 + uVar9) = 0;
  puVar16 = (undefined1 *)((int)local_3c + iVar14 + 0x2c);
  *(undefined1 **)((int)local_3c + iVar14 + 0x24) = puVar16;
  piVar11 = DAT_2c54abf8;
  puVar15 = *(undefined1 **)(param_3 + 0x24);
  uVar9 = *(uint *)(param_3 + 0x28);
  if ((puVar15 + uVar9 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0)) {
LAB_2c54ac6c:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c54ac80);
  }
  if (uVar9 < 0x10) {
    if (uVar9 != 1) {
      if (uVar9 == 0) {
        *(undefined4 *)((int)local_3c + iVar14 + 0x28) = 0;
        *puVar16 = 0;
        goto joined_r0x2c54abb2;
      }
      goto LAB_2c54abdc;
    }
    *(undefined1 *)((int)local_3c + iVar14 + 0x2c) = *puVar15;
  }
  else {
    if ((int)uVar9 < 0) {
LAB_2c54ac72:
                    /* WARNING: Subroutine does not return */
      FUN_2c658680(DAT_2c54ac84);
    }
    if (*DAT_2c54abf8 == 0) {
      FUN_2c4723c4();
      *piVar11 = 1;
    }
    puVar16 = (undefined1 *)FUN_2c47245c(0,uVar9 + 1);
    *(uint *)((int)local_3c + iVar14 + 0x2c) = uVar9;
    *(undefined1 **)((int)local_3c + iVar14 + 0x24) = puVar16;
LAB_2c54abdc:
    FUN_2c674668(puVar16,puVar15,uVar9);
    puVar16 = *(undefined1 **)((int)local_3c + iVar14 + 0x24);
  }
  *(uint *)((int)local_3c + iVar14 + 0x28) = uVar9;
  puVar16[uVar9] = 0;
joined_r0x2c54abb2:
  puVar7 = local_3c;
  if (param_2 != piVar13) {
    piVar4 = piVar13 + 5;
    piVar11 = piVar13;
    do {
      *puVar7 = uVar1;
      puVar7[1] = piVar11[1];
      puVar7[2] = piVar11[2];
      puVar7[3] = puVar7 + 5;
      if ((int *)piVar11[3] == piVar4) {
        iVar14 = piVar4[1];
        iVar17 = piVar4[2];
        iVar2 = piVar4[3];
        puVar7[5] = *piVar4;
        puVar7[6] = iVar14;
        puVar7[7] = iVar17;
        puVar7[8] = iVar2;
      }
      else {
        puVar7[3] = (int *)piVar11[3];
        puVar7[5] = piVar11[5];
      }
      puVar7[4] = piVar11[4];
      *(undefined1 *)(piVar11 + 5) = 0;
      piVar11[3] = (int)piVar4;
      piVar11[4] = 0;
      puVar7[9] = puVar7 + 0xb;
      if (piVar11 + 0xb == (int *)piVar11[9]) {
        iVar17 = piVar11[0xc];
        iVar14 = piVar11[0xd];
        iVar2 = piVar11[0xe];
        puVar7[0xb] = piVar11[0xb];
        puVar7[0xc] = iVar17;
        puVar7[0xd] = iVar14;
        puVar7[0xe] = iVar2;
      }
      else {
        puVar7[9] = (int *)piVar11[9];
        puVar7[0xb] = piVar11[0xb];
      }
      piVar3 = piVar11 + 0xf;
      piVar4 = piVar4 + 0xf;
      puVar7[10] = piVar11[10];
      *(undefined1 *)(piVar11 + 0xb) = 0;
      piVar11[9] = (int)(piVar11 + 0xb);
      piVar11[10] = 0;
      puVar7 = puVar7 + 0xf;
      piVar11 = piVar3;
    } while (piVar3 != param_2);
    puVar7 = local_3c +
             ((DAT_2c54abf0 * ((uint)((int)param_2 + (-0x3c - (int)piVar13)) >> 2) & 0x3fffffff) + 1
             ) * 0xf;
  }
  puVar7 = puVar7 + 0xf;
  piVar11 = piVar13;
  if (param_2 != piVar12) {
    piVar3 = param_2 + 5;
    puVar8 = puVar7;
    piVar4 = param_2;
    do {
      *puVar8 = uVar1;
      puVar8[1] = piVar4[1];
      iVar2 = piVar4[2];
      puVar8[3] = puVar8 + 5;
      puVar8[2] = iVar2;
      if ((int *)piVar4[3] == piVar3) {
        iVar17 = piVar3[1];
        iVar14 = piVar3[2];
        iVar2 = piVar3[3];
        puVar8[5] = *piVar3;
        puVar8[6] = iVar17;
        puVar8[7] = iVar14;
        puVar8[8] = iVar2;
      }
      else {
        puVar8[3] = (int *)piVar4[3];
        puVar8[5] = piVar4[5];
      }
      puVar8[4] = piVar4[4];
      *(undefined1 *)(piVar4 + 5) = 0;
      piVar4[3] = (int)piVar3;
      piVar4[4] = 0;
      puVar8[9] = puVar8 + 0xb;
      if ((int *)piVar4[9] == piVar4 + 0xb) {
        iVar2 = piVar4[0xc];
        iVar17 = piVar4[0xd];
        iVar14 = piVar4[0xe];
        puVar8[0xb] = piVar4[0xb];
        puVar8[0xc] = iVar2;
        puVar8[0xd] = iVar17;
        puVar8[0xe] = iVar14;
      }
      else {
        puVar8[9] = (int *)piVar4[9];
        puVar8[0xb] = piVar4[0xb];
      }
      piVar3 = piVar3 + 0xf;
      puVar8[10] = piVar4[10];
      *(undefined1 *)(piVar4 + 0xb) = 0;
      piVar4[9] = (int)(piVar4 + 0xb);
      piVar4[10] = 0;
      piVar4 = piVar4 + 0xf;
      puVar8 = puVar8 + 0xf;
    } while (piVar4 != piVar12);
    puVar7 = puVar7 + ((DAT_2c54abf0 * ((uint)((int)piVar12 + (-0x3c - (int)param_2)) >> 2) &
                       0x3fffffff) + 1) * 0xf;
  }
  for (; piVar11 != piVar12; piVar11 = piVar11 + 0xf) {
    (**(code **)(*piVar11 + 4))(piVar11);
  }
  if (piVar13 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar13);
  }
  *param_1 = local_3c;
  param_1[1] = puVar7;
  param_1[2] = local_3c + local_38 * 0xf;
  return;
}

