/* FUN_10053b8c @ 0x10053b8c */

void FUN_10053b8c(undefined4 param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_3 <= param_2) {
    FUN_10119dc2(DAT_10053c20,DAT_10053c1c,0x5a);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0);
    }
    software_interrupt(2);
  }
  uVar2 = FUN_10119e3a(param_1,param_2);
  uVar5 = param_3 - param_2;
  if (uVar2 <= uVar5) {
    FUN_10119dc2(DAT_10053c20,DAT_10053c1c,0x5b);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0);
    }
    software_interrupt(2);
  }
  iVar3 = FUN_10119e3a(param_1,param_2);
  iVar3 = (param_2 - param_3) + iVar3;
  FUN_10119e8a(param_1,param_2,uVar5);
  FUN_10119e8a(param_1,param_3,iVar3);
  FUN_10053ae8(param_1,param_3,0,uVar5);
  iVar4 = FUN_10119e3a(param_1,param_3);
  FUN_10053ae8(param_1,param_3 + iVar4,0,iVar3);
  return;
}

