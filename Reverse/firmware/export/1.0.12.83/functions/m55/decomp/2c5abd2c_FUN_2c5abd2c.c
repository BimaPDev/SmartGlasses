/* FUN_2c5abd2c @ 0x2c5abd2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c5abd2c(undefined4 *param_1)

{
  *param_1 = _LAB_2c5abd64;
  if (param_1[100] != 0) {
    FUN_2c620f94();
    param_1[100] = 0;
  }
  if (param_1[0x66] != 0) {
    FUN_2c620f94();
    param_1[0x66] = 0;
  }
  if ((int *)param_1[0x60] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x60] + 4))();
  }
  return param_1;
}

