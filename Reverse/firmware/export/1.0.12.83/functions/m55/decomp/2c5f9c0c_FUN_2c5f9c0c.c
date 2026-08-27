/* FUN_2c5f9c0c @ 0x2c5f9c0c */

int FUN_2c5f9c0c(int param_1,int *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_2;
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    iVar1 = 0;
    *param_2 = 0;
  }
  else {
    iVar1 = FUN_2c66c4ec(param_3);
    iVar2 = (**(code **)(param_1 + 4))(0,iVar1 + 1);
    *param_2 = iVar2;
    FUN_2c674668(iVar2,param_3,iVar1 + 1);
  }
  if (iVar3 != 0) {
    (**(code **)(param_1 + 8))(iVar3);
  }
  return iVar1;
}

