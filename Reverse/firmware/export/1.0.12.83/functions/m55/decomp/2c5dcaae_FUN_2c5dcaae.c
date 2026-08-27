/* FUN_2c5dcaae @ 0x2c5dcaae */

int FUN_2c5dcaae(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char in_ZR;
  
  if (in_ZR == '\0') {
    iVar1 = *(int *)(param_1 + 4);
    if (param_3 != iVar1) {
      param_2 = FUN_2c673eb8(param_2,param_3,iVar1 - param_3,param_2,param_4);
      iVar1 = *(int *)(param_1 + 4);
    }
    iVar2 = (iVar1 - param_3) + param_2;
    if (iVar2 != iVar1) {
      *(int *)(param_1 + 4) = iVar2;
    }
  }
  return param_2;
}

