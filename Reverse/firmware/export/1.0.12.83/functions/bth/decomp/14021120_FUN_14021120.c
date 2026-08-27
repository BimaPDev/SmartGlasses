/* FUN_14021120 @ 0x14021120 */

void FUN_14021120(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 == 0) {
    *param_2 = *param_2 + -0x11;
    return;
  }
  iVar1 = param_3 >> (0x1dU - LZCOUNT(param_3) & 0xff);
  iVar3 = *param_1;
  iVar2 = (*param_2 + -0x11) - (0x1f - LZCOUNT(param_3));
  if (iVar1 == 6) {
    iVar4 = DAT_14021180;
    if (iVar3 != 0) {
      iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)DAT_14021180) >> 0x20) << 1;
    }
  }
  else if ((iVar1 == 7) || (iVar4 = iVar3, iVar1 == 5)) {
    if (iVar3 != 0) {
      *param_1 = (int)((ulonglong)((longlong)iVar3 * (longlong)DAT_1402117c) >> 0x20) << 1;
      *param_2 = iVar2;
      return;
    }
    *param_1 = DAT_1402117c;
    *param_2 = iVar2;
    return;
  }
  *param_1 = iVar4;
  *param_2 = iVar2;
  return;
}

