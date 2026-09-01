/* FUN_1002f03c @ 0x1002f03c */

void FUN_1002f03c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_1002f080;
  FUN_10126f7a(param_1,10,0,0,param_1);
  uVar1 = FUN_1002eb34();
  FUN_10126eb6(param_1,uVar1,0);
  if (*DAT_1002f080 != iVar2) {
    FUN_1013cdc0();
  }
  FUN_10126ee0(param_1,1,0);
  return;
}

