/* FUN_10138382 @ 0x10138382 */

void FUN_10138382(int *param_1)

{
  if (*(char *)(*param_1 + (uint)*(byte *)(param_1 + 1)) == ',') {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) + 1;
  }
  return;
}

