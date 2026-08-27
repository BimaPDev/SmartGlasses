/* FUN_14058974 @ 0x14058974 */

undefined4 FUN_14058974(undefined4 *param_1,uint param_2,uint param_3)

{
  if ((param_1 != (undefined4 *)0x0) && (param_3 < 4)) {
    *param_1 = 0xffffffff;
    param_1[1] = param_2 | param_3 << 8;
    return 0;
  }
  return 0x40;
}

