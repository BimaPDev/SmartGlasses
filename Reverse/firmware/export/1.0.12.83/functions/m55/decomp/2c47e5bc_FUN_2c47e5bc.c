/* FUN_2c47e5bc @ 0x2c47e5bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47e5bc(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = _LAB_2c47e5e4;
  do {
    if (*piVar1 == 0) {
      _LAB_2c47e5e4[iVar2] = param_1;
      return;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 != 10);
  return;
}

