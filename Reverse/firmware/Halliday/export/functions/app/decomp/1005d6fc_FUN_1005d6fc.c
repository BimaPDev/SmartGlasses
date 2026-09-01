/* FUN_1005d6fc @ 0x1005d6fc */

undefined4 FUN_1005d6fc(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_1005d728 == param_1) {
    if (param_3 < 0xd89) {
      iVar2 = param_4;
      if (0xd88 < param_4 + param_3) {
        iVar2 = 0xd88 - param_3;
      }
      FUN_1011ea40(DAT_1005d728 + param_3,param_2,iVar2,param_4,param_4);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

