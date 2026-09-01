/* FUN_100d50c0 @ 0x100d50c0 */

undefined4 FUN_100d50c0(void)

{
  int *piVar1;
  
  piVar1 = *(int **)*DAT_100d50e0;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((*(byte *)(piVar1 + 0xe) & 0x81) == 1) break;
    piVar1 = (int *)*piVar1;
  }
  return piVar1[3];
}

