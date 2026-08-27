/* FUN_2c1427f8 @ 0x2c1427f8 */

int FUN_2c1427f8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar1 = FUN_2c1436d8();
    return iVar1;
  }
  iVar1 = 0;
  while (iVar2 = FUN_2c1436d8(param_1,param_2), iVar2 != 0) {
    param_1 = iVar2 + 1;
    iVar1 = iVar2;
  }
  return iVar1;
}

