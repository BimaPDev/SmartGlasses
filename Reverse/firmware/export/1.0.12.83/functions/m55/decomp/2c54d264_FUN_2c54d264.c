/* FUN_2c54d264 @ 0x2c54d264 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c54d264(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  
  piVar12 = _LAB_2c54d6c4;
  piVar9 = (int *)*param_1;
  piVar14 = (int *)param_1[1];
  uVar7 = _LAB_2c54d4ac * ((int)piVar14 - (int)piVar9 >> 3);
  if (uVar7 - _LAB_2c54d4b0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c54d6cc);
  }
  uVar11 = uVar7;
  if (uVar7 == 0) {
    uVar11 = 1;
  }
  uVar8 = uVar7 + uVar11;
  iStack_30 = _DAT_2c54d6c8;
  if (!CARRY4(uVar7,uVar11)) {
    if (uVar8 == 0) {
      puStack_34 = (undefined4 *)0x98;
      puStack_38 = (undefined4 *)0x0;
      iStack_30 = 0;
      goto LAB_2c54d2aa;
    }
    if (_LAB_2c54d4b0 <= uVar8) {
      uVar8 = _LAB_2c54d4b0;
    }
    iStack_30 = uVar8 * 0x98;
  }
  if (*_LAB_2c54d6c4 == 0) {
    FUN_2c4723c4();
    *piVar12 = 1;
  }
  puStack_38 = (undefined4 *)FUN_2c47245c(0,iStack_30);
  iStack_30 = (int)puStack_38 + iStack_30;
  puStack_34 = puStack_38 + 0x26;
LAB_2c54d2aa:
  uVar1 = DAT_2c54d4b4;
  iVar4 = FUN_2c674268((int)puStack_38 + ((int)param_2 - (int)piVar9),0,0x98);
  *(undefined4 *)((int)puStack_38 + ((int)param_2 - (int)piVar9)) = uVar1;
  *(int *)(iVar4 + 0xc) = iVar4 + 0x14;
  uVar3 = DAT_2c54d4c0;
  *(int *)(iVar4 + 0x28) = iVar4 + 0x30;
  *(int *)(iVar4 + 0x40) = iVar4 + 0x48;
  uVar2 = DAT_2c54d4b8;
  *(undefined1 *)(iVar4 + 0x14) = 0;
  *(undefined1 *)(iVar4 + 0x30) = 0;
  *(undefined1 *)(iVar4 + 0x48) = 0;
  *(undefined1 *)(iVar4 + 0x7c) = 0;
  *(undefined4 *)(iVar4 + 4) = uVar2;
  *(undefined4 *)(iVar4 + 0x5c) = uVar3;
  *(int *)(iVar4 + 0x74) = iVar4 + 0x7c;
  if (param_2 != piVar9) {
    piVar5 = piVar9 + 5;
    puVar10 = puStack_38;
    piVar12 = piVar9;
    do {
      *puVar10 = uVar1;
      puVar10[1] = uVar2;
      puVar10[2] = piVar12[2];
      puVar10[3] = puVar10 + 5;
      if ((int *)piVar12[3] == piVar5) {
        iVar16 = piVar5[1];
        iVar15 = piVar5[2];
        iVar4 = piVar5[3];
        puVar10[5] = *piVar5;
        puVar10[6] = iVar16;
        puVar10[7] = iVar15;
        puVar10[8] = iVar4;
      }
      else {
        puVar10[3] = (int *)piVar12[3];
        puVar10[5] = piVar12[5];
      }
      puVar10[4] = piVar12[4];
      *(undefined1 *)(piVar12 + 5) = 0;
      piVar12[3] = (int)piVar5;
      piVar12[4] = 0;
      puVar10[9] = piVar12[9];
      puVar10[10] = puVar10 + 0xc;
      if ((int *)piVar12[10] == piVar12 + 0xc) {
        iVar16 = piVar12[0xd];
        iVar15 = piVar12[0xe];
        iVar4 = piVar12[0xf];
        puVar10[0xc] = piVar12[0xc];
        puVar10[0xd] = iVar16;
        puVar10[0xe] = iVar15;
        puVar10[0xf] = iVar4;
      }
      else {
        puVar10[10] = (int *)piVar12[10];
        puVar10[0xc] = piVar12[0xc];
      }
      puVar10[0xb] = piVar12[0xb];
      *(undefined1 *)(piVar12 + 0xc) = 0;
      piVar12[10] = (int)(piVar12 + 0xc);
      piVar12[0xb] = 0;
      puVar10[0x10] = puVar10 + 0x12;
      if ((int *)piVar12[0x10] == piVar12 + 0x12) {
        iVar16 = piVar12[0x13];
        iVar15 = piVar12[0x14];
        iVar4 = piVar12[0x15];
        puVar10[0x12] = piVar12[0x12];
        puVar10[0x13] = iVar16;
        puVar10[0x14] = iVar15;
        puVar10[0x15] = iVar4;
      }
      else {
        puVar10[0x10] = (int *)piVar12[0x10];
        puVar10[0x12] = piVar12[0x12];
      }
      puVar10[0x11] = piVar12[0x11];
      *(undefined1 *)(piVar12 + 0x12) = 0;
      piVar12[0x10] = (int)(piVar12 + 0x12);
      piVar12[0x11] = 0;
      puVar10[0x16] = piVar12[0x16];
      puVar10[0x17] = uVar3;
      puVar10[0x18] = piVar12[0x18];
      *(char *)(puVar10 + 0x19) = (char)piVar12[0x19];
      *(undefined1 *)((int)puVar10 + 0x65) = *(undefined1 *)((int)piVar12 + 0x65);
      puVar10[0x1a] = piVar12[0x1a];
      puVar10[0x1b] = piVar12[0x1b];
      puVar10[0x1c] = piVar12[0x1c];
      puVar10[0x1d] = puVar10 + 0x1f;
      if ((int *)piVar12[0x1d] == piVar12 + 0x1f) {
        iVar16 = piVar12[0x20];
        iVar15 = piVar12[0x21];
        iVar4 = piVar12[0x22];
        puVar10[0x1f] = piVar12[0x1f];
        puVar10[0x20] = iVar16;
        puVar10[0x21] = iVar15;
        puVar10[0x22] = iVar4;
      }
      else {
        puVar10[0x1d] = (int *)piVar12[0x1d];
        puVar10[0x1f] = piVar12[0x1f];
      }
      piVar5 = piVar5 + 0x26;
      puVar10[0x1e] = piVar12[0x1e];
      *(undefined1 *)(piVar12 + 0x1f) = 0;
      piVar12[0x1d] = (int)(piVar12 + 0x1f);
      piVar12[0x1e] = 0;
      piVar6 = piVar12 + 0x26;
      puVar10[0x23] = piVar12[0x23];
      puVar10[0x24] = piVar12[0x24];
      *(char *)(puVar10 + 0x25) = (char)piVar12[0x25];
      puVar10 = puVar10 + 0x26;
      piVar12 = piVar6;
    } while (piVar6 != param_2);
    puStack_34 = puStack_38 +
                 ((DAT_2c54d4bc * ((uint)((int)param_2 + (-0x98 - (int)piVar9)) >> 3) & 0x1fffffff)
                 + 2) * 0x26;
  }
  piVar12 = piVar9;
  if (param_2 != piVar14) {
    piVar6 = param_2 + 5;
    puVar10 = puStack_34;
    piVar5 = param_2;
    do {
      *puVar10 = uVar1;
      puVar10[1] = uVar2;
      puVar10[2] = piVar5[2];
      puVar10[3] = puVar10 + 5;
      if ((int *)piVar5[3] == piVar6) {
        iVar16 = piVar6[1];
        iVar15 = piVar6[2];
        iVar4 = piVar6[3];
        puVar10[5] = *piVar6;
        puVar10[6] = iVar16;
        puVar10[7] = iVar15;
        puVar10[8] = iVar4;
      }
      else {
        puVar10[3] = (int *)piVar5[3];
        puVar10[5] = piVar5[5];
      }
      puVar10[4] = piVar5[4];
      *(undefined1 *)(piVar5 + 5) = 0;
      piVar5[3] = (int)piVar6;
      piVar5[4] = 0;
      puVar10[9] = piVar5[9];
      puVar10[10] = puVar10 + 0xc;
      if (piVar5 + 0xc == (int *)piVar5[10]) {
        iVar16 = piVar5[0xd];
        iVar15 = piVar5[0xe];
        iVar4 = piVar5[0xf];
        puVar10[0xc] = piVar5[0xc];
        puVar10[0xd] = iVar16;
        puVar10[0xe] = iVar15;
        puVar10[0xf] = iVar4;
      }
      else {
        puVar10[10] = (int *)piVar5[10];
        puVar10[0xc] = piVar5[0xc];
      }
      puVar10[0xb] = piVar5[0xb];
      *(undefined1 *)(piVar5 + 0xc) = 0;
      piVar5[10] = (int)(piVar5 + 0xc);
      piVar5[0xb] = 0;
      puVar10[0x10] = puVar10 + 0x12;
      if ((int *)piVar5[0x10] == piVar5 + 0x12) {
        iVar15 = piVar5[0x13];
        iVar4 = piVar5[0x14];
        iVar16 = piVar5[0x15];
        puVar10[0x12] = piVar5[0x12];
        puVar10[0x13] = iVar15;
        puVar10[0x14] = iVar4;
        puVar10[0x15] = iVar16;
      }
      else {
        puVar10[0x10] = (int *)piVar5[0x10];
        puVar10[0x12] = piVar5[0x12];
      }
      puVar10[0x11] = piVar5[0x11];
      *(undefined1 *)(piVar5 + 0x12) = 0;
      piVar5[0x10] = (int)(piVar5 + 0x12);
      piVar5[0x11] = 0;
      puVar10[0x16] = piVar5[0x16];
      puVar10[0x17] = uVar3;
      puVar10[0x18] = piVar5[0x18];
      *(char *)(puVar10 + 0x19) = (char)piVar5[0x19];
      *(undefined1 *)((int)puVar10 + 0x65) = *(undefined1 *)((int)piVar5 + 0x65);
      puVar10[0x1a] = piVar5[0x1a];
      puVar10[0x1b] = piVar5[0x1b];
      puVar10[0x1c] = piVar5[0x1c];
      puVar10[0x1d] = puVar10 + 0x1f;
      if ((int *)piVar5[0x1d] == piVar5 + 0x1f) {
        iVar15 = piVar5[0x20];
        iVar4 = piVar5[0x21];
        iVar16 = piVar5[0x22];
        puVar10[0x1f] = piVar5[0x1f];
        puVar10[0x20] = iVar15;
        puVar10[0x21] = iVar4;
        puVar10[0x22] = iVar16;
      }
      else {
        puVar10[0x1d] = (int *)piVar5[0x1d];
        puVar10[0x1f] = piVar5[0x1f];
      }
      piVar6 = piVar6 + 0x26;
      puVar10[0x1e] = piVar5[0x1e];
      *(undefined1 *)(piVar5 + 0x1f) = 0;
      piVar5[0x1d] = (int)(piVar5 + 0x1f);
      piVar5[0x1e] = 0;
      piVar13 = piVar5 + 0x26;
      puVar10[0x23] = piVar5[0x23];
      puVar10[0x24] = piVar5[0x24];
      *(char *)(puVar10 + 0x25) = (char)piVar5[0x25];
      puVar10 = puVar10 + 0x26;
      piVar5 = piVar13;
    } while (piVar13 != piVar14);
    puStack_34 = puStack_34 +
                 (DAT_2c54d6c0 * ((uint)((int)piVar14 + (-0x98 - (int)param_2)) >> 3) & 0x1fffffff)
                 * 0x26 + 0x26;
  }
  for (; piVar12 != piVar14; piVar12 = piVar12 + 0x26) {
    (**(code **)(*piVar12 + 4))(piVar12);
  }
  if (piVar9 == (int *)0x0) {
    *param_1 = (int)puStack_38;
    param_1[1] = (int)puStack_34;
    param_1[2] = iStack_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,piVar9);
}

