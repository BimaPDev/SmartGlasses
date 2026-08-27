/* FUN_2c4f4998 @ 0x2c4f4998 */

undefined4 FUN_2c4f4998(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x28);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  if (param_2 == piVar2) {
    piVar1 = (int *)(param_1 + 0x28);
  }
  else {
    do {
      piVar1 = piVar2;
      piVar2 = (int *)*piVar1;
      if (piVar2 == (int *)0x0) {
        return 0;
      }
    } while (param_2 != piVar2);
  }
  *piVar1 = *piVar2;
  return 0;
}

