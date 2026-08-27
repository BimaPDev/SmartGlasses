/* FUN_2c4e4fd4 @ 0x2c4e4fd4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e4fd4(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 8;
  piVar2 = _LAB_2c4e4fec;
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 0x48))();
    }
    iVar1 = iVar1 + -1;
    piVar2 = piVar2 + 1;
  } while (iVar1 != 0);
  return;
}

