/* FUN_10045644 @ 0x10045644 */

void FUN_10045644(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uStack_1c;
  undefined4 local_18;
  int local_14;
  
  iVar2 = *DAT_10045698;
  uStack_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  uVar1 = (*(code *)**(undefined4 **)(DAT_1004569c + 0x30))();
  local_18 = 0x3a02;
  local_14 = (int)&uStack_1c + 3;
  uStack_1c = CONCAT13(uVar1,(undefined3)uStack_1c);
  FUN_100506fc(&local_18);
  if (*DAT_10045698 != iVar2) {
    FUN_1013cdc0();
  }
  return;
}

