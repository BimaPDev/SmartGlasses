/* FUN_1012fcda @ 0x1012fcda */

int FUN_1012fcda(int param_1)

{
  int iVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x48) != 0)) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = FUN_100afe10();
    if (iVar1 == 0) {
      *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
    }
  }
  return iVar1;
}

