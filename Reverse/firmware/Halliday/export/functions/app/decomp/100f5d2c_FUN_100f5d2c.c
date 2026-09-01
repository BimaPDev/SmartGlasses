/* FUN_100f5d2c @ 0x100f5d2c */

int FUN_100f5d2c(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_4 == 0) {
    iVar2 = FUN_100e825c(param_3);
    if (iVar2 == 0) {
LAB_100f5d8a:
      FUN_100a5b78((DAT_100f5dc0 - DAT_100f5dbc) * 0x20 & 0xff00U | 0x3f0011,DAT_100f5dc8,
                   DAT_100f5dc4);
      return 0;
    }
  }
  else if (param_3 == 0) {
    FUN_100e833c(param_4);
    iVar2 = 0;
  }
  else {
    if ((param_3 & 3) != 0) {
      param_3 = (param_3 & 0xfffffffc) + 4;
    }
    uVar1 = thunk_FUN_100e8240(param_4);
    if (uVar1 == param_3) {
      return param_4;
    }
    iVar2 = FUN_100e825c(param_3);
    if (iVar2 == 0) goto LAB_100f5d8a;
    if (param_3 <= uVar1) {
      uVar1 = param_3;
    }
    FUN_1011ea40(iVar2,param_4,uVar1);
    FUN_100e833c(param_4);
  }
  return iVar2;
}

