/* FUN_101246e6 @ 0x101246e6 */

undefined4 FUN_101246e6(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) && ((*(byte *)*param_1 & 0xfd) == 1)) {
    return param_1[0x14];
  }
  return 0;
}

