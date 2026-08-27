/* FUN_2c46a48c @ 0x2c46a48c */

int FUN_2c46a48c(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar2 = param_1[2];
  iVar1 = iVar3 + param_3;
  if (iVar1 < iVar2) {
    iVar1 = *param_1;
  }
  else {
    iVar4 = iVar2 << 1;
    if (iVar2 * 2 <= iVar1 + 8) {
      iVar4 = iVar1 + 9;
    }
    iVar1 = FUN_2c66b218(*param_1,iVar4,iVar2,iVar1 + 8,param_4);
    if (iVar1 == 0) {
      return -1;
    }
    iVar3 = param_1[1];
    param_1[2] = iVar4;
    *param_1 = iVar1;
  }
  FUN_2c674668(iVar1 + iVar3,param_2,param_3);
  iVar1 = param_1[1];
  param_1[1] = iVar1 + param_3;
  *(undefined1 *)(*param_1 + iVar1 + param_3) = 0;
  return param_3;
}

