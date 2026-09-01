/* FUN_100d8c98 @ 0x100d8c98 */

void FUN_100d8c98(byte param_1)

{
  *(byte *)*DAT_100d8ca8 = *(byte *)*DAT_100d8ca8 & 0xfd | (param_1 & 1) << 1;
  FUN_100d88cc();
  return;
}

