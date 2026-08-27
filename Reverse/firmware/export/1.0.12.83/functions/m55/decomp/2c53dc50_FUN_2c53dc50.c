/* FUN_2c53dc50 @ 0x2c53dc50 */

int * FUN_2c53dc50(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 8) == 0) {
    iVar2 = param_2 + 4;
  }
  else {
    iVar4 = *param_3;
    iVar1 = *(int *)(param_2 + 8);
    do {
      iVar2 = iVar1;
      iVar3 = *(int *)(iVar2 + 0x10);
      iVar1 = *(int *)(iVar2 + 0xc);
      if (iVar3 > iVar4) {
        iVar1 = *(int *)(iVar2 + 8);
      }
    } while (iVar1 != 0);
    if (iVar3 <= iVar4) {
      iVar1 = iVar2;
      if (iVar3 < iVar4) goto LAB_2c53dca6;
      goto LAB_2c53dc7e;
    }
  }
  if (*(int *)(param_2 + 0xc) == iVar2) {
    *param_1 = 0;
    param_1[1] = iVar2;
    return param_1;
  }
  iVar1 = thunk_FUN_2c64e460(iVar2);
  if (*(int *)(iVar1 + 0x10) < *param_3) {
LAB_2c53dca6:
    *param_1 = 0;
    param_1[1] = iVar2;
    return param_1;
  }
LAB_2c53dc7e:
  *param_1 = iVar1;
  param_1[1] = 0;
  return param_1;
}

