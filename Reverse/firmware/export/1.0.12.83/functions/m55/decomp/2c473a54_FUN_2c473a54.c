/* FUN_2c473a54 @ 0x2c473a54 */

void FUN_2c473a54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined2 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined2 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined2 local_28;
  int local_24;
  
  local_24 = *DAT_2c473ae0;
  local_40 = 0;
  local_48 = 0;
  uStack_44 = 0;
  FUN_2c66b4b8(&local_48,DAT_2c473ae4,param_2,0);
  local_34 = 0;
  local_3c = 0;
  uStack_38 = 0;
  FUN_2c66b4b8(&local_3c,DAT_2c473ae4,param_3);
  local_28 = 0;
  local_30 = 0;
  uStack_2c = 0;
  FUN_2c66b4b8(&local_30,DAT_2c473ae4,param_4);
  FUN_2c4739bc(param_1,&local_48,&local_3c,&local_30,param_5,param_6,param_7,param_8);
  if (*DAT_2c473ae0 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

