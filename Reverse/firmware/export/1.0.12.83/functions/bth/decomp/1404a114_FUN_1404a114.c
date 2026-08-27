/* FUN_1404a114 @ 0x1404a114 */

bool FUN_1404a114(int param_1)

{
  if (param_1 != 0) {
    FUN_1402a6e8(4,0x5b1,DAT_1404a160,DAT_1404a15c,DAT_1404a158,DAT_1404a154,param_1);
    return false;
  }
  if (*(char *)(DAT_1404a150 + 6) != '\0') {
    return *(char *)(DAT_1404a150 + 0xde) != '\0';
  }
  return false;
}

