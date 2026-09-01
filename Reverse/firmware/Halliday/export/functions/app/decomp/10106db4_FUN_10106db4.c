/* FUN_10106db4 @ 0x10106db4 */

int FUN_10106db4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int extraout_r3;
  int iVar6;
  undefined4 *puVar7;
  code *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  undefined4 *puVar16;
  int *piVar17;
  
  iVar5 = *(int *)(param_1 + 8);
  iVar13 = *(int *)(iVar5 + 0x8c);
  if (0 < iVar13) {
    FUN_1011ea40(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88),
                 (uint)*(ushort *)(param_1 + 0x80) << 3,iVar5,param_4);
    iVar5 = extraout_r3;
  }
  iVar12 = *(int *)(param_1 + 4);
  iVar9 = *(int *)(param_1 + 0x9c);
  FUN_1011ea40(iVar9 + 0x120,iVar12 + 0xb4,0x44,iVar5,param_4);
  if (param_2 == 0) {
    iVar5 = *(int *)(iVar12 + 0x2c);
    uVar2 = *(undefined4 *)(iVar5 + 8);
    *(undefined4 *)(iVar9 + 0xe0) = *(undefined4 *)(iVar5 + 4);
    *(undefined4 *)(iVar9 + 0xe4) = uVar2;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x88);
    uVar2 = *(undefined4 *)(param_1 + 0x8c);
    uVar1 = *(ushort *)(param_1 + 0x80);
    *(undefined4 *)(iVar9 + 0xe0) = 0x10000;
    *(undefined4 *)(iVar9 + 0xe4) = 0x10000;
    FUN_1011ea40(uVar2,uVar3,(uint)uVar1 << 3,0x10000,param_4);
  }
  iVar9 = *(int *)(param_1 + 0x88);
  iVar6 = *(ushort *)(param_1 + 0x80) + 0x1ffffffc;
  iVar12 = iVar6 * 8;
  *(uint *)(iVar9 + iVar6 * 8) = *(int *)(iVar9 + iVar6 * 8) + 0x20U & 0xffffffc0;
  iVar15 = iVar12 + 8;
  puVar10 = (undefined4 *)(iVar12 + 0x10 + iVar9);
  iVar5 = puVar10[1];
  *(uint *)(iVar9 + iVar15) = *(int *)(iVar9 + iVar15) + 0x20U & 0xffffffc0;
  puVar4 = (undefined4 *)(iVar12 + 0x18 + iVar9);
  puVar10[1] = iVar5 + 0x20U & 0xffffffc0;
  puVar7 = (undefined4 *)(iVar9 + iVar6 * 8);
  puVar16 = (undefined4 *)(iVar15 + iVar9);
  puVar4[1] = puVar4[1] + 0x20 & 0xffffffc0;
  if (0 < iVar13) {
    piVar11 = *(int **)(param_1 + 0x9c);
    pbVar14 = *(byte **)(*(int *)(param_1 + 0xc) + 0x40);
    *(char *)(piVar11 + 0x8d) = (char)param_2;
    iVar5 = *(int *)(param_1 + 0x78);
    iVar9 = *(int *)(param_1 + 0x7c);
    iVar12 = *(int *)(param_1 + 0x80);
    iVar6 = *(int *)(param_1 + 0x84);
    piVar11[0x75] = iVar13;
    piVar11[0x74] = piVar11[99];
    piVar11[0x24] = iVar5;
    piVar11[0x25] = iVar9;
    piVar11[0x26] = iVar12;
    piVar11[0x27] = iVar6;
    iVar5 = *(int *)(param_1 + 0x8c);
    iVar9 = *(int *)(param_1 + 0x90);
    iVar12 = *(int *)(param_1 + 0x94);
    piVar11[0x28] = *(int *)(param_1 + 0x88);
    piVar11[0x29] = iVar5;
    piVar11[0x2a] = iVar9;
    piVar11[0x2b] = iVar12;
    piVar17 = piVar11 + 0x2c;
    *piVar17 = *(int *)(param_1 + 0x98);
    piVar11[0x59] = 3;
    piVar11[0x5a] = piVar11[99];
    piVar11[0x5c] = iVar13;
    piVar11[0x5b] = 0;
    piVar11[9] = piVar11[0x24];
    piVar11[10] = piVar11[0x25];
    piVar11[0xb] = piVar11[0x26];
    piVar11[0xc] = piVar11[0x27];
    piVar11[0xd] = piVar11[0x28];
    piVar11[0xe] = piVar11[0x29];
    piVar11[0xf] = piVar11[0x2a];
    piVar11[0x10] = piVar11[0x2b];
    piVar11[0x11] = *piVar17;
    piVar11[0x12] = piVar11[0x24];
    piVar11[0x13] = piVar11[0x25];
    piVar11[0x14] = piVar11[0x26];
    piVar11[0x15] = piVar11[0x27];
    piVar11[0x16] = piVar11[0x28];
    piVar11[0x17] = piVar11[0x29];
    piVar11[0x18] = piVar11[0x2a];
    piVar11[0x19] = piVar11[0x2b];
    piVar11[0x1a] = *piVar17;
    piVar11[0x1b] = piVar11[0x24];
    piVar11[0x1c] = piVar11[0x25];
    piVar11[0x1d] = piVar11[0x26];
    piVar11[0x1e] = piVar11[0x27];
    piVar11[0x1f] = piVar11[0x28];
    piVar11[0x20] = piVar11[0x29];
    piVar11[0x21] = piVar11[0x2a];
    piVar11[0x22] = piVar11[0x2b];
    piVar11[0x23] = *piVar17;
    *(undefined4 *)((int)piVar11 + 0x12a) = 0x4000;
    pcVar8 = *(code **)(*piVar11 + 700);
    piVar11[4] = 0;
    piVar11[0x6c] = 0;
    piVar11[0x57] = 0x10001;
    *(undefined4 *)((int)piVar11 + 0x12e) = *(undefined4 *)((int)piVar11 + 0x12a);
    *(undefined4 *)((int)piVar11 + 0x126) = *(undefined4 *)((int)piVar11 + 0x12a);
    *(undefined2 *)(piVar11 + 0x58) = 1;
    piVar11[0x4f] = 1;
    piVar11[0x4d] = 1;
    iVar5 = (*pcVar8)(piVar11);
    if ((iVar5 != 0) && (*(char *)(*(int *)(param_1 + 0x9c) + 0x235) != '\0')) {
      return iVar5;
    }
    *pbVar14 = *pbVar14 | (byte)(*(int *)(*(int *)(param_1 + 0x9c) + 0x158) << 5) | 4;
    iVar13 = *(int *)(param_1 + 0x88);
    iVar9 = *(ushort *)(param_1 + 0x80) + 0x1ffffffc;
    iVar5 = iVar9 * 8;
    puVar16 = (undefined4 *)(iVar5 + 8 + iVar13);
    puVar7 = (undefined4 *)(iVar13 + iVar9 * 8);
    puVar10 = (undefined4 *)(iVar5 + 0x10 + iVar13);
    puVar4 = (undefined4 *)(iVar13 + iVar5 + 0x18);
  }
  uVar2 = puVar7[1];
  *(undefined4 *)(param_1 + 0x44) = *puVar7;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  uVar2 = puVar16[1];
  *(undefined4 *)(param_1 + 0x4c) = *puVar16;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  uVar2 = puVar10[1];
  *(undefined4 *)(param_1 + 0xb4) = *puVar10;
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  uVar2 = puVar4[1];
  *(undefined4 *)(param_1 + 0xbc) = *puVar4;
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  return 0;
}

