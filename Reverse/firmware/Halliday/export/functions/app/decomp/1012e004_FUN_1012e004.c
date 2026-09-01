/* FUN_1012e004 @ 0x1012e004 */

undefined4 FUN_1012e004(int param_1)

{
  if (param_1 != 0) {
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfd;
    return 0;
  }
  return 0xffffffea;
}

