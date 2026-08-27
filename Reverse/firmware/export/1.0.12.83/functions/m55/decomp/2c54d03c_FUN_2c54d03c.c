/* FUN_2c54d03c @ 0x2c54d03c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c54d03c(int *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool in_ZR;
  bool in_CY;
  undefined4 *puStack_30;
  
  piVar7 = _LAB_2c54d250;
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c54d260);
  }
  iVar4 = *param_1;
  if (param_2 <= (uint)(_LAB_2c54d24c * (param_1[2] - iVar4 >> 3))) {
    return;
  }
  iVar12 = param_1[1];
  if (param_2 == 0) {
    iVar11 = 0;
    puStack_30 = (undefined4 *)0x0;
  }
  else {
    if (*_LAB_2c54d250 == 0) {
      FUN_2c4723c4();
      *piVar7 = 1;
    }
    iVar11 = param_2 * 0x98;
    puStack_30 = (undefined4 *)FUN_2c47245c(0,iVar11);
  }
  uVar1 = _LAB_2c54d254;
  if (iVar4 != iVar12) {
    puVar9 = (undefined4 *)(iVar4 + 0x14);
    puVar3 = puStack_30;
    iVar6 = iVar4;
    do {
      uVar2 = DAT_2c54d25c;
      *puVar3 = uVar1;
      puVar3[1] = uVar2;
      puVar3[2] = *(undefined4 *)(iVar6 + 8);
      puVar3[3] = puVar3 + 5;
      if (*(undefined4 **)(iVar6 + 0xc) == puVar9) {
        uVar14 = puVar9[1];
        uVar13 = puVar9[2];
        uVar2 = puVar9[3];
        puVar3[5] = *puVar9;
        puVar3[6] = uVar14;
        puVar3[7] = uVar13;
        puVar3[8] = uVar2;
      }
      else {
        puVar3[3] = *(undefined4 **)(iVar6 + 0xc);
        puVar3[5] = *(undefined4 *)(iVar6 + 0x14);
      }
      puVar3[4] = *(undefined4 *)(iVar6 + 0x10);
      *(undefined1 *)(iVar6 + 0x14) = 0;
      *(undefined4 **)(iVar6 + 0xc) = puVar9;
      *(undefined4 *)(iVar6 + 0x10) = 0;
      puVar3[9] = *(undefined4 *)(iVar6 + 0x24);
      puVar3[10] = puVar3 + 0xc;
      if (*(int *)(iVar6 + 0x28) == iVar6 + 0x30) {
        uVar13 = *(undefined4 *)(iVar6 + 0x34);
        uVar14 = *(undefined4 *)(iVar6 + 0x38);
        uVar2 = *(undefined4 *)(iVar6 + 0x3c);
        puVar3[0xc] = *(undefined4 *)(iVar6 + 0x30);
        puVar3[0xd] = uVar13;
        puVar3[0xe] = uVar14;
        puVar3[0xf] = uVar2;
      }
      else {
        puVar3[10] = *(int *)(iVar6 + 0x28);
        puVar3[0xc] = *(undefined4 *)(iVar6 + 0x30);
      }
      puVar3[0xb] = *(undefined4 *)(iVar6 + 0x2c);
      *(undefined1 *)(iVar6 + 0x30) = 0;
      *(int *)(iVar6 + 0x28) = iVar6 + 0x30;
      *(undefined4 *)(iVar6 + 0x2c) = 0;
      puVar3[0x10] = puVar3 + 0x12;
      if (*(int *)(iVar6 + 0x40) == iVar6 + 0x48) {
        uVar13 = *(undefined4 *)(iVar6 + 0x4c);
        uVar14 = *(undefined4 *)(iVar6 + 0x50);
        uVar2 = *(undefined4 *)(iVar6 + 0x54);
        puVar3[0x12] = *(undefined4 *)(iVar6 + 0x48);
        puVar3[0x13] = uVar13;
        puVar3[0x14] = uVar14;
        puVar3[0x15] = uVar2;
      }
      else {
        puVar3[0x10] = *(int *)(iVar6 + 0x40);
        puVar3[0x12] = *(undefined4 *)(iVar6 + 0x48);
      }
      puVar3[0x11] = *(undefined4 *)(iVar6 + 0x44);
      *(undefined1 *)(iVar6 + 0x48) = 0;
      *(int *)(iVar6 + 0x40) = iVar6 + 0x48;
      *(undefined4 *)(iVar6 + 0x44) = 0;
      puVar3[0x16] = *(undefined4 *)(iVar6 + 0x58);
      puVar3[0x17] = DAT_2c54d258;
      puVar3[0x18] = *(undefined4 *)(iVar6 + 0x60);
      *(undefined1 *)(puVar3 + 0x19) = *(undefined1 *)(iVar6 + 100);
      *(undefined1 *)((int)puVar3 + 0x65) = *(undefined1 *)(iVar6 + 0x65);
      puVar3[0x1a] = *(undefined4 *)(iVar6 + 0x68);
      puVar3[0x1b] = *(undefined4 *)(iVar6 + 0x6c);
      puVar3[0x1c] = *(undefined4 *)(iVar6 + 0x70);
      puVar3[0x1d] = puVar3 + 0x1f;
      if (iVar6 + 0x7c == *(int *)(iVar6 + 0x74)) {
        uVar13 = *(undefined4 *)(iVar6 + 0x80);
        uVar14 = *(undefined4 *)(iVar6 + 0x84);
        uVar2 = *(undefined4 *)(iVar6 + 0x88);
        puVar3[0x1f] = *(undefined4 *)(iVar6 + 0x7c);
        puVar3[0x20] = uVar13;
        puVar3[0x21] = uVar14;
        puVar3[0x22] = uVar2;
      }
      else {
        puVar3[0x1d] = *(int *)(iVar6 + 0x74);
        puVar3[0x1f] = *(undefined4 *)(iVar6 + 0x7c);
      }
      puVar9 = puVar9 + 0x26;
      puVar3[0x1e] = *(undefined4 *)(iVar6 + 0x78);
      *(undefined1 *)(iVar6 + 0x7c) = 0;
      *(int *)(iVar6 + 0x74) = iVar6 + 0x7c;
      *(undefined4 *)(iVar6 + 0x78) = 0;
      puVar3[0x23] = *(undefined4 *)(iVar6 + 0x8c);
      iVar5 = iVar6 + 0x98;
      puVar3[0x24] = *(undefined4 *)(iVar6 + 0x90);
      *(undefined1 *)(puVar3 + 0x25) = *(undefined1 *)(iVar6 + 0x94);
      puVar3 = puVar3 + 0x26;
      iVar6 = iVar5;
    } while (iVar12 != iVar5);
  }
  piVar10 = (int *)param_1[1];
  piVar7 = (int *)*param_1;
  if ((int *)*param_1 != piVar10) {
    do {
      piVar8 = piVar7 + 0x26;
      (**(code **)(*piVar7 + 4))(piVar7);
      piVar7 = piVar8;
    } while (piVar10 != piVar8);
    piVar10 = (int *)*param_1;
  }
  if (piVar10 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar10);
  }
  *param_1 = (int)puStack_30;
  param_1[1] = (iVar12 - iVar4) + (int)puStack_30;
  param_1[2] = iVar11 + (int)puStack_30;
  return;
}

