/* FUN_2c593ae0 @ 0x2c593ae0 */

void FUN_2c593ae0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_ec;
  undefined1 *local_e8;
  undefined4 local_e4;
  undefined1 local_e0 [16];
  undefined1 *local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [16];
  undefined1 *local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [16];
  undefined1 *local_a0;
  undefined4 local_9c;
  undefined1 local_98 [16];
  undefined1 *local_88;
  undefined4 local_84;
  undefined1 local_80 [16];
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  undefined1 local_48 [20];
  int local_34;
  
  uVar2 = *(undefined4 *)(DAT_2c593c24 + 4);
  local_34 = *DAT_2c593c20;
  local_b8 = local_b0;
  local_ec = DAT_2c593c28;
  local_60 = 0x3f800000;
  local_6c = 1;
  local_e4 = 0;
  local_e0[0] = 0;
  local_cc = 0;
  local_c8[0] = 0;
  local_b4 = 0;
  local_b0[0] = 0;
  local_9c = 0;
  local_98[0] = 0;
  local_84 = 0;
  local_80[0] = 0;
  local_54 = 0;
  local_4c = 0;
  local_48[0] = 0;
  local_68 = 0;
  uStack_64 = 0;
  local_5c = 0;
  uStack_58 = 0;
  local_e8 = local_e0;
  local_d0 = local_c8;
  local_a0 = local_98;
  local_88 = local_80;
  local_70 = &uStack_58;
  local_50 = local_48;
  uVar1 = FUN_2c66c4ec(uVar2);
  FUN_2c591ec8(&local_88,0,0,uVar2,uVar1);
  uVar1 = FUN_2c66c4ec(param_2);
  FUN_2c591ec8(&local_d0,0,local_cc,param_2,uVar1);
  FUN_2c593300(param_1,0,&local_ec);
  local_ec = DAT_2c593c28;
  if (local_50 != local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  FUN_2c5561f0(&local_70);
  if (local_70 != &uStack_58) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_88 != local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_a0 != local_98) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_b8 != local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_d0 != local_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_e8 != local_e0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c593c20 == local_34) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

