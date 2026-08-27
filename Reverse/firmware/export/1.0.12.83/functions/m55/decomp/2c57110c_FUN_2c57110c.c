/* FUN_2c57110c @ 0x2c57110c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c57110c(undefined4 *param_1)

{
  *param_1 = _LAB_2c571124;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0xc))();
  }
  return param_1;
}

