/* FUN_2c53f8dc @ 0x2c53f8dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c53f8dc(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool in_ZR;
  bool in_CY;
  
  piVar1 = _LAB_2c53f98c;
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c53f990);
  }
  iVar3 = *param_1;
  if ((uint)(_LAB_2c53f988 * (param_1[2] - iVar3 >> 4)) < param_2) {
    iVar6 = param_1[1];
    iVar7 = iVar6 - iVar3;
    if (param_2 == 0) {
      iVar4 = 0;
      iVar2 = iVar4;
      iVar5 = iVar4;
      if (iVar3 != iVar6) goto LAB_2c53f924;
    }
    else {
      if (*_LAB_2c53f98c == 0) {
        FUN_2c4723c4();
        *piVar1 = 1;
      }
      iVar5 = param_2 * 0x250;
      iVar2 = FUN_2c47245c(0,iVar5);
      iVar4 = iVar2;
      for (; iVar3 != iVar6; iVar3 = iVar3 + 0x250) {
LAB_2c53f924:
        FUN_2c53ed3c(iVar4,iVar3);
        iVar4 = iVar4 + 0x250;
      }
      iVar3 = param_1[1];
      iVar6 = *param_1;
      iVar4 = iVar5;
      if (*param_1 != iVar3) {
        do {
          iVar5 = iVar6 + 0x250;
          FUN_2c53eb84(iVar6);
          iVar6 = iVar5;
        } while (iVar3 != iVar5);
        iVar3 = *param_1;
      }
    }
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,iVar3);
    }
    *param_1 = iVar2;
    param_1[1] = iVar2 + iVar7;
    param_1[2] = iVar4 + iVar2;
    return;
  }
  return;
}

