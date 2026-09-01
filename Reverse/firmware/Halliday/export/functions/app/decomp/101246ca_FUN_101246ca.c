/* FUN_101246ca @ 0x101246ca */

byte FUN_101246ca(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) && ((*(byte *)*param_1 & 0xfd) == 1)) {
    return *(byte *)(param_1 + 0x1c) & 0xf;
  }
  return 0;
}

