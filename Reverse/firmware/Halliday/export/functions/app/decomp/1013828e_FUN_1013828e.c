/* FUN_1013828e @ 0x1013828e */

int FUN_1013828e(int param_1,uint param_2)

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

