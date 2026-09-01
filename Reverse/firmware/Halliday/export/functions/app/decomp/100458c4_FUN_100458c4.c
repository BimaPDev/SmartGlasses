/* FUN_100458c4 @ 0x100458c4 */

void FUN_100458c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uStack_1c;
  undefined4 local_18;
  int local_14;
  
  iVar2 = *DAT_10045918;
  uStack_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  uVar1 = (**(code **)(*(int *)(DAT_1004591c + 4) + 0xc))();
  local_18 = 0x3f02;
  local_14 = (int)&uStack_1c + 3;
  uStack_1c = CONCAT13(uVar1,(undefined3)uStack_1c);
  FUN_100506fc(&local_18);
  if (*DAT_10045918 != iVar2) {
    FUN_1013cdc0();
  }
  return;
}

