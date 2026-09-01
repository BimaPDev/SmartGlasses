/* FUN_1011fa04 @ 0x1011fa04 */

int FUN_1011fa04(uint param_1)

{
  int iVar1;
  
  if (param_1 % 0xb == 0) {
    iVar1 = (param_1 / 0xb) * 0x2b11;
  }
  else {
    iVar1 = param_1 * 1000;
  }
  return iVar1;
}

