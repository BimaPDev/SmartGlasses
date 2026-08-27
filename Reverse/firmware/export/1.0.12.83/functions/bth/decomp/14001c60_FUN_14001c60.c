/* FUN_14001c60 @ 0x14001c60 */

void FUN_14001c60(int param_1)

{
  char cVar1;
  
  if (*(int *)(DAT_14001c80 + param_1 * 4) << 0x1f < 0) {
    cVar1 = *(char *)(DAT_14001c84 + param_1);
  }
  else {
    cVar1 = *(char *)(DAT_14001c88 + param_1);
  }
  if (cVar1 == '\0') {
    return;
  }
  FUN_140017d0();
  return;
}

