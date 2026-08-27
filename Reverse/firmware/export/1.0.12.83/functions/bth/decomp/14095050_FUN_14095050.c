/* FUN_14095050 @ 0x14095050 */

undefined4 FUN_14095050(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1409507c,DAT_14095078);
  }
  if (*(byte *)(param_1 + 0x4b) - 3 < 2) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

