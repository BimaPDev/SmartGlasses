/* FUN_100d6220 @ 0x100d6220 */

undefined4 FUN_100d6220(void)

{
  int *piVar1;
  
  piVar1 = *(int **)*DAT_100d6240;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((~*(ushort *)(piVar1 + 0xe) & 0x481) == 0) break;
    piVar1 = (int *)*piVar1;
  }
  return piVar1[3];
}

