/* FUN_10126008 @ 0x10126008 */

int FUN_10126008(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = -*(int *)(*(int *)(param_1 + 8) + 0x14);
  }
  return iVar1;
}

