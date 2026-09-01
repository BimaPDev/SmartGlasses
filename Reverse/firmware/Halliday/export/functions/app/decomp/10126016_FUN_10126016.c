/* FUN_10126016 @ 0x10126016 */

int FUN_10126016(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == 0 && param_3 == 0) {
    iVar1 = 1;
  }
  else {
    FUN_10089398();
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + param_2;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + param_3;
    FUN_1012584c(param_1,param_2,param_3,1);
    iVar1 = FUN_10086f50(param_1,0xb,0);
    if (iVar1 == 1) {
      FUN_10125af4(param_1);
    }
  }
  return iVar1;
}

