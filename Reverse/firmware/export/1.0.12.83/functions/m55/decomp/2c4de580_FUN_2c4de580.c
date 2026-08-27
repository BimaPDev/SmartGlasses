/* FUN_2c4de580 @ 0x2c4de580 */

undefined4 * FUN_2c4de580(undefined4 *param_1)

{
  *param_1 = DAT_2c4de598;
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  return param_1;
}

