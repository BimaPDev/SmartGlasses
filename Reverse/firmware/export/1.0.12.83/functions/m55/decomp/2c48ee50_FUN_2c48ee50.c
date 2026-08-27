/* FUN_2c48ee50 @ 0x2c48ee50 */

undefined4 FUN_2c48ee50(uint param_1)

{
  if (param_1 < 3) {
    return *(undefined4 *)(DAT_2c48ee80 + param_1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x85,DAT_2c48ee90,DAT_2c48ee8c,DAT_2c48ee88,DAT_2c48ee84,param_1);
}

