/* FUN_140e0f6e @ 0x140e0f6e */

int FUN_140e0f6e(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    if (param_3 == 0) {
      FUN_140db7d0();
      iVar1 = 0;
    }
    else {
      uVar2 = FUN_140e1b98();
      if (((uVar2 < param_3) || (iVar1 = param_2, param_3 <= uVar2 >> 1)) &&
         (iVar1 = FUN_140db8a8(param_1,param_3), iVar1 != 0)) {
        if (uVar2 <= param_3) {
          param_3 = uVar2;
        }
        FUN_140e5278(iVar1,param_2,param_3);
        FUN_140db7d0(param_1,param_2);
      }
    }
    return iVar1;
  }
  iVar1 = FUN_140db8a8(param_1,param_3);
  return iVar1;
}

