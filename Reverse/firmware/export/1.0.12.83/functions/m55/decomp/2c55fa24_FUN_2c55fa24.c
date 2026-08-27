/* FUN_2c55fa24 @ 0x2c55fa24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c55fa24(undefined4 *param_1)

{
  *param_1 = _LAB_2c55fa88;
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
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,param_1);
}

