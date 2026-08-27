/* FUN_14085c48 @ 0x14085c48 */

int * FUN_14085c48(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = DAT_14085c98;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14085ca0,DAT_14085c9c);
  }
  piVar3 = (int *)*DAT_14085c98;
  if (piVar3 == DAT_14085c98) {
    return (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    iVar4 = 0x3ea;
    do {
      iVar2 = FUN_140db784(param_1,piVar3 + 4,6);
      if (iVar2 == 0) {
        return piVar3;
      }
      iVar4 = iVar4 + -1;
      piVar3 = (int *)*piVar3;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14085398();
      }
      if (piVar3 == piVar1) {
        return (int *)0x0;
      }
    } while (piVar3 != (int *)0x0);
  }
  return (int *)0x0;
}

