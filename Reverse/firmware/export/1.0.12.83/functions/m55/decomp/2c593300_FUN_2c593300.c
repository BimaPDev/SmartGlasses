/* FUN_2c593300 @ 0x2c593300 */

void FUN_2c593300(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_140;
  undefined1 *local_13c;
  undefined4 local_138;
  undefined1 local_134 [16];
  undefined2 local_124;
  undefined1 local_122;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 *local_118;
  undefined4 local_114;
  undefined1 local_110 [16];
  undefined4 local_100;
  undefined1 *local_fc;
  undefined4 local_f8;
  undefined1 local_f4 [16];
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  undefined1 *local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  undefined1 *local_b0;
  undefined4 local_ac;
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
  undefined2 local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  undefined1 local_40 [16];
  undefined4 local_30;
  int local_2c;
  
  local_2c = *DAT_2c5934c8;
  uVar1 = FUN_2c58df6c(*(undefined4 *)(param_1 + 8),param_2,param_3,0);
  local_e4 = DAT_2c5934cc;
  *(undefined4 *)(param_3 + 0xb4) = uVar1;
  local_13c = local_134;
  local_100 = 2000;
  local_120 = DAT_2c5934d4;
  local_118 = local_110;
  local_fc = local_f4;
  local_140 = DAT_2c5934d0;
  local_e0 = local_d8;
  local_138 = 0;
  local_c8 = local_c0;
  local_134[0] = 0;
  local_124 = 0;
  local_11c = 0;
  local_114 = 0;
  local_110[0] = 0;
  local_f8 = 0;
  local_f4[0] = 0;
  local_dc = 0;
  local_d8[0] = 0;
  local_c4 = 0;
  local_c0[0] = 0;
  local_ac = 0;
  local_a8[0] = 0;
  local_94 = 0;
  local_90[0] = 0;
  local_7c = 0;
  local_78[0] = 0;
  local_64 = 1;
  local_122 = (undefined1)param_2;
  local_58 = 0x3f800000;
  local_4c = (ushort)local_4c._1_1_ << 8;
  local_44 = 0;
  local_40[0] = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_54 = 0;
  uStack_50 = 0;
  local_b0 = local_a8;
  local_98 = local_90;
  local_80 = local_78;
  local_68 = &uStack_50;
  local_48 = local_40;
  FUN_2c52f5f4(&local_e0,param_3 + 4);
  FUN_2c52f5f4(&local_c8,param_3 + 0x1c);
  FUN_2c52f5f4(&local_b0,param_3 + 0x34);
  FUN_2c52f5f4(&local_98,param_3 + 0x4c);
  FUN_2c52f5f4(&local_80,param_3 + 100);
  FUN_2c543d78(&local_68,param_3 + 0x7c);
  local_4c = *(undefined2 *)(param_3 + 0x98);
  FUN_2c52f5f4(&local_48,param_3 + 0x9c);
  local_30 = *(undefined4 *)(param_3 + 0xb4);
  FUN_2c5928e8(param_1,&local_140);
  local_140 = DAT_2c5934d0;
  local_e4 = DAT_2c5934cc;
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
  local_120 = DAT_2c5934d4;
  if (local_fc != local_f4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_118 != local_110) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_13c != local_134) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c5934c8 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

