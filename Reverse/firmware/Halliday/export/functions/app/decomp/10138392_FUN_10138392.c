/* FUN_10138392 @ 0x10138392 */

void FUN_10138392(int *param_1)

{
  while (*(char *)(*param_1 + (uint)*(byte *)(param_1 + 1)) == ' ') {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) + 1;
  }
  return;
}

