/* FUN_2c64f3c0 @ 0x2c64f3c0 */

int FUN_2c64f3c0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_2 + -0xc);
  iVar1 = thunk_FUN_2c64ca5c(iVar2 + 1);
  FUN_2c650ccc(param_2,iVar1,iVar2,0,param_4);
  *param_1 = iVar1;
  *(undefined1 *)(iVar1 + iVar2) = 0;
  return iVar2;
}

