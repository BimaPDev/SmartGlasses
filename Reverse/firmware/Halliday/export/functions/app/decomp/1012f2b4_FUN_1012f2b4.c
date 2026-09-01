/* FUN_1012f2b4 @ 0x1012f2b4 */

void FUN_1012f2b4(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    if (param_5 == 1) {
      iVar3 = param_4 << 1;
    }
    else if (*(short *)(param_1 + 4) == 0) {
      iVar3 = param_4 << 1;
      FUN_1011ea48(param_2,0,iVar3,param_4,param_1,iVar3,param_3);
      param_2 = param_3;
    }
    else {
      iVar3 = param_4 << 2;
    }
    FUN_1011ea48(param_2,0,iVar3);
    return;
  }
  iVar6 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar3 = 0;
  do {
    iVar5 = iVar3;
    if (param_4 <= iVar5) {
      if (*(short *)(param_1 + 2) != 0) {
        *(int *)(param_1 + 0x1c) = iVar4;
        return;
      }
      goto LAB_1012f320;
    }
    if (param_5 == 1) {
      lVar1 = (longlong)(int)*(short *)(param_2 + iVar5 * 2) * (longlong)iVar4;
      *(ushort *)(param_2 + iVar5 * 2) =
           (ushort)((ulonglong)lVar1 >> 0x10) >> 0xb |
           (ushort)((int)((ulonglong)lVar1 >> 0x20) << 5);
    }
    else if (*(short *)(param_1 + 4) == 0) {
      lVar1 = (longlong)(int)*(short *)(param_2 + iVar5 * 2) * (longlong)iVar4;
      *(ushort *)(param_2 + iVar5 * 2) =
           (ushort)((ulonglong)lVar1 >> 0x10) >> 0xb |
           (ushort)((int)((ulonglong)lVar1 >> 0x20) << 5);
      lVar1 = (longlong)(int)*(short *)(param_3 + iVar5 * 2) * (longlong)iVar4;
      *(ushort *)(param_3 + iVar5 * 2) =
           (ushort)((ulonglong)lVar1 >> 0x10) >> 0xb |
           (ushort)((int)((ulonglong)lVar1 >> 0x20) << 5);
    }
    else {
      lVar1 = (longlong)(int)*(short *)(param_2 + iVar5 * 4) * (longlong)iVar4;
      *(ushort *)(param_2 + iVar5 * 4) =
           (ushort)((ulonglong)lVar1 >> 0x10) >> 0xb |
           (ushort)((int)((ulonglong)lVar1 >> 0x20) << 5);
      iVar3 = iVar5 * 4 + 2;
      lVar1 = (longlong)(int)*(short *)(param_2 + iVar3) * (longlong)iVar4;
      *(ushort *)(param_2 + iVar3) =
           (ushort)((ulonglong)lVar1 >> 0x10) >> 0xb |
           (ushort)((int)((ulonglong)lVar1 >> 0x20) << 5);
    }
    iVar4 = iVar4 - iVar6;
    iVar2 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar2;
    iVar3 = iVar5 + 1;
  } while (iVar2 != 0);
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
LAB_1012f320:
  while (iVar5 = iVar5 + 1, iVar5 < param_4) {
    if (param_5 == 1) {
      *(undefined2 *)(param_2 + iVar5 * 2) = 0;
    }
    else if (*(short *)(param_1 + 4) == 0) {
      *(undefined2 *)(param_2 + iVar5 * 2) = 0;
      *(undefined2 *)(param_3 + iVar5 * 2) = 0;
    }
    else {
      *(undefined2 *)(param_2 + iVar5 * 4) = 0;
      *(undefined2 *)(param_2 + 2 + iVar5 * 4) = 0;
    }
  }
  return;
}

