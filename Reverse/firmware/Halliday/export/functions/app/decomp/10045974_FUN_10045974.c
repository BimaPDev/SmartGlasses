/* FUN_10045974 @ 0x10045974 */

void FUN_10045974(undefined4 param_1,uint3 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uStack_1c;
  undefined4 local_18;
  int local_14;
  
  iVar3 = *DAT_100459dc;
  uStack_1c = (uint)param_2;
  local_18 = param_3;
  local_14 = param_4;
  iVar1 = (**(code **)(DAT_100459e0 + 0xc))();
  if (iVar1 == 0) goto LAB_100459ca;
  uVar2 = 1;
  do {
    uStack_1c = CONCAT13(uVar2,(undefined3)uStack_1c);
    do {
      local_18 = 0x4102;
      local_14 = (int)&uStack_1c + 3;
      FUN_100506fc(&local_18);
      if (*DAT_100459dc == iVar3) {
        return;
      }
      FUN_1013cdc0();
LAB_100459ca:
      iVar1 = thunk_FUN_100d86b4();
    } while (iVar1 == 0);
    uVar2 = 2;
  } while( true );
}

