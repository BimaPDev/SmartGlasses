/* FUN_2c5eff20 @ 0x2c5eff20 */

int FUN_2c5eff20(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (iVar4 == 0) {
    return 0;
  }
  if (iVar4 == param_2) {
    return 1;
  }
  iVar3 = 2;
  iVar2 = 1;
  do {
    iVar1 = iVar3;
    if (param_2 == 0) {
      iVar4 = *(int *)(iVar4 + 8);
      if (iVar4 == 0) {
        return iVar2;
      }
    }
    else {
      iVar3 = FUN_2c66960c(iVar4,param_2,7);
      if (iVar3 == 0) {
        return iVar2;
      }
      iVar4 = *(int *)(iVar4 + 8);
      if (iVar4 == 0) {
        return iVar2;
      }
      if (param_2 == iVar4) {
        return iVar1;
      }
    }
    iVar3 = iVar1 + 1;
    iVar2 = iVar1;
  } while( true );
}

