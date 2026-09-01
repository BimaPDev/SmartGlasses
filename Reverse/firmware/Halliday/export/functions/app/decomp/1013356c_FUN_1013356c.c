/* FUN_1013356c @ 0x1013356c */

undefined4 FUN_1013356c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (iVar2 == param_2) {
      return 0;
    }
    if (*(int *)(param_1 + 0xcc) == 0) break;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0xd0;
  }
  *(int *)(param_1 + 0xcc) = 1;
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_1011ea48(param_1,0,0xcc,param_1,param_4);
  return uVar1;
}

