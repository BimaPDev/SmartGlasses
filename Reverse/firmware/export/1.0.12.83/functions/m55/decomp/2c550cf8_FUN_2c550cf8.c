/* FUN_2c550cf8 @ 0x2c550cf8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c550cf8(int *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool in_ZR;
  bool in_CY;
  undefined4 *puStack_30;
  
  piVar6 = _LAB_2c550fd4;
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c550fdc);
  }
  iVar3 = *param_1;
  if (param_2 <= (uint)(_LAB_2c550fd0 * (param_1[2] - iVar3 >> 2))) {
    return;
  }
  iVar12 = param_1[1];
  if (param_2 == 0) {
    iVar11 = 0;
    puStack_30 = (undefined4 *)0x0;
  }
  else {
    if (*_LAB_2c550fd4 == 0) {
      FUN_2c4723c4();
      *piVar6 = 1;
    }
    iVar11 = param_2 * 0xbc;
    puStack_30 = (undefined4 *)FUN_2c47245c(0,iVar11);
  }
  uVar1 = _LAB_2c550fd8;
  if (iVar3 != iVar12) {
    puVar8 = (undefined4 *)(iVar3 + 0xc);
    puVar2 = puStack_30;
    iVar5 = iVar3;
    do {
      *puVar2 = uVar1;
      puVar2[1] = puVar2 + 3;
      if (*(undefined4 **)(iVar5 + 4) == puVar8) {
        uVar14 = puVar8[1];
        uVar13 = puVar8[2];
        uVar10 = puVar8[3];
        puVar2[3] = *puVar8;
        puVar2[4] = uVar14;
        puVar2[5] = uVar13;
        puVar2[6] = uVar10;
      }
      else {
        puVar2[1] = *(undefined4 **)(iVar5 + 4);
        puVar2[3] = *(undefined4 *)(iVar5 + 0xc);
      }
      puVar2[2] = *(undefined4 *)(iVar5 + 8);
      *(undefined1 *)(iVar5 + 0xc) = 0;
      *(undefined4 **)(iVar5 + 4) = puVar8;
      *(undefined4 *)(iVar5 + 8) = 0;
      puVar2[7] = puVar2 + 9;
      if (*(int *)(iVar5 + 0x1c) == iVar5 + 0x24) {
        uVar13 = *(undefined4 *)(iVar5 + 0x28);
        uVar14 = *(undefined4 *)(iVar5 + 0x2c);
        uVar10 = *(undefined4 *)(iVar5 + 0x30);
        puVar2[9] = *(undefined4 *)(iVar5 + 0x24);
        puVar2[10] = uVar13;
        puVar2[0xb] = uVar14;
        puVar2[0xc] = uVar10;
      }
      else {
        puVar2[7] = *(int *)(iVar5 + 0x1c);
        puVar2[9] = *(undefined4 *)(iVar5 + 0x24);
      }
      puVar2[8] = *(undefined4 *)(iVar5 + 0x20);
      *(int *)(iVar5 + 0x1c) = iVar5 + 0x24;
      *(undefined4 *)(iVar5 + 0x20) = 0;
      *(undefined1 *)(iVar5 + 0x24) = 0;
      puVar2[0xd] = puVar2 + 0xf;
      if (*(int *)(iVar5 + 0x34) == iVar5 + 0x3c) {
        uVar13 = *(undefined4 *)(iVar5 + 0x40);
        uVar14 = *(undefined4 *)(iVar5 + 0x44);
        uVar10 = *(undefined4 *)(iVar5 + 0x48);
        puVar2[0xf] = *(undefined4 *)(iVar5 + 0x3c);
        puVar2[0x10] = uVar13;
        puVar2[0x11] = uVar14;
        puVar2[0x12] = uVar10;
      }
      else {
        puVar2[0xd] = *(int *)(iVar5 + 0x34);
        puVar2[0xf] = *(undefined4 *)(iVar5 + 0x3c);
      }
      puVar2[0xe] = *(undefined4 *)(iVar5 + 0x38);
      *(int *)(iVar5 + 0x34) = iVar5 + 0x3c;
      *(undefined4 *)(iVar5 + 0x38) = 0;
      *(undefined1 *)(iVar5 + 0x3c) = 0;
      puVar2[0x13] = puVar2 + 0x15;
      if (*(int *)(iVar5 + 0x4c) == iVar5 + 0x54) {
        uVar13 = *(undefined4 *)(iVar5 + 0x58);
        uVar14 = *(undefined4 *)(iVar5 + 0x5c);
        uVar10 = *(undefined4 *)(iVar5 + 0x60);
        puVar2[0x15] = *(undefined4 *)(iVar5 + 0x54);
        puVar2[0x16] = uVar13;
        puVar2[0x17] = uVar14;
        puVar2[0x18] = uVar10;
      }
      else {
        puVar2[0x13] = *(int *)(iVar5 + 0x4c);
        puVar2[0x15] = *(undefined4 *)(iVar5 + 0x54);
      }
      puVar2[0x14] = *(undefined4 *)(iVar5 + 0x50);
      *(int *)(iVar5 + 0x4c) = iVar5 + 0x54;
      *(undefined4 *)(iVar5 + 0x50) = 0;
      *(undefined1 *)(iVar5 + 0x54) = 0;
      puVar2[0x19] = puVar2 + 0x1b;
      if (*(int *)(iVar5 + 100) == iVar5 + 0x6c) {
        uVar13 = *(undefined4 *)(iVar5 + 0x70);
        uVar14 = *(undefined4 *)(iVar5 + 0x74);
        uVar10 = *(undefined4 *)(iVar5 + 0x78);
        puVar2[0x1b] = *(undefined4 *)(iVar5 + 0x6c);
        puVar2[0x1c] = uVar13;
        puVar2[0x1d] = uVar14;
        puVar2[0x1e] = uVar10;
      }
      else {
        puVar2[0x19] = *(int *)(iVar5 + 100);
        puVar2[0x1b] = *(undefined4 *)(iVar5 + 0x6c);
      }
      puVar2[0x1a] = *(undefined4 *)(iVar5 + 0x68);
      *(int *)(iVar5 + 100) = iVar5 + 0x6c;
      *(undefined4 *)(iVar5 + 0x68) = 0;
      *(undefined1 *)(iVar5 + 0x6c) = 0;
      puVar2[0x1f] = puVar2 + 0x21;
      if (iVar5 + 0x84 == *(int *)(iVar5 + 0x7c)) {
        uVar13 = *(undefined4 *)(iVar5 + 0x88);
        uVar14 = *(undefined4 *)(iVar5 + 0x8c);
        uVar10 = *(undefined4 *)(iVar5 + 0x90);
        puVar2[0x21] = *(undefined4 *)(iVar5 + 0x84);
        puVar2[0x22] = uVar13;
        puVar2[0x23] = uVar14;
        puVar2[0x24] = uVar10;
      }
      else {
        puVar2[0x1f] = *(int *)(iVar5 + 0x7c);
        puVar2[0x21] = *(undefined4 *)(iVar5 + 0x84);
      }
      puVar2[0x20] = *(undefined4 *)(iVar5 + 0x80);
      *(int *)(iVar5 + 0x7c) = iVar5 + 0x84;
      *(undefined4 *)(iVar5 + 0x80) = 0;
      *(undefined1 *)(iVar5 + 0x84) = 0;
      puVar2[0x25] = puVar2 + 0x27;
      if (iVar5 + 0x9c == *(int *)(iVar5 + 0x94)) {
        uVar13 = *(undefined4 *)(iVar5 + 0xa0);
        uVar14 = *(undefined4 *)(iVar5 + 0xa4);
        uVar10 = *(undefined4 *)(iVar5 + 0xa8);
        puVar2[0x27] = *(undefined4 *)(iVar5 + 0x9c);
        puVar2[0x28] = uVar13;
        puVar2[0x29] = uVar14;
        puVar2[0x2a] = uVar10;
      }
      else {
        puVar2[0x25] = *(int *)(iVar5 + 0x94);
        puVar2[0x27] = *(undefined4 *)(iVar5 + 0x9c);
      }
      iVar4 = iVar5 + 0xbc;
      puVar8 = puVar8 + 0x2f;
      puVar2[0x26] = *(undefined4 *)(iVar5 + 0x98);
      *(int *)(iVar5 + 0x94) = iVar5 + 0x9c;
      *(undefined4 *)(iVar5 + 0x98) = 0;
      *(undefined1 *)(iVar5 + 0x9c) = 0;
      puVar2[0x2b] = *(undefined4 *)(iVar5 + 0xac);
      puVar2[0x2c] = *(undefined4 *)(iVar5 + 0xb0);
      puVar2[0x2d] = *(undefined4 *)(iVar5 + 0xb4);
      puVar2[0x2e] = *(undefined4 *)(iVar5 + 0xb8);
      *(undefined4 *)(iVar5 + 0xb0) = 0;
      *(undefined4 *)(iVar5 + 0xb4) = 0;
      *(undefined4 *)(iVar5 + 0xb8) = 0;
      puVar2 = puVar2 + 0x2f;
      iVar5 = iVar4;
    } while (iVar12 != iVar4);
  }
  piVar9 = (int *)param_1[1];
  piVar6 = (int *)*param_1;
  if ((int *)*param_1 != piVar9) {
    do {
      piVar7 = piVar6 + 0x2f;
      (**(code **)(*piVar6 + 4))(piVar6);
      piVar6 = piVar7;
    } while (piVar9 != piVar7);
    piVar9 = (int *)*param_1;
  }
  if (piVar9 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar9);
  }
  *param_1 = (int)puStack_30;
  param_1[1] = (iVar12 - iVar3) + (int)puStack_30;
  param_1[2] = iVar11 + (int)puStack_30;
  return;
}

