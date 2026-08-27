/* FUN_14075428 @ 0x14075428 */

void FUN_14075428(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 != 0) && ((*(byte *)(param_1 + 4) & 0x10) == 0)) {
    if ((*(byte *)(param_1 + 4) & 0x40) == 0) {
      FUN_14075b28();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14075454,param_2,param_3);
  }
  return;
}

