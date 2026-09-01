/* FUN_1012f99a @ 0x1012f99a */

int FUN_1012f99a(uint param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  if (param_1 % 0xb == 0) {
    iVar1 = (param_1 / 0xb) * 0x2b11;
  }
  else {
    iVar1 = param_1 * 1000;
  }
  return iVar1;
}

