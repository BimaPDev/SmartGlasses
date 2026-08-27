/* FUN_2c519df8 @ 0x2c519df8 */

void FUN_2c519df8(int param_1,int param_2)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0xc) != param_2) {
      FUN_2c5199e0(param_1 + 0x40,*(int *)(param_1 + 0xc),param_2);
      *(int *)(param_1 + 0xc) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c519e3c,0x62,DAT_2c519e38,DAT_2c519e34,DAT_2c519e30);
}

