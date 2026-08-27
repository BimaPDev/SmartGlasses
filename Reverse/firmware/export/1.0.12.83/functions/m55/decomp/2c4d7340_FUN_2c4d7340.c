/* FUN_2c4d7340 @ 0x2c4d7340 */

undefined4 FUN_2c4d7340(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = LZCOUNT(param_1);
  iVar2 = 0x1e - iVar1;
  param_1 = param_1 >> (0x1cU - iVar1 & 0xff);
  if (param_1 == 0xc) {
    iVar1 = 2;
  }
  else if (param_1 == 0xf) {
    iVar1 = 1;
  }
  else if (param_1 == 8) {
    iVar2 = 0x1d - iVar1;
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
  }
  if (param_2 == 1) {
    iVar2 = iVar2 + -4;
  }
  return *(undefined4 *)(DAT_2c4d7390 + (iVar1 * 9 + (param_2 & 1) * 0x24 + iVar2) * 4);
}

