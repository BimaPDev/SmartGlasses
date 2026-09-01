/* FUN_10138b5c @ 0x10138b5c */

void FUN_10138b5c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    if (*(code **)(iVar1 + 0x18) != (code *)0x0) {
      (**(code **)(iVar1 + 0x18))();
    }
    FUN_10113fd0(iVar1);
    return;
  }
  return;
}

