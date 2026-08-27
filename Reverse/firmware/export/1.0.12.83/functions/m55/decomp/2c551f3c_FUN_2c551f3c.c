/* FUN_2c551f3c @ 0x2c551f3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c551f3c(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined1 *puVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  uint uStack_38;
  uint uStack_30;
  int iStack_2c;
  
  piVar7 = _LAB_2c55265c;
  iStack_2c = *_LAB_2c552110;
  piVar13 = (int *)*param_1;
  piVar12 = (int *)param_1[1];
  uVar6 = _LAB_2c552114 * ((int)piVar12 - (int)piVar13 >> 2);
  if (uVar6 - _LAB_2c552118 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c552770);
  }
  uVar4 = uVar6;
  if (uVar6 == 0) {
    uVar4 = 1;
  }
  uStack_38 = uVar6 + uVar4;
  if (CARRY4(uVar6,uVar4)) {
    uStack_38 = _LAB_2c552118;
    iVar9 = (int)param_2 - (int)piVar13;
    iVar2 = _DAT_2c552658;
LAB_2c55260a:
    if (*_LAB_2c55265c == 0) {
      FUN_2c4723c4();
      *piVar7 = 1;
    }
    puStack_40 = (undefined4 *)FUN_2c47245c(0,iVar2);
  }
  else {
    iVar9 = (int)param_2 - (int)piVar13;
    if (uStack_38 != 0) {
      if (_LAB_2c552118 <= uStack_38) {
        uStack_38 = _LAB_2c552118;
      }
      iVar2 = uStack_38 * 0xbc;
      goto LAB_2c55260a;
    }
    puStack_40 = (undefined4 *)0x0;
  }
  uVar1 = _LAB_2c55211c;
  *(undefined4 *)((int)puStack_40 + iVar9) = _LAB_2c55211c;
  iVar2 = (int)puStack_40 + iVar9 + 0xc;
  *(int *)((int)puStack_40 + iVar9 + 4) = iVar2;
  puVar10 = *(undefined1 **)(param_3 + 4);
  uVar6 = *(uint *)(param_3 + 8);
  if ((puVar10 + uVar6 != (undefined1 *)0x0) && (puVar10 == (undefined1 *)0x0)) goto LAB_2c55275c;
  uStack_30 = uVar6;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      *(undefined1 *)((int)puStack_40 + iVar9 + 0xc) = *puVar10;
    }
    else if (uVar6 != 0) goto LAB_2c5526f2;
  }
  else {
    iVar2 = FUN_2c54f538(&uStack_30,0);
    *(int *)((int)puStack_40 + iVar9 + 4) = iVar2;
    *(uint *)((int)puStack_40 + iVar9 + 0xc) = uStack_30;
LAB_2c5526f2:
    FUN_2c674668(iVar2,puVar10,uVar6);
    iVar2 = *(int *)((int)puStack_40 + iVar9 + 4);
  }
  *(uint *)((int)puStack_40 + iVar9 + 8) = uStack_30;
  *(undefined1 *)(iVar2 + uStack_30) = 0;
  iVar2 = (int)puStack_40 + iVar9 + 0x24;
  *(int *)((int)puStack_40 + iVar9 + 0x1c) = iVar2;
  puVar10 = *(undefined1 **)(param_3 + 0x1c);
  uVar6 = *(uint *)(param_3 + 0x20);
  if ((puVar10 + uVar6 != (undefined1 *)0x0) && (puVar10 == (undefined1 *)0x0)) goto LAB_2c55275c;
  uStack_30 = uVar6;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      *(undefined1 *)((int)puStack_40 + iVar9 + 0x24) = *puVar10;
    }
    else if (uVar6 != 0) goto LAB_2c552672;
  }
  else {
    iVar2 = FUN_2c54f538(&uStack_30,0);
    *(int *)((int)puStack_40 + iVar9 + 0x1c) = iVar2;
    *(uint *)((int)puStack_40 + iVar9 + 0x24) = uStack_30;
LAB_2c552672:
    FUN_2c674668(iVar2,puVar10,uVar6);
    iVar2 = *(int *)((int)puStack_40 + iVar9 + 0x1c);
  }
  *(uint *)((int)puStack_40 + iVar9 + 0x20) = uStack_30;
  *(undefined1 *)(iVar2 + uStack_30) = 0;
  iVar2 = (int)puStack_40 + iVar9 + 0x3c;
  *(int *)((int)puStack_40 + iVar9 + 0x34) = iVar2;
  puVar10 = *(undefined1 **)(param_3 + 0x34);
  uVar6 = *(uint *)(param_3 + 0x38);
  if ((puVar10 + uVar6 != (undefined1 *)0x0) && (puVar10 == (undefined1 *)0x0)) goto LAB_2c55275c;
  uStack_30 = uVar6;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      *(undefined1 *)((int)puStack_40 + iVar9 + 0x3c) = *puVar10;
    }
    else if (uVar6 != 0) goto LAB_2c5526d4;
  }
  else {
    iVar2 = FUN_2c54f538(&uStack_30,0);
    *(int *)((int)puStack_40 + iVar9 + 0x34) = iVar2;
    *(uint *)((int)puStack_40 + iVar9 + 0x3c) = uStack_30;
LAB_2c5526d4:
    FUN_2c674668(iVar2,puVar10,uVar6);
    iVar2 = *(int *)((int)puStack_40 + iVar9 + 0x34);
  }
  *(uint *)((int)puStack_40 + iVar9 + 0x38) = uStack_30;
  *(undefined1 *)(iVar2 + uStack_30) = 0;
  iVar2 = (int)puStack_40 + iVar9 + 0x54;
  *(int *)((int)puStack_40 + iVar9 + 0x4c) = iVar2;
  puVar10 = *(undefined1 **)(param_3 + 0x4c);
  uVar6 = *(uint *)(param_3 + 0x50);
  if ((puVar10 + uVar6 != (undefined1 *)0x0) && (puVar10 == (undefined1 *)0x0)) goto LAB_2c55275c;
  uStack_30 = uVar6;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      *(undefined1 *)((int)puStack_40 + iVar9 + 0x54) = *puVar10;
    }
    else if (uVar6 != 0) goto LAB_2c55272e;
  }
  else {
    iVar2 = FUN_2c54f538(&uStack_30,0);
    *(int *)((int)puStack_40 + iVar9 + 0x4c) = iVar2;
    *(uint *)((int)puStack_40 + iVar9 + 0x54) = uStack_30;
LAB_2c55272e:
    FUN_2c674668(iVar2,puVar10,uVar6);
    iVar2 = *(int *)((int)puStack_40 + iVar9 + 0x4c);
  }
  *(uint *)((int)puStack_40 + iVar9 + 0x50) = uStack_30;
  *(undefined1 *)(iVar2 + uStack_30) = 0;
  iVar2 = (int)puStack_40 + iVar9 + 0x6c;
  *(int *)((int)puStack_40 + iVar9 + 100) = iVar2;
  puVar10 = *(undefined1 **)(param_3 + 100);
  uVar6 = *(uint *)(param_3 + 0x68);
  if ((puVar10 + uVar6 != (undefined1 *)0x0) && (puVar10 == (undefined1 *)0x0)) goto LAB_2c55275c;
  uStack_30 = uVar6;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      *(undefined1 *)((int)puStack_40 + iVar9 + 0x6c) = *puVar10;
    }
    else if (uVar6 != 0) goto LAB_2c552710;
  }
  else {
    iVar2 = FUN_2c54f538(&uStack_30,0);
    *(int *)((int)puStack_40 + iVar9 + 100) = iVar2;
    *(uint *)((int)puStack_40 + iVar9 + 0x6c) = uStack_30;
LAB_2c552710:
    FUN_2c674668(iVar2,puVar10,uVar6);
    iVar2 = *(int *)((int)puStack_40 + iVar9 + 100);
  }
  *(uint *)((int)puStack_40 + iVar9 + 0x68) = uStack_30;
  *(undefined1 *)(iVar2 + uStack_30) = 0;
  iVar2 = (int)puStack_40 + iVar9 + 0x84;
  *(int *)((int)puStack_40 + iVar9 + 0x7c) = iVar2;
  puVar10 = *(undefined1 **)(param_3 + 0x7c);
  uVar6 = *(uint *)(param_3 + 0x80);
  if ((puVar10 + uVar6 != (undefined1 *)0x0) && (puVar10 == (undefined1 *)0x0)) goto LAB_2c55275c;
  uStack_30 = uVar6;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      *(undefined1 *)((int)puStack_40 + iVar9 + 0x84) = *puVar10;
    }
    else if (uVar6 != 0) goto LAB_2c5526b6;
  }
  else {
    iVar2 = FUN_2c54f538(&uStack_30,0);
    *(int *)((int)puStack_40 + iVar9 + 0x7c) = iVar2;
    *(uint *)((int)puStack_40 + iVar9 + 0x84) = uStack_30;
LAB_2c5526b6:
    FUN_2c674668(iVar2,puVar10,uVar6);
    iVar2 = *(int *)((int)puStack_40 + iVar9 + 0x7c);
  }
  *(uint *)((int)puStack_40 + iVar9 + 0x80) = uStack_30;
  *(undefined1 *)(iVar2 + uStack_30) = 0;
  iVar2 = (int)puStack_40 + iVar9 + 0x9c;
  *(int *)((int)puStack_40 + iVar9 + 0x94) = iVar2;
  puVar10 = *(undefined1 **)(param_3 + 0x94);
  uVar6 = *(uint *)(param_3 + 0x98);
  if ((puVar10 + uVar6 != (undefined1 *)0x0) && (puVar10 == (undefined1 *)0x0)) {
LAB_2c55275c:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c55276c);
  }
  uStack_30 = uVar6;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      *(undefined1 *)((int)puStack_40 + iVar9 + 0x9c) = *puVar10;
      goto LAB_2c5520e2;
    }
    if (uVar6 == 0) goto LAB_2c5520e2;
  }
  else {
    iVar2 = FUN_2c54f538(&uStack_30,0);
    *(int *)((int)puStack_40 + iVar9 + 0x94) = iVar2;
    *(uint *)((int)puStack_40 + iVar9 + 0x9c) = uStack_30;
  }
  FUN_2c674668(iVar2,puVar10,uVar6);
  iVar2 = *(int *)((int)puStack_40 + iVar9 + 0x94);
LAB_2c5520e2:
  *(uint *)((int)puStack_40 + iVar9 + 0x98) = uStack_30;
  *(undefined1 *)(iVar2 + uStack_30) = 0;
  *(undefined4 *)((int)puStack_40 + iVar9 + 0xac) = *(undefined4 *)(param_3 + 0xac);
  FUN_2c550910((int)puStack_40 + iVar9 + 0xb0,param_3 + 0xb0);
  puStack_3c = puStack_40;
  if (param_2 != piVar13) {
    piVar3 = piVar13 + 3;
    puVar5 = puStack_40;
    piVar7 = piVar13;
    do {
      *puVar5 = uVar1;
      puVar5[1] = puVar5 + 3;
      if ((int *)piVar7[1] == piVar3) {
        iVar14 = piVar3[1];
        iVar9 = piVar3[2];
        iVar2 = piVar3[3];
        puVar5[3] = *piVar3;
        puVar5[4] = iVar14;
        puVar5[5] = iVar9;
        puVar5[6] = iVar2;
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
        iVar9 = piVar7[10];
        iVar14 = piVar7[0xb];
        iVar2 = piVar7[0xc];
        puVar5[9] = piVar7[9];
        puVar5[10] = iVar9;
        puVar5[0xb] = iVar14;
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
      if (piVar7 + 0xf == (int *)piVar7[0xd]) {
        iVar9 = piVar7[0x10];
        iVar14 = piVar7[0x11];
        iVar2 = piVar7[0x12];
        puVar5[0xf] = piVar7[0xf];
        puVar5[0x10] = iVar9;
        puVar5[0x11] = iVar14;
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
      if ((int *)piVar7[0x13] == piVar7 + 0x15) {
        iVar9 = piVar7[0x16];
        iVar14 = piVar7[0x17];
        iVar2 = piVar7[0x18];
        puVar5[0x15] = piVar7[0x15];
        puVar5[0x16] = iVar9;
        puVar5[0x17] = iVar14;
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
        iVar9 = piVar7[0x1c];
        iVar14 = piVar7[0x1d];
        iVar2 = piVar7[0x1e];
        puVar5[0x1b] = piVar7[0x1b];
        puVar5[0x1c] = iVar9;
        puVar5[0x1d] = iVar14;
        puVar5[0x1e] = iVar2;
      }
      else {
        puVar5[0x19] = (int *)piVar7[0x19];
        puVar5[0x1b] = piVar7[0x1b];
      }
      puVar5[0x1a] = piVar7[0x1a];
      *(undefined1 *)(piVar7 + 0x1b) = 0;
      piVar7[0x19] = (int)(piVar7 + 0x1b);
      piVar7[0x1a] = 0;
      puVar5[0x1f] = puVar5 + 0x21;
      if ((int *)piVar7[0x1f] == piVar7 + 0x21) {
        iVar9 = piVar7[0x22];
        iVar14 = piVar7[0x23];
        iVar2 = piVar7[0x24];
        puVar5[0x21] = piVar7[0x21];
        puVar5[0x22] = iVar9;
        puVar5[0x23] = iVar14;
        puVar5[0x24] = iVar2;
      }
      else {
        puVar5[0x1f] = (int *)piVar7[0x1f];
        puVar5[0x21] = piVar7[0x21];
      }
      puVar5[0x20] = piVar7[0x20];
      *(undefined1 *)(piVar7 + 0x21) = 0;
      piVar7[0x1f] = (int)(piVar7 + 0x21);
      piVar7[0x20] = 0;
      puVar5[0x25] = puVar5 + 0x27;
      if (piVar7 + 0x27 == (int *)piVar7[0x25]) {
        iVar9 = piVar7[0x28];
        iVar14 = piVar7[0x29];
        iVar2 = piVar7[0x2a];
        puVar5[0x27] = piVar7[0x27];
        puVar5[0x28] = iVar9;
        puVar5[0x29] = iVar14;
        puVar5[0x2a] = iVar2;
      }
      else {
        puVar5[0x25] = (int *)piVar7[0x25];
        puVar5[0x27] = piVar7[0x27];
      }
      piVar3 = piVar3 + 0x2f;
      puVar5[0x26] = piVar7[0x26];
      *(undefined1 *)(piVar7 + 0x27) = 0;
      piVar7[0x25] = (int)(piVar7 + 0x27);
      piVar7[0x26] = 0;
      puVar5[0x2b] = piVar7[0x2b];
      piVar11 = piVar7 + 0x2f;
      puVar5[0x2c] = piVar7[0x2c];
      puVar5[0x2d] = piVar7[0x2d];
      puVar5[0x2e] = piVar7[0x2e];
      piVar7[0x2c] = 0;
      piVar7[0x2d] = 0;
      piVar7[0x2e] = 0;
      puVar5 = puVar5 + 0x2f;
      piVar7 = piVar11;
    } while (piVar11 != param_2);
    puStack_3c = puStack_40 +
                 (_LAB_2c552650 * ((uint)((int)param_2 + (-0xbc - (int)piVar13)) >> 2) & 0x3fffffff)
                 * 0x2f + 0x2f;
  }
  puStack_3c = puStack_3c + 0x2f;
  piVar7 = piVar13;
  if (param_2 != piVar12) {
    piVar11 = param_2 + 3;
    puVar5 = puStack_3c;
    piVar3 = param_2;
    do {
      *puVar5 = uVar1;
      puVar5[1] = puVar5 + 3;
      if ((int *)piVar3[1] == piVar11) {
        iVar14 = piVar11[1];
        iVar9 = piVar11[2];
        iVar2 = piVar11[3];
        puVar5[3] = *piVar11;
        puVar5[4] = iVar14;
        puVar5[5] = iVar9;
        puVar5[6] = iVar2;
      }
      else {
        puVar5[1] = (int *)piVar3[1];
        puVar5[3] = piVar3[3];
      }
      puVar5[2] = piVar3[2];
      *(undefined1 *)(piVar3 + 3) = 0;
      piVar3[1] = (int)piVar11;
      piVar3[2] = 0;
      puVar5[7] = puVar5 + 9;
      if (piVar3 + 9 == (int *)piVar3[7]) {
        iVar9 = piVar3[10];
        iVar14 = piVar3[0xb];
        iVar2 = piVar3[0xc];
        puVar5[9] = piVar3[9];
        puVar5[10] = iVar9;
        puVar5[0xb] = iVar14;
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
        iVar9 = piVar3[0x10];
        iVar14 = piVar3[0x11];
        iVar2 = piVar3[0x12];
        puVar5[0xf] = piVar3[0xf];
        puVar5[0x10] = iVar9;
        puVar5[0x11] = iVar14;
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
        iVar9 = piVar3[0x16];
        iVar14 = piVar3[0x17];
        iVar2 = piVar3[0x18];
        puVar5[0x15] = piVar3[0x15];
        puVar5[0x16] = iVar9;
        puVar5[0x17] = iVar14;
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
        iVar9 = piVar3[0x1c];
        iVar14 = piVar3[0x1d];
        iVar2 = piVar3[0x1e];
        puVar5[0x1b] = piVar3[0x1b];
        puVar5[0x1c] = iVar9;
        puVar5[0x1d] = iVar14;
        puVar5[0x1e] = iVar2;
      }
      else {
        puVar5[0x19] = (int *)piVar3[0x19];
        puVar5[0x1b] = piVar3[0x1b];
      }
      puVar5[0x1a] = piVar3[0x1a];
      piVar3[0x19] = (int)(piVar3 + 0x1b);
      piVar3[0x1a] = 0;
      *(undefined1 *)(piVar3 + 0x1b) = 0;
      puVar5[0x1f] = puVar5 + 0x21;
      if (piVar3 + 0x21 == (int *)piVar3[0x1f]) {
        iVar9 = piVar3[0x22];
        iVar14 = piVar3[0x23];
        iVar2 = piVar3[0x24];
        puVar5[0x21] = piVar3[0x21];
        puVar5[0x22] = iVar9;
        puVar5[0x23] = iVar14;
        puVar5[0x24] = iVar2;
      }
      else {
        puVar5[0x1f] = (int *)piVar3[0x1f];
        puVar5[0x21] = piVar3[0x21];
      }
      puVar5[0x20] = piVar3[0x20];
      piVar3[0x1f] = (int)(piVar3 + 0x21);
      piVar3[0x20] = 0;
      *(undefined1 *)(piVar3 + 0x21) = 0;
      puVar5[0x25] = puVar5 + 0x27;
      if (piVar3 + 0x27 == (int *)piVar3[0x25]) {
        iVar9 = piVar3[0x28];
        iVar14 = piVar3[0x29];
        iVar2 = piVar3[0x2a];
        puVar5[0x27] = piVar3[0x27];
        puVar5[0x28] = iVar9;
        puVar5[0x29] = iVar14;
        puVar5[0x2a] = iVar2;
      }
      else {
        puVar5[0x25] = (int *)piVar3[0x25];
        puVar5[0x27] = piVar3[0x27];
      }
      piVar8 = piVar3 + 0x2f;
      piVar11 = piVar11 + 0x2f;
      puVar5[0x26] = piVar3[0x26];
      piVar3[0x25] = (int)(piVar3 + 0x27);
      piVar3[0x26] = 0;
      *(undefined1 *)(piVar3 + 0x27) = 0;
      puVar5[0x2b] = piVar3[0x2b];
      puVar5[0x2c] = piVar3[0x2c];
      puVar5[0x2d] = piVar3[0x2d];
      puVar5[0x2e] = piVar3[0x2e];
      piVar3[0x2c] = 0;
      piVar3[0x2d] = 0;
      piVar3[0x2e] = 0;
      puVar5 = puVar5 + 0x2f;
      piVar3 = piVar8;
    } while (piVar8 != piVar12);
    puStack_3c = puStack_3c +
                 (_LAB_2c552650 * ((uint)((int)piVar12 + (-0xbc - (int)param_2)) >> 2) & 0x3fffffff)
                 * 0x2f + 0x2f;
  }
  for (; piVar7 != piVar12; piVar7 = piVar7 + 0x2f) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  if (piVar13 == (int *)0x0) {
    param_1[1] = puStack_3c;
    *param_1 = puStack_40;
    param_1[2] = puStack_40 + uStack_38 * 0x2f;
    if (*_LAB_2c552654 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,piVar13);
}

