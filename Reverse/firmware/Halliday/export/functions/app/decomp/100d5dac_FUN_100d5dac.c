/* FUN_100d5dac @ 0x100d5dac */

undefined4 FUN_100d5dac(uint param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)*DAT_100d5dcc;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((*(byte *)(piVar1 + 0xe) & 0x7f) >> 4 == param_1) break;
    piVar1 = (int *)*piVar1;
  }
  return piVar1[3];
}

