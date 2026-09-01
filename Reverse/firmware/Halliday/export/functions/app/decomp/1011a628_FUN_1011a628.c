/* FUN_1011a628 @ 0x1011a628 */

bool FUN_1011a628(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(char *)(param_1 + 0xc) == '\x10';
  }
  return bVar1;
}

