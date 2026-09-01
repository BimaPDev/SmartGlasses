/* FUN_100ca630 @ 0x100ca630 */

undefined4 FUN_100ca630(int *param_1)

{
  if (param_1 == (int *)0x0) {
    *DAT_100ca668 = 0;
    return 0;
  }
  if (*DAT_100ca668 == 0) {
    if ((param_1[4] == 0) &&
       ((((*param_1 != 0 || (param_1[1] != 0)) || (param_1[2] != 0)) ||
        ((param_1[6] != 0 || (param_1[5] != 0)))))) {
      return 0xffffffea;
    }
    *DAT_100ca668 = (int)param_1;
    return 0;
  }
  return 0xffffff88;
}

