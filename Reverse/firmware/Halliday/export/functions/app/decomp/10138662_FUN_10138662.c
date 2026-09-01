/* FUN_10138662 @ 0x10138662 */

void FUN_10138662(int *param_1)

{
  char cVar1;
  
  do {
    cVar1 = *(char *)(*param_1 + (uint)*(byte *)(param_1 + 1));
    if (cVar1 == '\0') {
      return;
    }
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) + 1;
  } while (cVar1 != ',');
  return;
}

