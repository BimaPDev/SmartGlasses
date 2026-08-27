/* FUN_140e1b98 @ 0x140e1b98 */

int FUN_140e1b98(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + -4) + -4;
  if (*(int *)(param_2 + -4) < 0) {
    iVar1 = iVar1 + *(int *)(param_2 + iVar1);
  }
  return iVar1;
}

