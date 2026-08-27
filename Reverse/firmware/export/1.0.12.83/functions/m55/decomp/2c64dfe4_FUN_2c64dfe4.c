/* FUN_2c64dfe4 @ 0x2c64dfe4 */

undefined4 * FUN_2c64dfe4(undefined4 *param_1)

{
  *param_1 = DAT_2c64e000;
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  FUN_2c64cdcc(param_1);
  return param_1;
}

