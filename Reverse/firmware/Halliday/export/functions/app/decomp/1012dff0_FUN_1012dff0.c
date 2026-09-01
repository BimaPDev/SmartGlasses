/* FUN_1012dff0 @ 0x1012dff0 */

undefined4 FUN_1012dff0(int param_1)

{
  if (param_1 != 0) {
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 2;
    return 0;
  }
  return 0xffffffea;
}

