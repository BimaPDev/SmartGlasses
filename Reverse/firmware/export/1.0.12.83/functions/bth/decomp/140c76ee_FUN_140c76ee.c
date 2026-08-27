/* FUN_140c76ee @ 0x140c76ee */

int FUN_140c76ee(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 + 1U < 0x1fffffff) {
    iVar1 = (iVar2 + 1U) * 4;
  }
  else {
    iVar1 = -1;
  }
  iVar1 = thunk_FUN_140bff34(iVar1);
  FUN_140d7c4c(param_2,iVar1,iVar2,0,param_4);
  *param_1 = iVar1;
  *(undefined4 *)(iVar1 + iVar2 * 4) = 0;
  return iVar2;
}

