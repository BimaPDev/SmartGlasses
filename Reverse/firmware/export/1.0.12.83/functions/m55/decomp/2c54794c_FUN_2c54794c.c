/* FUN_2c54794c @ 0x2c54794c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c54794c(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = _LAB_2c5479d4;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = uVar1;
  if (param_1[2] != 0) {
    FUN_2c62be1c();
    param_1[2] = 0;
  }
  param_1[0x36] = _LAB_2c5479d8;
  if ((undefined4 *)param_1[0x3e] != param_1 + 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)param_1[0x38] != param_1 + 0x3a) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (param_1[0x32] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)param_1[0x29] != param_1 + 0x2b) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  param_1[0x1e] = _LAB_2c5479dc;
  if ((undefined4 *)param_1[0x1f] != param_1 + 0x21) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)param_1[0x18] != param_1 + 0x1a) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return param_1;
}

