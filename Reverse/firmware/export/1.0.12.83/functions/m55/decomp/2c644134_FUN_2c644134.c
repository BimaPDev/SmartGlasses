/* FUN_2c644134 @ 0x2c644134 */

int * FUN_2c644134(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar1 = FUN_2c646bac(0xffffff);
  }
  else {
    iVar1 = FUN_2c646bac(param_2,1);
  }
  if (0 < iVar1) {
    *param_1 = 8;
    param_1[1] = iVar1;
    return param_1;
  }
  if (iVar1 == -3) {
    *param_1 = 0;
    param_1[1] = -3;
    return param_1;
  }
  if (iVar1 == -2) {
    *param_1 = 0x40;
    param_1[1] = -2;
    return param_1;
  }
  iVar2 = iVar1;
  if (iVar1 == -4) {
    iVar2 = -0x7f;
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  return param_1;
}

