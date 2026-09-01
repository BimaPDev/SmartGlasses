/* FUN_10130652 @ 0x10130652 */

int FUN_10130652(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = -0x16;
  }
  else {
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    if (*(int *)(param_1 + 0x4c) == 0) {
      iVar1 = FUN_10130eb2();
    }
    else {
      iVar1 = FUN_100b3b7c();
    }
    if (iVar1 != 0) {
      FUN_10130596(param_1,0xe,0,0,param_4);
    }
  }
  return iVar1;
}

