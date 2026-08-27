/* FUN_2c53f998 @ 0x2c53f998 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c53f998(int *param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool in_ZR;
  bool in_CY;
  undefined4 *puStack_30;
  
  piVar1 = _LAB_2c53fc58;
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c53fd44);
  }
  iVar5 = *param_1;
  if (param_2 <= (uint)(_LAB_2c53fc54 * (param_1[2] - iVar5 >> 2))) {
    return;
  }
  iVar10 = param_1[1];
  iVar3 = iVar10 - iVar5;
  if (param_2 == 0) {
    iVar9 = 0;
    puStack_30 = (undefined4 *)0x0;
  }
  else {
    if (*_LAB_2c53fc58 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    iVar9 = param_2 * 0xc4;
    puStack_30 = (undefined4 *)FUN_2c47245c(0,iVar9);
  }
  uVar2 = _LAB_2c53fc5c;
  if (iVar5 != iVar10) {
    puVar7 = (undefined4 *)(iVar5 + 0xc);
    puVar4 = puStack_30;
    do {
      *puVar4 = uVar2;
      puVar4[1] = puVar4 + 3;
      if (*(undefined4 **)(iVar5 + 4) == puVar7) {
        uVar12 = puVar7[1];
        uVar11 = puVar7[2];
        uVar8 = puVar7[3];
        puVar4[3] = *puVar7;
        puVar4[4] = uVar12;
        puVar4[5] = uVar11;
        puVar4[6] = uVar8;
      }
      else {
        puVar4[1] = *(undefined4 **)(iVar5 + 4);
        puVar4[3] = *(undefined4 *)(iVar5 + 0xc);
      }
      puVar4[2] = *(undefined4 *)(iVar5 + 8);
      *(undefined1 *)(iVar5 + 0xc) = 0;
      *(undefined4 **)(iVar5 + 4) = puVar7;
      *(undefined4 *)(iVar5 + 8) = 0;
      puVar4[7] = puVar4 + 9;
      if (*(int *)(iVar5 + 0x1c) == iVar5 + 0x24) {
        uVar11 = *(undefined4 *)(iVar5 + 0x28);
        uVar12 = *(undefined4 *)(iVar5 + 0x2c);
        uVar8 = *(undefined4 *)(iVar5 + 0x30);
        puVar4[9] = *(undefined4 *)(iVar5 + 0x24);
        puVar4[10] = uVar11;
        puVar4[0xb] = uVar12;
        puVar4[0xc] = uVar8;
      }
      else {
        puVar4[7] = *(int *)(iVar5 + 0x1c);
        puVar4[9] = *(undefined4 *)(iVar5 + 0x24);
      }
      puVar4[8] = *(undefined4 *)(iVar5 + 0x20);
      *(int *)(iVar5 + 0x1c) = iVar5 + 0x24;
      *(undefined4 *)(iVar5 + 0x20) = 0;
      *(undefined1 *)(iVar5 + 0x24) = 0;
      puVar4[0xd] = puVar4 + 0xf;
      if (*(int *)(iVar5 + 0x34) == iVar5 + 0x3c) {
        uVar11 = *(undefined4 *)(iVar5 + 0x40);
        uVar12 = *(undefined4 *)(iVar5 + 0x44);
        uVar8 = *(undefined4 *)(iVar5 + 0x48);
        puVar4[0xf] = *(undefined4 *)(iVar5 + 0x3c);
        puVar4[0x10] = uVar11;
        puVar4[0x11] = uVar12;
        puVar4[0x12] = uVar8;
      }
      else {
        puVar4[0xd] = *(int *)(iVar5 + 0x34);
        puVar4[0xf] = *(undefined4 *)(iVar5 + 0x3c);
      }
      puVar4[0xe] = *(undefined4 *)(iVar5 + 0x38);
      *(int *)(iVar5 + 0x34) = iVar5 + 0x3c;
      *(undefined4 *)(iVar5 + 0x38) = 0;
      *(undefined1 *)(iVar5 + 0x3c) = 0;
      puVar4[0x13] = puVar4 + 0x15;
      if (iVar5 + 0x54 == *(int *)(iVar5 + 0x4c)) {
        uVar11 = *(undefined4 *)(iVar5 + 0x58);
        uVar12 = *(undefined4 *)(iVar5 + 0x5c);
        uVar8 = *(undefined4 *)(iVar5 + 0x60);
        puVar4[0x15] = *(undefined4 *)(iVar5 + 0x54);
        puVar4[0x16] = uVar11;
        puVar4[0x17] = uVar12;
        puVar4[0x18] = uVar8;
      }
      else {
        puVar4[0x13] = *(int *)(iVar5 + 0x4c);
        puVar4[0x15] = *(undefined4 *)(iVar5 + 0x54);
      }
      puVar4[0x14] = *(undefined4 *)(iVar5 + 0x50);
      *(int *)(iVar5 + 0x4c) = iVar5 + 0x54;
      *(undefined4 *)(iVar5 + 0x50) = 0;
      *(undefined1 *)(iVar5 + 0x54) = 0;
      puVar4[0x19] = puVar4 + 0x1b;
      if (*(int *)(iVar5 + 100) == iVar5 + 0x6c) {
        uVar11 = *(undefined4 *)(iVar5 + 0x70);
        uVar12 = *(undefined4 *)(iVar5 + 0x74);
        uVar8 = *(undefined4 *)(iVar5 + 0x78);
        puVar4[0x1b] = *(undefined4 *)(iVar5 + 0x6c);
        puVar4[0x1c] = uVar11;
        puVar4[0x1d] = uVar12;
        puVar4[0x1e] = uVar8;
      }
      else {
        puVar4[0x19] = *(int *)(iVar5 + 100);
        puVar4[0x1b] = *(undefined4 *)(iVar5 + 0x6c);
      }
      puVar4[0x1a] = *(undefined4 *)(iVar5 + 0x68);
      *(int *)(iVar5 + 100) = iVar5 + 0x6c;
      *(undefined4 *)(iVar5 + 0x68) = 0;
      *(undefined1 *)(iVar5 + 0x6c) = 0;
      puVar4[0x1f] = puVar4 + 0x21;
      if (*(int *)(iVar5 + 0x7c) == iVar5 + 0x84) {
        uVar11 = *(undefined4 *)(iVar5 + 0x88);
        uVar12 = *(undefined4 *)(iVar5 + 0x8c);
        uVar8 = *(undefined4 *)(iVar5 + 0x90);
        puVar4[0x21] = *(undefined4 *)(iVar5 + 0x84);
        puVar4[0x22] = uVar11;
        puVar4[0x23] = uVar12;
        puVar4[0x24] = uVar8;
      }
      else {
        puVar4[0x1f] = *(int *)(iVar5 + 0x7c);
        puVar4[0x21] = *(undefined4 *)(iVar5 + 0x84);
      }
      puVar4[0x20] = *(undefined4 *)(iVar5 + 0x80);
      *(int *)(iVar5 + 0x7c) = iVar5 + 0x84;
      *(undefined4 *)(iVar5 + 0x80) = 0;
      *(undefined1 *)(iVar5 + 0x84) = 0;
      puVar4[0x25] = puVar4 + 0x27;
      if (*(int *)(iVar5 + 0x94) == iVar5 + 0x9c) {
        uVar11 = *(undefined4 *)(iVar5 + 0xa0);
        uVar12 = *(undefined4 *)(iVar5 + 0xa4);
        uVar8 = *(undefined4 *)(iVar5 + 0xa8);
        puVar4[0x27] = *(undefined4 *)(iVar5 + 0x9c);
        puVar4[0x28] = uVar11;
        puVar4[0x29] = uVar12;
        puVar4[0x2a] = uVar8;
      }
      else {
        puVar4[0x25] = *(int *)(iVar5 + 0x94);
        puVar4[0x27] = *(undefined4 *)(iVar5 + 0x9c);
      }
      puVar4[0x26] = *(undefined4 *)(iVar5 + 0x98);
      *(int *)(iVar5 + 0x94) = iVar5 + 0x9c;
      *(undefined4 *)(iVar5 + 0x98) = 0;
      *(undefined1 *)(iVar5 + 0x9c) = 0;
      puVar4[0x2b] = puVar4 + 0x2d;
      if (*(int *)(iVar5 + 0xac) == iVar5 + 0xb4) {
        uVar11 = *(undefined4 *)(iVar5 + 0xb8);
        uVar12 = *(undefined4 *)(iVar5 + 0xbc);
        uVar8 = *(undefined4 *)(iVar5 + 0xc0);
        puVar4[0x2d] = *(undefined4 *)(iVar5 + 0xb4);
        puVar4[0x2e] = uVar11;
        puVar4[0x2f] = uVar12;
        puVar4[0x30] = uVar8;
      }
      else {
        puVar4[0x2b] = *(int *)(iVar5 + 0xac);
        puVar4[0x2d] = *(undefined4 *)(iVar5 + 0xb4);
      }
      puVar7 = puVar7 + 0x31;
      puVar4[0x2c] = *(undefined4 *)(iVar5 + 0xb0);
      *(undefined1 *)(iVar5 + 0xb4) = 0;
      *(int *)(iVar5 + 0xac) = iVar5 + 0xb4;
      *(undefined4 *)(iVar5 + 0xb0) = 0;
      iVar5 = iVar5 + 0xc4;
      puVar4 = puVar4 + 0x31;
    } while (iVar10 != iVar5);
  }
  uVar2 = _LAB_2c53fd48;
  iVar5 = *param_1;
  iVar10 = param_1[1];
  if (iVar5 != iVar10) {
    iVar6 = iVar5 + 0xb4;
    do {
      *(undefined4 *)(iVar6 + -0xb4) = uVar2;
      if (iVar6 != *(int *)(iVar6 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(iVar6 + -0x20) != iVar5 + 0x9c) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(iVar6 + -0x38) != iVar5 + 0x84) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(iVar6 + -0x50) != iVar5 + 0x6c) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(iVar6 + -0x68) != iVar5 + 0x54) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(iVar6 + -0x80) != iVar5 + 0x3c) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(iVar6 + -0x98) != iVar5 + 0x24) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(iVar6 + -0xb0) != iVar5 + 0xc) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      iVar5 = iVar5 + 0xc4;
      iVar6 = iVar6 + 0xc4;
    } while (iVar10 != iVar5);
    iVar10 = *param_1;
  }
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar10);
  }
  *param_1 = (int)puStack_30;
  param_1[1] = iVar3 + (int)puStack_30;
  param_1[2] = (int)puStack_30 + iVar9;
  return;
}

