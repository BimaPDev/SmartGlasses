/* FUN_10042a08 @ 0x10042a08 */

void FUN_10042a08(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_10042a38;
  FUN_1009eeac(DAT_10042a3c,param_1,param_3,0,param_1,iVar1,param_3);
  if (*DAT_10042a38 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_10042a3c);
  return;
}

