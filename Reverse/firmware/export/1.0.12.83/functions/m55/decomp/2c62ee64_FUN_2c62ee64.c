/* FUN_2c62ee64 @ 0x2c62ee64 */

undefined4 FUN_2c62ee64(uint param_1)

{
  if (param_1 < 0x13) {
    return *(undefined4 *)(DAT_2c62ee78 + param_1 * 4);
  }
  return 0xff000000;
}

