/* FUN_100e135c @ 0x100e135c */

int FUN_100e135c(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  uint local_14;
  
  local_18 = 0;
  local_14 = param_2 & 0xffff0000;
  iVar1 = FUN_100e12cc(&local_18);
  if (iVar1 == 0) {
    FUN_100a5b78((DAT_100e13ac - DAT_100e13b0) * 0x20 & 0xff00U | 0x1220011,DAT_100e13b4);
  }
  else {
    iVar2 = FUN_100e1008(param_1,iVar1 + 9);
    if (iVar2 == 0) {
      FUN_1013803a(iVar1,param_1);
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}

