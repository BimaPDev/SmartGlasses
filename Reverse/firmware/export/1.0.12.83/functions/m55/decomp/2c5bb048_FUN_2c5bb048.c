/* FUN_2c5bb048 @ 0x2c5bb048 */

void FUN_2c5bb048(int param_1)

{
  undefined4 uVar1;
  undefined4 local_c0;
  undefined1 *local_bc;
  undefined4 local_b8;
  undefined1 local_b4 [16];
  undefined1 *local_a4;
  undefined4 uStack_a0;
  undefined1 local_9c [16];
  undefined1 *local_8c;
  undefined4 local_88;
  undefined1 local_84 [16];
  undefined1 *local_74;
  undefined4 local_70;
  undefined1 local_6c [16];
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined4 local_34;
  int local_2c;
  
  uVar1 = DAT_2c5bb130;
  local_2c = *DAT_2c5bb128;
  local_b8 = 0;
  local_b4[0] = 0;
  local_9c[0] = 0;
  local_88 = 0;
  local_84[0] = 0;
  local_70 = 0;
  local_6c[0] = 0;
  local_5c = 0;
  local_54 = 0;
  local_50[0] = 0;
  local_38 = 0;
  local_34 = 0;
  local_40 = 0;
  uStack_3c = 0;
  local_c0 = DAT_2c5bb130;
  uStack_a0 = 0;
  local_bc = local_b4;
  local_a4 = local_9c;
  local_8c = local_84;
  local_74 = local_6c;
  local_58 = local_50;
  FUN_2c52f5f4(&local_a4,param_1 + 0x18);
  FUN_2c52f5f4(&local_74,DAT_2c5bb12c);
  local_40 = *(undefined4 *)(param_1 + 0x30);
  uStack_3c = *(undefined4 *)(param_1 + 0x34);
  FUN_2c57c1bc(&local_c0);
  local_c0 = uVar1;
  if (local_58 != local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_74 != local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_8c != local_84) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_a4 != local_9c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_bc != local_b4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c5bb128 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

