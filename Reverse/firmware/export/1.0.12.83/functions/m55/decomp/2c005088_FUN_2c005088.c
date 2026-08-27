/* FUN_2c005088 @ 0x2c005088 */

undefined4 FUN_2c005088(int param_1)

{
  FUN_2c003d6c();
  if (*(int *)(DAT_2c0050d8 + param_1 * 4) << 0x13 < 0) {
    FUN_2c003b5c(param_1);
    FUN_2c003b20(param_1,*(undefined1 *)
                          (*(int *)(DAT_2c0050e4 + (uint)*(byte *)(DAT_2c0050e0 + param_1) * 4) + 5)
                );
    FUN_2c003d6c(param_1);
  }
  FUN_2c003d24(param_1);
  FUN_2c004de0(param_1);
  FUN_2c0040e8(param_1,*(undefined4 *)(DAT_2c0050dc + param_1 * 4));
  return 0;
}

