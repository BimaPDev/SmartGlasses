/* FUN_100737bc @ 0x100737bc */

int FUN_100737bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_10072c84(0xffffffff,0xffffffff,param_3,param_4,param_1);
  iVar1 = FUN_10073004(DAT_100737fc,param_1,param_2,param_3);
  if (iVar1 < 0) {
    iVar1 = FUN_10073004(DAT_10073800,param_1,param_2,param_3);
  }
  FUN_10072c78();
  return iVar1;
}

