/* FUN_2c5bb3f4 @ 0x2c5bb3f4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c5bb3f4(int param_1)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  uint *local_110;
  int local_10c;
  uint local_108 [4];
  undefined4 local_f8;
  uint *local_f4;
  int local_f0;
  uint local_ec [4];
  undefined1 local_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined2 local_d2;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 *local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  undefined1 local_b0;
  uint *local_ac;
  int local_a8;
  uint local_a4 [4];
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined1 *local_74;
  undefined4 local_70;
  undefined1 local_6c [16];
  undefined1 *local_5c;
  undefined4 uStack_58;
  undefined1 local_54 [16];
  undefined1 *local_44;
  undefined4 local_40;
  undefined1 local_3c [16];
  undefined4 local_2c;
  
  local_2c = *DAT_2c5bb690;
  local_74 = local_6c;
  local_5c = local_54;
  local_94 = DAT_2c5bb694;
  local_44 = local_3c;
  local_6c[0] = 0;
  local_90 = 4;
  local_54[0] = 0;
  local_40 = 0;
  local_3c[0] = 0;
  local_8c = 0;
  uStack_88 = 0;
  local_84 = 0;
  uStack_80 = 0;
  local_7c = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_58 = 0;
  FUN_2c52f5f4(&local_5c,param_1);
  FUN_2c52f5f4(&local_44,param_1 + 0x18);
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_2c5bb134(&local_74,0,local_70,DAT_2c5bb6b8,5);
  }
  else if (*(int *)(param_1 + 0x30) == 1) {
    FUN_2c5bb134(&local_74,0,local_70,DAT_2c5bb6ac,6);
  }
  else {
    FUN_2c5bb134(&local_74,0,local_70,DAT_2c5bb698,0);
  }
  local_c8 = local_c0;
  local_f8 = DAT_2c5bb69c;
  local_f0 = 0;
  local_ec[0] = local_ec[0] & 0xffffff00;
  local_dc = 0;
  local_d8 = 0;
  local_c4 = 0;
  local_c0[0] = 0;
  local_a8 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  local_d4 = 0xb;
  local_cc = DAT_2c5bb6bc;
  local_d0 = 0xffffffff;
  local_d2 = 0x67;
  local_f4 = local_ec;
  local_ac = local_a4;
  FUN_2c58c9d8(&local_110,&local_94);
  uVar2 = local_a4[0];
  puVar1 = local_ac;
  if (local_110 == local_108) {
    if (local_10c != 0) {
      if (local_10c == 1) {
        *(undefined1 *)local_ac = (undefined1)local_108[0];
      }
      else {
        FUN_2c674668(local_ac,local_108);
      }
    }
    *(undefined1 *)((int)local_ac + local_10c) = 0;
    local_a8 = local_10c;
  }
  else {
    bVar3 = local_ac != local_a4;
    local_ac = local_110;
    if (bVar3) {
      local_a8 = local_10c;
      local_a4[0] = local_108[0];
      if (puVar1 != (uint *)0x0) {
        local_108[0] = uVar2;
        local_110 = puVar1;
        goto LAB_2c5bb4e6;
      }
    }
    local_a4[0] = local_108[0];
    local_a8 = local_10c;
    local_110 = local_108;
  }
LAB_2c5bb4e6:
  local_10c = 0;
  *(undefined1 *)local_110 = 0;
  if (local_110 != local_108) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  local_b0 = 0;
  FUN_2c58c9d8(&local_110,&local_cc);
  uVar2 = local_ec[0];
  puVar1 = local_f4;
  if (local_110 == local_108) {
    if (local_10c != 0) {
      if (local_10c == 1) {
        *(undefined1 *)local_f4 = (undefined1)local_108[0];
      }
      else {
        FUN_2c674668(local_f4,local_108);
      }
    }
    *(undefined1 *)((int)local_f4 + local_10c) = 0;
    local_f0 = local_10c;
  }
  else {
    bVar3 = local_f4 != local_ec;
    local_f4 = local_110;
    if (bVar3) {
      local_f0 = local_10c;
      local_ec[0] = local_108[0];
      if (puVar1 != (uint *)0x0) {
        local_108[0] = uVar2;
        local_110 = puVar1;
        goto LAB_2c5bb52a;
      }
    }
    local_ec[0] = local_108[0];
    local_f0 = local_10c;
    local_110 = local_108;
  }
LAB_2c5bb52a:
  local_10c = 0;
  *(undefined1 *)local_110 = 0;
  if (local_110 == local_108) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680();
}

