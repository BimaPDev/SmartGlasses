/* FUN_1011d95c @ 0x1011d95c */

void FUN_1011d95c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_2c [3];
  undefined1 local_29;
  int iStack_28;
  
  iVar2 = param_1 + 0xf0;
  _auStack_2c = CONCAT13(1,(uint3)param_2 & 0xffff);
  iVar1 = param_1 + 0x110;
  iStack_28 = param_3;
  FUN_1011d87e(param_1,iVar2,0x20,0,param_1);
  FUN_1011d8e6(param_1);
  FUN_1011d900(param_1,iVar1,0x20);
  FUN_1011d900(param_1,auStack_2c + 2,1);
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_1011d900(param_1,param_2,param_3);
  }
  if ((param_4 != 0) && (param_5 != 0)) {
    FUN_1011d900(param_1,param_4,param_5);
  }
  FUN_1011d90c(iVar2,0x20,param_1);
  FUN_1011d87e(param_1,iVar2,0x20);
  FUN_1011d8e6(param_1);
  FUN_1011d900(param_1,iVar1,0x20);
  FUN_1011d90c(iVar1,0x20,param_1);
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_1011d87e(param_1,iVar2,0x20);
    FUN_1011d8e6(param_1);
    FUN_1011d900(param_1,iVar1,0x20);
    FUN_1011d900(param_1,&local_29,1);
    FUN_1011d900(param_1,param_2,param_3);
    if ((param_4 != 0) && (param_5 != 0)) {
      FUN_1011d900(param_1,param_4,param_5);
    }
    FUN_1011d90c(iVar2,0x20,param_1);
    FUN_1011d87e(param_1,iVar2,0x20);
    FUN_1011d8e6(param_1);
    FUN_1011d900(param_1,iVar1,0x20);
    FUN_1011d90c(iVar1,0x20,param_1);
  }
  return;
}

