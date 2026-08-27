/* FUN_2c4d8838 @ 0x2c4d8838 */

ushort FUN_2c4d8838(int param_1)

{
  return *(ushort *)(param_1 + 0x44) & *(short *)(param_1 + 0x36) * 2 - 1U;
}

