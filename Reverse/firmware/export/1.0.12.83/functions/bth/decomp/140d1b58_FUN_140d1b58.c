/* FUN_140d1b58 @ 0x140d1b58 */

int * FUN_140d1b58(int *param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_140d1900(param_1,param_3,param_4,DAT_140d1bd0,param_1,param_2);
  piVar1 = (int *)*param_1;
  uVar3 = (param_4 - param_3) + param_1[1];
  if (piVar1 == param_1 + 2) {
    uVar2 = 0xf;
  }
  else {
    uVar2 = param_1[2];
  }
  if (uVar2 < uVar3) {
    FUN_140d19ca(param_1,param_2,param_3,0,param_4);
  }
  else if ((param_1[1] != param_3 + param_2) && (param_3 != param_4)) {
    FUN_140d1948((int)piVar1 + param_4 + param_2,(int)piVar1 + param_3 + param_2);
  }
  if (param_4 != 0) {
    FUN_140d1960(*param_1 + param_2,param_4,param_5);
  }
  param_1[1] = uVar3;
  *(undefined1 *)(*param_1 + uVar3) = 0;
  return param_1;
}

