/* FUN_2c582854 @ 0x2c582854 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c582854(undefined4 *param_1)

{
  *param_1 = _LAB_2c58286c;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0xc))();
  }
  return param_1;
}

