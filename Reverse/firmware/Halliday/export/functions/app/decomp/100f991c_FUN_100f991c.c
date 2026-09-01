/* FUN_100f991c @ 0x100f991c */

void FUN_100f991c(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x20);
  iVar8 = *(int *)(param_1 + 0x58);
  iVar6 = iVar9 + param_2 * 0x10;
  iVar4 = *(int *)(iVar6 + 8);
  iVar6 = *(int *)(iVar6 + 0xc);
  *(short *)(iVar8 + 0xc) = (short)(iVar4 + 0x20 >> 6);
  uVar7 = *(uint *)(param_1 + 8);
  *(short *)(iVar8 + 0xe) = (short)(iVar6 + 0x20 >> 6);
  if ((uVar7 & 1) == 0) {
    sVar1 = *(short *)(iVar9 + param_2 * 0x10);
    *(undefined4 *)(iVar8 + 0x10) = 0x10000;
    *(undefined4 *)(iVar8 + 0x14) = 0x10000;
    *(undefined4 *)(iVar8 + 0x1c) = 0;
    *(int *)(iVar8 + 0x20) = (int)sVar1 << 6;
    *(int *)(iVar8 + 0x18) = iVar6;
    *(int *)(iVar8 + 0x24) = iVar4;
    return;
  }
  uVar2 = *(undefined2 *)(param_1 + 0x44);
  uVar5 = FUN_100f87b8();
  *(undefined4 *)(iVar8 + 0x10) = uVar5;
  uVar5 = FUN_100f87b8(iVar6,uVar2);
  *(undefined4 *)(iVar8 + 0x14) = uVar5;
  iVar4 = *(int *)(iVar8 + 0x14);
  lVar3 = (longlong)iVar4 * (longlong)(int)*(short *)(param_1 + 0x46);
  lVar3 = lVar3 + (ulonglong)((int)(lVar3 >> 0x3f) + 0x8000);
  *(uint *)(iVar8 + 0x18) =
       ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) * 0x10000) + 0x3f & 0xffffffc0;
  lVar3 = (longlong)iVar4 * (longlong)(int)*(short *)(param_1 + 0x48);
  lVar3 = lVar3 + (ulonglong)((int)(lVar3 >> 0x3f) + 0x8000);
  *(uint *)(iVar8 + 0x1c) =
       (uint)lVar3 >> 0x10 & 0xffffffc0 | (int)((ulonglong)lVar3 >> 0x20) * 0x10000;
  lVar3 = (longlong)iVar4 * (longlong)(int)*(short *)(param_1 + 0x4a);
  lVar3 = lVar3 + (ulonglong)((int)(lVar3 >> 0x3f) + 0x8000);
  *(uint *)(iVar8 + 0x20) =
       ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) * 0x10000) + 0x20 & 0xffffffc0;
  lVar3 = (longlong)*(int *)(iVar8 + 0x10) * (longlong)(int)*(short *)(param_1 + 0x4c);
  lVar3 = lVar3 + (ulonglong)((int)(lVar3 >> 0x3f) + 0x8000);
  *(uint *)(iVar8 + 0x24) =
       ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) * 0x10000) + 0x20 & 0xffffffc0;
  return;
}

