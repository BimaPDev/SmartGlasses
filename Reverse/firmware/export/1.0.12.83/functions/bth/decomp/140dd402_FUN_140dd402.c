/* FUN_140dd402 @ 0x140dd402 */

int FUN_140dd402(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar1 = FUN_140dc4fe();
    return iVar1;
  }
  iVar1 = 0;
  while (iVar2 = FUN_140dc4fe(param_1,param_2), iVar2 != 0) {
    param_1 = iVar2 + 1;
    iVar1 = iVar2;
  }
  return iVar1;
}

