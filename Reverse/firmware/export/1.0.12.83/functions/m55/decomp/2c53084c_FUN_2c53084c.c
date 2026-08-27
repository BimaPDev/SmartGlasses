/* FUN_2c53084c @ 0x2c53084c */

bool FUN_2c53084c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_2 + 8);
  if (iVar3 != 0) {
    bVar1 = false;
    if (iVar2 != 0) {
      iVar2 = FUN_2c66b624(iVar3 + 5,iVar2 + 5,param_3,iVar3,param_4);
      bVar1 = iVar2 == 0;
    }
    return bVar1;
  }
  return iVar2 == 0;
}

