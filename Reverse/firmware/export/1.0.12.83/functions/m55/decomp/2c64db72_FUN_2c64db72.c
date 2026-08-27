/* FUN_2c64db72 @ 0x2c64db72 */

undefined4 *
FUN_2c64db72(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_4;
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  FUN_2c64cdcc(param_1);
  return param_1;
}

