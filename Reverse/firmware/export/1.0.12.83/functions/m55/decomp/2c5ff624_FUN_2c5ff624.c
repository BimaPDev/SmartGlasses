/* FUN_2c5ff624 @ 0x2c5ff624 */

undefined4 FUN_2c5ff624(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) && ((*(byte *)*param_1 & 0xfd) == 1)) {
    return param_1[0xb];
  }
  return 0;
}

