/* FUN_2c60646c @ 0x2c60646c */

int FUN_2c60646c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar4 = param_1[1];
  if (iVar4 != 0) {
    iVar2 = 0;
    piVar3 = (int *)(*param_1 + -4);
    while( true ) {
      piVar3 = piVar3 + 1;
      iVar1 = *piVar3;
      iVar2 = iVar2 + 1;
      if (iVar1 == param_2) {
        return 1;
      }
      iVar1 = FUN_2c60646c(*(undefined4 *)(iVar1 + 8),param_2,param_3,iVar1,param_4);
      if (iVar1 != 0) break;
      param_3 = extraout_r2;
      if (iVar4 == iVar2) {
        return 0;
      }
    }
    return iVar1;
  }
  return 0;
}

