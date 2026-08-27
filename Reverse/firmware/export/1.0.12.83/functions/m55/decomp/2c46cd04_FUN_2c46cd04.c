/* FUN_2c46cd04 @ 0x2c46cd04 */

void FUN_2c46cd04(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_2c46c9ec();
    }
    if (param_1[1] != 0) {
      FUN_2c46c9ec();
    }
    iVar1 = param_1[2];
    if ((0 < iVar1) && (iVar3 = param_1[3], iVar3 != 0)) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        if (*(int *)(iVar3 + 0x18) != 0) {
          FUN_2c46c9ec();
          iVar3 = iVar3 + 0x20;
          iVar1 = param_1[2];
        }
      } while (iVar2 < iVar1);
      FUN_2c46c9ec(param_1[3]);
    }
    FUN_2c46c9ec(param_1);
    return;
  }
  return;
}

