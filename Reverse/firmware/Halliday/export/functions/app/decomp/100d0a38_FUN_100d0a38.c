/* FUN_100d0a38 @ 0x100d0a38 */

uint FUN_100d0a38(uint param_1)

{
  int iVar1;
  
  if (*DAT_100d0a70 == '\0') {
    param_1 = param_1 & 7;
  }
  else {
    param_1 = param_1 & 0x2f;
  }
  iVar1 = FUN_100d0724();
  if (iVar1 == 3) {
    param_1 = param_1 & 0x2b;
  }
  else {
    param_1 = param_1 | 4;
  }
  if (*DAT_100d0a74 == '\0') {
    param_1 = param_1 & 0xfe;
  }
  else {
    param_1 = param_1 | 1;
  }
  return param_1 | 0x20;
}

