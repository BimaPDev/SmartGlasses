/* FUN_2c562e6c @ 0x2c562e6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c562e6c(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 *local_38;
  undefined4 *local_34;
  int local_30;
  
  piVar8 = _LAB_2c56323c;
  piVar12 = (int *)*param_1;
  piVar13 = (int *)param_1[1];
  uVar3 = DAT_2c56313c * ((int)piVar13 - (int)piVar12 >> 3);
  if (uVar3 - DAT_2c563140 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c563238);
  }
  iVar10 = (int)param_2 - (int)piVar12;
  uVar7 = uVar3;
  if (uVar3 == 0) {
    uVar7 = 1;
  }
  uVar4 = uVar3 + uVar7;
  local_30 = DAT_2c563240;
  if (!CARRY4(uVar3,uVar7)) {
    if (uVar4 == 0) {
      local_38 = (undefined4 *)0x58;
      local_34 = (undefined4 *)0x0;
      local_30 = 0;
      goto LAB_2c562eb0;
    }
    if (DAT_2c563140 <= uVar4) {
      uVar4 = DAT_2c563140;
    }
    local_30 = uVar4 * 0x58;
  }
  if (*_LAB_2c56323c == 0) {
    FUN_2c4723c4();
    *piVar8 = 1;
  }
  local_34 = (undefined4 *)FUN_2c47245c(0,local_30);
  local_30 = (int)local_34 + local_30;
  local_38 = local_34 + 0x16;
LAB_2c562eb0:
  uVar1 = DAT_2c563148;
  *(undefined4 *)((int)local_34 + iVar10) = DAT_2c563148;
  *(int *)((int)local_34 + iVar10 + 4) = (int)local_34 + iVar10 + 0xc;
  if (*(int *)(param_3 + 4) == param_3 + 0xc) {
    uVar16 = *(undefined4 *)(param_3 + 0x10);
    uVar11 = *(undefined4 *)(param_3 + 0x14);
    uVar5 = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)((int)local_34 + iVar10 + 0xc) = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)((int)local_34 + iVar10 + 0x10) = uVar16;
    *(undefined4 *)((int)local_34 + iVar10 + 0x14) = uVar11;
    *(undefined4 *)((int)local_34 + iVar10 + 0x18) = uVar5;
  }
  else {
    uVar5 = *(undefined4 *)(param_3 + 0xc);
    *(int *)((int)local_34 + iVar10 + 4) = *(int *)(param_3 + 4);
    *(undefined4 *)((int)local_34 + iVar10 + 0xc) = uVar5;
  }
  *(int *)(param_3 + 4) = param_3 + 0xc;
  *(undefined4 *)((int)local_34 + iVar10 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined1 *)(param_3 + 0xc) = 0;
  *(int *)((int)local_34 + iVar10 + 0x1c) = (int)local_34 + iVar10 + 0x24;
  if (*(int *)(param_3 + 0x1c) == param_3 + 0x24) {
    uVar16 = *(undefined4 *)(param_3 + 0x28);
    uVar11 = *(undefined4 *)(param_3 + 0x2c);
    uVar5 = *(undefined4 *)(param_3 + 0x30);
    *(undefined4 *)((int)local_34 + iVar10 + 0x24) = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)((int)local_34 + iVar10 + 0x28) = uVar16;
    *(undefined4 *)((int)local_34 + iVar10 + 0x2c) = uVar11;
    *(undefined4 *)((int)local_34 + iVar10 + 0x30) = uVar5;
  }
  else {
    uVar5 = *(undefined4 *)(param_3 + 0x24);
    *(int *)((int)local_34 + iVar10 + 0x1c) = *(int *)(param_3 + 0x1c);
    *(undefined4 *)((int)local_34 + iVar10 + 0x24) = uVar5;
  }
  *(int *)(param_3 + 0x1c) = param_3 + 0x24;
  uVar5 = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_3 + 0x20) = 0;
  *(undefined4 *)((int)local_34 + iVar10 + 0x20) = uVar5;
  *(undefined1 *)(param_3 + 0x24) = 0;
  *(undefined4 *)((int)local_34 + iVar10 + 0x34) = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 *)(param_3 + 0x34) = 0;
  *(undefined4 *)((int)local_34 + iVar10 + 0x38) = *(undefined4 *)(param_3 + 0x38);
  *(undefined4 *)(param_3 + 0x38) = 0;
  uVar5 = *(undefined4 *)(param_3 + 0x3c);
  *(undefined4 *)(param_3 + 0x3c) = 0;
  *(undefined4 *)((int)local_34 + iVar10 + 0x3c) = uVar5;
  *(int *)((int)local_34 + iVar10 + 0x40) = (int)local_34 + iVar10 + 0x48;
  if (*(int *)(param_3 + 0x40) == param_3 + 0x48) {
    uVar16 = *(undefined4 *)(param_3 + 0x4c);
    uVar11 = *(undefined4 *)(param_3 + 0x50);
    uVar5 = *(undefined4 *)(param_3 + 0x54);
    *(undefined4 *)((int)local_34 + iVar10 + 0x48) = *(undefined4 *)(param_3 + 0x48);
    *(undefined4 *)((int)local_34 + iVar10 + 0x4c) = uVar16;
    *(undefined4 *)((int)local_34 + iVar10 + 0x50) = uVar11;
    *(undefined4 *)((int)local_34 + iVar10 + 0x54) = uVar5;
  }
  else {
    uVar5 = *(undefined4 *)(param_3 + 0x48);
    *(int *)((int)local_34 + iVar10 + 0x40) = *(int *)(param_3 + 0x40);
    *(undefined4 *)((int)local_34 + iVar10 + 0x48) = uVar5;
  }
  *(int *)(param_3 + 0x40) = param_3 + 0x48;
  uVar5 = *(undefined4 *)(param_3 + 0x44);
  *(undefined4 *)(param_3 + 0x44) = 0;
  *(undefined4 *)((int)local_34 + iVar10 + 0x44) = uVar5;
  *(undefined1 *)(param_3 + 0x48) = 0;
  if (param_2 != piVar12) {
    piVar2 = piVar12 + 3;
    puVar6 = local_34;
    piVar8 = piVar12;
    do {
      *puVar6 = uVar1;
      puVar6[1] = puVar6 + 3;
      if ((int *)piVar8[1] == piVar2) {
        iVar14 = piVar2[1];
        iVar15 = piVar2[2];
        iVar10 = piVar2[3];
        puVar6[3] = *piVar2;
        puVar6[4] = iVar14;
        puVar6[5] = iVar15;
        puVar6[6] = iVar10;
      }
      else {
        puVar6[1] = (int *)piVar8[1];
        puVar6[3] = piVar8[3];
      }
      puVar6[2] = piVar8[2];
      *(undefined1 *)(piVar8 + 3) = 0;
      piVar8[1] = (int)piVar2;
      piVar8[2] = 0;
      puVar6[7] = puVar6 + 9;
      if ((int *)piVar8[7] == piVar8 + 9) {
        iVar15 = piVar8[10];
        iVar14 = piVar8[0xb];
        iVar10 = piVar8[0xc];
        puVar6[9] = piVar8[9];
        puVar6[10] = iVar15;
        puVar6[0xb] = iVar14;
        puVar6[0xc] = iVar10;
      }
      else {
        puVar6[7] = (int *)piVar8[7];
        puVar6[9] = piVar8[9];
      }
      puVar6[8] = piVar8[8];
      *(undefined1 *)(piVar8 + 9) = 0;
      piVar8[7] = (int)(piVar8 + 9);
      piVar8[8] = 0;
      puVar6[0xd] = piVar8[0xd];
      puVar6[0xe] = piVar8[0xe];
      puVar6[0xf] = piVar8[0xf];
      piVar8[0xd] = 0;
      piVar8[0xe] = 0;
      piVar8[0xf] = 0;
      puVar6[0x10] = puVar6 + 0x12;
      if ((int *)piVar8[0x10] == piVar8 + 0x12) {
        iVar15 = piVar8[0x13];
        iVar14 = piVar8[0x14];
        iVar10 = piVar8[0x15];
        puVar6[0x12] = piVar8[0x12];
        puVar6[0x13] = iVar15;
        puVar6[0x14] = iVar14;
        puVar6[0x15] = iVar10;
      }
      else {
        puVar6[0x10] = (int *)piVar8[0x10];
        puVar6[0x12] = piVar8[0x12];
      }
      piVar9 = piVar8 + 0x16;
      piVar2 = piVar2 + 0x16;
      puVar6[0x11] = piVar8[0x11];
      *(undefined1 *)(piVar8 + 0x12) = 0;
      piVar8[0x10] = (int)(piVar8 + 0x12);
      piVar8[0x11] = 0;
      puVar6 = puVar6 + 0x16;
      piVar8 = piVar9;
    } while (piVar9 != param_2);
    local_38 = local_34 +
               ((DAT_2c563144 * ((uint)((int)param_2 + (-0x58 - (int)piVar12)) >> 3) & 0x1fffffff) +
               2) * 0x16;
  }
  piVar8 = piVar12;
  if (param_2 != piVar13) {
    piVar9 = param_2 + 3;
    puVar6 = local_38;
    piVar2 = param_2;
    do {
      *puVar6 = uVar1;
      puVar6[1] = puVar6 + 3;
      if ((int *)piVar2[1] == piVar9) {
        iVar14 = piVar9[1];
        iVar15 = piVar9[2];
        iVar10 = piVar9[3];
        puVar6[3] = *piVar9;
        puVar6[4] = iVar14;
        puVar6[5] = iVar15;
        puVar6[6] = iVar10;
      }
      else {
        puVar6[1] = (int *)piVar2[1];
        puVar6[3] = piVar2[3];
      }
      puVar6[2] = piVar2[2];
      *(undefined1 *)(piVar2 + 3) = 0;
      piVar2[1] = (int)piVar9;
      piVar2[2] = 0;
      puVar6[7] = puVar6 + 9;
      if ((int *)piVar2[7] == piVar2 + 9) {
        iVar15 = piVar2[10];
        iVar14 = piVar2[0xb];
        iVar10 = piVar2[0xc];
        puVar6[9] = piVar2[9];
        puVar6[10] = iVar15;
        puVar6[0xb] = iVar14;
        puVar6[0xc] = iVar10;
      }
      else {
        puVar6[7] = (int *)piVar2[7];
        puVar6[9] = piVar2[9];
      }
      puVar6[8] = piVar2[8];
      piVar2[7] = (int)(piVar2 + 9);
      piVar2[8] = 0;
      *(undefined1 *)(piVar2 + 9) = 0;
      puVar6[0xd] = piVar2[0xd];
      puVar6[0xe] = piVar2[0xe];
      puVar6[0xf] = piVar2[0xf];
      piVar2[0xd] = 0;
      piVar2[0xe] = 0;
      piVar2[0xf] = 0;
      puVar6[0x10] = puVar6 + 0x12;
      if ((int *)piVar2[0x10] == piVar2 + 0x12) {
        iVar15 = piVar2[0x13];
        iVar14 = piVar2[0x14];
        iVar10 = piVar2[0x15];
        puVar6[0x12] = piVar2[0x12];
        puVar6[0x13] = iVar15;
        puVar6[0x14] = iVar14;
        puVar6[0x15] = iVar10;
      }
      else {
        puVar6[0x10] = (int *)piVar2[0x10];
        puVar6[0x12] = piVar2[0x12];
      }
      piVar9 = piVar9 + 0x16;
      puVar6[0x11] = piVar2[0x11];
      *(undefined1 *)(piVar2 + 0x12) = 0;
      piVar2[0x10] = (int)(piVar2 + 0x12);
      piVar2[0x11] = 0;
      piVar2 = piVar2 + 0x16;
      puVar6 = puVar6 + 0x16;
    } while (piVar2 != piVar13);
    local_38 = local_38 +
               (_LAB_2c563234 * ((uint)((int)piVar13 + (-0x58 - (int)param_2)) >> 3) & 0x1fffffff) *
               0x16 + 0x16;
  }
  for (; piVar8 != piVar13; piVar8 = piVar8 + 0x16) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  if (piVar12 == (int *)0x0) {
    *param_1 = local_34;
    param_1[1] = local_38;
    param_1[2] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,piVar12);
}

