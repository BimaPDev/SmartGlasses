/* FUN_14054698 @ 0x14054698 */

void FUN_14054698(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(DAT_140546b8 + 0x18); piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    if (*(code **)piVar1[1] != (code *)0x0) {
      (**(code **)piVar1[1])(param_1,param_2);
    }
  }
  return;
}

