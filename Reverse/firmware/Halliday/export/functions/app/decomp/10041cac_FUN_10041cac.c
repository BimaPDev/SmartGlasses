/* FUN_10041cac @ 0x10041cac */

void FUN_10041cac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_10041cdc;
  FUN_1009eeac(DAT_10041ce0,*DAT_10041ce4,param_3,DAT_10041ce4,param_1,iVar1,param_3);
  if (*DAT_10041cdc != iVar1) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_10041ce0);
  return;
}

