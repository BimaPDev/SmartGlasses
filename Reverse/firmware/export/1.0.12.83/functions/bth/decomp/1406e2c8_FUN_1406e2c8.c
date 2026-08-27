/* FUN_1406e2c8 @ 0x1406e2c8 */

int * FUN_1406e2c8(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_1406e308 + (param_1 + 6) * 4);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406e310,0x283,DAT_1406e30c,param_4);
  }
  if (param_2 == 0) {
    piVar2 = (int *)*piVar2;
  }
  else {
    piVar2 = (int *)piVar2[2];
    if ((piVar2 != (int *)0x0) && (piVar1 = piVar2, *(ushort *)(piVar2 + 2) != param_2)) {
      while (piVar1 = (int *)*piVar1, piVar2 = (int *)0x0, piVar1 != (int *)0x0) {
        if (*(ushort *)(piVar1 + 2) == param_2) {
          return piVar1;
        }
      }
    }
  }
  return piVar2;
}

