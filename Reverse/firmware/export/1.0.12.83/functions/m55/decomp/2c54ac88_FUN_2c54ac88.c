/* FUN_2c54ac88 @ 0x2c54ac88 */

void FUN_2c54ac88(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined4 *local_3c;
  undefined4 *local_38;
  uint local_34;
  
  piVar7 = DAT_2c54b320;
  piVar10 = (int *)*param_1;
  piVar9 = (int *)param_1[1];
  uVar6 = DAT_2c54afa8 * ((int)piVar9 - (int)piVar10 >> 2);
  if (uVar6 - DAT_2c54afac == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(DAT_2c54b32c);
  }
  uVar4 = uVar6;
  if (uVar6 == 0) {
    uVar4 = 1;
  }
  local_34 = uVar6 + uVar4;
  if (CARRY4(uVar6,uVar4)) {
    local_34 = DAT_2c54afac;
    iVar11 = (int)param_2 - (int)piVar10;
    iVar2 = DAT_2c54b31c;
LAB_2c54b174:
    if (*DAT_2c54b320 == 0) {
      FUN_2c4723c4();
      *piVar7 = 1;
    }
    local_3c = (undefined4 *)FUN_2c47245c(0,iVar2);
  }
  else {
    iVar11 = (int)param_2 - (int)piVar10;
    if (local_34 != 0) {
      if (DAT_2c54afac <= local_34) {
        local_34 = DAT_2c54afac;
      }
      iVar2 = local_34 * 0x7c;
      goto LAB_2c54b174;
    }
    local_3c = (undefined4 *)0x0;
  }
  uVar1 = DAT_2c54afb4;
  *(undefined4 *)((int)local_3c + iVar11) = DAT_2c54afb4;
  iVar2 = (int)local_3c + iVar11 + 0xc;
  *(int *)((int)local_3c + iVar11 + 4) = iVar2;
  puVar13 = *(undefined1 **)(param_3 + 4);
  uVar6 = *(uint *)(param_3 + 8);
  if ((puVar13 + uVar6 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0)) goto LAB_2c54b30c;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      *(undefined1 *)((int)local_3c + iVar11 + 0xc) = *puVar13;
    }
    else if (uVar6 != 0) goto LAB_2c54b28c;
  }
  else {
    if ((int)uVar6 < 0) goto LAB_2c54b306;
    if (*DAT_2c54b320 == 0) {
      FUN_2c4723c4();
      *DAT_2c54b320 = 1;
    }
    iVar2 = FUN_2c47245c(0,uVar6 + 1);
    *(uint *)((int)local_3c + iVar11 + 0xc) = uVar6;
    *(int *)((int)local_3c + iVar11 + 4) = iVar2;
LAB_2c54b28c:
    FUN_2c674668(iVar2,puVar13,uVar6);
    iVar2 = *(int *)((int)local_3c + iVar11 + 4);
  }
  *(uint *)((int)local_3c + iVar11 + 8) = uVar6;
  *(undefined1 *)(iVar2 + uVar6) = 0;
  iVar2 = (int)local_3c + iVar11 + 0x24;
  *(int *)((int)local_3c + iVar11 + 0x1c) = iVar2;
  puVar13 = *(undefined1 **)(param_3 + 0x1c);
  uVar6 = *(uint *)(param_3 + 0x20);
  if ((puVar13 + uVar6 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0)) goto LAB_2c54b30c;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      *(undefined1 *)((int)local_3c + iVar11 + 0x24) = *puVar13;
    }
    else if (uVar6 != 0) goto LAB_2c54b20e;
  }
  else {
    if ((int)uVar6 < 0) goto LAB_2c54b306;
    if (*DAT_2c54b320 == 0) {
      FUN_2c4723c4();
      *DAT_2c54b320 = 1;
    }
    iVar2 = FUN_2c47245c(0,uVar6 + 1);
    *(uint *)((int)local_3c + iVar11 + 0x24) = uVar6;
    *(int *)((int)local_3c + iVar11 + 0x1c) = iVar2;
LAB_2c54b20e:
    FUN_2c674668(iVar2,puVar13,uVar6);
    iVar2 = *(int *)((int)local_3c + iVar11 + 0x1c);
  }
  *(uint *)((int)local_3c + iVar11 + 0x20) = uVar6;
  *(undefined1 *)(iVar2 + uVar6) = 0;
  iVar2 = (int)local_3c + iVar11 + 0x3c;
  *(int *)((int)local_3c + iVar11 + 0x34) = iVar2;
  puVar13 = *(undefined1 **)(param_3 + 0x34);
  uVar6 = *(uint *)(param_3 + 0x38);
  if ((puVar13 + uVar6 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0)) goto LAB_2c54b30c;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      *(undefined1 *)((int)local_3c + iVar11 + 0x3c) = *puVar13;
    }
    else if (uVar6 != 0) goto LAB_2c54b238;
  }
  else {
    if ((int)uVar6 < 0) goto LAB_2c54b306;
    if (*DAT_2c54b320 == 0) {
      FUN_2c4723c4();
      *DAT_2c54b320 = 1;
    }
    iVar2 = FUN_2c47245c(0,uVar6 + 1);
    *(uint *)((int)local_3c + iVar11 + 0x3c) = uVar6;
    *(int *)((int)local_3c + iVar11 + 0x34) = iVar2;
LAB_2c54b238:
    FUN_2c674668(iVar2,puVar13,uVar6);
    iVar2 = *(int *)((int)local_3c + iVar11 + 0x34);
  }
  *(uint *)((int)local_3c + iVar11 + 0x38) = uVar6;
  *(undefined1 *)(iVar2 + uVar6) = 0;
  iVar2 = (int)local_3c + iVar11 + 0x54;
  *(int *)((int)local_3c + iVar11 + 0x4c) = iVar2;
  puVar13 = *(undefined1 **)(param_3 + 0x4c);
  uVar6 = *(uint *)(param_3 + 0x50);
  if ((puVar13 + uVar6 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0)) goto LAB_2c54b30c;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      *(undefined1 *)((int)local_3c + iVar11 + 0x54) = *puVar13;
    }
    else if (uVar6 != 0) goto LAB_2c54b1e2;
  }
  else {
    if ((int)uVar6 < 0) goto LAB_2c54b306;
    if (*DAT_2c54b320 == 0) {
      FUN_2c4723c4();
      *DAT_2c54b320 = 1;
    }
    iVar2 = FUN_2c47245c(0,uVar6 + 1);
    *(uint *)((int)local_3c + iVar11 + 0x54) = uVar6;
    *(int *)((int)local_3c + iVar11 + 0x4c) = iVar2;
LAB_2c54b1e2:
    FUN_2c674668(iVar2,puVar13,uVar6);
    iVar2 = *(int *)((int)local_3c + iVar11 + 0x4c);
  }
  *(uint *)((int)local_3c + iVar11 + 0x50) = uVar6;
  *(undefined1 *)(iVar2 + uVar6) = 0;
  puVar13 = (undefined1 *)((int)local_3c + iVar11 + 0x6c);
  *(undefined1 **)((int)local_3c + iVar11 + 100) = puVar13;
  piVar7 = DAT_2c54b320;
  puVar12 = *(undefined1 **)(param_3 + 100);
  uVar6 = *(uint *)(param_3 + 0x68);
  if ((puVar12 + uVar6 != (undefined1 *)0x0) && (puVar12 == (undefined1 *)0x0)) {
LAB_2c54b30c:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c54b328);
  }
  if (uVar6 < 0x10) {
    if (uVar6 != 1) {
      if (uVar6 == 0) {
        *(undefined4 *)((int)local_3c + iVar11 + 0x68) = 0;
        *puVar13 = 0;
        goto joined_r0x2c54b1b8;
      }
      goto LAB_2c54b264;
    }
    *(undefined1 *)((int)local_3c + iVar11 + 0x6c) = *puVar12;
  }
  else {
    if ((int)uVar6 < 0) {
LAB_2c54b306:
                    /* WARNING: Subroutine does not return */
      FUN_2c658680(DAT_2c54b324);
    }
    if (*DAT_2c54b320 == 0) {
      FUN_2c4723c4();
      *piVar7 = 1;
    }
    puVar13 = (undefined1 *)FUN_2c47245c(0,uVar6 + 1);
    *(uint *)((int)local_3c + iVar11 + 0x6c) = uVar6;
    *(undefined1 **)((int)local_3c + iVar11 + 100) = puVar13;
LAB_2c54b264:
    FUN_2c674668(puVar13,puVar12,uVar6);
    puVar13 = *(undefined1 **)((int)local_3c + iVar11 + 100);
  }
  *(uint *)((int)local_3c + iVar11 + 0x68) = uVar6;
  puVar13[uVar6] = 0;
