/* FUN_2c4f0128 @ 0x2c4f0128 */

void FUN_2c4f0128(int param_1,uint param_2)

{
  if (param_2 < 10) {
    if (param_2 == 8) {
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
    }
    param_1 = param_1 + param_2 * 4;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x14a,DAT_2c4f0170,DAT_2c4f016c,DAT_2c4f0168,DAT_2c4f0164,param_2);
}

