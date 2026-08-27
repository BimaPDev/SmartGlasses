/* FUN_2c48ee0c @ 0x2c48ee0c */

undefined4 FUN_2c48ee0c(uint param_1)

{
  if (param_1 < 3) {
    return *(undefined4 *)(DAT_2c48ee3c + param_1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x7c,DAT_2c48ee4c,DAT_2c48ee48,DAT_2c48ee44,DAT_2c48ee40,param_1);
}

