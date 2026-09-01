/* FUN_1003fbfc @ 0x1003fbfc */

void FUN_1003fbfc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_1003fc38;
  FUN_1009eeac(DAT_1003fc3c,1,param_3,0,param_1,iVar1,param_3);
  FUN_1012d1ae(DAT_1003fc3c);
  if (*DAT_1003fc38 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_100a1a7c(0xd,0,0);
  return;
}

