/* FUN_100eb0ec @ 0x100eb0ec */

int FUN_100eb0ec(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(DAT_100eb110 + 4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((*piVar1 == param_1) && (piVar1[1] == param_2)) break;
    piVar1 = (int *)piVar1[0xf];
  }
  piVar1[3] = piVar1[3] + 1;
  return piVar1[8];
}

