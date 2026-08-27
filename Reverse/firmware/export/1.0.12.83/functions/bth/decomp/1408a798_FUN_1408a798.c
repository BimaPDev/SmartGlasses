/* FUN_1408a798 @ 0x1408a798 */

int * FUN_1408a798(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_1408a7d4;
  while( true ) {
    piVar2 = piVar1 + 1;
    if ((*piVar1 != 0) && (*piVar1 == param_1)) break;
    piVar1 = piVar2;
    if (piVar2 == DAT_1408a7d4 + 8) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x46,DAT_1408a7d8);
    }
  }
  return piVar1;
}

