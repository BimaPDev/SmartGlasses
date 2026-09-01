/* FUN_100731a8 @ 0x100731a8 */

undefined4 FUN_100731a8(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_19 [5];
  
  uVar2 = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x1c) <= uVar2) {
    uVar2 = 0;
  }
  iVar1 = FUN_100729f0(param_1,uVar2);
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_1007322c | (DAT_10073228 - DAT_10073224) * 0x20 & 0xff00U,DAT_10073234,
                 DAT_10073230,uVar2);
    FUN_10072af0(param_1,uVar2,*(undefined4 *)(param_1 + 0x20));
  }
  iVar3 = *(int *)(param_1 + 0x24);
  iVar1 = *(int *)(param_1 + 0x28);
  FUN_10072b7c(param_1,uVar2);
  FUN_100730f4(param_1,uVar2,iVar3,iVar1 - iVar3,param_2);
  local_19[0] = 0x5a;
  FUN_10072a48(param_1,iVar3 + 4,local_19,1);
  return 0;
}

