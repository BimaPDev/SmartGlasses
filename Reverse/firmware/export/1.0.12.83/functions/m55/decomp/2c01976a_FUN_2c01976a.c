/* FUN_2c01976a @ 0x2c01976a */

undefined4 FUN_2c01976a(int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  param_1[3] = param_2;
  if (param_4 == 0) {
    uVar2 = param_1[2];
    if (0 < (int)uVar2) {
      *param_1 = (param_3 + *param_1) - uVar2 * ((param_3 + *param_1) / uVar2);
      return 0;
    }
    *param_1 = 0;
    return 0;
  }
  iVar1 = *param_1;
  uVar2 = param_1[2] - iVar1;
  if (param_3 < uVar2) {
    FUN_2c00679c(param_4,iVar1 + param_1[4]);
    *param_1 = *param_1 + param_3;
    return 0;
  }
  iVar1 = FUN_2c00679c(param_4,iVar1 + param_1[4],uVar2);
  FUN_2c00679c(iVar1 + uVar2,param_1[4],param_3 - uVar2);
  *param_1 = param_3 - uVar2;
  return 0;
}

