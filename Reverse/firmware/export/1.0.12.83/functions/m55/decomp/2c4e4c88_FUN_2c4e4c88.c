/* FUN_2c4e4c88 @ 0x2c4e4c88 */

void FUN_2c4e4c88(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  if ((*(int *)(param_1 + 0x28) != 0) && (*param_2 != 0)) {
    FUN_2c4e4f4c(param_1,*param_2,0,*(int *)(param_1 + 0x28),param_4);
    (**(code **)(param_1 + 0x28))(*param_2);
    *param_2 = 0;
  }
  return;
}

