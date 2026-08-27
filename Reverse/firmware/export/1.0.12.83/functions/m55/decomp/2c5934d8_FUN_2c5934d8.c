/* FUN_2c5934d8 @ 0x2c5934d8 */

void FUN_2c5934d8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  undefined1 *local_c8;
  undefined4 uStack_c4;
  undefined1 local_c0 [16];
  undefined1 *local_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [16];
  undefined1 *local_98;
  undefined4 local_94;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined4 *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined1 local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  undefined1 local_40 [20];
  int local_2c;
  
  local_dc = 0;
  local_d8[0] = 0;
  local_c0[0] = 0;
  local_a8[0] = 0;
  local_94 = 0;
  local_90[0] = 0;
  local_7c = 0;
  local_78[0] = 0;
  local_4c = 0;
  local_44 = 0;
  local_40[0] = 0;
  uStack_c4 = 0;
  uStack_ac = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_54 = 0;
  uStack_50 = 0;
  local_2c = *DAT_2c593608;
  local_e4 = DAT_2c59360c;
  local_58 = 0x3f800000;
  local_64 = 1;
  local_e0 = local_d8;
  local_c8 = local_c0;
  local_b0 = local_a8;
  local_98 = local_90;
  local_80 = local_78;
  local_68 = &uStack_50;
  local_48 = local_40;
  if (*(char *)(*(int *)(param_1 + 8) + 8) == '\0') {
    FUN_2c591ec8(&local_c8,0,0,DAT_2c593610,6);
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 4);
    uVar1 = FUN_2c66c4ec(uVar2);
    FUN_2c591ec8(&local_80,0,0,uVar2,uVar1);
  }
  FUN_2c593300(param_1,0,&local_e4);
  local_e4 = DAT_2c59360c;
  if (local_48 != local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  FUN_2c5561f0(&local_68);
  if (local_68 != &uStack_50) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_80 != local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_98 != local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_b0 != local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_c8 != local_c0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_e0 != local_d8) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c593608 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

