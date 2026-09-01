/* FUN_10124564 @ 0x10124564 */

undefined4 FUN_10124564(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r3;
  undefined4 local_c;
  
  local_c = param_2;
  iVar1 = FUN_1012455a();
  if ((iVar1 == 0) || (iVar3 = FUN_10124cd6(iVar1,0x80), iVar3 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_10086f50(iVar1,0xd,&local_c,extraout_r3,param_1);
  }
  return uVar2;
}

