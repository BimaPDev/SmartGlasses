/* FUN_100d5928 @ 0x100d5928 */

undefined4 FUN_100d5928(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)*DAT_100d595c;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      FUN_100a5b78(DAT_100d5968 | (DAT_100d5964 - DAT_100d5960) * 0x20 & 0xff00U,DAT_100d5970,
                   DAT_100d596c);
      return 0;
    }
    if (param_1 == piVar1[4]) break;
    piVar1 = (int *)*piVar1;
  }
  return piVar1[3];
}

