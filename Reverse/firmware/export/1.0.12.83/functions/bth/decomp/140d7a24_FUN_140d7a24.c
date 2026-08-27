/* FUN_140d7a24 @ 0x140d7a24 */

int * FUN_140d7a24(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_140d77f0(param_1,param_3,param_4,DAT_140d7aa0,param_1,param_2);
  piVar1 = (int *)*param_1;
  uVar3 = (param_4 - param_3) + param_1[1];
  if (piVar1 == param_1 + 2) {
    uVar2 = 3;
  }
  else {
    uVar2 = param_1[2];
  }
  if (uVar2 < uVar3) {
    FUN_140d78be(param_1,param_2,param_3,0,param_4);
  }
  else if ((param_1[1] != param_3 + param_2) && (param_3 != param_4)) {
    FUN_140d783a(piVar1 + param_2 + param_4,piVar1 + param_2 + param_3);
  }
  if (param_4 != 0) {
    FUN_140d7852(*param_1 + param_2 * 4,param_4,param_5);
  }
  FUN_140d7770(param_1,uVar3);
  return param_1;
}

