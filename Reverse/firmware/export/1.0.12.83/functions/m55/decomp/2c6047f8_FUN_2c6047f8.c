/* FUN_2c6047f8 @ 0x2c6047f8 */

void FUN_2c6047f8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_60;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_44;
  int local_40;
  int iStack_3c;
  int local_38;
  uint local_34;
  int local_1c;
  
  local_1c = *DAT_2c604938;
  if (param_4 == 1) {
    uVar2 = FUN_2c604188();
    FUN_2c62e7b4(&local_60);
    local_54 = DAT_2c604944;
    local_60 = param_1;
    if (param_2 != 0) {
      iVar1 = FUN_2c62a47c(uVar2);
      local_34 = FUN_2c62e9d4((iVar1 << 1) >> 2,0,param_2);
      if (399 < local_34) {
        local_34 = 400;
      }
      if (local_34 < 200) {
        local_34 = 200;
      }
      local_40 = 0;
      if (*(int *)(param_1 + 8) != 0) {
        local_40 = (int)-*(short *)(*(int *)(param_1 + 8) + 0x10);
        param_2 = param_2 - local_40;
        local_40 = -local_40;
      }
      local_5c = DAT_2c604940;
      local_44 = DAT_2c604948;
      iStack_3c = local_40;
      local_38 = param_2;
      iVar1 = FUN_2c602340(param_1,9,&local_60);
      if (iVar1 != 1) goto LAB_2c60482c;
      FUN_2c62e8ec(&local_60);
    }
    if (param_3 != 0) {
      iVar1 = FUN_2c62a4a0(uVar2);
      local_34 = FUN_2c62e9d4((iVar1 << 1) >> 2,0,param_3);
      if (399 < local_34) {
        local_34 = 400;
      }
      if (local_34 < 200) {
        local_34 = 200;
      }
      local_40 = 0;
      if (*(int *)(param_1 + 8) != 0) {
        iVar1 = (int)-*(short *)(*(int *)(param_1 + 8) + 0x12);
        local_40 = -iVar1;
        param_3 = param_3 - iVar1;
      }
      local_5c = DAT_2c60493c;
      local_44 = DAT_2c604948;
      iStack_3c = local_40;
      local_38 = param_3;
      iVar1 = FUN_2c602340(param_1,9,&local_60);
      if (iVar1 == 1) {
        FUN_2c62e8ec(&local_60);
      }
    }
  }
  else {
    FUN_2c62e838(param_1,DAT_2c60493c);
    FUN_2c62e838(param_1,DAT_2c604940);
    iVar1 = FUN_2c602340(param_1,9,0);
    if ((iVar1 == 1) && (iVar1 = FUN_2c6047b0(param_1,param_2,param_3), iVar1 == 1)) {
      if (*DAT_2c604938 == local_1c) {
        FUN_2c602340(param_1,10,0,0);
        return;
      }
      goto LAB_2c604934;
    }
  }
LAB_2c60482c:
  if (*DAT_2c604938 == local_1c) {
    return;
  }
LAB_2c604934:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

