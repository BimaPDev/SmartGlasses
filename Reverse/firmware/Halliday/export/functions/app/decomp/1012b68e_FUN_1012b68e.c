/* FUN_1012b68e @ 0x1012b68e */

void FUN_1012b68e(int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = FUN_1012b666(param_1,0,param_3,param_4,param_4);
  iVar2 = FUN_1012b670(param_1,0);
  iVar3 = FUN_1012b67a(param_1,0);
  iVar4 = FUN_1012b684(param_1,0);
  iVar5 = FUN_10125786(param_1);
  iVar6 = FUN_10125790(param_1);
  if (iVar5 - (iVar2 + iVar1) < iVar6 - (iVar4 + iVar3)) {
    iVar5 = FUN_10125786();
    iVar5 = iVar5 - (iVar2 + iVar1);
  }
  else {
    iVar5 = FUN_10125790(param_1);
    iVar5 = iVar5 - (iVar4 + iVar3);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  iVar5 = iVar5 / 2;
  *param_2 = iVar1 + *(int *)(param_1 + 0x14) + iVar5;
  param_2[1] = iVar3 + iVar2 + iVar5;
  *param_3 = iVar5;
  return;
}

