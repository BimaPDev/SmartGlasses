/* FUN_1013426c @ 0x1013426c */

int FUN_1013426c(int param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x54);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (piVar1 + -2 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)(piVar1 + 0x12) == param_2) {
      return (int)(piVar1 + -2);
    }
    if (piVar1 == (int *)0x0) break;
    piVar1 = (int *)*piVar1;
  }
  return 0;
}

