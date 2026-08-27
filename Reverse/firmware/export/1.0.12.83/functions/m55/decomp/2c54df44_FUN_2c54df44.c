/* FUN_2c54df44 @ 0x2c54df44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c54df44(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool in_ZR;
  bool in_CY;
  undefined4 *puStack_30;
  
  piVar5 = _LAB_2c54e270;
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c54e2c4);
  }
  iVar4 = *param_1;
  if (param_2 <= (uint)((param_1[2] - iVar4 >> 2) * -0x47dc11f7)) {
    return;
  }
  iVar11 = param_1[1];
  iVar2 = iVar11 - iVar4;
  if (param_2 == 0) {
    iVar10 = 0;
    puStack_30 = (undefined4 *)0x0;
  }
  else {
    if (*_LAB_2c54e270 == 0) {
      FUN_2c4723c4();
      *piVar5 = 1;
    }
    iVar10 = param_2 * 0xe4;
    puStack_30 = (undefined4 *)FUN_2c47245c(0,iVar10);
  }
  uVar1 = _LAB_2c54e274;
  if (iVar4 != iVar11) {
    puVar7 = (undefined4 *)(iVar4 + 0xc);
    puVar3 = puStack_30;
    do {
      *puVar3 = uVar1;
      puVar3[1] = puVar3 + 3;
      if (*(undefined4 **)(iVar4 + 4) == puVar7) {
        uVar13 = puVar7[1];
        uVar12 = puVar7[2];
        uVar9 = puVar7[3];
        puVar3[3] = *puVar7;
        puVar3[4] = uVar13;
        puVar3[5] = uVar12;
        puVar3[6] = uVar9;
      }
      else {
        puVar3[1] = *(undefined4 **)(iVar4 + 4);
        puVar3[3] = *(undefined4 *)(iVar4 + 0xc);
      }
      puVar3[2] = *(undefined4 *)(iVar4 + 8);
      *(undefined1 *)(iVar4 + 0xc) = 0;
      *(undefined4 **)(iVar4 + 4) = puVar7;
      *(undefined4 *)(iVar4 + 8) = 0;
      puVar3[7] = *(undefined4 *)(iVar4 + 0x1c);
      puVar3[8] = puVar3 + 10;
      if (*(int *)(iVar4 + 0x20) == iVar4 + 0x28) {
        uVar12 = *(undefined4 *)(iVar4 + 0x2c);
        uVar13 = *(undefined4 *)(iVar4 + 0x30);
        uVar9 = *(undefined4 *)(iVar4 + 0x34);
        puVar3[10] = *(undefined4 *)(iVar4 + 0x28);
        puVar3[0xb] = uVar12;
        puVar3[0xc] = uVar13;
        puVar3[0xd] = uVar9;
      }
      else {
        puVar3[8] = *(int *)(iVar4 + 0x20);
        puVar3[10] = *(undefined4 *)(iVar4 + 0x28);
      }
      puVar3[9] = *(undefined4 *)(iVar4 + 0x24);
      *(int *)(iVar4 + 0x20) = iVar4 + 0x28;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      *(undefined1 *)(iVar4 + 0x28) = 0;
      *(undefined1 *)(puVar3 + 0xe) = *(undefined1 *)(iVar4 + 0x38);
      puVar3[0xf] = puVar3 + 0x11;
      if (*(int *)(iVar4 + 0x3c) == iVar4 + 0x44) {
        uVar12 = *(undefined4 *)(iVar4 + 0x48);
        uVar13 = *(undefined4 *)(iVar4 + 0x4c);
        uVar9 = *(undefined4 *)(iVar4 + 0x50);
        puVar3[0x11] = *(undefined4 *)(iVar4 + 0x44);
        puVar3[0x12] = uVar12;
        puVar3[0x13] = uVar13;
        puVar3[0x14] = uVar9;
      }
      else {
        puVar3[0xf] = *(int *)(iVar4 + 0x3c);
        puVar3[0x11] = *(undefined4 *)(iVar4 + 0x44);
      }
      puVar3[0x10] = *(undefined4 *)(iVar4 + 0x40);
      *(int *)(iVar4 + 0x3c) = iVar4 + 0x44;
      *(undefined4 *)(iVar4 + 0x40) = 0;
      *(undefined1 *)(iVar4 + 0x44) = 0;
      puVar3[0x15] = puVar3 + 0x17;
      if (*(int *)(iVar4 + 0x54) == iVar4 + 0x5c) {
        uVar12 = *(undefined4 *)(iVar4 + 0x60);
        uVar13 = *(undefined4 *)(iVar4 + 100);
        uVar9 = *(undefined4 *)(iVar4 + 0x68);
        puVar3[0x17] = *(undefined4 *)(iVar4 + 0x5c);
        puVar3[0x18] = uVar12;
        puVar3[0x19] = uVar13;
        puVar3[0x1a] = uVar9;
      }
      else {
        puVar3[0x15] = *(int *)(iVar4 + 0x54);
        puVar3[0x17] = *(undefined4 *)(iVar4 + 0x5c);
      }
      puVar3[0x16] = *(undefined4 *)(iVar4 + 0x58);
      *(int *)(iVar4 + 0x54) = iVar4 + 0x5c;
      *(undefined4 *)(iVar4 + 0x58) = 0;
      *(undefined1 *)(iVar4 + 0x5c) = 0;
      puVar3[0x1b] = puVar3 + 0x1d;
      if (*(int *)(iVar4 + 0x6c) == iVar4 + 0x74) {
        uVar12 = *(undefined4 *)(iVar4 + 0x78);
        uVar13 = *(undefined4 *)(iVar4 + 0x7c);
        uVar9 = *(undefined4 *)(iVar4 + 0x80);
        puVar3[0x1d] = *(undefined4 *)(iVar4 + 0x74);
        puVar3[0x1e] = uVar12;
        puVar3[0x1f] = uVar13;
        puVar3[0x20] = uVar9;
      }
      else {
        puVar3[0x1b] = *(int *)(iVar4 + 0x6c);
        puVar3[0x1d] = *(undefined4 *)(iVar4 + 0x74);
      }
      puVar3[0x1c] = *(undefined4 *)(iVar4 + 0x70);
      *(int *)(iVar4 + 0x6c) = iVar4 + 0x74;
      *(undefined4 *)(iVar4 + 0x70) = 0;
      *(undefined1 *)(iVar4 + 0x74) = 0;
      puVar3[0x21] = puVar3 + 0x23;
      if (*(int *)(iVar4 + 0x84) == iVar4 + 0x8c) {
        uVar12 = *(undefined4 *)(iVar4 + 0x90);
        uVar13 = *(undefined4 *)(iVar4 + 0x94);
        uVar9 = *(undefined4 *)(iVar4 + 0x98);
        puVar3[0x23] = *(undefined4 *)(iVar4 + 0x8c);
        puVar3[0x24] = uVar12;
        puVar3[0x25] = uVar13;
        puVar3[0x26] = uVar9;
      }
      else {
        puVar3[0x21] = *(int *)(iVar4 + 0x84);
        puVar3[0x23] = *(undefined4 *)(iVar4 + 0x8c);
      }
      puVar3[0x22] = *(undefined4 *)(iVar4 + 0x88);
      *(int *)(iVar4 + 0x84) = iVar4 + 0x8c;
      *(undefined4 *)(iVar4 + 0x88) = 0;
      *(undefined1 *)(iVar4 + 0x8c) = 0;
      puVar3[0x27] = puVar3 + 0x29;
      if (*(int *)(iVar4 + 0x9c) == iVar4 + 0xa4) {
        uVar12 = *(undefined4 *)(iVar4 + 0xa8);
        uVar13 = *(undefined4 *)(iVar4 + 0xac);
        uVar9 = *(undefined4 *)(iVar4 + 0xb0);
        puVar3[0x29] = *(undefined4 *)(iVar4 + 0xa4);
        puVar3[0x2a] = uVar12;
        puVar3[0x2b] = uVar13;
        puVar3[0x2c] = uVar9;
      }
      else {
        puVar3[0x27] = *(int *)(iVar4 + 0x9c);
        puVar3[0x29] = *(undefined4 *)(iVar4 + 0xa4);
      }
      puVar3[0x28] = *(undefined4 *)(iVar4 + 0xa0);
      *(int *)(iVar4 + 0x9c) = iVar4 + 0xa4;
      *(undefined4 *)(iVar4 + 0xa0) = 0;
      *(undefined1 *)(iVar4 + 0xa4) = 0;
      puVar3[0x2d] = puVar3 + 0x2f;
      if (iVar4 + 0xbc == *(int *)(iVar4 + 0xb4)) {
        uVar12 = *(undefined4 *)(iVar4 + 0xc0);
        uVar13 = *(undefined4 *)(iVar4 + 0xc4);
        uVar9 = *(undefined4 *)(iVar4 + 200);
        puVar3[0x2f] = *(undefined4 *)(iVar4 + 0xbc);
        puVar3[0x30] = uVar12;
        puVar3[0x31] = uVar13;
        puVar3[0x32] = uVar9;
      }
      else {
        puVar3[0x2d] = *(int *)(iVar4 + 0xb4);
        puVar3[0x2f] = *(undefined4 *)(iVar4 + 0xbc);
      }
      puVar3[0x2e] = *(undefined4 *)(iVar4 + 0xb8);
      *(int *)(iVar4 + 0xb4) = iVar4 + 0xbc;
      *(undefined4 *)(iVar4 + 0xb8) = 0;
      *(undefined1 *)(iVar4 + 0xbc) = 0;
      puVar3[0x33] = puVar3 + 0x35;
      if (iVar4 + 0xd4 == *(int *)(iVar4 + 0xcc)) {
        uVar12 = *(undefined4 *)(iVar4 + 0xd8);
        uVar13 = *(undefined4 *)(iVar4 + 0xdc);
        uVar9 = *(undefined4 *)(iVar4 + 0xe0);
        puVar3[0x35] = *(undefined4 *)(iVar4 + 0xd4);
        puVar3[0x36] = uVar12;
        puVar3[0x37] = uVar13;
        puVar3[0x38] = uVar9;
      }
      else {
        puVar3[0x33] = *(int *)(iVar4 + 0xcc);
        puVar3[0x35] = *(undefined4 *)(iVar4 + 0xd4);
      }
      puVar7 = puVar7 + 0x39;
      puVar3[0x34] = *(undefined4 *)(iVar4 + 0xd0);
      *(undefined1 *)(iVar4 + 0xd4) = 0;
      *(int *)(iVar4 + 0xcc) = iVar4 + 0xd4;
      *(undefined4 *)(iVar4 + 0xd0) = 0;
      iVar4 = iVar4 + 0xe4;
      puVar3 = puVar3 + 0x39;
    } while (iVar11 != iVar4);
  }
  piVar8 = (int *)param_1[1];
  piVar5 = (int *)*param_1;
  if ((int *)*param_1 != piVar8) {
    do {
      piVar6 = piVar5 + 0x39;
      (**(code **)(*piVar5 + 4))(piVar5);
      piVar5 = piVar6;
    } while (piVar8 != piVar6);
    piVar8 = (int *)*param_1;
  }
  if (piVar8 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar8);
  }
  *param_1 = (int)puStack_30;
  param_1[1] = iVar2 + (int)puStack_30;
  param_1[2] = iVar10 + (int)puStack_30;
  return;
}

