/* FUN_2c5f9d70 @ 0x2c5f9d70 */

undefined4 FUN_2c5f9d70(int param_1)

{
  if (param_1 == 0) {
    return DAT_2c5f9d90;
  }
  if (0x17 < *(ushort *)(param_1 + 0x34)) {
    return DAT_2c5f9d88;
  }
  return *(undefined4 *)(DAT_2c5f9d8c + (uint)*(ushort *)(param_1 + 0x34) * 4);
}

