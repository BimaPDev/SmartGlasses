/* FUN_100af514 @ 0x100af514 */

uint FUN_100af514(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar6 = 0;
  for (iVar5 = (param_1 * DAT_100af5cc) / 200; iVar5 < -0x8000; iVar5 = iVar5 + 0x8000) {
    iVar6 = iVar6 + 1;
  }
  for (; 0x8000 < iVar5; iVar5 = iVar5 + -0x8000) {
    iVar6 = iVar6 + 1;
  }
  lVar2 = 0x40000000000;
  iVar4 = 0x8000;
  iVar7 = 0;
  piVar8 = DAT_100af5d8;
  do {
    lVar1 = (longlong)iVar4 * (longlong)iVar5 >> 0xf;
    iVar4 = (int)lVar1;
    iVar7 = iVar7 + 1;
    lVar2 = lVar1 * *piVar8 + lVar2;
    piVar8 = piVar8 + 1;
  } while (iVar7 != 6);
  uVar3 = (uint)lVar2 >> 0x1b | (int)((ulonglong)lVar2 >> 0x20) * 0x20;
  if (0 < iVar6) {
    iVar5 = 0;
    if (param_1 < 0) {
      do {
        iVar5 = iVar5 + 1;
        uVar3 = (uint)((longlong)(int)uVar3 * (longlong)DAT_100af5d0) >> 0x1b |
                (int)((ulonglong)((longlong)(int)uVar3 * (longlong)DAT_100af5d0) >> 0x20) << 5;
      } while (iVar6 != iVar5);
    }
    else {
      do {
        iVar5 = iVar5 + 1;
        uVar3 = (uint)((longlong)(int)uVar3 * (longlong)DAT_100af5d4) >> 0x1b |
                (int)((ulonglong)((longlong)(int)uVar3 * (longlong)DAT_100af5d4) >> 0x20) << 5;
      } while (iVar6 != iVar5);
    }
  }
  return uVar3;
}

