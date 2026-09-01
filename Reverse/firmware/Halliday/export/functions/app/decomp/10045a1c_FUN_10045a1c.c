/* FUN_10045a1c @ 0x10045a1c */

void FUN_10045a1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uStack_1c;
  undefined4 local_18;
  int local_14;
  
  iVar2 = *DAT_10045a70;
  uStack_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  uVar1 = (**(code **)(*(int *)(DAT_10045a74 + 0x34) + 0x10))();
  local_18 = 0x4202;
  local_14 = (int)&uStack_1c + 3;
  uStack_1c = CONCAT13(uVar1,(undefined3)uStack_1c);
  FUN_100506fc(&local_18);
  if (*DAT_10045a70 != iVar2) {
    FUN_1013cdc0();
  }
  return;
}

