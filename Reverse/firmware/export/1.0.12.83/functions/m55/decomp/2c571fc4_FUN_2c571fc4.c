/* FUN_2c571fc4 @ 0x2c571fc4 */

void FUN_2c571fc4(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 *local_38;
  undefined4 *local_34;
  int local_30;
  
  piVar11 = DAT_2c57240c;
  piVar13 = (int *)param_1[1];
  piVar6 = (int *)*param_1;
  uVar9 = DAT_2c5721ec * ((int)piVar13 - (int)piVar6 >> 3);
  if (uVar9 - DAT_2c5721f0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(DAT_2c572408);
  }
  uVar7 = uVar9;
  if (uVar9 == 0) {
    uVar7 = 1;
  }
  uVar10 = uVar9 + uVar7;
  if (CARRY4(uVar9,uVar7)) {
    iVar14 = (int)param_2 - (int)piVar6;
    local_30 = DAT_2c572404;
  }
  else {
    iVar14 = (int)param_2 - (int)piVar6;
    if (uVar10 == 0) {
      local_38 = (undefined4 *)0x98;
      local_34 = (undefined4 *)0x0;
      local_30 = 0;
      goto LAB_2c57200a;
    }
    if (DAT_2c5721f0 <= uVar10) {
      uVar10 = DAT_2c5721f0;
    }
    local_30 = uVar10 * 0x98;
  }
  if (*DAT_2c57240c == 0) {
    FUN_2c4723c4();
    *piVar11 = 1;
  }
  local_34 = (undefined4 *)FUN_2c47245c(0,local_30);
  local_30 = (int)local_34 + local_30;
  local_38 = local_34 + 0x26;
LAB_2c57200a:
  FUN_2c571b28((int)local_34 + iVar14,param_3);
  uVar3 = DAT_2c572200;
  uVar2 = DAT_2c5721f8;
  uVar1 = DAT_2c5721f4;
  if (param_2 != piVar6) {
    piVar4 = piVar6 + 5;
    puVar8 = local_34;
    piVar11 = piVar6;
    do {
      *puVar8 = uVar3;
      puVar8[1] = uVar2;
      puVar8[2] = piVar11[2];
      puVar8[3] = puVar8 + 5;
      if ((int *)piVar11[3] == piVar4) {
        iVar16 = piVar4[1];
        iVar15 = piVar4[2];
        iVar14 = piVar4[3];
        puVar8[5] = *piVar4;
        puVar8[6] = iVar16;
        puVar8[7] = iVar15;
        puVar8[8] = iVar14;
      }
      else {
        puVar8[3] = (int *)piVar11[3];
        puVar8[5] = piVar11[5];
      }
      puVar8[4] = piVar11[4];
      *(undefined1 *)(piVar11 + 5) = 0;
      piVar11[3] = (int)piVar4;
      piVar11[4] = 0;
      puVar8[9] = piVar11[9];
      puVar8[10] = puVar8 + 0xc;
      if ((int *)piVar11[10] == piVar11 + 0xc) {
        iVar16 = piVar11[0xd];
        iVar15 = piVar11[0xe];
        iVar14 = piVar11[0xf];
        puVar8[0xc] = piVar11[0xc];
        puVar8[0xd] = iVar16;
        puVar8[0xe] = iVar15;
        puVar8[0xf] = iVar14;
      }
      else {
        puVar8[10] = (int *)piVar11[10];
        puVar8[0xc] = piVar11[0xc];
      }
      puVar8[0xb] = piVar11[0xb];
      *(undefined1 *)(piVar11 + 0xc) = 0;
      piVar11[10] = (int)(piVar11 + 0xc);
      piVar11[0xb] = 0;
      puVar8[0x10] = puVar8 + 0x12;
      if ((int *)piVar11[0x10] == piVar11 + 0x12) {
        iVar16 = piVar11[0x13];
        iVar15 = piVar11[0x14];
        iVar14 = piVar11[0x15];
        puVar8[0x12] = piVar11[0x12];
        puVar8[0x13] = iVar16;
        puVar8[0x14] = iVar15;
        puVar8[0x15] = iVar14;
      }
      else {
        puVar8[0x10] = (int *)piVar11[0x10];
        puVar8[0x12] = piVar11[0x12];
      }
      puVar8[0x11] = piVar11[0x11];
      *(undefined1 *)(piVar11 + 0x12) = 0;
      piVar11[0x10] = (int)(piVar11 + 0x12);
      piVar11[0x11] = 0;
      puVar8[0x16] = piVar11[0x16];
      puVar8[0x17] = uVar1;
      puVar8[0x18] = piVar11[0x18];
      *(char *)(puVar8 + 0x19) = (char)piVar11[0x19];
      *(undefined1 *)((int)puVar8 + 0x65) = *(undefined1 *)((int)piVar11 + 0x65);
      puVar8[0x1a] = piVar11[0x1a];
      puVar8[0x1b] = piVar11[0x1b];
      puVar8[0x1c] = piVar11[0x1c];
      puVar8[0x1d] = puVar8 + 0x1f;
      if ((int *)piVar11[0x1d] == piVar11 + 0x1f) {
        iVar16 = piVar11[0x20];
        iVar15 = piVar11[0x21];
        iVar14 = piVar11[0x22];
        puVar8[0x1f] = piVar11[0x1f];
        puVar8[0x20] = iVar16;
        puVar8[0x21] = iVar15;
        puVar8[0x22] = iVar14;
      }
      else {
        puVar8[0x1d] = (int *)piVar11[0x1d];
        puVar8[0x1f] = piVar11[0x1f];
      }
      piVar4 = piVar4 + 0x26;
      puVar8[0x1e] = piVar11[0x1e];
      *(undefined1 *)(piVar11 + 0x1f) = 0;
      piVar11[0x1d] = (int)(piVar11 + 0x1f);
      piVar11[0x1e] = 0;
      piVar5 = piVar11 + 0x26;
      puVar8[0x23] = piVar11[0x23];
      puVar8[0x24] = piVar11[0x24];
      *(char *)(puVar8 + 0x25) = (char)piVar11[0x25];
      puVar8 = puVar8 + 0x26;
      piVar11 = piVar5;
    } while (piVar5 != param_2);
    local_38 = local_34 +
               ((DAT_2c5721fc * ((uint)((int)param_2 + (-0x98 - (int)piVar6)) >> 3) & 0x1fffffff) +
               2) * 0x26;
  }
  uVar3 = DAT_2c572200;
  uVar2 = DAT_2c5721f8;
  uVar1 = DAT_2c5721f4;
  piVar11 = piVar6;
  if (param_2 != piVar13) {
    piVar5 = param_2 + 5;
    puVar8 = local_38;
    piVar4 = param_2;
    do {
      *puVar8 = uVar3;
      puVar8[1] = uVar2;
      puVar8[2] = piVar4[2];
      puVar8[3] = puVar8 + 5;
      if ((int *)piVar4[3] == piVar5) {
        iVar16 = piVar5[1];
        iVar15 = piVar5[2];
        iVar14 = piVar5[3];
        puVar8[5] = *piVar5;
        puVar8[6] = iVar16;
        puVar8[7] = iVar15;
        puVar8[8] = iVar14;
      }
      else {
        puVar8[3] = (int *)piVar4[3];
        puVar8[5] = piVar4[5];
      }
      puVar8[4] = piVar4[4];
      *(undefined1 *)(piVar4 + 5) = 0;
      piVar4[3] = (int)piVar5;
      piVar4[4] = 0;
      puVar8[9] = piVar4[9];
      puVar8[10] = puVar8 + 0xc;
      if (piVar4 + 0xc == (int *)piVar4[10]) {
        iVar16 = piVar4[0xd];
        iVar15 = piVar4[0xe];
        iVar14 = piVar4[0xf];
        puVar8[0xc] = piVar4[0xc];
        puVar8[0xd] = iVar16;
        puVar8[0xe] = iVar15;
        puVar8[0xf] = iVar14;
      }
      else {
        puVar8[10] = (int *)piVar4[10];
        puVar8[0xc] = piVar4[0xc];
      }
      puVar8[0xb] = piVar4[0xb];
      *(undefined1 *)(piVar4 + 0xc) = 0;
      piVar4[10] = (int)(piVar4 + 0xc);
      piVar4[0xb] = 0;
      puVar8[0x10] = puVar8 + 0x12;
      if ((int *)piVar4[0x10] == piVar4 + 0x12) {
        iVar16 = piVar4[0x13];
        iVar15 = piVar4[0x14];
        iVar14 = piVar4[0x15];
        puVar8[0x12] = piVar4[0x12];
        puVar8[0x13] = iVar16;
        puVar8[0x14] = iVar15;
        puVar8[0x15] = iVar14;
      }
      else {
        puVar8[0x10] = (int *)piVar4[0x10];
        puVar8[0x12] = piVar4[0x12];
      }
      puVar8[0x11] = piVar4[0x11];
      *(undefined1 *)(piVar4 + 0x12) = 0;
      piVar4[0x10] = (int)(piVar4 + 0x12);
      piVar4[0x11] = 0;
      puVar8[0x16] = piVar4[0x16];
      puVar8[0x17] = uVar1;
      puVar8[0x18] = piVar4[0x18];
      *(char *)(puVar8 + 0x19) = (char)piVar4[0x19];
      *(undefined1 *)((int)puVar8 + 0x65) = *(undefined1 *)((int)piVar4 + 0x65);
      puVar8[0x1a] = piVar4[0x1a];
      puVar8[0x1b] = piVar4[0x1b];
      puVar8[0x1c] = piVar4[0x1c];
      puVar8[0x1d] = puVar8 + 0x1f;
      if ((int *)piVar4[0x1d] == piVar4 + 0x1f) {
        iVar16 = piVar4[0x20];
        iVar15 = piVar4[0x21];
        iVar14 = piVar4[0x22];
        puVar8[0x1f] = piVar4[0x1f];
        puVar8[0x20] = iVar16;
        puVar8[0x21] = iVar15;
        puVar8[0x22] = iVar14;
      }
      else {
        puVar8[0x1d] = (int *)piVar4[0x1d];
        puVar8[0x1f] = piVar4[0x1f];
      }
      piVar5 = piVar5 + 0x26;
      puVar8[0x1e] = piVar4[0x1e];
      *(undefined1 *)(piVar4 + 0x1f) = 0;
      piVar4[0x1d] = (int)(piVar4 + 0x1f);
      piVar4[0x1e] = 0;
      puVar8[0x23] = piVar4[0x23];
      piVar12 = piVar4 + 0x26;
      puVar8[0x24] = piVar4[0x24];
      *(char *)(puVar8 + 0x25) = (char)piVar4[0x25];
      puVar8 = puVar8 + 0x26;
      piVar4 = piVar12;
    } while (piVar12 != piVar13);
    local_38 = local_38 +
               (DAT_2c572400 * ((uint)((int)piVar13 + (-0x98 - (int)param_2)) >> 3) & 0x1fffffff) *
               0x26 + 0x26;
  }
  for (; piVar11 != piVar13; piVar11 = piVar11 + 0x26) {
    (**(code **)(*piVar11 + 4))(piVar11);
  }
  if (piVar6 == (int *)0x0) {
    *param_1 = (int)local_34;
    param_1[1] = (int)local_38;
    param_1[2] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,piVar6);
}

