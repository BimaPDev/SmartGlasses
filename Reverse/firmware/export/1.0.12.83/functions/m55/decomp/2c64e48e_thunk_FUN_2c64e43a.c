/* thunk_FUN_2c64e43a @ 0x2c64e48e */

int thunk_FUN_2c64e43a(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      iVar1 = iVar2;
      iVar2 = *(int *)(iVar1 + 8);
    } while (iVar2 != 0);
    return iVar1;
  }
  for (iVar2 = *(int *)(param_1 + 4); *(int *)(iVar2 + 0xc) == param_1; iVar2 = *(int *)(iVar2 + 4))
  {
    param_1 = iVar2;
  }
  if (iVar2 != *(int *)(param_1 + 0xc)) {
    param_1 = iVar2;
  }
  return param_1;
}

