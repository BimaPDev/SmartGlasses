/* FUN_2c54c308 @ 0x2c54c308 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c54c308(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puStack_3c;
  int iStack_38;
  int iStack_34;
  
  piVar10 = _LAB_2c54c6d4;
  piVar13 = (int *)*param_1;
  piVar12 = (int *)param_1[1];
  uVar4 = _LAB_2c54c624 * ((int)piVar12 - (int)piVar13 >> 4);
  if (uVar4 - _LAB_2c54c628 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c54c6d0);
  }
  uVar7 = uVar4;
  if (uVar4 == 0) {
    uVar7 = 1;
  }
  uVar5 = uVar4 + uVar7;
  iStack_34 = _DAT_2c54c6cc;
  if (!CARRY4(uVar4,uVar7)) {
    if (uVar5 == 0) {
      puStack_3c = (undefined4 *)0xf0;
      iStack_38 = 0;
      iStack_34 = 0;
      goto LAB_2c54c34a;
    }
    if (_LAB_2c54c628 <= uVar5) {
      uVar5 = _LAB_2c54c628;
    }
    iStack_34 = uVar5 * 0xf0;
  }
  if (*_LAB_2c54c6d4 == 0) {
    FUN_2c4723c4();
    *piVar10 = 1;
  }
  iStack_38 = FUN_2c47245c(0,iStack_34);
  iStack_34 = iStack_38 + iStack_34;
  puStack_3c = (undefined4 *)(iStack_38 + 0xf0);
LAB_2c54c34a:
  uVar1 = _LAB_2c54c62c;
  iVar2 = FUN_2c674268((int)param_2 + (iStack_38 - (int)piVar13),0,0xf0);
  *(undefined4 *)((int)param_2 + (iStack_38 - (int)piVar13)) = uVar1;
  *(undefined1 *)(iVar2 + 0xc) = 0;
  *(undefined1 *)(iVar2 + 0x24) = 0;
  *(undefined1 *)(iVar2 + 0x3c) = 0;
  *(undefined1 *)(iVar2 + 0x54) = 0;
  *(undefined1 *)(iVar2 + 0x80) = 0;
  *(undefined1 *)(iVar2 + 0x98) = 0;
  *(int *)(iVar2 + 4) = iVar2 + 0xc;
  *(int *)(iVar2 + 0x1c) = iVar2 + 0x24;
  *(int *)(iVar2 + 0x34) = iVar2 + 0x3c;
  *(int *)(iVar2 + 0x4c) = iVar2 + 0x54;
  *(int *)(iVar2 + 0x78) = iVar2 + 0x80;
  *(int *)(iVar2 + 0x90) = iVar2 + 0x98;
  iVar2 = iStack_38;
  piVar10 = piVar13;
  if (param_2 != piVar13) {
    do {
      piVar9 = piVar10 + 0x3c;
      iVar3 = func_0x2c54be14(iVar2,piVar10);
      iVar2 = iVar3 + 0xf0;
      piVar10 = piVar9;
    } while (param_2 != piVar9);
    puStack_3c = (undefined4 *)(iVar3 + 0x1e0);
  }
  piVar10 = piVar13;
  if (param_2 != piVar12) {
    piVar11 = param_2 + 3;
    puVar6 = puStack_3c;
    piVar9 = param_2;
    do {
      *puVar6 = uVar1;
      puVar6[1] = puVar6 + 3;
      if ((int *)piVar9[1] == piVar11) {
        iVar2 = piVar11[1];
        iVar14 = piVar11[2];
        iVar3 = piVar11[3];
        puVar6[3] = *piVar11;
        puVar6[4] = iVar2;
        puVar6[5] = iVar14;
        puVar6[6] = iVar3;
      }
      else {
        puVar6[1] = (int *)piVar9[1];
        puVar6[3] = piVar9[3];
      }
      puVar6[2] = piVar9[2];
      *(undefined1 *)(piVar9 + 3) = 0;
      piVar9[1] = (int)piVar11;
      piVar9[2] = 0;
      puVar6[7] = puVar6 + 9;
      if ((int *)piVar9[7] == piVar9 + 9) {
        iVar14 = piVar9[10];
        iVar3 = piVar9[0xb];
        iVar2 = piVar9[0xc];
        puVar6[9] = piVar9[9];
        puVar6[10] = iVar14;
        puVar6[0xb] = iVar3;
        puVar6[0xc] = iVar2;
      }
      else {
        puVar6[7] = (int *)piVar9[7];
        puVar6[9] = piVar9[9];
      }
      puVar6[8] = piVar9[8];
      piVar9[7] = (int)(piVar9 + 9);
      piVar9[8] = 0;
      *(undefined1 *)(piVar9 + 9) = 0;
      puVar6[0xd] = puVar6 + 0xf;
      if (piVar9 + 0xf == (int *)piVar9[0xd]) {
        iVar14 = piVar9[0x10];
        iVar3 = piVar9[0x11];
        iVar2 = piVar9[0x12];
        puVar6[0xf] = piVar9[0xf];
        puVar6[0x10] = iVar14;
        puVar6[0x11] = iVar3;
        puVar6[0x12] = iVar2;
      }
      else {
        puVar6[0xd] = (int *)piVar9[0xd];
        puVar6[0xf] = piVar9[0xf];
      }
      puVar6[0xe] = piVar9[0xe];
      piVar9[0xd] = (int)(piVar9 + 0xf);
      piVar9[0xe] = 0;
      *(undefined1 *)(piVar9 + 0xf) = 0;
      puVar6[0x13] = puVar6 + 0x15;
      if ((int *)piVar9[0x13] == piVar9 + 0x15) {
        iVar14 = piVar9[0x16];
        iVar3 = piVar9[0x17];
        iVar2 = piVar9[0x18];
        puVar6[0x15] = piVar9[0x15];
        puVar6[0x16] = iVar14;
        puVar6[0x17] = iVar3;
        puVar6[0x18] = iVar2;
      }
      else {
        puVar6[0x13] = (int *)piVar9[0x13];
        puVar6[0x15] = piVar9[0x15];
      }
      puVar6[0x14] = piVar9[0x14];
      *(undefined1 *)(piVar9 + 0x15) = 0;
      iVar2 = piVar9[0x1b];
      piVar9[0x13] = (int)(piVar9 + 0x15);
      piVar9[0x14] = 0;
      puVar6[0x1a] = piVar9[0x1a];
      puVar6[0x1b] = iVar2;
      iVar2 = piVar9[0x1c];
      iVar3 = piVar9[0x1d];
      puVar6[0x1e] = puVar6 + 0x20;
      puVar6[0x1c] = iVar2;
      puVar6[0x1d] = iVar3;
      if ((int *)piVar9[0x1e] == piVar9 + 0x20) {
        iVar14 = piVar9[0x21];
        iVar3 = piVar9[0x22];
        iVar2 = piVar9[0x23];
        puVar6[0x20] = piVar9[0x20];
        puVar6[0x21] = iVar14;
        puVar6[0x22] = iVar3;
        puVar6[0x23] = iVar2;
      }
      else {
        puVar6[0x1e] = (int *)piVar9[0x1e];
        puVar6[0x20] = piVar9[0x20];
      }
      puVar6[0x1f] = piVar9[0x1f];
      piVar9[0x1e] = (int)(piVar9 + 0x20);
      piVar9[0x1f] = 0;
      *(undefined1 *)(piVar9 + 0x20) = 0;
      puVar6[0x24] = puVar6 + 0x26;
      if ((int *)piVar9[0x24] == piVar9 + 0x26) {
        iVar14 = piVar9[0x27];
        iVar3 = piVar9[0x28];
        iVar2 = piVar9[0x29];
        puVar6[0x26] = piVar9[0x26];
        puVar6[0x27] = iVar14;
        puVar6[0x28] = iVar3;
        puVar6[0x29] = iVar2;
      }
      else {
        puVar6[0x24] = (int *)piVar9[0x24];
        puVar6[0x26] = piVar9[0x26];
      }
      piVar11 = piVar11 + 0x3c;
      puVar6[0x25] = piVar9[0x25];
      *(undefined1 *)(piVar9 + 0x26) = 0;
      iVar2 = piVar9[0x2b];
      piVar9[0x24] = (int)(piVar9 + 0x26);
      piVar9[0x25] = 0;
      puVar6[0x2a] = piVar9[0x2a];
      puVar6[0x2b] = iVar2;
      iVar2 = piVar9[0x2d];
      piVar8 = piVar9 + 0x3c;
      puVar6[0x2c] = piVar9[0x2c];
      puVar6[0x2d] = iVar2;
      puVar6[0x2e] = piVar9[0x2e];
      puVar6[0x2f] = piVar9[0x2f];
      puVar6[0x30] = piVar9[0x30];
      puVar6[0x31] = piVar9[0x31];
      puVar6[0x32] = piVar9[0x32];
      puVar6[0x33] = piVar9[0x33];
      puVar6[0x34] = piVar9[0x34];
      puVar6[0x35] = piVar9[0x35];
      puVar6[0x36] = piVar9[0x36];
      puVar6[0x37] = piVar9[0x37];
      puVar6[0x38] = piVar9[0x38];
      puVar6[0x39] = piVar9[0x39];
      puVar6[0x3a] = piVar9[0x3a];
      puVar6[0x3b] = piVar9[0x3b];
      puVar6 = puVar6 + 0x3c;
      piVar9 = piVar8;
    } while (piVar8 != piVar12);
    puStack_3c = puStack_3c +
                 ((DAT_2c54c6c8 * ((uint)((int)piVar12 + (-0xf0 - (int)param_2)) >> 4) & 0xfffffff)
                 + 1) * 0x3c;
  }
  for (; piVar10 != piVar12; piVar10 = piVar10 + 0x3c) {
    (**(code **)(*piVar10 + 4))(piVar10);
  }
  if (piVar13 == (int *)0x0) {
    *param_1 = iStack_38;
    param_1[1] = (int)puStack_3c;
    param_1[2] = iStack_34;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,piVar13);
}

