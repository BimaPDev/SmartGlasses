/* FUN_2c53ff6c @ 0x2c53ff6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c53ff6c(int *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  
  piVar2 = _LAB_2c540618;
  iVar12 = *param_1;
  iVar11 = param_1[1];
  uVar5 = DAT_2c54029c * (iVar11 - iVar12 >> 2);
  if (uVar5 - _LAB_2c5402a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c540620);
  }
  uVar8 = uVar5;
  if (uVar5 == 0) {
    uVar8 = 1;
  }
  uVar6 = uVar5 + uVar8;
  iStack_30 = _DAT_2c54061c;
  if (!CARRY4(uVar5,uVar8)) {
    if (uVar6 == 0) {
      puStack_38 = (undefined4 *)0xc4;
      puStack_34 = (undefined4 *)0x0;
      iStack_30 = 0;
      goto LAB_2c53ffae;
    }
    if (_LAB_2c5402a0 <= uVar6) {
      uVar6 = _LAB_2c5402a0;
    }
    iStack_30 = uVar6 * 0xc4;
  }
  if (*_LAB_2c540618 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  puStack_34 = (undefined4 *)FUN_2c47245c(0,iStack_30);
  iStack_30 = (int)puStack_34 + iStack_30;
  puStack_38 = puStack_34 + 0x31;
LAB_2c53ffae:
  uVar1 = _LAB_2c5402a4;
  iVar3 = FUN_2c674268((int)puStack_34 + (param_2 - iVar12),0,0xc4);
  *(undefined4 *)((int)puStack_34 + (param_2 - iVar12)) = uVar1;
  *(int *)(iVar3 + 4) = iVar3 + 0xc;
  *(undefined1 *)(iVar3 + 0xc) = 0;
  *(int *)(iVar3 + 0x1c) = iVar3 + 0x24;
  *(undefined1 *)(iVar3 + 0x24) = 0;
  *(int *)(iVar3 + 0x34) = iVar3 + 0x3c;
  *(undefined1 *)(iVar3 + 0x3c) = 0;
  *(int *)(iVar3 + 0x4c) = iVar3 + 0x54;
  *(undefined1 *)(iVar3 + 0x54) = 0;
  *(int *)(iVar3 + 100) = iVar3 + 0x6c;
  *(undefined1 *)(iVar3 + 0x6c) = 0;
  *(int *)(iVar3 + 0x7c) = iVar3 + 0x84;
  *(undefined1 *)(iVar3 + 0x84) = 0;
  *(int *)(iVar3 + 0x94) = iVar3 + 0x9c;
  *(undefined1 *)(iVar3 + 0x9c) = 0;
  *(undefined1 *)(iVar3 + 0xb4) = 0;
  *(int *)(iVar3 + 0xac) = iVar3 + 0xb4;
  if (param_2 != iVar12) {
    puVar4 = (undefined4 *)(iVar12 + 0xc);
    puVar7 = puStack_34;
    iVar3 = iVar12;
    do {
      *puVar7 = uVar1;
      puVar7[1] = puVar7 + 3;
      if (*(undefined4 **)(iVar3 + 4) == puVar4) {
        uVar14 = puVar4[1];
        uVar13 = puVar4[2];
        uVar10 = puVar4[3];
        puVar7[3] = *puVar4;
        puVar7[4] = uVar14;
        puVar7[5] = uVar13;
        puVar7[6] = uVar10;
      }
      else {
        puVar7[1] = *(undefined4 **)(iVar3 + 4);
        puVar7[3] = *(undefined4 *)(iVar3 + 0xc);
      }
      puVar7[2] = *(undefined4 *)(iVar3 + 8);
      *(undefined1 *)(iVar3 + 0xc) = 0;
      *(undefined4 **)(iVar3 + 4) = puVar4;
      *(undefined4 *)(iVar3 + 8) = 0;
      puVar7[7] = puVar7 + 9;
      if (*(int *)(iVar3 + 0x1c) == iVar3 + 0x24) {
        uVar13 = *(undefined4 *)(iVar3 + 0x28);
        uVar14 = *(undefined4 *)(iVar3 + 0x2c);
        uVar10 = *(undefined4 *)(iVar3 + 0x30);
        puVar7[9] = *(undefined4 *)(iVar3 + 0x24);
        puVar7[10] = uVar13;
        puVar7[0xb] = uVar14;
        puVar7[0xc] = uVar10;
      }
      else {
        puVar7[7] = *(int *)(iVar3 + 0x1c);
        puVar7[9] = *(undefined4 *)(iVar3 + 0x24);
      }
      puVar7[8] = *(undefined4 *)(iVar3 + 0x20);
      *(undefined1 *)(iVar3 + 0x24) = 0;
      *(int *)(iVar3 + 0x1c) = iVar3 + 0x24;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      puVar7[0xd] = puVar7 + 0xf;
      if (*(int *)(iVar3 + 0x34) == iVar3 + 0x3c) {
        uVar13 = *(undefined4 *)(iVar3 + 0x40);
        uVar14 = *(undefined4 *)(iVar3 + 0x44);
        uVar10 = *(undefined4 *)(iVar3 + 0x48);
        puVar7[0xf] = *(undefined4 *)(iVar3 + 0x3c);
        puVar7[0x10] = uVar13;
        puVar7[0x11] = uVar14;
        puVar7[0x12] = uVar10;
      }
      else {
        puVar7[0xd] = *(int *)(iVar3 + 0x34);
        puVar7[0xf] = *(undefined4 *)(iVar3 + 0x3c);
      }
      puVar7[0xe] = *(undefined4 *)(iVar3 + 0x38);
      *(undefined1 *)(iVar3 + 0x3c) = 0;
      *(int *)(iVar3 + 0x34) = iVar3 + 0x3c;
      *(undefined4 *)(iVar3 + 0x38) = 0;
      puVar7[0x13] = puVar7 + 0x15;
      if (*(int *)(iVar3 + 0x4c) == iVar3 + 0x54) {
        uVar13 = *(undefined4 *)(iVar3 + 0x58);
        uVar14 = *(undefined4 *)(iVar3 + 0x5c);
        uVar10 = *(undefined4 *)(iVar3 + 0x60);
        puVar7[0x15] = *(undefined4 *)(iVar3 + 0x54);
        puVar7[0x16] = uVar13;
        puVar7[0x17] = uVar14;
        puVar7[0x18] = uVar10;
      }
      else {
        puVar7[0x13] = *(int *)(iVar3 + 0x4c);
        puVar7[0x15] = *(undefined4 *)(iVar3 + 0x54);
      }
      puVar7[0x14] = *(undefined4 *)(iVar3 + 0x50);
      *(undefined1 *)(iVar3 + 0x54) = 0;
      *(int *)(iVar3 + 0x4c) = iVar3 + 0x54;
      *(undefined4 *)(iVar3 + 0x50) = 0;
      puVar7[0x19] = puVar7 + 0x1b;
      if (*(int *)(iVar3 + 100) == iVar3 + 0x6c) {
        uVar13 = *(undefined4 *)(iVar3 + 0x70);
        uVar14 = *(undefined4 *)(iVar3 + 0x74);
        uVar10 = *(undefined4 *)(iVar3 + 0x78);
        puVar7[0x1b] = *(undefined4 *)(iVar3 + 0x6c);
        puVar7[0x1c] = uVar13;
        puVar7[0x1d] = uVar14;
        puVar7[0x1e] = uVar10;
      }
      else {
        puVar7[0x19] = *(int *)(iVar3 + 100);
        puVar7[0x1b] = *(undefined4 *)(iVar3 + 0x6c);
      }
      puVar7[0x1a] = *(undefined4 *)(iVar3 + 0x68);
      *(undefined1 *)(iVar3 + 0x6c) = 0;
      *(int *)(iVar3 + 100) = iVar3 + 0x6c;
      *(undefined4 *)(iVar3 + 0x68) = 0;
      puVar7[0x1f] = puVar7 + 0x21;
      if (*(int *)(iVar3 + 0x7c) == iVar3 + 0x84) {
        uVar13 = *(undefined4 *)(iVar3 + 0x88);
        uVar14 = *(undefined4 *)(iVar3 + 0x8c);
        uVar10 = *(undefined4 *)(iVar3 + 0x90);
        puVar7[0x21] = *(undefined4 *)(iVar3 + 0x84);
        puVar7[0x22] = uVar13;
        puVar7[0x23] = uVar14;
        puVar7[0x24] = uVar10;
      }
      else {
        puVar7[0x1f] = *(int *)(iVar3 + 0x7c);
        puVar7[0x21] = *(undefined4 *)(iVar3 + 0x84);
      }
      puVar7[0x20] = *(undefined4 *)(iVar3 + 0x80);
      *(undefined1 *)(iVar3 + 0x84) = 0;
      *(int *)(iVar3 + 0x7c) = iVar3 + 0x84;
      *(undefined4 *)(iVar3 + 0x80) = 0;
      puVar7[0x25] = puVar7 + 0x27;
      if (*(int *)(iVar3 + 0x94) == iVar3 + 0x9c) {
        uVar13 = *(undefined4 *)(iVar3 + 0xa0);
        uVar14 = *(undefined4 *)(iVar3 + 0xa4);
        uVar10 = *(undefined4 *)(iVar3 + 0xa8);
        puVar7[0x27] = *(undefined4 *)(iVar3 + 0x9c);
        puVar7[0x28] = uVar13;
        puVar7[0x29] = uVar14;
        puVar7[0x2a] = uVar10;
      }
      else {
        puVar7[0x25] = *(int *)(iVar3 + 0x94);
        puVar7[0x27] = *(undefined4 *)(iVar3 + 0x9c);
      }
      puVar7[0x26] = *(undefined4 *)(iVar3 + 0x98);
      *(undefined1 *)(iVar3 + 0x9c) = 0;
      *(int *)(iVar3 + 0x94) = iVar3 + 0x9c;
      *(undefined4 *)(iVar3 + 0x98) = 0;
      puVar7[0x2b] = puVar7 + 0x2d;
      if (*(int *)(iVar3 + 0xac) == iVar3 + 0xb4) {
        uVar13 = *(undefined4 *)(iVar3 + 0xb8);
        uVar14 = *(undefined4 *)(iVar3 + 0xbc);
        uVar10 = *(undefined4 *)(iVar3 + 0xc0);
        puVar7[0x2d] = *(undefined4 *)(iVar3 + 0xb4);
        puVar7[0x2e] = uVar13;
        puVar7[0x2f] = uVar14;
        puVar7[0x30] = uVar10;
      }
      else {
        puVar7[0x2b] = *(int *)(iVar3 + 0xac);
        puVar7[0x2d] = *(undefined4 *)(iVar3 + 0xb4);
      }
      iVar9 = iVar3 + 0xc4;
      puVar4 = puVar4 + 0x31;
      puVar7[0x2c] = *(undefined4 *)(iVar3 + 0xb0);
      *(undefined1 *)(iVar3 + 0xb4) = 0;
      *(int *)(iVar3 + 0xac) = iVar3 + 0xb4;
      *(undefined4 *)(iVar3 + 0xb0) = 0;
      puVar7 = puVar7 + 0x31;
      iVar3 = iVar9;
    } while (iVar9 != param_2);
    puStack_38 = puStack_34 +
                 ((DAT_2c54029c * ((uint)((param_2 + -0xc4) - iVar12) >> 2) & 0x3fffffff) + 2) *
                 0x31;
  }
  if (param_2 != iVar11) {
    puVar4 = (undefined4 *)(param_2 + 0xc);
    puVar7 = puStack_38;
    iVar3 = param_2;
    do {
      *puVar7 = uVar1;
      puVar7[1] = puVar7 + 3;
      if (*(undefined4 **)(iVar3 + 4) == puVar4) {
        uVar14 = puVar4[1];
        uVar13 = puVar4[2];
        uVar10 = puVar4[3];
        puVar7[3] = *puVar4;
        puVar7[4] = uVar14;
        puVar7[5] = uVar13;
        puVar7[6] = uVar10;
      }
      else {
        puVar7[1] = *(undefined4 **)(iVar3 + 4);
        puVar7[3] = *(undefined4 *)(iVar3 + 0xc);
      }
      puVar7[2] = *(undefined4 *)(iVar3 + 8);
      *(undefined1 *)(iVar3 + 0xc) = 0;
      *(undefined4 **)(iVar3 + 4) = puVar4;
      *(undefined4 *)(iVar3 + 8) = 0;
      puVar7[7] = puVar7 + 9;
      if (*(int *)(iVar3 + 0x1c) == iVar3 + 0x24) {
        uVar13 = *(undefined4 *)(iVar3 + 0x28);
        uVar14 = *(undefined4 *)(iVar3 + 0x2c);
        uVar10 = *(undefined4 *)(iVar3 + 0x30);
        puVar7[9] = *(undefined4 *)(iVar3 + 0x24);
        puVar7[10] = uVar13;
        puVar7[0xb] = uVar14;
        puVar7[0xc] = uVar10;
      }
      else {
        puVar7[7] = *(int *)(iVar3 + 0x1c);
        puVar7[9] = *(undefined4 *)(iVar3 + 0x24);
      }
      puVar7[8] = *(undefined4 *)(iVar3 + 0x20);
      *(int *)(iVar3 + 0x1c) = iVar3 + 0x24;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined1 *)(iVar3 + 0x24) = 0;
      puVar7[0xd] = puVar7 + 0xf;
      if (*(int *)(iVar3 + 0x34) == iVar3 + 0x3c) {
        uVar13 = *(undefined4 *)(iVar3 + 0x40);
        uVar14 = *(undefined4 *)(iVar3 + 0x44);
        uVar10 = *(undefined4 *)(iVar3 + 0x48);
        puVar7[0xf] = *(undefined4 *)(iVar3 + 0x3c);
        puVar7[0x10] = uVar13;
        puVar7[0x11] = uVar14;
        puVar7[0x12] = uVar10;
      }
      else {
        puVar7[0xd] = *(int *)(iVar3 + 0x34);
        puVar7[0xf] = *(undefined4 *)(iVar3 + 0x3c);
      }
      puVar7[0xe] = *(undefined4 *)(iVar3 + 0x38);
      *(int *)(iVar3 + 0x34) = iVar3 + 0x3c;
      *(undefined4 *)(iVar3 + 0x38) = 0;
      *(undefined1 *)(iVar3 + 0x3c) = 0;
      puVar7[0x13] = puVar7 + 0x15;
      if (iVar3 + 0x54 == *(int *)(iVar3 + 0x4c)) {
        uVar13 = *(undefined4 *)(iVar3 + 0x58);
        uVar14 = *(undefined4 *)(iVar3 + 0x5c);
        uVar10 = *(undefined4 *)(iVar3 + 0x60);
        puVar7[0x15] = *(undefined4 *)(iVar3 + 0x54);
        puVar7[0x16] = uVar13;
        puVar7[0x17] = uVar14;
        puVar7[0x18] = uVar10;
      }
      else {
        puVar7[0x13] = *(int *)(iVar3 + 0x4c);
        puVar7[0x15] = *(undefined4 *)(iVar3 + 0x54);
      }
      puVar7[0x14] = *(undefined4 *)(iVar3 + 0x50);
      *(int *)(iVar3 + 0x4c) = iVar3 + 0x54;
      *(undefined4 *)(iVar3 + 0x50) = 0;
      *(undefined1 *)(iVar3 + 0x54) = 0;
      puVar7[0x19] = puVar7 + 0x1b;
      if (*(int *)(iVar3 + 100) == iVar3 + 0x6c) {
        uVar13 = *(undefined4 *)(iVar3 + 0x70);
        uVar14 = *(undefined4 *)(iVar3 + 0x74);
        uVar10 = *(undefined4 *)(iVar3 + 0x78);
        puVar7[0x1b] = *(undefined4 *)(iVar3 + 0x6c);
        puVar7[0x1c] = uVar13;
        puVar7[0x1d] = uVar14;
        puVar7[0x1e] = uVar10;
      }
      else {
        puVar7[0x19] = *(int *)(iVar3 + 100);
        puVar7[0x1b] = *(undefined4 *)(iVar3 + 0x6c);
      }
      puVar7[0x1a] = *(undefined4 *)(iVar3 + 0x68);
      *(int *)(iVar3 + 100) = iVar3 + 0x6c;
      *(undefined4 *)(iVar3 + 0x68) = 0;
      *(undefined1 *)(iVar3 + 0x6c) = 0;
      puVar7[0x1f] = puVar7 + 0x21;
      if (*(int *)(iVar3 + 0x7c) == iVar3 + 0x84) {
        uVar13 = *(undefined4 *)(iVar3 + 0x88);
        uVar14 = *(undefined4 *)(iVar3 + 0x8c);
        uVar10 = *(undefined4 *)(iVar3 + 0x90);
        puVar7[0x21] = *(undefined4 *)(iVar3 + 0x84);
        puVar7[0x22] = uVar13;
        puVar7[0x23] = uVar14;
        puVar7[0x24] = uVar10;
      }
      else {
        puVar7[0x1f] = *(int *)(iVar3 + 0x7c);
        puVar7[0x21] = *(undefined4 *)(iVar3 + 0x84);
      }
      puVar7[0x20] = *(undefined4 *)(iVar3 + 0x80);
      *(int *)(iVar3 + 0x7c) = iVar3 + 0x84;
      *(undefined4 *)(iVar3 + 0x80) = 0;
      *(undefined1 *)(iVar3 + 0x84) = 0;
      puVar7[0x25] = puVar7 + 0x27;
      if (*(int *)(iVar3 + 0x94) == iVar3 + 0x9c) {
        uVar13 = *(undefined4 *)(iVar3 + 0xa0);
        uVar14 = *(undefined4 *)(iVar3 + 0xa4);
        uVar10 = *(undefined4 *)(iVar3 + 0xa8);
        puVar7[0x27] = *(undefined4 *)(iVar3 + 0x9c);
        puVar7[0x28] = uVar13;
        puVar7[0x29] = uVar14;
        puVar7[0x2a] = uVar10;
      }
      else {
        puVar7[0x25] = *(int *)(iVar3 + 0x94);
        puVar7[0x27] = *(undefined4 *)(iVar3 + 0x9c);
      }
      puVar7[0x26] = *(undefined4 *)(iVar3 + 0x98);
      *(int *)(iVar3 + 0x94) = iVar3 + 0x9c;
      *(undefined4 *)(iVar3 + 0x98) = 0;
      *(undefined1 *)(iVar3 + 0x9c) = 0;
      puVar7[0x2b] = puVar7 + 0x2d;
      if (*(int *)(iVar3 + 0xac) == iVar3 + 0xb4) {
        uVar13 = *(undefined4 *)(iVar3 + 0xb8);
        uVar14 = *(undefined4 *)(iVar3 + 0xbc);
        uVar10 = *(undefined4 *)(iVar3 + 0xc0);
        puVar7[0x2d] = *(undefined4 *)(iVar3 + 0xb4);
        puVar7[0x2e] = uVar13;
        puVar7[0x2f] = uVar14;
        puVar7[0x30] = uVar10;
      }
      else {
        puVar7[0x2b] = *(int *)(iVar3 + 0xac);
        puVar7[0x2d] = *(undefined4 *)(iVar3 + 0xb4);
      }
      puVar4 = puVar4 + 0x31;
      puVar7[0x2c] = *(undefined4 *)(iVar3 + 0xb0);
      *(undefined1 *)(iVar3 + 0xb4) = 0;
      *(int *)(iVar3 + 0xac) = iVar3 + 0xb4;
      *(undefined4 *)(iVar3 + 0xb0) = 0;
      iVar3 = iVar3 + 0xc4;
      puVar7 = puVar7 + 0x31;
    } while (iVar3 != iVar11);
    puStack_38 = puStack_38 +
                 (DAT_2c540614 * ((iVar11 - param_2) - 0xc4U >> 2) & 0x3fffffff) * 0x31 + 0x31;
  }
  if (iVar12 != iVar11) {
    iVar9 = iVar12 + 0xb4;
    iVar3 = iVar12;
    do {
      *(undefined4 *)(iVar9 + -0xb4) = uVar1;
      if (iVar9 != *(int *)(iVar9 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(iVar9 + -0x20) != iVar3 + 0x9c) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(iVar9 + -0x38) != iVar3 + 0x84) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(iVar9 + -0x50) != iVar3 + 0x6c) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(iVar9 + -0x68) != iVar3 + 0x54) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(iVar9 + -0x80) != iVar3 + 0x3c) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(iVar9 + -0x98) != iVar3 + 0x24) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(iVar9 + -0xb0) != iVar3 + 0xc) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      iVar3 = iVar3 + 0xc4;
      iVar9 = iVar9 + 0xc4;
    } while (iVar3 != iVar11);
  }
  if (iVar12 == 0) {
    *param_1 = (int)puStack_34;
    param_1[1] = (int)puStack_38;
    param_1[2] = iStack_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,iVar12);
}

