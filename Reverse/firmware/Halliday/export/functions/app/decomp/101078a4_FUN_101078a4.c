/* FUN_101078a4 @ 0x101078a4 */

int FUN_101078a4(int *param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int local_1c;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 != 0) {
    iVar4 = *(int *)(param_3 + 0x80);
    param_1[100] = *(int *)(param_3 + 0x7c);
    param_1[0x65] = iVar4;
    iVar4 = *(int *)(param_3 + 0x8c);
    iVar2 = *(int *)(param_3 + 0x84);
    iVar3 = *(int *)(param_3 + 0x90);
    iVar5 = *(int *)(param_3 + 0x88);
    param_1[0x36] = *(int *)(param_3 + 0x78);
    param_1[0x67] = iVar5;
    param_1[0x68] = iVar4;
    param_1[0x66] = iVar2;
    param_1[0x69] = iVar3;
    iVar4 = *(int *)(param_3 + 0x50);
    iVar2 = *(int *)(param_3 + 0x54);
    iVar3 = *(int *)(param_3 + 0x58);
    param_1[0x3e] = *(int *)(param_3 + 0x4c);
    param_1[0x3f] = iVar4;
    param_1[0x40] = iVar2;
    param_1[0x41] = iVar3;
    iVar4 = *(int *)(param_3 + 0x60);
    iVar2 = *(int *)(param_3 + 100);
    iVar3 = *(int *)(param_3 + 0x68);
    param_1[0x42] = *(int *)(param_3 + 0x5c);
    param_1[0x43] = iVar4;
    param_1[0x44] = iVar2;
    param_1[0x45] = iVar3;
    iVar4 = *(int *)(param_3 + 0x70);
    param_1[0x46] = *(int *)(param_3 + 0x6c);
    param_1[0x47] = iVar4;
    piVar8 = *(int **)(param_3 + 0x2c);
    iVar4 = piVar8[1];
    iVar2 = piVar8[2];
    iVar3 = piVar8[3];
    param_1[0x37] = *piVar8;
    param_1[0x38] = iVar4;
    param_1[0x39] = iVar2;
    param_1[0x3a] = iVar3;
    iVar4 = piVar8[5];
    iVar2 = piVar8[6];
    param_1[0x3b] = piVar8[4];
    param_1[0x3c] = iVar4;
    param_1[0x3d] = iVar2;
    iVar2 = *(int *)(param_3 + 0xa0);
    iVar4 = *(int *)(param_3 + 0x9c);
    iVar3 = *(int *)(param_3 + 0x98);
    param_1[0x6a] = *(int *)(param_3 + 0x94);
    param_1[0x6b] = iVar3;
    param_1[0x70] = iVar4;
    param_1[0x71] = iVar2;
    iVar4 = *(int *)(param_3 + 0xa8);
    param_1[0x72] = *(int *)(param_3 + 0xa4);
    param_1[0x73] = iVar4;
    iVar4 = *(int *)(param_3 + 0xb0);
    param_1[0x74] = *(int *)(param_3 + 0xac);
    param_1[0x75] = iVar4;
    FUN_1011ea40(param_1 + 0x48,param_3 + 0xb4,0x44);
    iVar4 = *(int *)(param_3 + 0xfc);
    uVar1 = *(undefined2 *)(param_3 + 0x100);
    iVar2 = *(int *)(param_3 + 0x104);
    param_1[0x60] = *(int *)(param_3 + 0xf8);
    param_1[0x61] = iVar4;
    *(undefined2 *)(param_1 + 0x76) = uVar1;
    param_1[0x77] = iVar2;
    iVar4 = *(int *)(param_3 + 0x10c);
    iVar2 = *(int *)(param_3 + 0x110);
    iVar3 = *(int *)(param_3 + 0x114);
    param_1[0x2d] = *(int *)(param_3 + 0x108);
    param_1[0x2e] = iVar4;
    param_1[0x2f] = iVar2;
    param_1[0x30] = iVar3;
    iVar4 = *(int *)(param_3 + 0x11c);
    iVar2 = *(int *)(param_3 + 0x120);
    iVar3 = *(int *)(param_3 + 0x124);
    param_1[0x31] = *(int *)(param_3 + 0x118);
    param_1[0x32] = iVar4;
    param_1[0x33] = iVar2;
    param_1[0x34] = iVar3;
    piVar8 = param_1 + 9;
    param_1[0x35] = *(int *)(param_3 + 0x128);
    FUN_1011ea48(piVar8,0,0x24);
    param_1[0x12] = *piVar8;
    param_1[0x13] = param_1[10];
    param_1[0x14] = param_1[0xb];
    param_1[0x15] = param_1[0xc];
    param_1[0x16] = param_1[0xd];
    param_1[0x17] = param_1[0xe];
    param_1[0x18] = param_1[0xf];
    param_1[0x19] = param_1[0x10];
    param_1[0x1a] = param_1[0x11];
    param_1[0x1b] = *piVar8;
    param_1[0x1c] = param_1[10];
    param_1[0x1d] = param_1[0xb];
    param_1[0x1e] = param_1[0xc];
    param_1[0x1f] = param_1[0xd];
    param_1[0x20] = param_1[0xe];
    param_1[0x21] = param_1[0xf];
    param_1[0x22] = param_1[0x10];
    param_1[0x23] = param_1[0x11];
  }
  uVar7 = param_1[5];
  uVar6 = *(ushort *)(param_2 + 0x11c) + 0x20;
  iVar4 = param_1[2];
  if (uVar7 < uVar6) {
    iVar4 = FUN_100fb280(iVar4,1,uVar7 << 2,uVar6 * 4,param_1[6],&local_1c);
    param_1[6] = iVar4;
    if (local_1c != 0) {
      param_1[5] = uVar7;
      return local_1c;
    }
    uVar7 = (uint)*(ushort *)(param_2 + 0x11e);
    param_1[5] = uVar6;
    uVar6 = param_1[0x62];
    iVar4 = param_1[2];
    if (uVar7 <= uVar6) goto LAB_101079dc;
  }
  else {
    uVar7 = (uint)*(ushort *)(param_2 + 0x11e);
    uVar6 = param_1[0x62];
    if (uVar7 <= uVar6) {
LAB_101079dc:
      param_1[0x62] = uVar6 & 0xffff;
      goto LAB_101079e2;
    }
  }
  iVar4 = FUN_100fb280(iVar4,1,uVar6,uVar7,param_1[99],&local_1c);
  param_1[99] = iVar4;
  if (local_1c != 0) {
    param_1[0x62] = uVar6;
    return local_1c;
  }
  param_1[0x62] = uVar7;
