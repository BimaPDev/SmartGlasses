/* FUN_10107c48 @ 0x10107c48 */

uint FUN_10107c48(int param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x104);
  uVar1 = *(ushort *)(param_1 + 0x100);
  if (iVar4 == 0) {
    if (*(short *)(param_1 + 300) == 0) {
      iVar4 = *(int *)(param_1 + 0xf8);
      *(int *)(param_1 + 0x104) = iVar4;
    }
    else if (*(short *)(param_1 + 0x12a) == 0) {
      iVar4 = *(int *)(param_1 + 0xfc);
      *(int *)(param_1 + 0x104) = iVar4;
    }
    else {
      lVar2 = (longlong)(int)*(short *)(param_1 + 0x12a) * (longlong)*(int *)(param_1 + 0xf8);
      lVar2 = lVar2 + (ulonglong)((int)(lVar2 >> 0x3f) + 0x2000);
      lVar3 = (longlong)(int)*(short *)(param_1 + 300) * (longlong)*(int *)(param_1 + 0xfc);
      lVar3 = lVar3 + (ulonglong)((int)(lVar3 >> 0x3f) + 0x2000);
      iVar4 = FUN_100f8518((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) * 0x40000,
                           (uint)lVar3 >> 0xe | (int)((ulonglong)lVar3 >> 0x20) * 0x40000);
      *(int *)(param_1 + 0x104) = iVar4;
    }
  }
  lVar2 = (longlong)iVar4 * (longlong)(int)(uint)uVar1;
  lVar2 = lVar2 + (ulonglong)((int)(lVar2 >> 0x3f) + 0x8000);
  return (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) * 0x10000;
}

