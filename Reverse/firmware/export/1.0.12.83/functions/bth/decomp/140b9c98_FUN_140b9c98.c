/* FUN_140b9c98 @ 0x140b9c98 */

ushort FUN_140b9c98(int param_1)

{
  return *(ushort *)(param_1 + 0x44) & *(short *)(param_1 + 0x36) * 2 - 1U;
}

