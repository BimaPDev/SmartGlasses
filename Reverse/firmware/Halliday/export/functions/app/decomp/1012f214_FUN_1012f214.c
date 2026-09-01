/* FUN_1012f214 @ 0x1012f214 */

void FUN_1012f214(undefined2 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar4 = *(int *)(param_1 + 6);
    iVar3 = *(int *)(param_1 + 8);
    for (iVar2 = 0; iVar2 < param_4; iVar2 = iVar2 + 1) {
      if (param_5 == 1) {
        lVar1 = (longlong)(int)*(short *)(param_2 + iVar2 * 2) * (longlong)iVar3;
        *(ushort *)(param_2 + iVar2 * 2) =
             (ushort)((ulonglong)lVar1 >> 0x10) >> 0xb |
             (ushort)((int)((ulonglong)lVar1 >> 0x20) << 5);
      }
      else if (param_1[2] == 0) {
        lVar1 = (longlong)(int)*(short *)(param_2 + iVar2 * 2) * (longlong)iVar3;
        *(ushort *)(param_2 + iVar2 * 2) =
             (ushort)((ulonglong)lVar1 >> 0x10) >> 0xb |
             (ushort)((int)((ulonglong)lVar1 >> 0x20) << 5);
        lVar1 = (longlong)(int)*(short *)(param_3 + iVar2 * 2) * (longlong)iVar3;
        *(ushort *)(param_3 + iVar2 * 2) =
             (ushort)((ulonglong)lVar1 >> 0x10) >> 0xb |
             (ushort)((int)((ulonglong)lVar1 >> 0x20) << 5);
      }
      else {
        lVar1 = (longlong)(int)*(short *)(param_2 + iVar2 * 4) * (longlong)iVar3;
        *(ushort *)(param_2 + iVar2 * 4) =
             (ushort)((ulonglong)lVar1 >> 0x10) >> 0xb |
             (ushort)((int)((ulonglong)lVar1 >> 0x20) << 5);
        iVar5 = iVar2 * 4 + 2;
        lVar1 = (longlong)(int)*(short *)(param_2 + iVar5) * (longlong)iVar3;
        *(ushort *)(param_2 + iVar5) =
             (ushort)((ulonglong)lVar1 >> 0x10) >> 0xb |
             (ushort)((int)((ulonglong)lVar1 >> 0x20) << 5);
      }
      iVar5 = *(int *)(param_1 + 4);
      iVar3 = iVar3 + iVar4;
      *(int *)(param_1 + 4) = iVar5 + -1;
      if (iVar5 + -1 == 0) {
        *param_1 = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        return;
      }
    }
    *(int *)(param_1 + 8) = iVar3;
  }
  return;
}

