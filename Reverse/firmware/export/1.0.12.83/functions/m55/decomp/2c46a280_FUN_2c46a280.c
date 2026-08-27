/* FUN_2c46a280 @ 0x2c46a280 */

void FUN_2c46a280(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x20); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
      (**(code **)(param_1 + 0x2c))(iVar1);
    }
  }
  FUN_2c669588(*(undefined4 *)(param_1 + 0x28));
  FUN_2c669588(param_1,extraout_r1,extraout_r2,param_4);
  return;
}

