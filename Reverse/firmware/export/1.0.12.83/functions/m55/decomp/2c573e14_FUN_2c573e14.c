/* FUN_2c573e14 @ 0x2c573e14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c573e14(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  int iStack_34;
  
  piVar7 = _LAB_2c574418;
  piVar10 = (int *)*param_1;
  piVar11 = (int *)param_1[1];
  uVar5 = _LAB_2c574110 * ((int)piVar11 - (int)piVar10 >> 4);
  if (uVar5 - _LAB_2c574114 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c574414);
  }
  uVar3 = uVar5;
  if (uVar5 == 0) {
    uVar3 = 1;
  }
  uVar6 = uVar5 + uVar3;
  iStack_34 = _DAT_2c57441c;
  if (!CARRY4(uVar5,uVar3)) {
    if (uVar6 == 0) {
      puStack_3c = (undefined4 *)0xf0;
      puStack_38 = (undefined4 *)0x0;
      iStack_34 = 0;
      goto LAB_2c573e56;
    }
    if (_LAB_2c574114 <= uVar6) {
      uVar6 = _LAB_2c574114;
    }
    iStack_34 = uVar6 * 0xf0;
  }
  if (*_LAB_2c574418 == 0) {
    FUN_2c4723c4();
    *piVar7 = 1;
  }
  puStack_38 = (undefined4 *)FUN_2c47245c(0,iStack_34);
  iStack_34 = (int)puStack_38 + iStack_34;
  puStack_3c = puStack_38 + 0x3c;
LAB_2c573e56:
  FUN_2c573370((int)puStack_38 + ((int)param_2 - (int)piVar10),param_3);
  uVar1 = _LAB_2c57411c;
  if (param_2 != piVar10) {
    piVar2 = piVar10 + 3;
    puVar4 = puStack_38;
    piVar7 = piVar10;
    do {
      *puVar4 = uVar1;
      puVar4[1] = puVar4 + 3;
      if ((int *)piVar7[1] == piVar2) {
        iVar13 = piVar2[1];
        iVar12 = piVar2[2];
        iVar14 = piVar2[3];
        puVar4[3] = *piVar2;
        puVar4[4] = iVar13;
        puVar4[5] = iVar12;
        puVar4[6] = iVar14;
      }
      else {
        puVar4[1] = (int *)piVar7[1];
        puVar4[3] = piVar7[3];
      }
      puVar4[2] = piVar7[2];
      *(undefined1 *)(piVar7 + 3) = 0;
      piVar7[1] = (int)piVar2;
      piVar7[2] = 0;
      puVar4[7] = puVar4 + 9;
      if ((int *)piVar7[7] == piVar7 + 9) {
        iVar14 = piVar7[10];
        iVar13 = piVar7[0xb];
        iVar12 = piVar7[0xc];
        puVar4[9] = piVar7[9];
        puVar4[10] = iVar14;
        puVar4[0xb] = iVar13;
        puVar4[0xc] = iVar12;
      }
      else {
        puVar4[7] = (int *)piVar7[7];
        puVar4[9] = piVar7[9];
      }
      puVar4[8] = piVar7[8];
      *(undefined1 *)(piVar7 + 9) = 0;
      piVar7[7] = (int)(piVar7 + 9);
      piVar7[8] = 0;
      puVar4[0xd] = puVar4 + 0xf;
      if ((int *)piVar7[0xd] == piVar7 + 0xf) {
        iVar14 = piVar7[0x10];
        iVar13 = piVar7[0x11];
        iVar12 = piVar7[0x12];
        puVar4[0xf] = piVar7[0xf];
        puVar4[0x10] = iVar14;
        puVar4[0x11] = iVar13;
        puVar4[0x12] = iVar12;
      }
      else {
        puVar4[0xd] = (int *)piVar7[0xd];
        puVar4[0xf] = piVar7[0xf];
      }
      puVar4[0xe] = piVar7[0xe];
      *(undefined1 *)(piVar7 + 0xf) = 0;
      piVar7[0xd] = (int)(piVar7 + 0xf);
      piVar7[0xe] = 0;
      puVar4[0x13] = puVar4 + 0x15;
      if ((int *)piVar7[0x13] == piVar7 + 0x15) {
        iVar14 = piVar7[0x16];
        iVar13 = piVar7[0x17];
        iVar12 = piVar7[0x18];
        puVar4[0x15] = piVar7[0x15];
        puVar4[0x16] = iVar14;
        puVar4[0x17] = iVar13;
        puVar4[0x18] = iVar12;
      }
      else {
        puVar4[0x13] = (int *)piVar7[0x13];
        puVar4[0x15] = piVar7[0x15];
      }
      puVar4[0x14] = piVar7[0x14];
      piVar7[0x13] = (int)(piVar7 + 0x15);
      piVar7[0x14] = 0;
      *(undefined1 *)(piVar7 + 0x15) = 0;
      iVar12 = piVar7[0x1b];
      puVar4[0x1a] = piVar7[0x1a];
      puVar4[0x1b] = iVar12;
      iVar12 = piVar7[0x1d];
      puVar4[0x1c] = piVar7[0x1c];
      puVar4[0x1d] = iVar12;
      puVar4[0x1e] = puVar4 + 0x20;
      if ((int *)piVar7[0x1e] == piVar7 + 0x20) {
        iVar14 = piVar7[0x21];
        iVar13 = piVar7[0x22];
        iVar12 = piVar7[0x23];
        puVar4[0x20] = piVar7[0x20];
        puVar4[0x21] = iVar14;
        puVar4[0x22] = iVar13;
        puVar4[0x23] = iVar12;
      }
      else {
        puVar4[0x1e] = (int *)piVar7[0x1e];
        puVar4[0x20] = piVar7[0x20];
      }
      puVar4[0x1f] = piVar7[0x1f];
      *(undefined1 *)(piVar7 + 0x20) = 0;
      piVar7[0x1e] = (int)(piVar7 + 0x20);
      piVar7[0x1f] = 0;
      puVar4[0x24] = puVar4 + 0x26;
      if ((int *)piVar7[0x24] == piVar7 + 0x26) {
        iVar14 = piVar7[0x27];
        iVar13 = piVar7[0x28];
        iVar12 = piVar7[0x29];
        puVar4[0x26] = piVar7[0x26];
        puVar4[0x27] = iVar14;
        puVar4[0x28] = iVar13;
        puVar4[0x29] = iVar12;
      }
      else {
        puVar4[0x24] = (int *)piVar7[0x24];
        puVar4[0x26] = piVar7[0x26];
      }
      piVar9 = piVar7 + 0x3c;
      piVar2 = piVar2 + 0x3c;
      puVar4[0x25] = piVar7[0x25];
      piVar7[0x24] = (int)(piVar7 + 0x26);
      piVar7[0x25] = 0;
      *(undefined1 *)(piVar7 + 0x26) = 0;
      iVar12 = piVar7[0x2b];
      puVar4[0x2a] = piVar7[0x2a];
      puVar4[0x2b] = iVar12;
      iVar12 = piVar7[0x2d];
      puVar4[0x2c] = piVar7[0x2c];
      puVar4[0x2d] = iVar12;
      puVar4[0x2e] = piVar7[0x2e];
      puVar4[0x2f] = piVar7[0x2f];
      puVar4[0x30] = piVar7[0x30];
      puVar4[0x31] = piVar7[0x31];
      puVar4[0x32] = piVar7[0x32];
      puVar4[0x33] = piVar7[0x33];
      puVar4[0x34] = piVar7[0x34];
      puVar4[0x35] = piVar7[0x35];
      puVar4[0x36] = piVar7[0x36];
      puVar4[0x37] = piVar7[0x37];
      puVar4[0x38] = piVar7[0x38];
      puVar4[0x39] = piVar7[0x39];
      puVar4[0x3a] = piVar7[0x3a];
      puVar4[0x3b] = piVar7[0x3b];
      puVar4 = puVar4 + 0x3c;
      piVar7 = piVar9;
    } while (piVar9 != param_2);
    puStack_3c = puStack_38 +
                 ((_LAB_2c574118 * ((uint)((int)param_2 + (-0xf0 - (int)piVar10)) >> 4) & 0xfffffff)
                 + 2) * 0x3c;
  }
  uVar1 = _LAB_2c57411c;
  piVar7 = piVar10;
  if (param_2 != piVar11) {
    piVar9 = param_2 + 3;
    puVar4 = puStack_3c;
    piVar2 = param_2;
    do {
      *puVar4 = uVar1;
      puVar4[1] = puVar4 + 3;
      if ((int *)piVar2[1] == piVar9) {
        iVar13 = piVar9[1];
        iVar12 = piVar9[2];
        iVar14 = piVar9[3];
        puVar4[3] = *piVar9;
        puVar4[4] = iVar13;
        puVar4[5] = iVar12;
        puVar4[6] = iVar14;
      }
      else {
        puVar4[1] = (int *)piVar2[1];
        puVar4[3] = piVar2[3];
      }
      puVar4[2] = piVar2[2];
      *(undefined1 *)(piVar2 + 3) = 0;
      piVar2[1] = (int)piVar9;
      piVar2[2] = 0;
      puVar4[7] = puVar4 + 9;
      if (piVar2 + 9 == (int *)piVar2[7]) {
        iVar14 = piVar2[10];
        iVar13 = piVar2[0xb];
        iVar12 = piVar2[0xc];
        puVar4[9] = piVar2[9];
        puVar4[10] = iVar14;
        puVar4[0xb] = iVar13;
        puVar4[0xc] = iVar12;
      }
      else {
        puVar4[7] = (int *)piVar2[7];
        puVar4[9] = piVar2[9];
      }
      puVar4[8] = piVar2[8];
      piVar2[7] = (int)(piVar2 + 9);
      piVar2[8] = 0;
      *(undefined1 *)(piVar2 + 9) = 0;
      puVar4[0xd] = puVar4 + 0xf;
      if ((int *)piVar2[0xd] == piVar2 + 0xf) {
        iVar14 = piVar2[0x10];
        iVar13 = piVar2[0x11];
        iVar12 = piVar2[0x12];
        puVar4[0xf] = piVar2[0xf];
        puVar4[0x10] = iVar14;
        puVar4[0x11] = iVar13;
        puVar4[0x12] = iVar12;
      }
      else {
        puVar4[0xd] = (int *)piVar2[0xd];
        puVar4[0xf] = piVar2[0xf];
      }
      puVar4[0xe] = piVar2[0xe];
      piVar2[0xd] = (int)(piVar2 + 0xf);
      piVar2[0xe] = 0;
      *(undefined1 *)(piVar2 + 0xf) = 0;
      puVar4[0x13] = puVar4 + 0x15;
      if (piVar2 + 0x15 == (int *)piVar2[0x13]) {
        iVar14 = piVar2[0x16];
        iVar13 = piVar2[0x17];
        iVar12 = piVar2[0x18];
        puVar4[0x15] = piVar2[0x15];
        puVar4[0x16] = iVar14;
        puVar4[0x17] = iVar13;
        puVar4[0x18] = iVar12;
      }
      else {
        puVar4[0x13] = (int *)piVar2[0x13];
        puVar4[0x15] = piVar2[0x15];
      }
      puVar4[0x14] = piVar2[0x14];
      *(undefined1 *)(piVar2 + 0x15) = 0;
      iVar12 = piVar2[0x1b];
      piVar2[0x13] = (int)(piVar2 + 0x15);
      piVar2[0x14] = 0;
      puVar4[0x1a] = piVar2[0x1a];
      puVar4[0x1b] = iVar12;
      iVar12 = piVar2[0x1d];
      puVar4[0x1c] = piVar2[0x1c];
      puVar4[0x1d] = iVar12;
      puVar4[0x1e] = puVar4 + 0x20;
      if ((int *)piVar2[0x1e] == piVar2 + 0x20) {
        iVar14 = piVar2[0x21];
        iVar13 = piVar2[0x22];
        iVar12 = piVar2[0x23];
        puVar4[0x20] = piVar2[0x20];
        puVar4[0x21] = iVar14;
        puVar4[0x22] = iVar13;
        puVar4[0x23] = iVar12;
      }
      else {
        puVar4[0x1e] = (int *)piVar2[0x1e];
        puVar4[0x20] = piVar2[0x20];
      }
      puVar4[0x1f] = piVar2[0x1f];
      piVar2[0x1e] = (int)(piVar2 + 0x20);
      piVar2[0x1f] = 0;
      *(undefined1 *)(piVar2 + 0x20) = 0;
      puVar4[0x24] = puVar4 + 0x26;
      if ((int *)piVar2[0x24] == piVar2 + 0x26) {
        iVar14 = piVar2[0x27];
        iVar13 = piVar2[0x28];
        iVar12 = piVar2[0x29];
        puVar4[0x26] = piVar2[0x26];
        puVar4[0x27] = iVar14;
        puVar4[0x28] = iVar13;
        puVar4[0x29] = iVar12;
      }
      else {
        puVar4[0x24] = (int *)piVar2[0x24];
        puVar4[0x26] = piVar2[0x26];
      }
      piVar9 = piVar9 + 0x3c;
      puVar4[0x25] = piVar2[0x25];
      *(undefined1 *)(piVar2 + 0x26) = 0;
      iVar12 = piVar2[0x2b];
      piVar2[0x24] = (int)(piVar2 + 0x26);
      piVar2[0x25] = 0;
      puVar4[0x2a] = piVar2[0x2a];
      puVar4[0x2b] = iVar12;
      iVar12 = piVar2[0x2d];
      piVar8 = piVar2 + 0x3c;
      puVar4[0x2c] = piVar2[0x2c];
      puVar4[0x2d] = iVar12;
      puVar4[0x2e] = piVar2[0x2e];
      puVar4[0x2f] = piVar2[0x2f];
      puVar4[0x30] = piVar2[0x30];
      puVar4[0x31] = piVar2[0x31];
      puVar4[0x32] = piVar2[0x32];
      puVar4[0x33] = piVar2[0x33];
      puVar4[0x34] = piVar2[0x34];
      puVar4[0x35] = piVar2[0x35];
      puVar4[0x36] = piVar2[0x36];
      puVar4[0x37] = piVar2[0x37];
      puVar4[0x38] = piVar2[0x38];
      puVar4[0x39] = piVar2[0x39];
      puVar4[0x3a] = piVar2[0x3a];
      puVar4[0x3b] = piVar2[0x3b];
      puVar4 = puVar4 + 0x3c;
      piVar2 = piVar8;
    } while (piVar8 != piVar11);
    puStack_3c = puStack_3c +
                 ((_LAB_2c574410 * ((uint)((int)piVar11 + (-0xf0 - (int)param_2)) >> 4) & 0xfffffff)
                 + 1) * 0x3c;
  }
  for (; piVar7 != piVar11; piVar7 = piVar7 + 0x3c) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  if (piVar10 == (int *)0x0) {
    *param_1 = puStack_38;
    param_1[1] = puStack_3c;
    param_1[2] = iStack_34;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,piVar10);
}

