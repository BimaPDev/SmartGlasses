/* FUN_2c665148 @ 0x2c665148 */

uint FUN_2c665148(int param_1,int param_2,int *param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_3 == param_5) &&
     (iVar4 = FUN_2c6650f4(param_1,param_4,param_3,param_4,param_1,param_2,param_3), iVar4 != 0)) {
    uVar3 = 6;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xc);
    param_1 = param_1 + iVar4 * 8;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar3 = *(uint *)(param_1 + 0xc);
      if ((int)(uVar3 << 0x1e) < 0) {
        iVar2 = (int)uVar3 >> 8;
        if ((uVar3 & 1) != 0) {
          if (param_2 == -3) goto LAB_2c6651b4;
          iVar2 = *(int *)(*param_3 + iVar2);
        }
        uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x20))
                          (*(int **)(param_1 + 8),param_2,iVar2 + (int)param_3,param_4,param_5);
        if (3 < uVar1) {
          if ((uVar3 & 1) == 0) {
            return uVar1;
          }
          return uVar1 & 0xff | 1;
        }
      }
LAB_2c6651b4:
      param_1 = param_1 + -8;
    }
    uVar3 = 1;
  }
  return uVar3;
}