LAB_101079e2:
  param_1[0x26] = 0;
  param_1[0x12] = param_1[0x24];
  param_1[0x13] = param_1[0x25];
  param_1[0x14] = param_1[0x26];
  param_1[0x15] = param_1[0x27];
  piVar8 = param_1 + 0x2c;
  param_1[0x16] = param_1[0x28];
  param_1[0x17] = param_1[0x29];
  param_1[0x18] = param_1[0x2a];
  param_1[0x19] = param_1[0x2b];
  param_1[0x1a] = *piVar8;
  param_1[0x1b] = param_1[0x24];
  param_1[0x1c] = param_1[0x25];
  param_1[0x1d] = param_1[0x26];
  param_1[0x1e] = param_1[0x27];
  param_1[0x1f] = param_1[0x28];
  param_1[0x20] = param_1[0x29];
  param_1[0x21] = param_1[0x2a];
  param_1[0x22] = param_1[0x2b];
  param_1[0x23] = *piVar8;
  param_1[9] = param_1[0x24];
  param_1[10] = param_1[0x25];
  param_1[0xb] = param_1[0x26];
  param_1[0xc] = param_1[0x27];
  param_1[0xd] = param_1[0x28];
  param_1[0xe] = param_1[0x29];
  param_1[0xf] = param_1[0x2a];
  param_1[0x10] = param_1[0x2b];
  param_1[0x11] = *piVar8;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  return 0;
}

