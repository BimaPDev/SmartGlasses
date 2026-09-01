/* FUN_10068114 @ 0x10068114 */

void FUN_10068114(byte param_1)

{
  if (-1 < (char)param_1) {
    *(int *)(DAT_10068130 + ((uint)(int)(char)param_1 >> 5) * 4) = 1 << (uint)(param_1 & 0x1f);
  }
  return;
}

