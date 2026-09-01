/* FUN_101073ac @ 0x101073ac */

undefined4 FUN_101073ac(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  
  FUN_100f9988(*param_1);
  iVar8 = *param_1;
  if ((*(uint *)(iVar8 + 8) & 1) == 0) {
    return 0;
  }
  if (*(char *)(iVar8 + 0x2d4) == '\0') {
    puVar7 = (ushort *)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0x1c) = 0;
    *(int *)puVar7 = param_1[3];
    param_1[0xd] = param_1[4];
    param_1[0xe] = param_1[5];
    param_1[0xf] = param_1[6];
    uVar6 = (uint)*(ushort *)(param_1 + 0xc);
    param_1[0x10] = param_1[7];
    param_1[0x11] = param_1[8];
    param_1[0x12] = param_1[9];
    if ((uVar6 == 0) || (uVar4 = (uint)*(ushort *)((int)param_1 + 0x32), uVar4 == 0)) {
      return 0x97;
    }
    if ((int)((uint)*(ushort *)(iVar8 + 0xb0) << 0x1c) < 0) {
      iVar5 = param_1[0xe];
      lVar2 = (longlong)iVar5 * (longlong)(int)*(short *)(iVar8 + 0x46);
      lVar2 = lVar2 + (ulonglong)((int)(lVar2 >> 0x3f) + 0x8000);
      param_1[0xf] = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) * 0x10000) + 0x20 &
                     0xffffffc0;
      lVar2 = (longlong)iVar5 * (longlong)(int)*(short *)(iVar8 + 0x48);
      lVar2 = lVar2 + (ulonglong)((int)(lVar2 >> 0x3f) + 0x8000);
      param_1[0x10] =
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) * 0x10000) + 0x20 & 0xffffffc0;
      lVar2 = (longlong)iVar5 * (longlong)(int)*(short *)(iVar8 + 0x4a);
      lVar2 = lVar2 + (ulonglong)((int)(lVar2 >> 0x3f) + 0x8000);
      uVar4 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) * 0x10000) + 0x20 & 0xffffffc0;
      *(undefined1 *)(param_1 + 0x1c) = 1;
      param_1[0x11] = uVar4;
      iVar5 = FUN_100f87b8(uVar6 << 6,*(undefined2 *)(iVar8 + 0x44),uVar4,uVar6,param_4);
      param_1[0xd] = iVar5;
      iVar5 = FUN_100f87b8((uint)*(ushort *)((int)param_1 + 0x32) << 6,*(undefined2 *)(iVar8 + 0x44)
                          );
      sVar1 = *(short *)(iVar8 + 0x4c);
      param_1[0xe] = iVar5;
      lVar2 = (longlong)param_1[0xd] * (longlong)(int)sVar1;
      lVar2 = lVar2 + (ulonglong)((int)(lVar2 >> 0x3f) + 0x8000);
      uVar6 = (uint)*(ushort *)(param_1 + 0xc);
      uVar4 = (uint)*(ushort *)((int)param_1 + 0x32);
      param_1[0x12] =
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) * 0x10000) + 0x20 & 0xffffffc0;
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = 1;
    }
    if (uVar6 < uVar4) {
      *(short *)(param_1 + 0x15) = (short)uVar4;
      param_1[0x17] = param_1[0xe];
      iVar8 = FUN_100f87b8(uVar6,uVar4,param_1[0xe],uVar6,param_4);
      param_1[0x13] = iVar8;
      param_1[0x14] = 0x10000;
    }
    else {
      *(short *)(param_1 + 0x15) = (short)uVar6;
      param_1[0x13] = 0x10000;
      param_1[0x17] = param_1[0xd];
      iVar8 = FUN_100f87b8(uVar4,uVar6,param_1[0xd],uVar6,param_4);
      param_1[0x14] = iVar8;
    }
    param_1[0xb] = (int)puVar7;
    param_1[0x4d] = -1;
  }
  else {
    puVar7 = (ushort *)param_1[0xb];
  }
  piVar3 = (int *)(param_2 + 0xc);
  if (*puVar7 <= puVar7[1]) {
    piVar3 = (int *)(param_2 + 0x10);
  }
  iVar8 = *piVar3;
  if (*param_2 == '\x04') {
    iVar8 = 0x48;
  }
  else if (iVar8 == 0) {
    iVar8 = 0x48;
  }
  iVar8 = FUN_100f85ec((short)param_1[0x15],0x1200,iVar8);
  param_1[0x1e] = iVar8;
  return 0;
}

