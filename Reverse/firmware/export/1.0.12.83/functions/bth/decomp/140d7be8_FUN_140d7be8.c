/* FUN_140d7be8 @ 0x140d7be8 */

int * FUN_140d7be8(int *param_1,undefined4 param_2,int param_3)

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
    FUN_140d78be(param_1,iVar1,0,param_2,param_3,param_2);
  }
  else if (param_3 != 0) {
    FUN_140d7822((int *)*param_1 + iVar1);
  }
  FUN_140d7770(param_1,iVar1 + param_3);
  return param_1;
}

