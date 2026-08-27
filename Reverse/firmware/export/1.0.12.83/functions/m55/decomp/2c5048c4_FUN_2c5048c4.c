/* FUN_2c5048c4 @ 0x2c5048c4 */

undefined4 * FUN_2c5048c4(undefined4 *param_1)

{
  FUN_2c5eda50(*param_1);
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  return param_1;
}

