/* FUN_2c664b04 @ 0x2c664b04 */

int * FUN_2c664b04(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_2c6648d0(param_1,param_3,param_4,DAT_2c664b80,param_1,param_2);
  piVar1 = (int *)*param_1;
  uVar3 = (param_4 - param_3) + param_1[1];
  if (piVar1 == param_1 + 2) {
    uVar2 = 3;
  }
  else {
    uVar2 = param_1[2];
  }
  if (uVar2 < uVar3) {
    FUN_2c66499e(param_1,param_2,param_3,0,param_4);
  }
  else if ((param_1[1] != param_3 + param_2) && (param_3 != param_4)) {
    FUN_2c66491a(piVar1 + param_2 + param_4,piVar1 + param_2 + param_3);
  }
  if (param_4 != 0) {
    FUN_2c664932(*param_1 + param_2 * 4,param_4,param_5);
  }
  FUN_2c664850(param_1,uVar3);
  return param_1;
}

