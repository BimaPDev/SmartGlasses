/* FUN_2c4fd690 @ 0x2c4fd690 */

undefined4 *
FUN_2c4fd690(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,param_1[2]);
  }
  FUN_2c674268(*param_1,0,param_1[1] << 2,param_4,param_4);
  param_1[2] = 0;
  param_1[3] = 0;
  if ((undefined4 *)*param_1 != param_1 + 6) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  return param_1;
}

