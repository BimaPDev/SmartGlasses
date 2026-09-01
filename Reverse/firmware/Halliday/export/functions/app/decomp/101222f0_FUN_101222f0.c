/* FUN_101222f0 @ 0x101222f0 */

int FUN_101222f0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 - 2U < *(int *)(param_1 + 0x34) - 2U) {
    iVar1 = (param_2 - 2U) * (uint)*(ushort *)(param_1 + 10) + *(int *)(param_1 + 0x48);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

