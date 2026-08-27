/* FUN_2c5fba8c @ 0x2c5fba8c */

int FUN_2c5fba8c(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar2 = *param_2;
  iVar1 = FUN_2c66b624(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar2 + 4),param_3,param_4,param_4
                      );
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar3 + 0x10) - *(int *)(iVar2 + 0x10);
  }
  return iVar1;
}

