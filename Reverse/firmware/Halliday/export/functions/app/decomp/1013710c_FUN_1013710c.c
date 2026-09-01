/* FUN_1013710c @ 0x1013710c */

uint FUN_1013710c(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_100dd8a8();
  if ((iVar1 == 0) || (-1 < *(char *)(iVar1 + 200))) {
    param_3 = 0xfffffffb;
  }
  else if (param_3 < 0x380) {
    iVar2 = FUN_100cc6e4(0,0,param_3);
    if (iVar2 == 0) {
      param_3 = 0xfffffff4;
    }
    else {
      FUN_101327a0(iVar2 + 8,param_2,param_3);
      uVar3 = FUN_10134394(iVar1 + 0x68,iVar2,param_4);
      if ((int)uVar3 < 0) {
        FUN_100c1c90(iVar2);
        param_3 = uVar3;
      }
    }
  }
  else {
    param_3 = 0xffffffe5;
  }
  return param_3;
}

