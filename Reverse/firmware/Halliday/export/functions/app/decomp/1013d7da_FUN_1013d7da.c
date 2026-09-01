/* FUN_1013d7da @ 0x1013d7da */

int FUN_1013d7da(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    if (param_3 == 0) {
      FUN_10117e64();
      iVar1 = 0;
    }
    else {
      uVar2 = FUN_1013d954();
      iVar1 = param_2;
      if ((uVar2 < param_3) && (iVar1 = FUN_10117f04(param_1,param_3), iVar1 != 0)) {
        FUN_1011ea40(iVar1,param_2,param_3);
        FUN_10117e64(param_1,param_2);
      }
    }
    return iVar1;
  }
  iVar1 = FUN_10117f04(param_1,param_3,param_3,param_4);
  return iVar1;
}

