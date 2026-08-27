/* FUN_14028db8 @ 0x14028db8 */

bool FUN_14028db8(uint param_1,undefined4 param_2)

{
  if (param_1 < 4) {
    *(undefined4 *)(DAT_14028dcc + param_1 * 4) = param_2;
  }
  return param_1 >= 4;
}

