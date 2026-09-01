/* FUN_1002eefc @ 0x1002eefc */

void FUN_1002eefc(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_1002ef30;
  uVar1 = FUN_10087308();
  FUN_1008740c(uVar1,param_1);
  if (*DAT_1002ef30 != iVar2) {
    FUN_1013cdc0();
  }
  FUN_101245ce(param_1);
  return;
}

