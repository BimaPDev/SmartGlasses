/* FUN_2c4b74ac @ 0x2c4b74ac */

void FUN_2c4b74ac(uint param_1)

{
  if (param_1 < 0x18) {
    *(uint *)(DAT_2c4b74c8 + 0xfc) = *(uint *)(DAT_2c4b74c8 + 0xfc) & ~(1 << (param_1 & 0xff));
  }
  return;
}

