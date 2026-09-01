/* FUN_10126fa2 @ 0x10126fa2 */

void FUN_10126fa2(int param_1)

{
  do {
    if (param_1 == 0) {
      return;
    }
    param_1 = *(int *)(param_1 + 4);
  } while (param_1 != 0);
  return;
}

