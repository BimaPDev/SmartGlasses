/* FUN_1012b70e @ 0x1012b70e */

void FUN_1012b70e(undefined4 param_1,int *param_2,int param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = FUN_1012b65c(param_1,0x20000,param_3,param_4,param_1,param_2,param_3);
  iVar2 = iVar2 / 2;
  sVar1 = FUN_1012b5f6(param_1);
  iVar3 = FUN_1013d980((int)(short)(sVar1 + 0x5a));
  iVar4 = FUN_1013d980((int)sVar1);
  iVar5 = FUN_1012b666(param_1,0x30000);
  iVar6 = FUN_1012b670(param_1,0x30000);
  iVar7 = FUN_1012b67a(param_1,0x30000);
  iVar8 = FUN_1012b684(param_1,0x30000);
  iVar3 = *param_2 + ((param_3 - iVar2) * iVar3 >> 0xf);
  *param_4 = iVar3 - (iVar5 + iVar2);
  iVar4 = param_2[1] + ((param_3 - iVar2) * iVar4 >> 0xf);
  param_4[2] = iVar6 + iVar2 + iVar3;
  param_4[1] = iVar4 - (iVar7 + iVar2);
  param_4[3] = iVar8 + iVar2 + iVar4;
  return;
}

