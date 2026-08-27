/* FUN_2c493560 @ 0x2c493560 */

undefined4 FUN_2c493560(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 1U & 0xff;
  if (8 < uVar1) {
    return 0;
  }
  if (*DAT_2c493620 != 0) {
    FUN_2c644044(*DAT_2c493620,3000);
  }
  if (*(char *)(DAT_2c493608 + param_1 * 0x10 + 1) == '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x10c,DAT_2c493618,DAT_2c493614,DAT_2c493610,*(undefined4 *)(DAT_2c49360c + uVar1 * 4));
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x10e,DAT_2c493618,DAT_2c493614,DAT_2c49361c,*(undefined4 *)(DAT_2c49360c + uVar1 * 4));
}

