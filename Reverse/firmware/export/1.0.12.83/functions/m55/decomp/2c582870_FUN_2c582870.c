/* FUN_2c582870 @ 0x2c582870 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c582870(undefined4 *param_1)

{
  *param_1 = _LAB_2c582890;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0xc))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,param_1);
}

