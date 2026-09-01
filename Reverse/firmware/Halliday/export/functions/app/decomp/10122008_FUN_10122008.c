/* FUN_10122008 @ 0x10122008 */

int FUN_10122008(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = 0; iVar1 != param_2; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + (uint)*(byte *)(param_2 * 0x1c + *(int *)(param_1 + 0xc) + 0x30);
  }
  return iVar2 + param_3;
}

