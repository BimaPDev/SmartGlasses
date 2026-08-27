/* FUN_2c54e2c8 @ 0x2c54e2c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c54e2c8(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  
  piVar8 = _LAB_2c54e9d0;
  piVar10 = (int *)*param_1;
  piVar11 = (int *)param_1[1];
  uVar1 = ((int)piVar11 - (int)piVar10 >> 2) * -0x47dc11f7;
  if (uVar1 == _DAT_2c54e624) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c54e9cc);
  }
  uVar7 = uVar1;
  if (uVar1 == 0) {
    uVar7 = 1;
  }
  uVar5 = uVar1 + uVar7;
  iStack_30 = _DAT_2c54e9c8;
  if (!CARRY4(uVar1,uVar7)) {
    if (uVar5 == 0) {
      puStack_38 = (undefined4 *)0xe4;
      puStack_34 = (undefined4 *)0x0;
      iStack_30 = 0;
      goto LAB_2c54e312;
    }
    if (_DAT_2c54e624 <= uVar5) {
      uVar5 = _DAT_2c54e624;
    }
    iStack_30 = uVar5 * 0xe4;
  }
  if (*_LAB_2c54e9d0 == 0) {
    FUN_2c4723c4();
    *piVar8 = 1;
  }
  puStack_34 = (undefined4 *)FUN_2c47245c(0,iStack_30);
  iStack_30 = (int)puStack_34 + iStack_30;
  puStack_38 = puStack_34 + 0x39;
LAB_2c54e312:
  iVar3 = FUN_2c674268((int)puStack_34 + ((int)param_2 - (int)piVar10),0,0xe4);
  uVar2 = _LAB_2c54e628;
  *(undefined4 *)((int)puStack_34 + ((int)param_2 - (int)piVar10)) = _LAB_2c54e628;
  *(int *)(iVar3 + 4) = iVar3 + 0xc;
  *(undefined1 *)(iVar3 + 0xc) = 0;
  *(int *)(iVar3 + 0x20) = iVar3 + 0x28;
  *(undefined1 *)(iVar3 + 0x28) = 0;
  *(int *)(iVar3 + 0x3c) = iVar3 + 0x44;
  *(undefined1 *)(iVar3 + 0x44) = 0;
  *(int *)(iVar3 + 0x54) = iVar3 + 0x5c;
  *(undefined1 *)(iVar3 + 0x5c) = 0;
  *(int *)(iVar3 + 0x6c) = iVar3 + 0x74;
  *(undefined1 *)(iVar3 + 0x74) = 0;
  *(int *)(iVar3 + 0x84) = iVar3 + 0x8c;
  *(undefined1 *)(iVar3 + 0x8c) = 0;
  *(int *)(iVar3 + 0x9c) = iVar3 + 0xa4;
  *(undefined1 *)(iVar3 + 0xa4) = 0;
  *(int *)(iVar3 + 0xb4) = iVar3 + 0xbc;
  *(undefined1 *)(iVar3 + 0xbc) = 0;
  *(undefined1 *)(iVar3 + 0xd4) = 0;
  *(int *)(iVar3 + 0xcc) = iVar3 + 0xd4;
  if (param_2 != piVar10) {
    piVar4 = piVar10 + 3;
    puVar6 = puStack_34;
    piVar8 = piVar10;
    do {
      *puVar6 = uVar2;
      puVar6[1] = puVar6 + 3;
      if ((int *)piVar8[1] == piVar4) {
        iVar12 = piVar4[1];
        iVar13 = piVar4[2];
        iVar3 = piVar4[3];
        puVar6[3] = *piVar4;
        puVar6[4] = iVar12;
        puVar6[5] = iVar13;
        puVar6[6] = iVar3;
      }
      else {
        puVar6[1] = (int *)piVar8[1];
        puVar6[3] = piVar8[3];
      }
      puVar6[2] = piVar8[2];
      *(undefined1 *)(piVar8 + 3) = 0;
      piVar8[1] = (int)piVar4;
      piVar8[2] = 0;
      puVar6[7] = piVar8[7];
      puVar6[8] = puVar6 + 10;
      if ((int *)piVar8[8] == piVar8 + 10) {
        iVar13 = piVar8[0xb];
        iVar12 = piVar8[0xc];
        iVar3 = piVar8[0xd];
        puVar6[10] = piVar8[10];
        puVar6[0xb] = iVar13;
        puVar6[0xc] = iVar12;
        puVar6[0xd] = iVar3;
      }
      else {
        puVar6[8] = (int *)piVar8[8];
        puVar6[10] = piVar8[10];
      }
      puVar6[9] = piVar8[9];
      *(undefined1 *)(piVar8 + 10) = 0;
      piVar8[8] = (int)(piVar8 + 10);
      piVar8[9] = 0;
      *(char *)(puVar6 + 0xe) = (char)piVar8[0xe];
      puVar6[0xf] = puVar6 + 0x11;
      if ((int *)piVar8[0xf] == piVar8 + 0x11) {
        iVar13 = piVar8[0x12];
        iVar12 = piVar8[0x13];
        iVar3 = piVar8[0x14];
        puVar6[0x11] = piVar8[0x11];
        puVar6[0x12] = iVar13;
        puVar6[0x13] = iVar12;
        puVar6[0x14] = iVar3;
      }
      else {
        puVar6[0xf] = (int *)piVar8[0xf];
        puVar6[0x11] = piVar8[0x11];
      }
      puVar6[0x10] = piVar8[0x10];
      *(undefined1 *)(piVar8 + 0x11) = 0;
      piVar8[0xf] = (int)(piVar8 + 0x11);
      piVar8[0x10] = 0;
      puVar6[0x15] = puVar6 + 0x17;
      if ((int *)piVar8[0x15] == piVar8 + 0x17) {
        iVar13 = piVar8[0x18];
        iVar12 = piVar8[0x19];
        iVar3 = piVar8[0x1a];
        puVar6[0x17] = piVar8[0x17];
        puVar6[0x18] = iVar13;
        puVar6[0x19] = iVar12;
        puVar6[0x1a] = iVar3;
      }
      else {
        puVar6[0x15] = (int *)piVar8[0x15];
        puVar6[0x17] = piVar8[0x17];
      }
      puVar6[0x16] = piVar8[0x16];
      *(undefined1 *)(piVar8 + 0x17) = 0;
      piVar8[0x15] = (int)(piVar8 + 0x17);
      piVar8[0x16] = 0;
      puVar6[0x1b] = puVar6 + 0x1d;
      if ((int *)piVar8[0x1b] == piVar8 + 0x1d) {
        iVar13 = piVar8[0x1e];
        iVar12 = piVar8[0x1f];
        iVar3 = piVar8[0x20];
        puVar6[0x1d] = piVar8[0x1d];
        puVar6[0x1e] = iVar13;
        puVar6[0x1f] = iVar12;
        puVar6[0x20] = iVar3;
      }
      else {
        puVar6[0x1b] = (int *)piVar8[0x1b];
        puVar6[0x1d] = piVar8[0x1d];
      }
      puVar6[0x1c] = piVar8[0x1c];
      *(undefined1 *)(piVar8 + 0x1d) = 0;
      piVar8[0x1b] = (int)(piVar8 + 0x1d);
      piVar8[0x1c] = 0;
      puVar6[0x21] = puVar6 + 0x23;
      if ((int *)piVar8[0x21] == piVar8 + 0x23) {
        iVar13 = piVar8[0x24];
        iVar12 = piVar8[0x25];
        iVar3 = piVar8[0x26];
        puVar6[0x23] = piVar8[0x23];
        puVar6[0x24] = iVar13;
        puVar6[0x25] = iVar12;
        puVar6[0x26] = iVar3;
      }
      else {
        puVar6[0x21] = (int *)piVar8[0x21];
        puVar6[0x23] = piVar8[0x23];
      }
      puVar6[0x22] = piVar8[0x22];
      *(undefined1 *)(piVar8 + 0x23) = 0;
      piVar8[0x21] = (int)(piVar8 + 0x23);
      piVar8[0x22] = 0;
      puVar6[0x27] = puVar6 + 0x29;
      if ((int *)piVar8[0x27] == piVar8 + 0x29) {
        iVar13 = piVar8[0x2a];
        iVar12 = piVar8[0x2b];
        iVar3 = piVar8[0x2c];
        puVar6[0x29] = piVar8[0x29];
        puVar6[0x2a] = iVar13;
        puVar6[0x2b] = iVar12;
        puVar6[0x2c] = iVar3;
      }
      else {
        puVar6[0x27] = (int *)piVar8[0x27];
        puVar6[0x29] = piVar8[0x29];
      }
      puVar6[0x28] = piVar8[0x28];
      *(undefined1 *)(piVar8 + 0x29) = 0;
      piVar8[0x27] = (int)(piVar8 + 0x29);
      piVar8[0x28] = 0;
      puVar6[0x2d] = puVar6 + 0x2f;
      if ((int *)piVar8[0x2d] == piVar8 + 0x2f) {
        iVar13 = piVar8[0x30];
        iVar12 = piVar8[0x31];
        iVar3 = piVar8[0x32];
        puVar6[0x2f] = piVar8[0x2f];
        puVar6[0x30] = iVar13;
        puVar6[0x31] = iVar12;
        puVar6[0x32] = iVar3;
      }
      else {
        puVar6[0x2d] = (int *)piVar8[0x2d];
        puVar6[0x2f] = piVar8[0x2f];
      }
      puVar6[0x2e] = piVar8[0x2e];
      *(undefined1 *)(piVar8 + 0x2f) = 0;
      piVar8[0x2d] = (int)(piVar8 + 0x2f);
      piVar8[0x2e] = 0;
      puVar6[0x33] = puVar6 + 0x35;
      if ((int *)piVar8[0x33] == piVar8 + 0x35) {
        iVar13 = piVar8[0x36];
        iVar12 = piVar8[0x37];
        iVar3 = piVar8[0x38];
        puVar6[0x35] = piVar8[0x35];
        puVar6[0x36] = iVar13;
        puVar6[0x37] = iVar12;
        puVar6[0x38] = iVar3;
      }
      else {
        puVar6[0x33] = (int *)piVar8[0x33];
        puVar6[0x35] = piVar8[0x35];
      }
      piVar9 = piVar8 + 0x39;
      piVar4 = piVar4 + 0x39;
      puVar6[0x34] = piVar8[0x34];
      *(undefined1 *)(piVar8 + 0x35) = 0;
      piVar8[0x33] = (int)(piVar8 + 0x35);
      piVar8[0x34] = 0;
      puVar6 = puVar6 + 0x39;
      piVar8 = piVar9;
    } while (piVar9 != param_2);
    puStack_38 = puStack_34 +
                 ((_LAB_2c54e980 * ((uint)((int)param_2 + (-0xe4 - (int)piVar10)) >> 2) & 0x3fffffff
                  ) + 2) * 0x39;
  }
  piVar8 = piVar10;
  if (param_2 != piVar11) {
    piVar9 = param_2 + 3;
    puVar6 = puStack_38;
    piVar4 = param_2;
    do {
      *puVar6 = uVar2;
      puVar6[1] = puVar6 + 3;
      if ((int *)piVar4[1] == piVar9) {
        iVar12 = piVar9[1];
        iVar13 = piVar9[2];
        iVar3 = piVar9[3];
        puVar6[3] = *piVar9;
        puVar6[4] = iVar12;
        puVar6[5] = iVar13;
        puVar6[6] = iVar3;
      }
      else {
        puVar6[1] = (int *)piVar4[1];
        puVar6[3] = piVar4[3];
      }
      puVar6[2] = piVar4[2];
      *(undefined1 *)(piVar4 + 3) = 0;
      piVar4[1] = (int)piVar9;
      piVar4[2] = 0;
      puVar6[7] = piVar4[7];
      puVar6[8] = puVar6 + 10;
      if ((int *)piVar4[8] == piVar4 + 10) {
        iVar13 = piVar4[0xb];
        iVar12 = piVar4[0xc];
        iVar3 = piVar4[0xd];
        puVar6[10] = piVar4[10];
        puVar6[0xb] = iVar13;
        puVar6[0xc] = iVar12;
        puVar6[0xd] = iVar3;
      }
      else {
        puVar6[8] = (int *)piVar4[8];
        puVar6[10] = piVar4[10];
      }
      puVar6[9] = piVar4[9];
      piVar4[8] = (int)(piVar4 + 10);
      piVar4[9] = 0;
      *(undefined1 *)(piVar4 + 10) = 0;
      *(char *)(puVar6 + 0xe) = (char)piVar4[0xe];
      puVar6[0xf] = puVar6 + 0x11;
      if (piVar4 + 0x11 == (int *)piVar4[0xf]) {
        iVar13 = piVar4[0x12];
        iVar12 = piVar4[0x13];
        iVar3 = piVar4[0x14];
        puVar6[0x11] = piVar4[0x11];
        puVar6[0x12] = iVar13;
        puVar6[0x13] = iVar12;
        puVar6[0x14] = iVar3;
      }
      else {
        puVar6[0xf] = (int *)piVar4[0xf];
        puVar6[0x11] = piVar4[0x11];
      }
      puVar6[0x10] = piVar4[0x10];
      piVar4[0xf] = (int)(piVar4 + 0x11);
      piVar4[0x10] = 0;
      *(undefined1 *)(piVar4 + 0x11) = 0;
      puVar6[0x15] = puVar6 + 0x17;
      if ((int *)piVar4[0x15] == piVar4 + 0x17) {
        iVar13 = piVar4[0x18];
        iVar12 = piVar4[0x19];
        iVar3 = piVar4[0x1a];
        puVar6[0x17] = piVar4[0x17];
        puVar6[0x18] = iVar13;
        puVar6[0x19] = iVar12;
        puVar6[0x1a] = iVar3;
      }
      else {
        puVar6[0x15] = (int *)piVar4[0x15];
        puVar6[0x17] = piVar4[0x17];
      }
      puVar6[0x16] = piVar4[0x16];
      piVar4[0x15] = (int)(piVar4 + 0x17);
      piVar4[0x16] = 0;
      *(undefined1 *)(piVar4 + 0x17) = 0;
      puVar6[0x1b] = puVar6 + 0x1d;
      if ((int *)piVar4[0x1b] == piVar4 + 0x1d) {
        iVar13 = piVar4[0x1e];
        iVar12 = piVar4[0x1f];
        iVar3 = piVar4[0x20];
        puVar6[0x1d] = piVar4[0x1d];
        puVar6[0x1e] = iVar13;
        puVar6[0x1f] = iVar12;
        puVar6[0x20] = iVar3;
      }
      else {
        puVar6[0x1b] = (int *)piVar4[0x1b];
        puVar6[0x1d] = piVar4[0x1d];
      }
      puVar6[0x1c] = piVar4[0x1c];
      piVar4[0x1b] = (int)(piVar4 + 0x1d);
      piVar4[0x1c] = 0;
      *(undefined1 *)(piVar4 + 0x1d) = 0;
      puVar6[0x21] = puVar6 + 0x23;
      if ((int *)piVar4[0x21] == piVar4 + 0x23) {
        iVar13 = piVar4[0x24];
        iVar12 = piVar4[0x25];
        iVar3 = piVar4[0x26];
        puVar6[0x23] = piVar4[0x23];
        puVar6[0x24] = iVar13;
        puVar6[0x25] = iVar12;
        puVar6[0x26] = iVar3;
      }
      else {
        puVar6[0x21] = (int *)piVar4[0x21];
        puVar6[0x23] = piVar4[0x23];
      }
      puVar6[0x22] = piVar4[0x22];
      piVar4[0x21] = (int)(piVar4 + 0x23);
      piVar4[0x22] = 0;
      *(undefined1 *)(piVar4 + 0x23) = 0;
      puVar6[0x27] = puVar6 + 0x29;
      if ((int *)piVar4[0x27] == piVar4 + 0x29) {
        iVar13 = piVar4[0x2a];
        iVar12 = piVar4[0x2b];
        iVar3 = piVar4[0x2c];
        puVar6[0x29] = piVar4[0x29];
        puVar6[0x2a] = iVar13;
        puVar6[0x2b] = iVar12;
        puVar6[0x2c] = iVar3;
      }
      else {
        puVar6[0x27] = (int *)piVar4[0x27];
        puVar6[0x29] = piVar4[0x29];
      }
      puVar6[0x28] = piVar4[0x28];
      piVar4[0x27] = (int)(piVar4 + 0x29);
      piVar4[0x28] = 0;
      *(undefined1 *)(piVar4 + 0x29) = 0;
      puVar6[0x2d] = puVar6 + 0x2f;
      if (piVar4 + 0x2f == (int *)piVar4[0x2d]) {
        iVar13 = piVar4[0x30];
        iVar12 = piVar4[0x31];
        iVar3 = piVar4[0x32];
        puVar6[0x2f] = piVar4[0x2f];
        puVar6[0x30] = iVar13;
        puVar6[0x31] = iVar12;
        puVar6[0x32] = iVar3;
      }
      else {
        puVar6[0x2d] = (int *)piVar4[0x2d];
        puVar6[0x2f] = piVar4[0x2f];
      }
      puVar6[0x2e] = piVar4[0x2e];
      piVar4[0x2d] = (int)(piVar4 + 0x2f);
      piVar4[0x2e] = 0;
      *(undefined1 *)(piVar4 + 0x2f) = 0;
      puVar6[0x33] = puVar6 + 0x35;
      if (piVar4 + 0x35 == (int *)piVar4[0x33]) {
        iVar13 = piVar4[0x36];
        iVar12 = piVar4[0x37];
        iVar3 = piVar4[0x38];
        puVar6[0x35] = piVar4[0x35];
        puVar6[0x36] = iVar13;
        puVar6[0x37] = iVar12;
        puVar6[0x38] = iVar3;
      }
      else {
        puVar6[0x33] = (int *)piVar4[0x33];
        puVar6[0x35] = piVar4[0x35];
      }
      piVar9 = piVar9 + 0x39;
      puVar6[0x34] = piVar4[0x34];
      *(undefined1 *)(piVar4 + 0x35) = 0;
      piVar4[0x33] = (int)(piVar4 + 0x35);
      piVar4[0x34] = 0;
      piVar4 = piVar4 + 0x39;
      puVar6 = puVar6 + 0x39;
    } while (piVar4 != piVar11);
    puStack_38 = puStack_38 +
                 (_LAB_2c54e980 * ((uint)((int)piVar11 + (-0xe4 - (int)param_2)) >> 2) & 0x3fffffff)
                 * 0x39 + 0x39;
  }
  for (; piVar8 != piVar11; piVar8 = piVar8 + 0x39) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  if (piVar10 == (int *)0x0) {
    *param_1 = puStack_34;
    param_1[1] = puStack_38;
    param_1[2] = iStack_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,piVar10);
}

