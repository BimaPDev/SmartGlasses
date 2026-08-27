/* FUN_14096e14 @ 0x14096e14 */

int * FUN_14096e14(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == 0) {
LAB_14096e8a:
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x40,DAT_14096e9c);
  }
  iVar1 = FUN_1403b00c(0);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 7) == '\0')) {
    return (int *)0x0;
  }
  iVar1 = FUN_1403b00c(0);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 7) == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14096e98,0);
  }
  FUN_1403ae64();
  piVar2 = *(int **)(iVar1 + 0x20);
  if (piVar2 != (int *)(iVar1 + 0x20)) {
    iVar3 = 0x3ea;
    do {
      if (param_1 == piVar2[4]) {
        FUN_1403ae9c();
        return piVar2;
      }
      iVar3 = iVar3 + -1;
      piVar2 = (int *)*piVar2;
      if (iVar3 == 0) {
        FUN_14096e04();
        goto LAB_14096e8a;
      }
    } while ((int *)(iVar1 + 0x20) != piVar2);
  }
  FUN_1403ae9c();
  return (int *)0x0;
}

