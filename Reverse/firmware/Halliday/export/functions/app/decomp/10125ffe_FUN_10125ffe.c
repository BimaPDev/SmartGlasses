/* FUN_10125ffe @ 0x10125ffe */

int FUN_10125ffe(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = -*(int *)(*(int *)(param_1 + 8) + 0x10);
  }
  return iVar1;
}

