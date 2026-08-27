/* FUN_2c58278c @ 0x2c58278c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c58278c(undefined4 *param_1)

{
  *param_1 = _LAB_2c5827e8;
  if (param_1[0x16] != 0) {
    FUN_2c58d410(param_1 + 0x16);
  }
  if ((undefined4 *)param_1[0xe] != param_1 + 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)param_1[8] != param_1 + 10) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (param_1[4] != 0) {
    FUN_2c58d410(param_1 + 4);
  }
  if (param_1[3] != 0) {
    FUN_2c58d410(param_1 + 3);
  }
  if (param_1[2] != 0) {
    FUN_2c58d410(param_1 + 2);
  }
  return param_1;
}

