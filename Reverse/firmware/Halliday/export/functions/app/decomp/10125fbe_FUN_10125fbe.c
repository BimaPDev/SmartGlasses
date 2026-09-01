/* FUN_10125fbe @ 0x10125fbe */

byte FUN_10125fbe(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return *(byte *)(*(int *)(param_1 + 8) + 0x20) & 3;
  }
  return 3;
}

