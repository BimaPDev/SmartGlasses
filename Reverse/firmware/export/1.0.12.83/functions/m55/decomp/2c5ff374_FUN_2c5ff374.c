/* FUN_2c5ff374 @ 0x2c5ff374 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ff374(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *_LAB_2c5ff394;
  if ((iVar2 == 0) || (param_1 == 0)) {
    return;
  }
  FUN_2c602ea8();
  piVar1 = (int *)FUN_2c62ca10(iVar2);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)FUN_2c62ca20(iVar2);
  }
  piVar1 = (int *)FUN_2c62ca10();
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)FUN_2c62ca20(iVar2);
  }
  FUN_2c62c998();
  FUN_2c62bea8(piVar1);
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 8) + 8) = 0;
  return;
}

