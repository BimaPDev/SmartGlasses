/* FUN_10133ff0 @ 0x10133ff0 */

void FUN_10133ff0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(param_1 + 0x54);
  if ((piVar2 != (int *)0x0) && (piVar1 = piVar2 + -2, piVar1 != (int *)0x0)) {
    piVar2 = (int *)*piVar2;
    if (piVar2 != (int *)0x0) {
      piVar2 = piVar2 + -2;
    }
    while (piVar3 = piVar2, FUN_10133f9e(piVar1), piVar3 != (int *)0x0) {
      piVar1 = piVar3;
      piVar2 = (int *)0x0;
      if ((piVar3 != (int *)0xfffffff8) && (piVar2 = (int *)piVar3[2], piVar2 != (int *)0x0)) {
        piVar2 = piVar2 + -2;
      }
    }
  }
  return;
}

