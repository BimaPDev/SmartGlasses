/* FUN_100e4eac @ 0x100e4eac */

int * FUN_100e4eac(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*DAT_100e4ecc != 0) {
    if (DAT_100e4ecc[7] != 0) {
      return (int *)0x0;
    }
    iVar2 = 1;
  }
  piVar1 = DAT_100e4ecc + iVar2 * 7;
  *(byte *)((int)piVar1 + 9) = (byte)iVar2 | 0x80;
  return piVar1;
}

