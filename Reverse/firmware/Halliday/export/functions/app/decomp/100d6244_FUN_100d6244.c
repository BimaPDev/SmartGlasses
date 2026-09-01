/* FUN_100d6244 @ 0x100d6244 */

undefined4 FUN_100d6244(void)

{
  int *piVar1;
  
  piVar1 = *(int **)*DAT_100d6264;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((~*(ushort *)(piVar1 + 0xe) & 0x181) == 0) break;
    piVar1 = (int *)*piVar1;
  }
  return piVar1[3];
}

