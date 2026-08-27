/* FUN_2c64f3ea @ 0x2c64f3ea */

int FUN_2c64f3ea(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_2 + -0xc);
  if (iVar2 + 1U < 0x1fffffff) {
    iVar1 = (iVar2 + 1U) * 4;
  }
  else {
    iVar1 = -1;
  }
  iVar1 = thunk_FUN_2c64ca5c(iVar1);
  FUN_2c651448(param_2,iVar1,iVar2,0,param_4);
  *param_1 = iVar1;
  *(undefined4 *)(iVar1 + iVar2 * 4) = 0;
  return iVar2;
}

