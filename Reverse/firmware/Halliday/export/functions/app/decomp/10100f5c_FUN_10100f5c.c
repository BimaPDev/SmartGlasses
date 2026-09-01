/* FUN_10100f5c @ 0x10100f5c */

int FUN_10100f5c(int *param_1,uint *param_2,int *param_3,undefined4 param_4,int param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_24 [2];
  
  iVar1 = *param_3;
  local_24[0] = 0;
  uVar3 = iVar1 + param_5;
  if (0x1e00000 < uVar3) {
    return 10;
  }
  iVar2 = *param_1;
  if (*param_2 < uVar3) {
    iVar2 = FUN_100fb280(param_6,1,*param_2,uVar3,iVar2,local_24);
    if (local_24[0] != 0) {
      return local_24[0];
    }
    *param_2 = *param_3 + param_5;
    iVar1 = *param_3;
  }
  FUN_1011ea40(iVar2 + iVar1,param_4,param_5);
  *param_3 = *param_3 + param_5;
  *param_1 = iVar2;
  return local_24[0];
}

