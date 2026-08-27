/* FUN_2c4b7490 @ 0x2c4b7490 */

void FUN_2c4b7490(uint param_1)

{
  if (param_1 < 0x18) {
    *(uint *)(DAT_2c4b74a8 + 0xfc) = 1 << (param_1 & 0xff) | *(uint *)(DAT_2c4b74a8 + 0xfc);
  }
  return;
}

