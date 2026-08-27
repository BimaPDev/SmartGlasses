/* FUN_2c5346b0 @ 0x2c5346b0 */

void FUN_2c5346b0(int param_1)

{
  FUN_2c5337a4();
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x52,DAT_2c5dc744,DAT_2c5dc740,DAT_2c5dc73c);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680();
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,param_1);
}

