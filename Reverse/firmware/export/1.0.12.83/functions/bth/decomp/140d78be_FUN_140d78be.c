/* FUN_140d78be @ 0x140d78be */

void FUN_140d78be(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int local_24;
  
  iVar2 = param_1[1] - (param_2 + param_3);
  local_24 = (param_5 - param_3) + param_1[1];
  if ((int *)*param_1 == param_1 + 2) {
    iVar1 = 3;
  }
  else {
    iVar1 = param_1[2];
  }
  iVar1 = FUN_140d777c(param_1,&local_24,iVar1,param_1 + 2,param_1);
  if (param_2 != 0) {
    FUN_140d7822(iVar1,*param_1,param_2);
  }
  if ((param_4 != 0) && (param_5 != 0)) {
    FUN_140d7822(iVar1 + param_2 * 4,param_4,param_5);
  }
  if (iVar2 != 0) {
    FUN_140d7822(iVar1 + (param_2 + param_5) * 4,*param_1 + (param_2 + param_3) * 4,iVar2);
  }
  FUN_140d77c4(param_1);
  *param_1 = iVar1;
  param_1[2] = local_24;
  return;
}

