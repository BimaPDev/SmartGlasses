/* FUN_100d0e9c @ 0x100d0e9c */

int FUN_100d0e9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r3;
  int extraout_r3_00;
  int iVar2;
  
  iVar1 = FUN_1013577a(DAT_100d0ed0,param_1,param_3,param_4,param_4);
  if (iVar1 == 0) {
    iVar1 = FUN_1013577a(DAT_100d0ed4 + 0x2c4);
    if (iVar1 == 0) {
      iVar1 = FUN_1013577a(extraout_r3 + 0x4b4);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = 0x3e0;
      iVar2 = extraout_r3_00;
    }
    else {
      iVar1 = 0x1f0;
      iVar2 = extraout_r3;
    }
  }
  else {
    iVar1 = 0;
    iVar2 = DAT_100d0ed4;
  }
  return iVar1 + iVar2;
}

