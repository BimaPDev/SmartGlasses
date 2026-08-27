/* FUN_2c626c28 @ 0x2c626c28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c626c28(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_2c62bdd8(_LAB_2c626c40,10,param_2);
  *(int *)(param_2 + 100) = iVar1;
  *(byte *)(iVar1 + 0x14) = *(byte *)(iVar1 + 0x14) | 1;
  return;
}

