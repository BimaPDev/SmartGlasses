/* FUN_1012b09e @ 0x1012b09e */

bool FUN_1012b09e(int param_1)

{
  if (param_1 == 0) {
    return true;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return *(int *)(param_1 + 8) == 0;
  }
  return false;
}

