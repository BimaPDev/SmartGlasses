/* FUN_100d8c84 @ 0x100d8c84 */

void FUN_100d8c84(byte param_1)

{
  *(byte *)*DAT_100d8c94 = *(byte *)*DAT_100d8c94 & 0xfe | param_1 & 1;
  FUN_100d88cc();
  return;
}

