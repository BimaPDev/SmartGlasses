/* FUN_2c5ff608 @ 0x2c5ff608 */

byte FUN_2c5ff608(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) && ((*(byte *)*param_1 & 0xfd) == 1)) {
    return *(byte *)(param_1 + 0x10) & 0xf;
  }
  return 0;
}

