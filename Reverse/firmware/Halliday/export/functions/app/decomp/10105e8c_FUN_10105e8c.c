/* FUN_10105e8c @ 0x10105e8c */

uint FUN_10105e8c(int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x104);
  iVar4 = *(int *)(*(int *)(param_1 + 0x184) + param_2 * 4);
  if (iVar3 == 0) {
    if (*(short *)(param_1 + 300) == 0) {
      iVar3 = *(int *)(param_1 + 0xf8);
      *(int *)(param_1 + 0x104) = iVar3;
    }
    else if (*(short *)(param_1 + 0x12a) == 0) {
      iVar3 = *(int *)(param_1 + 0xfc);
      *(int *)(param_1 + 0x104) = iVar3;
    }
    else {
      lVar1 = (longlong)(int)*(short *)(param_1 + 0x12a) * (longlong)*(int *)(param_1 + 0xf8);
      lVar1 = lVar1 + (ulonglong)((int)(lVar1 >> 0x3f) + 0x2000);
      lVar2 = (longlong)(int)*(short *)(param_1 + 300) * (longlong)*(int *)(param_1 + 0xfc);
      lVar2 = lVar2 + (ulonglong)((int)(lVar2 >> 0x3f) + 0x2000);
      iVar3 = FUN_100f8518((uint)lVar1 >> 0xe | (int)((ulonglong)lVar1 >> 0x20) * 0x40000,
                           (uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) * 0x40000);
      *(int *)(param_1 + 0x104) = iVar3;
    }
  }
  lVar1 = (longlong)iVar3 * (longlong)iVar4;
  lVar1 = lVar1 + (ulonglong)((int)(lVar1 >> 0x3f) + 0x8000);
  return (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) * 0x10000;
}

