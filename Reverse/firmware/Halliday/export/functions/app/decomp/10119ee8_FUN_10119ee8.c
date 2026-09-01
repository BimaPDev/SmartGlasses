/* FUN_10119ee8 @ 0x10119ee8 */

void FUN_10119ee8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10119e3a();
  if ((0x7fff < *(uint *)(param_1 + 8)) && (iVar1 == 1)) {
    return;
  }
  uVar2 = FUN_10119e92(param_1,iVar1);
  FUN_10053c24(param_1,param_2,uVar2,param_4);
  return;
}

