/* FUN_2c572b44 @ 0x2c572b44 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c572b44(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_158;
  int local_154;
  int local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  uint *local_138;
  int local_134;
  uint local_130 [4];
  undefined4 local_120;
  uint *local_11c;
  int local_118;
  uint local_114 [4];
  undefined1 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined2 local_fa;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 *local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [16];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 *local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [20];
  undefined1 *local_9c;
  undefined4 local_98;
  undefined1 local_94 [16];
  undefined1 *local_84;
  undefined4 local_80;
  undefined1 local_7c [20];
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_5f;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 local_2c;
  
  uVar1 = DAT_2c572dd4;
  local_2c = *DAT_2c572dcc;
  local_f0 = local_e8;
  local_118 = 0;
  local_114[0] = local_114[0] & 0xffffff00;
  local_104 = 0;
  local_100 = 0;
  local_ec = 0;
  local_e8[0] = 0;
  local_c8 = 0;
  local_d8 = DAT_2c572dd4;
  local_120 = DAT_2c572dd0;
  local_fc = 0xb;
  local_f8 = 0xffffffff;
  local_fa = 0x67;
  local_f4 = DAT_2c572dd8;
  local_d0 = 0;
  uStack_cc = 0;
  local_11c = local_114;
  FUN_2c5729b0(&local_f0,0,0,DAT_2c572ddc,5);
  local_84 = local_7c;
  local_b0[0] = 0;
  local_98 = 0;
  local_94[0] = 0;
  local_80 = 0;
  local_7c[0] = 0;
  local_4c = 0;
  local_48[0] = 0;
  local_b4 = 0;
  local_144 = 0;
  local_9c = local_94;
  local_140 = 0;
  uStack_13c = 0;
  local_150 = 0;
  uStack_14c = uVar1;
  local_158 = 0;
  local_154 = 0;
  local_c4 = DAT_2c572de0;
  local_c0 = DAT_2c572de4;
  local_68 = DAT_2c572de8;
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + param_2 * 4);
  local_64 = *(undefined4 *)(iVar4 + 8);
  local_5f = *(undefined1 *)(iVar4 + 0xc);
  local_58 = *(undefined4 *)(iVar4 + 0x10);
  local_38 = *(undefined4 *)(iVar4 + 0x14);
  local_54 = *(undefined4 *)(iVar4 + 0x18);
  local_148 = param_3;
  local_b8 = local_b0;
  local_50 = local_48;
  FUN_2c52f5f4(&local_50);
  if (local_154 == local_150) {
    FUN_2c571fc4(&local_158,local_154,&local_c4);
  }
  else {
    FUN_2c571b28(local_154,&local_c4);
    local_154 = local_154 + 0x98;
  }
  FUN_2c572770(&local_144,&local_158);
  local_d4 = local_148;
  FUN_2c572770(&local_d0,&local_144);
  FUN_2c58c9d8(&local_138,&local_f4);
  uVar3 = local_114[0];
  puVar2 = local_11c;
  if (local_138 == local_130) {
    if (local_134 != 0) {
      if (local_134 == 1) {
        *(undefined1 *)local_11c = (undefined1)local_130[0];
      }
      else {
        FUN_2c674668(local_11c,local_130);
      }
    }
    *(undefined1 *)((int)local_11c + local_134) = 0;
    local_118 = local_134;
  }
  else {
    bVar5 = local_11c != local_114;
    local_11c = local_138;
    if (bVar5) {
      local_118 = local_134;
      local_114[0] = local_130[0];
      if (puVar2 != (uint *)0x0) {
        local_130[0] = uVar3;
        local_138 = puVar2;
        goto LAB_2c572c86;
      }
    }
    local_114[0] = local_130[0];
    local_118 = local_134;
    local_138 = local_130;
  }
LAB_2c572c86:
  local_134 = 0;
  *(undefined1 *)local_138 = 0;
  if (local_138 == local_130) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680();
}

