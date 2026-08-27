/* FUN_2c5517a8 @ 0x2c5517a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5517a8(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  
  piVar8 = _LAB_2c551d7c;
  piVar11 = (int *)*param_1;
  piVar12 = (int *)param_1[1];
  uVar4 = _LAB_2c551aac * ((int)piVar12 - (int)piVar11 >> 2);
  if (uVar4 - _LAB_2c551ab0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c551d78);
  }
  uVar7 = uVar4;
  if (uVar4 == 0) {
    uVar7 = 1;
  }
  uVar5 = uVar4 + uVar7;
  iStack_30 = _DAT_2c551d74;
  if (!CARRY4(uVar4,uVar7)) {
    if (uVar5 == 0) {
      puStack_38 = (undefined4 *)0xbc;
      puStack_34 = (undefined4 *)0x0;
      iStack_30 = 0;
      goto LAB_2c5517ea;
    }
    if (_LAB_2c551ab0 <= uVar5) {
      uVar5 = _LAB_2c551ab0;
    }
    iStack_30 = uVar5 * 0xbc;
  }
  if (*_LAB_2c551d7c == 0) {
    FUN_2c4723c4();
    *piVar8 = 1;
  }
  puStack_34 = (undefined4 *)FUN_2c47245c(0,iStack_30);
  iStack_30 = (int)puStack_34 + iStack_30;
  puStack_38 = puStack_34 + 0x2f;
LAB_2c5517ea:
  iVar2 = FUN_2c674268((int)puStack_34 + ((int)param_2 - (int)piVar11),0,0xbc);
  uVar1 = _LAB_2c551ab8;
  *(undefined4 *)((int)puStack_34 + ((int)param_2 - (int)piVar11)) = _LAB_2c551ab8;
  *(int *)(iVar2 + 4) = iVar2 + 0xc;
  *(undefined1 *)(iVar2 + 0xc) = 0;
  *(int *)(iVar2 + 0x1c) = iVar2 + 0x24;
  *(undefined1 *)(iVar2 + 0x24) = 0;
  *(int *)(iVar2 + 0x34) = iVar2 + 0x3c;
  *(undefined1 *)(iVar2 + 0x3c) = 0;
  *(int *)(iVar2 + 0x4c) = iVar2 + 0x54;
  *(undefined1 *)(iVar2 + 0x54) = 0;
  *(int *)(iVar2 + 100) = iVar2 + 0x6c;
  *(undefined1 *)(iVar2 + 0x6c) = 0;
  *(int *)(iVar2 + 0x7c) = iVar2 + 0x84;
  *(undefined1 *)(iVar2 + 0x84) = 0;
  *(int *)(iVar2 + 0x94) = iVar2 + 0x9c;
  *(undefined1 *)(iVar2 + 0x9c) = 0;
  *(undefined4 *)(iVar2 + 0xac) = 0xffffffff;
  if (param_2 != piVar11) {
    piVar3 = piVar11 + 3;
    puVar6 = puStack_34;
    piVar8 = piVar11;
    do {
      *puVar6 = uVar1;
      puVar6[1] = puVar6 + 3;
      if ((int *)piVar8[1] == piVar3) {
        iVar13 = piVar3[1];
        iVar14 = piVar3[2];
        iVar2 = piVar3[3];
        puVar6[3] = *piVar3;
        puVar6[4] = iVar13;
        puVar6[5] = iVar14;
        puVar6[6] = iVar2;
      }
      else {
        puVar6[1] = (int *)piVar8[1];
        puVar6[3] = piVar8[3];
      }
      puVar6[2] = piVar8[2];
      *(undefined1 *)(piVar8 + 3) = 0;
      piVar8[1] = (int)piVar3;
      piVar8[2] = 0;
      puVar6[7] = puVar6 + 9;
      if ((int *)piVar8[7] == piVar8 + 9) {
        iVar14 = piVar8[10];
        iVar13 = piVar8[0xb];
        iVar2 = piVar8[0xc];
        puVar6[9] = piVar8[9];
        puVar6[10] = iVar14;
        puVar6[0xb] = iVar13;
        puVar6[0xc] = iVar2;
      }
      else {
        puVar6[7] = (int *)piVar8[7];
        puVar6[9] = piVar8[9];
      }
      puVar6[8] = piVar8[8];
      *(undefined1 *)(piVar8 + 9) = 0;
      piVar8[7] = (int)(piVar8 + 9);
      piVar8[8] = 0;
      puVar6[0xd] = puVar6 + 0xf;
      if ((int *)piVar8[0xd] == piVar8 + 0xf) {
        iVar14 = piVar8[0x10];
        iVar13 = piVar8[0x11];
        iVar2 = piVar8[0x12];
        puVar6[0xf] = piVar8[0xf];
        puVar6[0x10] = iVar14;
        puVar6[0x11] = iVar13;
        puVar6[0x12] = iVar2;
      }
      else {
        puVar6[0xd] = (int *)piVar8[0xd];
        puVar6[0xf] = piVar8[0xf];
      }
      puVar6[0xe] = piVar8[0xe];
      *(undefined1 *)(piVar8 + 0xf) = 0;
      piVar8[0xd] = (int)(piVar8 + 0xf);
      piVar8[0xe] = 0;
      puVar6[0x13] = puVar6 + 0x15;
      if ((int *)piVar8[0x13] == piVar8 + 0x15) {
        iVar14 = piVar8[0x16];
        iVar13 = piVar8[0x17];
        iVar2 = piVar8[0x18];
        puVar6[0x15] = piVar8[0x15];
        puVar6[0x16] = iVar14;
        puVar6[0x17] = iVar13;
        puVar6[0x18] = iVar2;
      }
      else {
        puVar6[0x13] = (int *)piVar8[0x13];
        puVar6[0x15] = piVar8[0x15];
      }
      puVar6[0x14] = piVar8[0x14];
      *(undefined1 *)(piVar8 + 0x15) = 0;
      piVar8[0x13] = (int)(piVar8 + 0x15);
      piVar8[0x14] = 0;
      puVar6[0x19] = puVar6 + 0x1b;
      if ((int *)piVar8[0x19] == piVar8 + 0x1b) {
        iVar14 = piVar8[0x1c];
        iVar13 = piVar8[0x1d];
        iVar2 = piVar8[0x1e];
        puVar6[0x1b] = piVar8[0x1b];
        puVar6[0x1c] = iVar14;
        puVar6[0x1d] = iVar13;
        puVar6[0x1e] = iVar2;
      }
      else {
        puVar6[0x19] = (int *)piVar8[0x19];
        puVar6[0x1b] = piVar8[0x1b];
      }
      puVar6[0x1a] = piVar8[0x1a];
      *(undefined1 *)(piVar8 + 0x1b) = 0;
      piVar8[0x19] = (int)(piVar8 + 0x1b);
      piVar8[0x1a] = 0;
      puVar6[0x1f] = puVar6 + 0x21;
      if ((int *)piVar8[0x1f] == piVar8 + 0x21) {
        iVar14 = piVar8[0x22];
        iVar13 = piVar8[0x23];
        iVar2 = piVar8[0x24];
        puVar6[0x21] = piVar8[0x21];
        puVar6[0x22] = iVar14;
        puVar6[0x23] = iVar13;
        puVar6[0x24] = iVar2;
      }
      else {
        puVar6[0x1f] = (int *)piVar8[0x1f];
        puVar6[0x21] = piVar8[0x21];
      }
      puVar6[0x20] = piVar8[0x20];
      *(undefined1 *)(piVar8 + 0x21) = 0;
      piVar8[0x1f] = (int)(piVar8 + 0x21);
      piVar8[0x20] = 0;
      puVar6[0x25] = puVar6 + 0x27;
      if ((int *)piVar8[0x25] == piVar8 + 0x27) {
        iVar14 = piVar8[0x28];
        iVar13 = piVar8[0x29];
        iVar2 = piVar8[0x2a];
        puVar6[0x27] = piVar8[0x27];
        puVar6[0x28] = iVar14;
        puVar6[0x29] = iVar13;
        puVar6[0x2a] = iVar2;
      }
      else {
        puVar6[0x25] = (int *)piVar8[0x25];
        puVar6[0x27] = piVar8[0x27];
      }
      piVar3 = piVar3 + 0x2f;
      puVar6[0x26] = piVar8[0x26];
      *(undefined1 *)(piVar8 + 0x27) = 0;
      piVar8[0x25] = (int)(piVar8 + 0x27);
      piVar8[0x26] = 0;
      puVar6[0x2b] = piVar8[0x2b];
      piVar10 = piVar8 + 0x2f;
      puVar6[0x2c] = piVar8[0x2c];
      puVar6[0x2d] = piVar8[0x2d];
      puVar6[0x2e] = piVar8[0x2e];
      piVar8[0x2c] = 0;
      piVar8[0x2d] = 0;
      piVar8[0x2e] = 0;
      puVar6 = puVar6 + 0x2f;
      piVar8 = piVar10;
    } while (piVar10 != param_2);
    puStack_38 = puStack_34 +
                 ((_LAB_2c551ab4 * ((uint)((int)param_2 + (-0xbc - (int)piVar11)) >> 2) & 0x3fffffff
                  ) + 2) * 0x2f;
  }
  piVar8 = piVar11;
  if (param_2 != piVar12) {
    piVar10 = param_2 + 3;
    puVar6 = puStack_38;
    piVar3 = param_2;
    do {
      *puVar6 = uVar1;
      puVar6[1] = puVar6 + 3;
      if ((int *)piVar3[1] == piVar10) {
        iVar13 = piVar10[1];
        iVar14 = piVar10[2];
        iVar2 = piVar10[3];
        puVar6[3] = *piVar10;
        puVar6[4] = iVar13;
        puVar6[5] = iVar14;
        puVar6[6] = iVar2;
      }
      else {
        puVar6[1] = (int *)piVar3[1];
        puVar6[3] = piVar3[3];
      }
      puVar6[2] = piVar3[2];
      *(undefined1 *)(piVar3 + 3) = 0;
      piVar3[1] = (int)piVar10;
      piVar3[2] = 0;
      puVar6[7] = puVar6 + 9;
      if ((int *)piVar3[7] == piVar3 + 9) {
        iVar14 = piVar3[10];
        iVar13 = piVar3[0xb];
        iVar2 = piVar3[0xc];
        puVar6[9] = piVar3[9];
        puVar6[10] = iVar14;
        puVar6[0xb] = iVar13;
        puVar6[0xc] = iVar2;
      }
      else {
        puVar6[7] = (int *)piVar3[7];
        puVar6[9] = piVar3[9];
      }
      puVar6[8] = piVar3[8];
      piVar3[7] = (int)(piVar3 + 9);
      piVar3[8] = 0;
      *(undefined1 *)(piVar3 + 9) = 0;
      puVar6[0xd] = puVar6 + 0xf;
      if ((int *)piVar3[0xd] == piVar3 + 0xf) {
        iVar14 = piVar3[0x10];
        iVar13 = piVar3[0x11];
        iVar2 = piVar3[0x12];
        puVar6[0xf] = piVar3[0xf];
        puVar6[0x10] = iVar14;
        puVar6[0x11] = iVar13;
        puVar6[0x12] = iVar2;
      }
      else {
        puVar6[0xd] = (int *)piVar3[0xd];
        puVar6[0xf] = piVar3[0xf];
      }
      puVar6[0xe] = piVar3[0xe];
      piVar3[0xd] = (int)(piVar3 + 0xf);
      piVar3[0xe] = 0;
      *(undefined1 *)(piVar3 + 0xf) = 0;
      puVar6[0x13] = puVar6 + 0x15;
      if ((int *)piVar3[0x13] == piVar3 + 0x15) {
        iVar14 = piVar3[0x16];
        iVar13 = piVar3[0x17];
        iVar2 = piVar3[0x18];
        puVar6[0x15] = piVar3[0x15];
        puVar6[0x16] = iVar14;
        puVar6[0x17] = iVar13;
        puVar6[0x18] = iVar2;
      }
      else {
        puVar6[0x13] = (int *)piVar3[0x13];
        puVar6[0x15] = piVar3[0x15];
      }
      puVar6[0x14] = piVar3[0x14];
      piVar3[0x13] = (int)(piVar3 + 0x15);
      piVar3[0x14] = 0;
      *(undefined1 *)(piVar3 + 0x15) = 0;
      puVar6[0x19] = puVar6 + 0x1b;
      if ((int *)piVar3[0x19] == piVar3 + 0x1b) {
        iVar14 = piVar3[0x1c];
        iVar13 = piVar3[0x1d];
        iVar2 = piVar3[0x1e];
        puVar6[0x1b] = piVar3[0x1b];
        puVar6[0x1c] = iVar14;
        puVar6[0x1d] = iVar13;
        puVar6[0x1e] = iVar2;
      }
      else {
        puVar6[0x19] = (int *)piVar3[0x19];
        puVar6[0x1b] = piVar3[0x1b];
      }
      puVar6[0x1a] = piVar3[0x1a];
      piVar3[0x19] = (int)(piVar3 + 0x1b);
      piVar3[0x1a] = 0;
      *(undefined1 *)(piVar3 + 0x1b) = 0;
      puVar6[0x1f] = puVar6 + 0x21;
      if ((int *)piVar3[0x1f] == piVar3 + 0x21) {
        iVar14 = piVar3[0x22];
        iVar13 = piVar3[0x23];
        iVar2 = piVar3[0x24];
        puVar6[0x21] = piVar3[0x21];
        puVar6[0x22] = iVar14;
        puVar6[0x23] = iVar13;
        puVar6[0x24] = iVar2;
      }
      else {
        puVar6[0x1f] = (int *)piVar3[0x1f];
        puVar6[0x21] = piVar3[0x21];
      }
      puVar6[0x20] = piVar3[0x20];
      piVar3[0x1f] = (int)(piVar3 + 0x21);
      piVar3[0x20] = 0;
      *(undefined1 *)(piVar3 + 0x21) = 0;
      puVar6[0x25] = puVar6 + 0x27;
      if (piVar3 + 0x27 == (int *)piVar3[0x25]) {
        iVar14 = piVar3[0x28];
        iVar13 = piVar3[0x29];
        iVar2 = piVar3[0x2a];
        puVar6[0x27] = piVar3[0x27];
        puVar6[0x28] = iVar14;
        puVar6[0x29] = iVar13;
        puVar6[0x2a] = iVar2;
      }
      else {
        puVar6[0x25] = (int *)piVar3[0x25];
        puVar6[0x27] = piVar3[0x27];
      }
      piVar9 = piVar3 + 0x2f;
      piVar10 = piVar10 + 0x2f;
      puVar6[0x26] = piVar3[0x26];
      piVar3[0x25] = (int)(piVar3 + 0x27);
      piVar3[0x26] = 0;
      *(undefined1 *)(piVar3 + 0x27) = 0;
      puVar6[0x2b] = piVar3[0x2b];
      puVar6[0x2c] = piVar3[0x2c];
      puVar6[0x2d] = piVar3[0x2d];
      puVar6[0x2e] = piVar3[0x2e];
      piVar3[0x2c] = 0;
      piVar3[0x2d] = 0;
      piVar3[0x2e] = 0;
      puVar6 = puVar6 + 0x2f;
      piVar3 = piVar9;
    } while (piVar9 != piVar12);
    puStack_38 = puStack_38 +
                 (_LAB_2c551d70 * ((uint)((int)piVar12 + (-0xbc - (int)param_2)) >> 2) & 0x3fffffff)
                 * 0x2f + 0x2f;
  }
  for (; piVar8 != piVar12; piVar8 = piVar8 + 0x2f) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  if (piVar11 == (int *)0x0) {
    *param_1 = puStack_34;
    param_1[1] = puStack_38;
    param_1[2] = iStack_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,piVar11);
}

