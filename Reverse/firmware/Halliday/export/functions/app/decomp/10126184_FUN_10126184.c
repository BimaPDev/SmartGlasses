/* FUN_10126184 @ 0x10126184 */

void FUN_10126184(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  undefined4 uStack_14;
  
  local_18 = param_1;
  uStack_14 = param_2;
  FUN_10089bf8();
  local_18 = 0;
  uStack_14 = 0;
  iVar1 = FUN_10126fae(param_1);
  iVar3 = param_1;
  while (iVar1 != 0) {
    FUN_1008a2dc(param_1 + 0x14,iVar3,&local_18,param_2);
    iVar2 = FUN_10126fae(iVar1);
    iVar3 = iVar1;
    iVar1 = iVar2;
  }
  return;
}

