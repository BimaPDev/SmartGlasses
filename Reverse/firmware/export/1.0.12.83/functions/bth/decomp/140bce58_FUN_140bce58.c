/* FUN_140bce58 @ 0x140bce58 */

undefined1 FUN_140bce58(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (param_2 < param_1) {
    if ((param_1 == param_2 * (param_1 / param_2)) && (uVar1 = param_1 / param_2 - 2, uVar1 < 5)) {
      return *(undefined1 *)(DAT_140bcea0 + uVar1);
    }
  }
  else {
    if (param_2 <= param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140bcea8,DAT_140bcea4,param_3,param_4,param_4);
    }
    if ((param_2 == param_1 * (param_2 / param_1)) && (uVar1 = param_2 / param_1 - 2, uVar1 < 5)) {
      return *(undefined1 *)(DAT_140bce9c + uVar1);
    }
  }
  return 6;
}

