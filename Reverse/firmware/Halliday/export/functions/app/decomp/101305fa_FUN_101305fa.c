/* FUN_101305fa @ 0x101305fa */

undefined4 FUN_101305fa(int param_1)

{
  if (param_1 == 0) {
    return 0xffffffea;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    return 0;
  }
  *(byte *)(param_1 + 0xa2) = *(byte *)(param_1 + 0xa2) | 4;
  return 0;
}

