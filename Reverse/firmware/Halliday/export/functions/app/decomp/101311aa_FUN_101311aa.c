/* FUN_101311aa @ 0x101311aa */

int FUN_101311aa(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  local_18 = param_1;
  uStack_14 = param_2;
  puStack_10 = param_3;
  iVar1 = FUN_100b88c4(param_1,param_2,&local_18,&uStack_14);
  if (iVar1 == 0) {
    uVar2 = FUN_10118d7c(local_18,&uStack_14,0);
    *param_3 = uVar2;
  }
  return iVar1;
}

