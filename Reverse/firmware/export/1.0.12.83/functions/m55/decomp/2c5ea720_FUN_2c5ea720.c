/* FUN_2c5ea720 @ 0x2c5ea720 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5ea720(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)(_LAB_2c5ea73c + 0x34))();
  piVar1 = (int *)*piVar1;
  if (piVar1 != (int *)0x0) {
    iVar2 = 0;
    do {
      piVar1 = (int *)*piVar1;
      iVar2 = iVar2 + 1;
    } while (piVar1 != (int *)0x0);
    return iVar2;
  }
  return 0;
}

