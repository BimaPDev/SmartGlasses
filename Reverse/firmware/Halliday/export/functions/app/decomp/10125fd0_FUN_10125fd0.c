/* FUN_10125fd0 @ 0x10125fd0 */

byte FUN_10125fd0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return *(byte *)(*(int *)(param_1 + 8) + 0x21) & 0xf;
  }
  return 0xf;
}

