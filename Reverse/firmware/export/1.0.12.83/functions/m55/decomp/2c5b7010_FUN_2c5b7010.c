/* FUN_2c5b7010 @ 0x2c5b7010 */

void FUN_2c5b7010(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_2c5dcadc(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5b705c,0x112,DAT_2c5b7058,DAT_2c5b7054);
}

