/* FUN_1002ef9c @ 0x1002ef9c */

void FUN_1002ef9c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *DAT_1002efe0;
  uVar3 = param_1;
  uVar1 = FUN_10087308();
  FUN_1008740c(uVar1,param_1);
  FUN_10086fc4(param_1,param_2,0,0,uVar3,iVar2,param_3);
  if (*DAT_1002efe0 != iVar2) {
    FUN_1013cdc0();
  }
  FUN_10124cea(param_1,0x400);
  return;
}

