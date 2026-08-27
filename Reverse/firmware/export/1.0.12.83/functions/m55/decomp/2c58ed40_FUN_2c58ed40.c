/* FUN_2c58ed40 @ 0x2c58ed40 */

undefined4 FUN_2c58ed40(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint local_178;
  undefined4 *local_174;
  int local_170;
  undefined4 *local_16c;
  undefined4 *local_168;
  undefined4 *local_164;
  uint *local_160;
  uint local_15c;
  uint local_158 [4];
  undefined4 local_148;
  undefined4 *local_144;
  undefined1 *local_140;
  undefined4 uStack_13c;
  undefined1 local_138 [16];
  undefined4 *local_128;
  undefined4 *local_124;
  undefined1 *local_120;
  undefined4 local_11c;
  undefined1 local_118 [16];
  undefined4 local_108;
  undefined4 local_104;
  undefined1 *local_100;
  undefined4 *local_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8;
  undefined1 *local_e4;
  undefined4 *local_e0;
  undefined1 local_dc [16];
  undefined1 *local_cc;
  undefined4 *local_c8;
  undefined1 local_c4 [16];
  undefined1 *local_b4;
  undefined4 *local_b0;
  undefined1 local_ac [16];
  undefined4 *local_9c;
  undefined1 *local_98;
  undefined4 *local_94;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined4 *local_7c;
  undefined1 local_78 [20];
  undefined1 local_64;
  undefined1 *local_60;
  undefined4 *local_5c;
  undefined1 local_58 [20];
  undefined1 *local_44;
  undefined4 *local_40;
  undefined1 local_3c [16];
  int local_2c;
  
  uVar1 = DAT_2c58eed4;
  local_2c = *DAT_2c58eed0;
  local_138[0] = 0;
  local_11c = 0;
  local_118[0] = 0;
  local_108 = 0;
  local_148 = DAT_2c58eed4;
  local_144 = (undefined4 *)0x0;
  uStack_13c = 0;
  local_128 = (undefined4 *)0x0;
  local_124 = (undefined4 *)0x0;
  local_140 = local_138;
  local_120 = local_118;
  FUN_2c58c08c(param_2,&local_148,0);
  puVar7 = (undefined1 *)local_128[7];
  uVar6 = local_128[8];
  local_160 = local_158;
  if (puVar7 != (undefined1 *)-uVar6 && puVar7 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c58f4c4);
  }
  local_178 = uVar6;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      local_158[0] = CONCAT31(local_158[0]._1_3_,*puVar7);
    }
    else if (uVar6 != 0) goto LAB_2c58f250;
  }
  else {
    local_160 = (uint *)FUN_2c58d6c0(&local_178,0);
    local_158[0] = local_178;
LAB_2c58f250:
    FUN_2c674668(local_160,puVar7,uVar6);
  }
  *(undefined1 *)((int)local_160 + local_178) = 0;
  uVar8 = local_128[1];
  uVar5 = local_128[2];
  local_15c = local_178;
  puVar2 = (undefined4 *)FUN_2c58d730(uVar8,uVar5,DAT_2c58eed8);
  if (puVar2 == (undefined4 *)0x0) {
    local_e4 = local_dc;
    local_cc = local_c4;
    local_b4 = local_ac;
    local_f8[0] = 0;
    local_98 = local_90;
    local_e8 = 0;
    local_80 = local_78;
    local_dc[0] = 0;
    local_104 = DAT_2c58f1ec;
    local_60 = local_58;
    local_c4[0] = 0;
    local_ac[0] = 0;
    local_90[0] = 0;
    local_78[0] = 0;
    local_64 = 0;
    local_58[0] = 0;
    local_3c[0] = 0;
    local_100 = local_f8;
    local_fc = puVar2;
    local_e0 = puVar2;
    local_c8 = puVar2;
    local_b0 = puVar2;
    local_9c = puVar2;
    local_94 = puVar2;
    local_7c = puVar2;
    local_5c = puVar2;
    local_44 = local_3c;
    local_40 = puVar2;
    FUN_2c5492e0(local_140,&local_104);
    iVar4 = FUN_2c58d730(local_160,local_15c,DAT_2c58f1f0);
    puVar7 = local_60;
    if ((iVar4 == 0) && (iVar4 = FUN_2c58d730(local_60,local_5c,DAT_2c58f1f4), iVar4 == 0)) {
      local_104 = DAT_2c58f4b8;
      if (local_44 != local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680();
      }
      if (puVar7 != local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,puVar7);
      }
      local_104 = DAT_2c58f4bc;
      if (local_80 != local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (local_98 != local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (local_9c != (undefined4 *)0x0) {
        *local_9c = DAT_2c58f4b0;
        if ((undefined4 *)local_9c[0xd] != local_9c + 0xf) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if ((undefined4 *)local_9c[7] == local_9c + 9) {
          if ((undefined4 *)local_9c[1] == local_9c + 3) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,local_9c);
          }
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (local_b4 != local_ac) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (local_cc != local_c4) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (local_e4 != local_dc) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (local_100 != local_f8) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      uVar5 = 1;
      puVar2 = local_174;
      goto LAB_2c58ede8;
    }
    local_104 = DAT_2c58f1ec;
    if (local_44 != local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_60 != local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    local_104 = DAT_2c58f1f8;
    if (local_80 != local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_98 != local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_9c != (undefined4 *)0x0) {
      *local_9c = DAT_2c58f1fc;
      if ((undefined4 *)local_9c[0xd] != local_9c + 0xf) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if ((undefined4 *)local_9c[7] == local_9c + 9) {
        if ((undefined4 *)local_9c[1] == local_9c + 3) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0,local_9c);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_b4 != local_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_cc != local_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_e4 != local_dc) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_100 != local_f8) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    puVar3 = (undefined4 *)FUN_2c58d730(local_128[1],local_128[2],DAT_2c58f200);
    uVar6 = DAT_2c58f204;
    puVar2 = local_174;
  }
  else {
    puVar3 = (undefined4 *)FUN_2c58d730(uVar8,uVar5,DAT_2c58eedc);
    uVar6 = DAT_2c58f204;
    puVar2 = local_174;
  }
  local_174 = puVar3;
  uVar5 = 0;
  DAT_2c58f204 = uVar6;
  if (local_174 == (undefined4 *)0x0) {
    iVar9 = uVar6 + 0xc;
    local_178 = uVar6;
    local_170 = iVar9;
    local_16c = local_174;
    local_168 = local_174;
    local_164 = local_174;
    iVar4 = FUN_2c568a7c(*(undefined4 *)(param_2 + 4),&local_178);
    puVar2 = local_164;
    if ((-1 < iVar4) && (iVar4 = FUN_2c66b624(DAT_2c58f1f4,local_164[7]), iVar4 == 0)) {
      if (local_174 == (undefined4 *)0x0) {
        local_170 = DAT_2c58f4a8;
        *puVar2 = DAT_2c58f4c0;
        if ((undefined4 *)puVar2[7] != puVar2 + 9) {
          local_178 = uVar6;
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if ((undefined4 *)puVar2[1] == puVar2 + 3) {
          local_178 = uVar6;
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0,puVar2);
        }
        local_178 = uVar6;
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      *local_174 = DAT_2c58f4a4;
      if ((undefined4 *)local_174[0x13] != local_174 + 0x15) {
        local_178 = uVar6;
        local_170 = iVar9;
                    /* WARNING: Subroutine does not return */
        FUN_2c472680();
      }
      if ((undefined4 *)local_174[0xd] == local_174 + 0xf) {
        if ((undefined4 *)local_174[7] != local_174 + 9) {
          local_178 = uVar6;
          local_170 = iVar9;
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if ((undefined4 *)local_174[1] == local_174 + 3) {
          local_178 = uVar6;
          local_170 = iVar9;
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0,local_174);
        }
        local_178 = uVar6;
        local_170 = iVar9;
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      local_178 = uVar6;
      local_170 = iVar9;
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_174 != (undefined4 *)0x0) {
      *local_174 = DAT_2c58f208;
      if ((undefined4 *)local_174[0x13] != local_174 + 0x15) {
        local_178 = uVar6;
        local_170 = iVar9;
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if ((undefined4 *)local_174[0xd] != local_174 + 0xf) {
        local_178 = uVar6;
        local_170 = iVar9;
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if ((undefined4 *)local_174[7] != local_174 + 9) {
        local_178 = uVar6;
        local_170 = iVar9;
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if ((undefined4 *)local_174[1] == local_174 + 3) {
        local_178 = uVar6;
        local_170 = iVar9;
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,local_174);
      }
      local_178 = uVar6;
      local_170 = iVar9;
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    local_170 = DAT_2c58f20c;
    if (local_164 != (undefined4 *)0x0) {
      *local_164 = DAT_2c58f210;
      if ((undefined4 *)local_164[7] != local_164 + 9) {
        local_178 = uVar6;
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if ((undefined4 *)local_164[1] == local_164 + 3) {
        local_178 = uVar6;
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,local_164);
      }
      local_178 = uVar6;
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_168 != (undefined4 *)0x0) {
      *local_168 = DAT_2c58f214;
      if ((undefined4 *)local_168[0x21] != local_168 + 0x23) {
        local_178 = uVar6;
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if ((undefined4 *)local_168[0x1b] != local_168 + 0x1d) {
        local_178 = uVar6;
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      puVar2 = (undefined4 *)local_168[0x1a];
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = DAT_2c58f1fc;
        if ((undefined4 *)puVar2[0xd] != puVar2 + 0xf) {
          local_178 = uVar6;
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if ((undefined4 *)puVar2[7] == puVar2 + 9) {
          if ((undefined4 *)puVar2[1] == puVar2 + 3) {
            local_178 = uVar6;
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,puVar2);
          }
          local_178 = uVar6;
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        local_178 = uVar6;
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if ((undefined4 *)local_168[0x14] != local_168 + 0x16) {
        local_178 = uVar6;
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if ((undefined4 *)local_168[0xe] != local_168 + 0x10) {
        local_178 = uVar6;
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if ((undefined4 *)local_168[8] != local_168 + 10) {
        local_178 = uVar6;
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if ((undefined4 *)local_168[1] == local_168 + 3) {
        local_178 = uVar6;
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,local_168);
      }
      local_178 = uVar6;
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    local_178 = uVar6;
    puVar2 = local_174;
    if (local_16c != (undefined4 *)0x0) {
      *local_16c = DAT_2c58f218;
      if ((undefined4 *)local_16c[7] != local_16c + 9) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if ((undefined4 *)local_16c[1] == local_16c + 3) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,local_16c);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
  }
LAB_2c58ede8:
  local_174 = puVar2;
  if (local_160 != local_158) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  local_148 = uVar1;
  if (local_120 != local_118) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_124 != (undefined4 *)0x0) {
    *local_124 = DAT_2c58eee0;
    if ((undefined4 *)local_124[0xd] != local_124 + 0xf) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)local_124[7] == local_124 + 9) {
      if ((undefined4 *)local_124[1] == local_124 + 3) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,local_124);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_128 != (undefined4 *)0x0) {
    *local_128 = DAT_2c58eee4;
    if ((undefined4 *)local_128[7] != local_128 + 9) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)local_128[1] == local_128 + 3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,local_128);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_140 != local_138) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_144 != (undefined4 *)0x0) {
    *local_144 = DAT_2c58eee8;
    if ((undefined4 *)local_144[7] != local_144 + 9) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if ((undefined4 *)local_144[1] == local_144 + 3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,local_144);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c58eed0 != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar5;
}

