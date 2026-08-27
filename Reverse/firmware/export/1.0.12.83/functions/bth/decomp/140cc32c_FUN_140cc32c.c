/* FUN_140cc32c @ 0x140cc32c */

void FUN_140cc32c(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *param_2 = *(undefined4 *)(iVar1 + 0x18);
  param_2[1] = *(undefined4 *)(iVar1 + 0x1c);
  return;
}

