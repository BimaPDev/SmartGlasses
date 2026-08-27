/* FUN_2c4d0c10 @ 0x2c4d0c10 */

int FUN_2c4d0c10(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar3 = DAT_2c4d0ce8;
  iVar5 = DAT_2c4d0ce4;
  iVar7 = *param_3;
  if (param_2 < 1) {
    if (param_2 == 0) {
      *param_3 = iVar7;
      return 9;
    }
    uVar4 = 0x7fffffff;
    iVar5 = 9;
  }
  else {
    uVar4 = 0;
    piVar1 = param_1;
    do {
      iVar7 = iVar5 * iVar7 + iVar3;
      piVar2 = piVar1 + 1;
      *piVar1 = iVar7;
      uVar4 = (uint)((longlong)(iVar7 >> 7) * (longlong)(iVar7 >> 7) + ((ulonglong)uVar4 << 0x20) >>
                    0x20);
      piVar1 = piVar2;
    } while (param_1 + param_2 != piVar2);
    iVar5 = uVar4 << 1;
    if (iVar5 == 0) {
      uVar4 = 0x7fffffff;
      iVar5 = 9;
    }
    else {
      iVar3 = LZCOUNT(iVar5) + 1;
      uVar4 = iVar5 << (LZCOUNT(iVar5) - 1U & 0xff);
      uVar8 = DAT_2c4d0cf0 & uVar4 << 8;
      uVar6 = (uVar4 & 0x3fffffff) >> 0x17;
      iVar10 = *(int *)(DAT_2c4d0cec + (uVar6 + 1) * 4);
      iVar5 = *(int *)(DAT_2c4d0cec + uVar6 * 4);
      iVar9 = iVar10 - iVar5;
      uVar4 = iVar5 + (int)((ulonglong)((longlong)iVar9 * (longlong)(int)uVar8) >> 0x20) * 2;
      if (uVar8 != 0) {
        uVar4 = (uint)((longlong)
                       ((int)((ulonglong)
                              ((longlong)(int)uVar8 * (longlong)(int)(-0x80000000 - uVar8)) >> 0x20)
                       << 1) * (longlong)
                               (iVar9 - (*(int *)(DAT_2c4d0cec + (uVar6 + 2) * 4) - iVar10)) +
                       ((ulonglong)uVar4 << 0x20) >> 0x20);
      }
      if (iVar3 * -0x80000000 < 0) {
        uVar4 = (int)((ulonglong)((longlong)(int)uVar4 * (longlong)DAT_2c4d0cf4) >> 0x20) << 2;
      }
      iVar5 = (iVar3 >> 1) + -7;
    }
  }
  piVar1 = param_1 + param_2;
  do {
    piVar1 = piVar1 + -1;
    *piVar1 = (int)((ulonglong)((longlong)*piVar1 * (longlong)(int)uVar4) >> 0x20) << 1;
  } while (param_1 != piVar1);
  *param_3 = iVar7;
  return iVar5;
}

