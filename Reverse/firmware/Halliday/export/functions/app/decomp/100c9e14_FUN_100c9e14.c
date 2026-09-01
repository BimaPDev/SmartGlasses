/* FUN_100c9e14 @ 0x100c9e14 */

void FUN_100c9e14(int param_1)

{
  int iVar1;
  
  iVar1 = *DAT_100c9e20;
  *DAT_100c9e20 = param_1;
  *(int *)(param_1 + 0x2c) = iVar1;
  return;
}

