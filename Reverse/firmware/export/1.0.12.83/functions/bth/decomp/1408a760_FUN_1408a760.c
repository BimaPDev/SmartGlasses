/* FUN_1408a760 @ 0x1408a760 */

int * FUN_1408a760(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar2 = DAT_1408a794;
  do {
    piVar4 = piVar2 + 1;
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      piVar2 = (int *)(iVar1 + 0x18);
      do {
        piVar3 = piVar2 + 1;
        if ((*piVar2 != 0) && (*piVar2 == param_1)) {
          return piVar2;
        }
        piVar2 = piVar3;
      } while (piVar3 != (int *)(iVar1 + 0x48));
    }
    piVar2 = piVar4;
    if (piVar4 == DAT_1408a794 + 8) {
      return (int *)0x0;
    }
  } while( true );
}