joined_r0x2c54b1b8:
  local_38 = local_3c;
  if (param_2 != piVar10) {
    piVar3 = piVar10 + 3;
    puVar5 = local_3c;
    piVar7 = piVar10;
    do {
      *puVar5 = uVar1;
      puVar5[1] = puVar5 + 3;
      if ((int *)piVar7[1] == piVar3) {
        iVar2 = piVar3[1];
        iVar14 = piVar3[2];
        iVar11 = piVar3[3];
        puVar5[3] = *piVar3;
        puVar5[4] = iVar2;
        puVar5[5] = iVar14;
        puVar5[6] = iVar11;
      }
      else {
        puVar5[1] = (int *)piVar7[1];
        puVar5[3] = piVar7[3];
      }
      puVar5[2] = piVar7[2];
      *(undefined1 *)(piVar7 + 3) = 0;
      piVar7[1] = (int)piVar3;
      piVar7[2] = 0;
      puVar5[7] = puVar5 + 9;
      if ((int *)piVar7[7] == piVar7 + 9) {
        iVar14 = piVar7[10];
        iVar11 = piVar7[0xb];
        iVar2 = piVar7[0xc];
        puVar5[9] = piVar7[9];
        puVar5[10] = iVar14;
        puVar5[0xb] = iVar11;
        puVar5[0xc] = iVar2;
      }
      else {
        puVar5[7] = (int *)piVar7[7];
        puVar5[9] = piVar7[9];
      }
      puVar5[8] = piVar7[8];
      *(undefined1 *)(piVar7 + 9) = 0;
      piVar7[7] = (int)(piVar7 + 9);
      piVar7[8] = 0;
      puVar5[0xd] = puVar5 + 0xf;
      if ((int *)piVar7[0xd] == piVar7 + 0xf) {
        iVar14 = piVar7[0x10];
        iVar11 = piVar7[0x11];
        iVar2 = piVar7[0x12];
        puVar5[0xf] = piVar7[0xf];
        puVar5[0x10] = iVar14;
        puVar5[0x11] = iVar11;
        puVar5[0x12] = iVar2;
      }
      else {
        puVar5[0xd] = (int *)piVar7[0xd];
        puVar5[0xf] = piVar7[0xf];
      }
      puVar5[0xe] = piVar7[0xe];
      *(undefined1 *)(piVar7 + 0xf) = 0;
      piVar7[0xd] = (int)(piVar7 + 0xf);
      piVar7[0xe] = 0;
      puVar5[0x13] = puVar5 + 0x15;
      if (piVar7 + 0x15 == (int *)piVar7[0x13]) {
        iVar14 = piVar7[0x16];
        iVar11 = piVar7[0x17];
        iVar2 = piVar7[0x18];
        puVar5[0x15] = piVar7[0x15];
        puVar5[0x16] = iVar14;
        puVar5[0x17] = iVar11;
        puVar5[0x18] = iVar2;
      }
      else {
        puVar5[0x13] = (int *)piVar7[0x13];
        puVar5[0x15] = piVar7[0x15];
      }
      puVar5[0x14] = piVar7[0x14];
      *(undefined1 *)(piVar7 + 0x15) = 0;
      piVar7[0x13] = (int)(piVar7 + 0x15);
      piVar7[0x14] = 0;
      puVar5[0x19] = puVar5 + 0x1b;
      if (piVar7 + 0x1b == (int *)piVar7[0x19]) {
        iVar11 = piVar7[0x1c];
        iVar2 = piVar7[0x1d];
        iVar14 = piVar7[0x1e];
        puVar5[0x1b] = piVar7[0x1b];
        puVar5[0x1c] = iVar11;
        puVar5[0x1d] = iVar2;
        puVar5[0x1e] = iVar14;
      }
      else {
        puVar5[0x19] = (int *)piVar7[0x19];
        puVar5[0x1b] = piVar7[0x1b];
      }
      piVar8 = piVar7 + 0x1f;
      piVar3 = piVar3 + 0x1f;
      puVar5[0x1a] = piVar7[0x1a];
      *(undefined1 *)(piVar7 + 0x1b) = 0;
      piVar7[0x19] = (int)(piVar7 + 0x1b);
      piVar7[0x1a] = 0;
      puVar5 = puVar5 + 0x1f;
      piVar7 = piVar8;
    } while (piVar8 != param_2);
    local_38 = local_3c +
               ((DAT_2c54afb0 * ((uint)((int)param_2 + (-0x7c - (int)piVar10)) >> 2) & 0x3fffffff) +
               1) * 0x1f;
  }
  local_38 = local_38 + 0x1f;
  piVar7 = piVar10;
  if (param_2 != piVar9) {
    piVar8 = param_2 + 3;
    puVar5 = local_38;
    piVar3 = param_2;
    do {
      *puVar5 = uVar1;
      puVar5[1] = puVar5 + 3;
      if ((int *)piVar3[1] == piVar8) {
        iVar2 = piVar8[1];
        iVar14 = piVar8[2];
        iVar11 = piVar8[3];
        puVar5[3] = *piVar8;
        puVar5[4] = iVar2;
        puVar5[5] = iVar14;
        puVar5[6] = iVar11;
      }
      else {
        puVar5[1] = (int *)piVar3[1];
        puVar5[3] = piVar3[3];
      }
      puVar5[2] = piVar3[2];
      *(undefined1 *)(piVar3 + 3) = 0;
      piVar3[1] = (int)piVar8;
      piVar3[2] = 0;
      puVar5[7] = puVar5 + 9;
      if ((int *)piVar3[7] == piVar3 + 9) {
        iVar14 = piVar3[10];
        iVar11 = piVar3[0xb];
        iVar2 = piVar3[0xc];
        puVar5[9] = piVar3[9];
        puVar5[10] = iVar14;
        puVar5[0xb] = iVar11;
        puVar5[0xc] = iVar2;
      }
      else {
        puVar5[7] = (int *)piVar3[7];
        puVar5[9] = piVar3[9];
      }
      puVar5[8] = piVar3[8];
      piVar3[7] = (int)(piVar3 + 9);
      piVar3[8] = 0;
      *(undefined1 *)(piVar3 + 9) = 0;
      puVar5[0xd] = puVar5 + 0xf;
      if ((int *)piVar3[0xd] == piVar3 + 0xf) {
        iVar14 = piVar3[0x10];
        iVar11 = piVar3[0x11];
        iVar2 = piVar3[0x12];
        puVar5[0xf] = piVar3[0xf];
        puVar5[0x10] = iVar14;
        puVar5[0x11] = iVar11;
        puVar5[0x12] = iVar2;
      }
      else {
        puVar5[0xd] = (int *)piVar3[0xd];
        puVar5[0xf] = piVar3[0xf];
      }
      puVar5[0xe] = piVar3[0xe];
      piVar3[0xd] = (int)(piVar3 + 0xf);
      piVar3[0xe] = 0;
      *(undefined1 *)(piVar3 + 0xf) = 0;
      puVar5[0x13] = puVar5 + 0x15;
      if (piVar3 + 0x15 == (int *)piVar3[0x13]) {
        iVar14 = piVar3[0x16];
        iVar11 = piVar3[0x17];
        iVar2 = piVar3[0x18];
        puVar5[0x15] = piVar3[0x15];
        puVar5[0x16] = iVar14;
        puVar5[0x17] = iVar11;
        puVar5[0x18] = iVar2;
      }
      else {
        puVar5[0x13] = (int *)piVar3[0x13];
        puVar5[0x15] = piVar3[0x15];
      }
      puVar5[0x14] = piVar3[0x14];
      piVar3[0x13] = (int)(piVar3 + 0x15);
      piVar3[0x14] = 0;
      *(undefined1 *)(piVar3 + 0x15) = 0;
      puVar5[0x19] = puVar5 + 0x1b;
      if ((int *)piVar3[0x19] == piVar3 + 0x1b) {
        iVar11 = piVar3[0x1c];
        iVar2 = piVar3[0x1d];
        iVar14 = piVar3[0x1e];
        puVar5[0x1b] = piVar3[0x1b];
        puVar5[0x1c] = iVar11;
        puVar5[0x1d] = iVar2;
        puVar5[0x1e] = iVar14;
      }
      else {
        puVar5[0x19] = (int *)piVar3[0x19];
        puVar5[0x1b] = piVar3[0x1b];
      }
      piVar8 = piVar8 + 0x1f;
      puVar5[0x1a] = piVar3[0x1a];
      *(undefined1 *)(piVar3 + 0x1b) = 0;
      piVar3[0x19] = (int)(piVar3 + 0x1b);
      piVar3[0x1a] = 0;
      piVar3 = piVar3 + 0x1f;
      puVar5 = puVar5 + 0x1f;
    } while (piVar3 != piVar9);
    local_38 = local_38 +
               ((DAT_2c54b318 * ((uint)((int)piVar9 + (-0x7c - (int)param_2)) >> 2) & 0x3fffffff) +
               1) * 0x1f;
  }
  for (; piVar7 != piVar9; piVar7 = piVar7 + 0x1f) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  if (piVar10 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar10);
  }
  *param_1 = local_3c;
  param_1[1] = local_38;
  param_1[2] = local_3c + local_34 * 0x1f;
  return;
}

