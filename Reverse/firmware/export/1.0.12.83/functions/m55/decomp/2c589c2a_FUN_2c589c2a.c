/* FUN_2c589c2a @ 0x2c589c2a */

undefined4 *
FUN_2c589c2a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_4;
  FUN_2c5561f0(param_1 + 10);
  if ((undefined4 *)param_1[10] != param_1 + 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  *param_1 = DAT_2c589c64;
  if ((undefined4 *)param_1[3] != param_1 + 5) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return param_1;
}

