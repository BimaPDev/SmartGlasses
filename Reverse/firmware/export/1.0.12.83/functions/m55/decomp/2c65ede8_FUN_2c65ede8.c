/* FUN_2c65ede8 @ 0x2c65ede8 */

int * FUN_2c65ede8(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1[1];
  uVar3 = iVar1 + param_3;
  if ((int *)*param_1 == param_1 + 2) {
    uVar2 = 0xf;
  }
  else {
    uVar2 = param_1[2];
  }
  if (uVar2 < uVar3) {
    FUN_2c65ea8e(param_1,iVar1,0,param_2,param_3,param_2);
  }
  else if (param_3 != 0) {
    FUN_2c65e9a8(iVar1 + *param_1);
  }
  param_1[1] = uVar3;
  *(undefined1 *)(*param_1 + uVar3) = 0;
  return param_1;
}

