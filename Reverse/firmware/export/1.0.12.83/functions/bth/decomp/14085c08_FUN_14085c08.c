/* FUN_14085c08 @ 0x14085c08 */

int * FUN_14085c08(uint param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*DAT_14085c44;
  if (piVar2 != DAT_14085c44) {
    iVar1 = 0x3ea;
    do {
      if ((*(byte *)((int)piVar2 + 0x4b) - 3 < 2) && (*(byte *)((int)piVar2 + 0x52) == param_1)) {
        return piVar2;
      }
      iVar1 = iVar1 + -1;
      piVar2 = (int *)*piVar2;
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14085398();
      }
    } while (piVar2 != DAT_14085c44);
  }
  return (int *)0x0;
}

