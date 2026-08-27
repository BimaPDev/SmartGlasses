/* FUN_14074b54 @ 0x14074b54 */

undefined4 FUN_14074b54(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if ((param_1 != piVar2) && (piVar2 != (int *)0x0)) {
    if (piVar2 == param_2) {
      return 1;
    }
    iVar1 = 0x3e9;
    piVar2 = (int *)*piVar2;
    while ((param_1 != piVar2 && (piVar2 != (int *)0x0))) {
      if (param_2 == piVar2) {
        return 1;
      }
      iVar1 = iVar1 + -1;
      piVar2 = (int *)*piVar2;
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140749f8();
      }
    }
  }
  return 0;
}

