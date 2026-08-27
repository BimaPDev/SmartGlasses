/* FUN_2c4c0030 @ 0x2c4c0030 */

undefined4 FUN_2c4c0030(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 < 0x18) {
    return 0;
  }
  if (0x1f < param_1 - 0x18) {
    if (0x17 < param_1 - 0x38) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4c0060,DAT_2c4c005c,param_1,param_1 - 0x38,param_4);
    }
    return 2;
  }
  return 1;
}

