/* FUN_14073b34 @ 0x14073b34 */

void FUN_14073b34(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  
  if (param_3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14073ba8,0x173,DAT_14073bac);
  }
  if (param_2 == (int *)0x0) {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) goto LAB_14073b6c;
  }
  else {
    piVar1 = (int *)*param_1;
    if (param_2 == piVar1) goto LAB_14073b6c;
    if (piVar1 != (int *)0x0) {
      do {
        piVar2 = piVar1;
        piVar1 = (int *)*piVar2;
        if (param_2 == piVar1) break;
      } while (piVar1 != (int *)0x0);
      *piVar2 = (int)param_3;
      *param_3 = piVar1;
      return;
    }
    piVar1 = (int *)0x0;
  }
  param_1[1] = param_3;
LAB_14073b6c:
  *param_3 = piVar1;
  *param_1 = param_3;
  return;
}

