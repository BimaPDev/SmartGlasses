/* FUN_100d5108 @ 0x100d5108 */

undefined4 FUN_100d5108(void)

{
  int *piVar1;
  
  piVar1 = *(int **)*DAT_100d512c;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((*(ushort *)(piVar1 + 0xe) & 0x181) == 0x101) break;
    piVar1 = (int *)*piVar1;
  }
  return piVar1[3];
}

