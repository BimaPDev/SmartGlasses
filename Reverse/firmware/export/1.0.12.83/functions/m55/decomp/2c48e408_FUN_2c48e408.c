/* FUN_2c48e408 @ 0x2c48e408 */

int * FUN_2c48e408(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2 < 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)0x0;
    if (((param_1 != 0) && (piVar1 = *(int **)(param_1 + 8), param_2 != 0)) &&
       (piVar2 = piVar1, piVar1 != (int *)0x0)) {
      while( true ) {
        piVar2 = (int *)*piVar2;
        param_2 = param_2 + -1;
        piVar1 = (int *)0x0;
        if (piVar2 == (int *)0x0) break;
        if (param_2 == 0) {
          return piVar2;
        }
      }
    }
  }
  return piVar1;
}

