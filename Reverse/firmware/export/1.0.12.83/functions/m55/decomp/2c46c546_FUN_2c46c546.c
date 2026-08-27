/* FUN_2c46c546 @ 0x2c46c546 */

undefined4 FUN_2c46c546(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = FUN_2c46a45c();
    *(int *)(param_1 + 0x10) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  FUN_2c46a598();
  iVar1 = (**(code **)(param_1 + 8))(param_1,*(undefined4 *)(param_1 + 0x10),0,param_2,param_4);
  if (iVar1 < 0) {
    return 0;
  }
  return **(undefined4 **)(param_1 + 0x10);
}

