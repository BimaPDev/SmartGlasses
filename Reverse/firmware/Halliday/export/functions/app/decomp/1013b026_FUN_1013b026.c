/* FUN_1013b026 @ 0x1013b026 */

bool FUN_1013b026(int param_1)

{
  if ((param_1 != 0) && (*(uint *)(param_1 + 0x6e4) < 2)) {
    return *(int *)(param_1 + (*(uint *)(param_1 + 0x6e4) + 0x1b4) * 4) != 0;
  }
  return false;
}

