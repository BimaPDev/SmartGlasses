/* FUN_140c254c @ 0x140c254c */

int FUN_140c254c(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_2 + -0xc);
  iVar1 = thunk_FUN_140bff34(iVar2 + 1);
  FUN_140c3e50(param_2,iVar1,iVar2,0,param_4);
  *param_1 = iVar1;
  *(undefined1 *)(iVar1 + iVar2) = 0;
  return iVar2;
}

