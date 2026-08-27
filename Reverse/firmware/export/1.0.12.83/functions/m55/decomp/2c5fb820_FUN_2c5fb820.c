/* FUN_2c5fb820 @ 0x2c5fb820 */

undefined4 FUN_2c5fb820(int param_1)

{
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5fb874,0xf2,DAT_2c5fb870,DAT_2c5fb86c);
  }
  *(undefined4 *)(param_1 + 4) = 1;
  FUN_2c62be4c(*(undefined4 *)(param_1 + 0x10));
  return 0;
}

