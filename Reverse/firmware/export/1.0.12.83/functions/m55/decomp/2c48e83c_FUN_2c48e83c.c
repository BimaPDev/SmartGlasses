/* FUN_2c48e83c @ 0x2c48e83c */

bool FUN_2c48e83c(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(char *)(param_1 + 0xc) == '\b';
  }
  return bVar1;
}

