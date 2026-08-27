/* FUN_1408223c @ 0x1408223c */

undefined1 * FUN_1408223c(undefined1 *param_1,int param_2)

{
  undefined2 uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  short sVar9;
  undefined4 uVar10;
  
  sVar9 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar7 = FUN_1408ad70(*(undefined4 *)(param_2 + 8));
  bVar2 = *(byte *)(param_2 + 0x34);
  uVar1 = *(undefined2 *)(*(int *)(param_2 + 8) + 10);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(*(int *)(param_2 + 8) + 6);
  *(undefined2 *)(param_1 + 6) = uVar1;
  bVar3 = *(byte *)(param_2 + 0x3b);
  if (*(ushort *)(param_2 + 0x1e) < 6) {
    sVar9 = 6 - *(ushort *)(param_2 + 0x1e);
  }
  uVar4 = *(undefined1 *)(param_2 + 0x19);
  uVar10 = *(undefined4 *)(param_2 + 0x20);
  bVar5 = *(byte *)(param_2 + 0x30);
  uVar1 = *(undefined2 *)(param_2 + 0x1c);
  bVar6 = *(byte *)(param_2 + 0x3a);
  param_1[0xc] = bVar2 ^ 1;
  *(ushort *)(param_1 + 0x14) = (ushort)bVar3;
  uVar8 = *(undefined4 *)(param_2 + 0x24);
  bVar2 = *(byte *)(param_2 + 0x1a);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  *param_1 = uVar7;
  param_1[1] = uVar4;
  *(undefined4 *)(param_1 + 8) = uVar10;
  *(ushort *)(param_1 + 0xe) = (ushort)bVar5;
  *(undefined2 *)(param_1 + 0x10) = uVar1;
  *(ushort *)(param_1 + 0x12) = (ushort)bVar6;
  *(short *)(param_1 + 0x16) = sVar9;
  *(ushort *)(param_1 + 0x18) = (ushort)bVar2;
  return param_1;
}

