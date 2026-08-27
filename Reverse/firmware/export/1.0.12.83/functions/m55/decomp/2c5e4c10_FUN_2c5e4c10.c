/* FUN_2c5e4c10 @ 0x2c5e4c10 */

void FUN_2c5e4c10(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 local_60;
  undefined4 local_5c;
  int local_54;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_1c;
  
  local_1c = *DAT_2c5e4c74;
  FUN_2c62e7b4(&local_60,param_2,param_3,0);
  local_5c = DAT_2c5e4c78;
  uStack_34 = 400;
  local_44 = DAT_2c5e4c7c;
  if (param_2 != 0) {
    local_54 = param_2;
  }
  if (param_5 != 0) {
    local_48 = param_5;
  }
  local_60 = param_1;
  local_40 = param_3;
  uStack_3c = param_3;
  local_38 = param_4;
  FUN_2c62e8ec(&local_60);
  if (*DAT_2c5e4c74 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

