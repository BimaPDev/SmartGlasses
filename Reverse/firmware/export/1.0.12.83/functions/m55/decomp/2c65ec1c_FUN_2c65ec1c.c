/* FUN_2c65ec1c @ 0x2c65ec1c */

int * FUN_2c65ec1c(int *param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_2c65e978(param_1,param_3,param_4,DAT_2c65ec94,param_1,param_2);
  piVar1 = (int *)*param_1;
  uVar3 = (param_4 - param_3) + param_1[1];
  if (piVar1 == param_1 + 2) {
    uVar2 = 0xf;
  }
  else {
    uVar2 = param_1[2];
  }
  if (uVar2 < uVar3) {
    FUN_2c65ea8e(param_1,param_2,param_3,0,param_4);
  }
  else if ((param_1[1] != param_3 + param_2) && (param_3 != param_4)) {
    FUN_2c65e9c0((int)piVar1 + param_4 + param_2,(int)piVar1 + param_3 + param_2);
  }
  if (param_4 != 0) {
    FUN_2c65e9d8(*param_1 + param_2,param_4,param_5);
  }
  param_1[1] = uVar3;
  *(undefined1 *)(*param_1 + uVar3) = 0;
  return param_1;
}

