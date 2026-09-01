/* FUN_100e78cc @ 0x100e78cc */

void FUN_100e78cc(void)

{
  int *piVar1;
  
  piVar1 = DAT_100e790c;
  if ((*DAT_100e790c != 0) && ((*(byte *)(DAT_100e790c + 10) & 7) == 1)) {
    FUN_100a5b78(DAT_100e7918 | (DAT_100e7914 - DAT_100e7910) * 0x20 & 0xff00U,DAT_100e791c);
    FUN_10131fd6(*piVar1);
    *(byte *)(piVar1 + 10) = *(byte *)(piVar1 + 10) | 4;
  }
  return;
}

