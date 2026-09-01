/* FUN_100f8fc4 @ 0x100f8fc4 */

int FUN_100f8fc4(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 != 0) {
    iVar1 = *param_1;
    while (iVar1 != 0) {
      iVar1 = FUN_1011ea18(iVar1,param_2);
      if (iVar1 == 0) {
        return param_1[1];
      }
      param_1 = param_1 + 2;
      iVar1 = *param_1;
    }
  }
  return 0;
}

