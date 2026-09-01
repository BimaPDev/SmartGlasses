/* FUN_1011a644 @ 0x1011a644 */

bool FUN_1011a644(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(char *)(param_1 + 0xc) == '@';
  }
  return bVar1;
}

