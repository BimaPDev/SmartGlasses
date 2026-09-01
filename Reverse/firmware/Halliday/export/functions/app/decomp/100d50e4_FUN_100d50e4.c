/* FUN_100d50e4 @ 0x100d50e4 */

undefined4 FUN_100d50e4(void)

{
  int *piVar1;
  
  piVar1 = *(int **)*DAT_100d5104;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((*(ushort *)(piVar1 + 0xe) & 0x480) == 0x400) break;
    piVar1 = (int *)*piVar1;
  }
  return piVar1[3];
}

