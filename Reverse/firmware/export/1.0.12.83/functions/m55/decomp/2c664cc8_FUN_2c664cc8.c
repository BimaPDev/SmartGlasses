/* FUN_2c664cc8 @ 0x2c664cc8 */

int * FUN_2c664cc8(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[1];
  if ((int *)*param_1 == param_1 + 2) {
    uVar2 = 3;
  }
  else {
    uVar2 = param_1[2];
  }
  if (uVar2 < (uint)(iVar1 + param_3)) {
    FUN_2c66499e(param_1,iVar1,0,param_2,param_3,param_2);
  }
  else if (param_3 != 0) {
    FUN_2c664902((int *)*param_1 + iVar1);
  }
  FUN_2c664850(param_1,iVar1 + param_3);
  return param_1;
}

