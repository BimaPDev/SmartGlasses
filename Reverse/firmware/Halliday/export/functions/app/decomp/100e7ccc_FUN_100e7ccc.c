/* FUN_100e7ccc @ 0x100e7ccc */

void FUN_100e7ccc(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_100e7cf4;
  if (*DAT_100e7cf4 == param_1) {
    if (DAT_100e7cf4[0x18] != 0) {
      FUN_1013cb84(DAT_100e7cf4 + 0xc);
      FUN_1011dbc8(10);
      piVar1[0x18] = 0;
    }
    *piVar1 = 0;
  }
  return;
}

