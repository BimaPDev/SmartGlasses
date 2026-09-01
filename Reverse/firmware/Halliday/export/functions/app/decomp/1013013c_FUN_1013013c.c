/* FUN_1013013c @ 0x1013013c */

undefined4 FUN_1013013c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = FUN_100b0db8(0x125,0,4,&local_14,param_1);
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    uVar2 = FUN_10064d1c(param_1,iVar1);
    FUN_1012d1f4(iVar1);
  }
  return uVar2;
}

