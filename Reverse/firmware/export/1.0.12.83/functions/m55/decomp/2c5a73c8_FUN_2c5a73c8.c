/* FUN_2c5a73c8 @ 0x2c5a73c8 */

undefined4 * FUN_2c5a73c8(undefined4 *param_1)

{
  *param_1 = DAT_2c5a73fc;
  if ((undefined4 *)param_1[0x12] != param_1 + 0x14) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  FUN_2c5a8420(param_1 + 10);
  if ((undefined4 *)param_1[4] != param_1 + 6) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return param_1;
}

