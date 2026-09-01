/* FUN_10136e18 @ 0x10136e18 */

int FUN_10136e18(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x54);
  iVar1 = FUN_100dcc30();
  if (iVar3 == 0) {
    iVar2 = -0xd;
  }
  else {
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = FUN_10136dee();
    }
    iVar2 = (uint)*(ushort *)(iVar3 + 2) * iVar2;
  }
  return iVar2;
}

