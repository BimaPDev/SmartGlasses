/* FUN_1402b274 @ 0x1402b274 */

undefined4 FUN_1402b274(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 < 4) {
    *(undefined4 *)(DAT_1402b290 + param_1 * 4) = param_2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_1402b298,DAT_1402b294,param_1,param_4,param_4);
}

