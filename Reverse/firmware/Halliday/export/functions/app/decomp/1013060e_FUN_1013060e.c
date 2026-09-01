/* FUN_1013060e @ 0x1013060e */

undefined4 FUN_1013060e(int param_1)

{
  if (param_1 == 0) {
    return 0xffffffea;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    return 0;
  }
  *(byte *)(param_1 + 0xa2) = *(byte *)(param_1 + 0xa2) & 0xfb;
  return 0;
}

