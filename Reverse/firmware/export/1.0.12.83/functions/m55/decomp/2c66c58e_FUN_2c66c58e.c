/* FUN_2c66c58e @ 0x2c66c58e */

int FUN_2c66c58e(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar1 = FUN_2c66b60a();
    return iVar1;
  }
  iVar1 = 0;
  while (iVar2 = FUN_2c66b60a(param_1,param_2), iVar2 != 0) {
    param_1 = iVar2 + 1;
    iVar1 = iVar2;
  }
  return iVar1;
}

