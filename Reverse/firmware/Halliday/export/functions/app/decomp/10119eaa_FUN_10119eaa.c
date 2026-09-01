/* FUN_10119eaa @ 0x10119eaa */

void FUN_10119eaa(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = param_1;
  iVar3 = param_3;
  iVar1 = FUN_10119e3a();
  iVar2 = FUN_10119e3a(param_1,param_3);
  iVar1 = iVar1 + iVar2;
  FUN_10119e8a(param_1,param_2,iVar1,iVar1,uVar4,iVar1,iVar3);
  iVar3 = FUN_10119e3a(param_1,param_3);
  FUN_10053ae8(param_1,param_3 + iVar3,0,iVar1);
  return;
}

