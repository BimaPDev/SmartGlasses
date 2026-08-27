/* FUN_2c580500 @ 0x2c580500 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c580500(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  int iStack_34;
  
  piVar7 = _LAB_2c580be8;
  piVar9 = (int *)*param_1;
  piVar10 = (int *)param_1[1];
  uVar1 = ((int)piVar10 - (int)piVar9 >> 2) * -0x47dc11f7;
  if (uVar1 == _DAT_2c580864) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c580be4);
  }
  uVar4 = uVar1;
  if (uVar1 == 0) {
    uVar4 = 1;
  }
  uVar6 = uVar1 + uVar4;
  iStack_34 = _DAT_2c580bec;
  if (!CARRY4(uVar1,uVar4)) {
    if (uVar6 == 0) {
      puStack_3c = (undefined4 *)0xe4;
      puStack_38 = (undefined4 *)0x0;
      iStack_34 = 0;
      goto LAB_2c58054a;
    }
    if (_DAT_2c580864 <= uVar6) {
      uVar6 = _DAT_2c580864;
    }
    iStack_34 = uVar6 * 0xe4;
  }
  if (*_LAB_2c580be8 == 0) {
    FUN_2c4723c4();
    *piVar7 = 1;
  }
  puStack_38 = (undefined4 *)FUN_2c47245c(0,iStack_34);
  iStack_34 = (int)puStack_38 + iStack_34;
  puStack_3c = puStack_38 + 0x39;
LAB_2c58054a:
  FUN_2c57ff38((int)puStack_38 + ((int)param_2 - (int)piVar9),param_3);
  uVar2 = _LAB_2c58086c;
  if (param_2 != piVar9) {
    piVar3 = piVar9 + 3;
    puVar5 = puStack_38;
    piVar7 = piVar9;
    do {
      *puVar5 = uVar2;
      puVar5[1] = puVar5 + 3;
      if ((int *)piVar7[1] == piVar3) {
        iVar11 = piVar3[1];
        iVar13 = piVar3[2];
        iVar12 = piVar3[3];
        puVar5[3] = *piVar3;
        puVar5[4] = iVar11;
        puVar5[5] = iVar13;
        puVar5[6] = iVar12;
      }
      else {
        puVar5[1] = (int *)piVar7[1];
        puVar5[3] = piVar7[3];
      }
      puVar5[2] = piVar7[2];
      *(undefined1 *)(piVar7 + 3) = 0;
      piVar7[1] = (int)piVar3;
      piVar7[2] = 0;
      puVar5[7] = piVar7[7];
      puVar5[8] = puVar5 + 10;
      if ((int *)piVar7[8] == piVar7 + 10) {
        iVar13 = piVar7[0xb];
        iVar12 = piVar7[0xc];
        iVar11 = piVar7[0xd];
        puVar5[10] = piVar7[10];
        puVar5[0xb] = iVar13;
        puVar5[0xc] = iVar12;
        puVar5[0xd] = iVar11;
      }
      else {
        puVar5[8] = (int *)piVar7[8];
        puVar5[10] = piVar7[10];
      }
      puVar5[9] = piVar7[9];
      *(undefined1 *)(piVar7 + 10) = 0;
      piVar7[8] = (int)(piVar7 + 10);
      piVar7[9] = 0;
      *(char *)(puVar5 + 0xe) = (char)piVar7[0xe];
      puVar5[0xf] = puVar5 + 0x11;
      if ((int *)piVar7[0xf] == piVar7 + 0x11) {
        iVar13 = piVar7[0x12];
        iVar12 = piVar7[0x13];
        iVar11 = piVar7[0x14];
        puVar5[0x11] = piVar7[0x11];
        puVar5[0x12] = iVar13;
        puVar5[0x13] = iVar12;
        puVar5[0x14] = iVar11;
      }
      else {
        puVar5[0xf] = (int *)piVar7[0xf];
        puVar5[0x11] = piVar7[0x11];
      }
      puVar5[0x10] = piVar7[0x10];
      *(undefined1 *)(piVar7 + 0x11) = 0;
      piVar7[0xf] = (int)(piVar7 + 0x11);
      piVar7[0x10] = 0;
      puVar5[0x15] = puVar5 + 0x17;
      if ((int *)piVar7[0x15] == piVar7 + 0x17) {
        iVar13 = piVar7[0x18];
        iVar12 = piVar7[0x19];
        iVar11 = piVar7[0x1a];
        puVar5[0x17] = piVar7[0x17];
        puVar5[0x18] = iVar13;
        puVar5[0x19] = iVar12;
        puVar5[0x1a] = iVar11;
      }
      else {
        puVar5[0x15] = (int *)piVar7[0x15];
        puVar5[0x17] = piVar7[0x17];
      }
      puVar5[0x16] = piVar7[0x16];
      *(undefined1 *)(piVar7 + 0x17) = 0;
      piVar7[0x15] = (int)(piVar7 + 0x17);
      piVar7[0x16] = 0;
      puVar5[0x1b] = puVar5 + 0x1d;
      if ((int *)piVar7[0x1b] == piVar7 + 0x1d) {
        iVar13 = piVar7[0x1e];
        iVar12 = piVar7[0x1f];
        iVar11 = piVar7[0x20];
        puVar5[0x1d] = piVar7[0x1d];
        puVar5[0x1e] = iVar13;
        puVar5[0x1f] = iVar12;
        puVar5[0x20] = iVar11;
      }
      else {
        puVar5[0x1b] = (int *)piVar7[0x1b];
        puVar5[0x1d] = piVar7[0x1d];
      }
      puVar5[0x1c] = piVar7[0x1c];
      *(undefined1 *)(piVar7 + 0x1d) = 0;
      piVar7[0x1b] = (int)(piVar7 + 0x1d);
      piVar7[0x1c] = 0;
      puVar5[0x21] = puVar5 + 0x23;
      if ((int *)piVar7[0x21] == piVar7 + 0x23) {
        iVar13 = piVar7[0x24];
        iVar12 = piVar7[0x25];
        iVar11 = piVar7[0x26];
        puVar5[0x23] = piVar7[0x23];
        puVar5[0x24] = iVar13;
        puVar5[0x25] = iVar12;
        puVar5[0x26] = iVar11;
      }
      else {
        puVar5[0x21] = (int *)piVar7[0x21];
        puVar5[0x23] = piVar7[0x23];
      }
      puVar5[0x22] = piVar7[0x22];
      *(undefined1 *)(piVar7 + 0x23) = 0;
      piVar7[0x21] = (int)(piVar7 + 0x23);
      piVar7[0x22] = 0;
      puVar5[0x27] = puVar5 + 0x29;
      if ((int *)piVar7[0x27] == piVar7 + 0x29) {
        iVar13 = piVar7[0x2a];
        iVar12 = piVar7[0x2b];
        iVar11 = piVar7[0x2c];
        puVar5[0x29] = piVar7[0x29];
        puVar5[0x2a] = iVar13;
        puVar5[0x2b] = iVar12;
        puVar5[0x2c] = iVar11;
      }
      else {
        puVar5[0x27] = (int *)piVar7[0x27];
        puVar5[0x29] = piVar7[0x29];
      }
      puVar5[0x28] = piVar7[0x28];
      *(undefined1 *)(piVar7 + 0x29) = 0;
      piVar7[0x27] = (int)(piVar7 + 0x29);
      piVar7[0x28] = 0;
      puVar5[0x2d] = puVar5 + 0x2f;
      if ((int *)piVar7[0x2d] == piVar7 + 0x2f) {
        iVar13 = piVar7[0x30];
        iVar12 = piVar7[0x31];
        iVar11 = piVar7[0x32];
        puVar5[0x2f] = piVar7[0x2f];
        puVar5[0x30] = iVar13;
        puVar5[0x31] = iVar12;
        puVar5[0x32] = iVar11;
      }
      else {
        puVar5[0x2d] = (int *)piVar7[0x2d];
        puVar5[0x2f] = piVar7[0x2f];
      }
      puVar5[0x2e] = piVar7[0x2e];
      *(undefined1 *)(piVar7 + 0x2f) = 0;
      piVar7[0x2d] = (int)(piVar7 + 0x2f);
      piVar7[0x2e] = 0;
      puVar5[0x33] = puVar5 + 0x35;
      if ((int *)piVar7[0x33] == piVar7 + 0x35) {
        iVar13 = piVar7[0x36];
        iVar12 = piVar7[0x37];
        iVar11 = piVar7[0x38];
        puVar5[0x35] = piVar7[0x35];
        puVar5[0x36] = iVar13;
        puVar5[0x37] = iVar12;
        puVar5[0x38] = iVar11;
      }
      else {
        puVar5[0x33] = (int *)piVar7[0x33];
        puVar5[0x35] = piVar7[0x35];
      }
      piVar8 = piVar7 + 0x39;
      piVar3 = piVar3 + 0x39;
      puVar5[0x34] = piVar7[0x34];
      *(undefined1 *)(piVar7 + 0x35) = 0;
      piVar7[0x33] = (int)(piVar7 + 0x35);
      piVar7[0x34] = 0;
      puVar5 = puVar5 + 0x39;
      piVar7 = piVar8;
    } while (piVar8 != param_2);
    puStack_3c = puStack_38 +
                 ((_LAB_2c580868 * ((uint)((int)param_2 + (-0xe4 - (int)piVar9)) >> 2) & 0x3fffffff)
                 + 2) * 0x39;
  }
  uVar2 = _LAB_2c58086c;
  piVar7 = piVar9;
  if (param_2 != piVar10) {
    piVar8 = param_2 + 3;
    puVar5 = puStack_3c;
    piVar3 = param_2;
    do {
      *puVar5 = uVar2;
      puVar5[1] = puVar5 + 3;
      if ((int *)piVar3[1] == piVar8) {
        iVar11 = piVar8[1];
        iVar13 = piVar8[2];
        iVar12 = piVar8[3];
        puVar5[3] = *piVar8;
        puVar5[4] = iVar11;
        puVar5[5] = iVar13;
        puVar5[6] = iVar12;
      }
      else {
        puVar5[1] = (int *)piVar3[1];
        puVar5[3] = piVar3[3];
      }
      puVar5[2] = piVar3[2];
      *(undefined1 *)(piVar3 + 3) = 0;
      piVar3[1] = (int)piVar8;
      piVar3[2] = 0;
      puVar5[7] = piVar3[7];
      puVar5[8] = puVar5 + 10;
      if ((int *)piVar3[8] == piVar3 + 10) {
        iVar13 = piVar3[0xb];
        iVar12 = piVar3[0xc];
        iVar11 = piVar3[0xd];
        puVar5[10] = piVar3[10];
        puVar5[0xb] = iVar13;
        puVar5[0xc] = iVar12;
        puVar5[0xd] = iVar11;
      }
      else {
        puVar5[8] = (int *)piVar3[8];
        puVar5[10] = piVar3[10];
      }
      puVar5[9] = piVar3[9];
      piVar3[8] = (int)(piVar3 + 10);
      piVar3[9] = 0;
      *(undefined1 *)(piVar3 + 10) = 0;
      *(char *)(puVar5 + 0xe) = (char)piVar3[0xe];
      puVar5[0xf] = puVar5 + 0x11;
      if (piVar3 + 0x11 == (int *)piVar3[0xf]) {
        iVar13 = piVar3[0x12];
        iVar12 = piVar3[0x13];
        iVar11 = piVar3[0x14];
        puVar5[0x11] = piVar3[0x11];
        puVar5[0x12] = iVar13;
        puVar5[0x13] = iVar12;
        puVar5[0x14] = iVar11;
      }
      else {
        puVar5[0xf] = (int *)piVar3[0xf];
        puVar5[0x11] = piVar3[0x11];
      }
      puVar5[0x10] = piVar3[0x10];
      piVar3[0xf] = (int)(piVar3 + 0x11);
      piVar3[0x10] = 0;
      *(undefined1 *)(piVar3 + 0x11) = 0;
      puVar5[0x15] = puVar5 + 0x17;
      if ((int *)piVar3[0x15] == piVar3 + 0x17) {
        iVar13 = piVar3[0x18];
        iVar12 = piVar3[0x19];
        iVar11 = piVar3[0x1a];
        puVar5[0x17] = piVar3[0x17];
        puVar5[0x18] = iVar13;
        puVar5[0x19] = iVar12;
        puVar5[0x1a] = iVar11;
      }
      else {
        puVar5[0x15] = (int *)piVar3[0x15];
        puVar5[0x17] = piVar3[0x17];
      }
      puVar5[0x16] = piVar3[0x16];
      piVar3[0x15] = (int)(piVar3 + 0x17);
      piVar3[0x16] = 0;
      *(undefined1 *)(piVar3 + 0x17) = 0;
      puVar5[0x1b] = puVar5 + 0x1d;
      if ((int *)piVar3[0x1b] == piVar3 + 0x1d) {
        iVar13 = piVar3[0x1e];
        iVar12 = piVar3[0x1f];
        iVar11 = piVar3[0x20];
        puVar5[0x1d] = piVar3[0x1d];
        puVar5[0x1e] = iVar13;
        puVar5[0x1f] = iVar12;
        puVar5[0x20] = iVar11;
      }
      else {
        puVar5[0x1b] = (int *)piVar3[0x1b];
        puVar5[0x1d] = piVar3[0x1d];
      }
      puVar5[0x1c] = piVar3[0x1c];
      piVar3[0x1b] = (int)(piVar3 + 0x1d);
      piVar3[0x1c] = 0;
      *(undefined1 *)(piVar3 + 0x1d) = 0;
      puVar5[0x21] = puVar5 + 0x23;
      if ((int *)piVar3[0x21] == piVar3 + 0x23) {
        iVar13 = piVar3[0x24];
        iVar12 = piVar3[0x25];
        iVar11 = piVar3[0x26];
        puVar5[0x23] = piVar3[0x23];
        puVar5[0x24] = iVar13;
        puVar5[0x25] = iVar12;
        puVar5[0x26] = iVar11;
      }
      else {
        puVar5[0x21] = (int *)piVar3[0x21];
        puVar5[0x23] = piVar3[0x23];
      }
      puVar5[0x22] = piVar3[0x22];
      piVar3[0x21] = (int)(piVar3 + 0x23);
      piVar3[0x22] = 0;
      *(undefined1 *)(piVar3 + 0x23) = 0;
      puVar5[0x27] = puVar5 + 0x29;
      if ((int *)piVar3[0x27] == piVar3 + 0x29) {
        iVar13 = piVar3[0x2a];
        iVar12 = piVar3[0x2b];
        iVar11 = piVar3[0x2c];
        puVar5[0x29] = piVar3[0x29];
        puVar5[0x2a] = iVar13;
        puVar5[0x2b] = iVar12;
        puVar5[0x2c] = iVar11;
      }
      else {
        puVar5[0x27] = (int *)piVar3[0x27];
        puVar5[0x29] = piVar3[0x29];
      }
      puVar5[0x28] = piVar3[0x28];
      piVar3[0x27] = (int)(piVar3 + 0x29);
      piVar3[0x28] = 0;
      *(undefined1 *)(piVar3 + 0x29) = 0;
      puVar5[0x2d] = puVar5 + 0x2f;
      if (piVar3 + 0x2f == (int *)piVar3[0x2d]) {
        iVar13 = piVar3[0x30];
        iVar12 = piVar3[0x31];
        iVar11 = piVar3[0x32];
        puVar5[0x2f] = piVar3[0x2f];
        puVar5[0x30] = iVar13;
        puVar5[0x31] = iVar12;
        puVar5[0x32] = iVar11;
      }
      else {
        puVar5[0x2d] = (int *)piVar3[0x2d];
        puVar5[0x2f] = piVar3[0x2f];
      }
      puVar5[0x2e] = piVar3[0x2e];
      piVar3[0x2d] = (int)(piVar3 + 0x2f);
      piVar3[0x2e] = 0;
      *(undefined1 *)(piVar3 + 0x2f) = 0;
      puVar5[0x33] = puVar5 + 0x35;
      if (piVar3 + 0x35 == (int *)piVar3[0x33]) {
        iVar13 = piVar3[0x36];
        iVar12 = piVar3[0x37];
        iVar11 = piVar3[0x38];
        puVar5[0x35] = piVar3[0x35];
        puVar5[0x36] = iVar13;
        puVar5[0x37] = iVar12;
        puVar5[0x38] = iVar11;
      }
      else {
        puVar5[0x33] = (int *)piVar3[0x33];
        puVar5[0x35] = piVar3[0x35];
      }
      piVar8 = piVar8 + 0x39;
      puVar5[0x34] = piVar3[0x34];
      *(undefined1 *)(piVar3 + 0x35) = 0;
      piVar3[0x33] = (int)(piVar3 + 0x35);
      piVar3[0x34] = 0;
      piVar3 = piVar3 + 0x39;
      puVar5 = puVar5 + 0x39;
    } while (piVar3 != piVar10);
    puStack_3c = puStack_3c +
                 (_LAB_2c580be0 * ((uint)((int)piVar10 + (-0xe4 - (int)param_2)) >> 2) & 0x3fffffff)
                 * 0x39 + 0x39;
  }
  for (; piVar7 != piVar10; piVar7 = piVar7 + 0x39) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  if (piVar9 == (int *)0x0) {
    *param_1 = puStack_38;
    param_1[1] = puStack_3c;
    param_1[2] = iStack_34;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,piVar9);
}

