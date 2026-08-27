/* FUN_2c48e84c @ 0x2c48e84c */

bool FUN_2c48e84c(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(char *)(param_1 + 0xc) == '\x10';
  }
  return bVar1;
}

