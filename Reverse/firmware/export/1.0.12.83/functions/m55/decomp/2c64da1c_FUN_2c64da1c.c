/* FUN_2c64da1c @ 0x2c64da1c */

undefined4 * FUN_2c64da1c(undefined4 *param_1)

{
  *param_1 = DAT_2c64da38;
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  FUN_2c64cdcc(param_1);
  return param_1;
}

