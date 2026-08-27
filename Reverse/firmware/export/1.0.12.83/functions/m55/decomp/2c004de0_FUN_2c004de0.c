/* FUN_2c004de0 @ 0x2c004de0 */

void FUN_2c004de0(int param_1)

{
  char cVar1;
  
  if (*(int *)(DAT_2c004e00 + param_1 * 4) << 0x1f < 0) {
    cVar1 = *(char *)(DAT_2c004e04 + param_1);
  }
  else {
    cVar1 = *(char *)(DAT_2c004e08 + param_1);
  }
  if (cVar1 == '\0') {
    return;
  }
  FUN_2c003de8();
  return;
}

