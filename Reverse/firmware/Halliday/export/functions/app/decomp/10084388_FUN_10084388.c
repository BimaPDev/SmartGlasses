/* FUN_10084388 @ 0x10084388 */

int FUN_10084388(int *param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar1 = DAT_10084404;
  iVar3 = 0;
  piVar4 = DAT_10084404;
  while (((*piVar4 != *param_1 || (piVar4[1] != param_1[2])) || (piVar4[2] != param_1[0xc]))) {
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 4;
    if (iVar3 == 0x10) {
      iVar3 = 0;
      while (iVar5 = iVar3 + 1, DAT_10084404[iVar3 * 4] != 0) {
        iVar3 = iVar5;
        if (iVar5 == 0x10) {
          return 0;
        }
      }
      DAT_10084404[iVar3 * 4] = *param_1;
      iVar5 = param_1[0xc];
      piVar1[iVar3 * 4 + 1] = param_1[2];
      piVar1[iVar3 * 4 + 2] = iVar5;
      *(undefined2 *)(piVar1 + iVar3 * 4 + 3) = 0;
      if (param_2 == 0) {
LAB_100843d2:
        sVar2 = (short)piVar1[iVar3 * 4 + 3] + 1;
      }
      else {
LAB_100843fc:
        sVar2 = 0x100;
      }
      *(short *)(piVar1 + iVar3 * 4 + 3) = sVar2;
      return iVar3 + 1;
    }
  }
  if (param_2 == 0) goto LAB_100843d2;
  if ((short)DAT_10084404[iVar3 * 4 + 3] != 0) {
    return 0;
  }
  goto LAB_100843fc;
}

