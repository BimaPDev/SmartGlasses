/* FUN_10107aa0 @ 0x10107aa0 */

int FUN_10107aa0(int *param_1,undefined1 param_2)

{
  longlong lVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  iVar4 = param_1[0x17];
  iVar11 = *param_1;
  if (param_1[0x3e] != 0) {
    uVar9 = 0;
    piVar3 = (int *)(*(int *)(iVar11 + 0x2b8) + -4);
    puVar2 = (uint *)(param_1[0x3f] + -4);
    do {
      piVar3 = piVar3 + 1;
      lVar1 = (longlong)(iVar4 >> 6) * (longlong)*piVar3;
      lVar1 = lVar1 + (ulonglong)((int)(lVar1 >> 0x3f) + 0x8000);
      puVar2 = puVar2 + 1;
      *puVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) * 0x10000;
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)param_1[0x3e]);
  }
  iVar10 = param_1[0x4b];
  iVar4 = FUN_101078a4(iVar10,iVar11,param_1);
  if (iVar4 == 0) {
    *(undefined1 *)(iVar10 + 0x1ec) = 0;
    *(undefined1 *)(iVar10 + 0x235) = param_2;
    iVar6 = *(int *)(iVar11 + 0x2ac);
    uVar5 = *(undefined4 *)(iVar11 + 0x2b0);
    *(undefined4 *)(iVar10 + 0x1d0) = 0;
    *(undefined4 *)(iVar10 + 0x1d4) = 0;
    *(undefined4 *)(iVar10 + 0x1c8) = uVar5;
    *(int *)(iVar10 + 0x1cc) = iVar6;
    *(undefined4 *)(iVar10 + 0x1b0) = 0;
    *(undefined4 *)(iVar10 + 0x10) = 0;
    if (iVar6 != 0) {
      *(undefined4 *)(iVar10 + 0x16c) = 0;
      *(int *)(iVar10 + 0x170) = iVar6;
      *(undefined4 *)(iVar10 + 0x168) = uVar5;
      pcVar8 = *(code **)(iVar11 + 700);
      *(undefined4 *)(iVar10 + 0x164) = 2;
      iVar4 = (*pcVar8)(iVar10);
    }
    param_1[0x4d] = iVar4;
    *(undefined4 *)(iVar10 + 0x126) = 0x4000;
    *(undefined4 *)(iVar10 + 0x12a) = 0x4000;
    *(undefined4 *)(iVar10 + 0x12e) = 0x4000;
    *(undefined4 *)(iVar10 + 0x120) = 0;
    *(undefined2 *)(iVar10 + 0x124) = 0;
    *(undefined4 *)(iVar10 + 0x15c) = 0x10001;
    *(undefined2 *)(iVar10 + 0x160) = 1;
    *(undefined4 *)(iVar10 + 0x134) = 1;
    FUN_1011ea40(param_1 + 0x2d,iVar10 + 0x120,0x44);
    iVar11 = *(int *)(iVar10 + 0x1c0);
    iVar6 = *(int *)(iVar10 + 0x1c4);
    iVar7 = *(int *)(iVar10 + 0x19c);
    param_1[0x1f] = *(int *)(iVar10 + 400);
    param_1[0x22] = iVar7;
    iVar7 = *(int *)(iVar10 + 0x1ac);
    param_1[0x25] = *(int *)(iVar10 + 0x1a8);
    param_1[0x26] = iVar7;
    param_1[0x27] = iVar11;
    param_1[0x28] = iVar6;
    iVar11 = *(int *)(iVar10 + 0x1cc);
    param_1[0x29] = *(int *)(iVar10 + 0x1c8);
    param_1[0x2a] = iVar11;
    iVar11 = *(int *)(iVar10 + 0x1d4);
    param_1[0x2b] = *(int *)(iVar10 + 0x1d0);
    param_1[0x2c] = iVar11;
  }
  return iVar4;
}

