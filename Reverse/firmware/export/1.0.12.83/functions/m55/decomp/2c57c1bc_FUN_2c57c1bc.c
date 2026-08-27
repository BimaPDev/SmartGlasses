/* FUN_2c57c1bc @ 0x2c57c1bc */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c57c1bc(undefined4 param_1)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  uint *local_cc;
  int local_c8;
  uint local_c4 [4];
  undefined4 local_b4;
  undefined1 local_b0;
  uint *local_ac;
  int local_a8;
  uint local_a4 [4];
  undefined1 local_93;
  undefined4 local_90;
  uint *local_8c;
  int local_88;
  uint local_84 [4];
  undefined1 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined2 local_6a;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 *local_60;
  undefined4 local_5c;
  undefined1 local_58 [16];
  undefined1 local_48;
  uint *local_44;
  int local_40;
  uint local_3c [4];
  undefined4 local_2c;
  
  local_2c = *DAT_2c57c440;
  local_88 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  local_74 = 0;
  local_70 = 0;
  local_60 = local_58;
  local_a8 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  local_5c = 0;
  local_58[0] = 0;
  local_40 = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  local_b0 = 0;
  local_93 = 0;
  local_6c = 0xb;
  local_6a = 0x67;
  local_68 = 0xffffffff;
  local_48 = 5;
  local_b4 = DAT_2c57c45c;
  local_64 = DAT_2c57c460;
  local_90 = DAT_2c57c458;
  local_ac = local_a4;
  local_8c = local_84;
  local_44 = local_3c;
  FUN_2c58c9d8(&local_cc,param_1);
  uVar2 = local_a4[0];
  puVar1 = local_ac;
  if (local_cc == local_c4) {
    if (local_c8 != 0) {
      if (local_c8 == 1) {
        *(undefined1 *)local_ac = (undefined1)local_c4[0];
      }
      else {
        FUN_2c674668(local_ac,local_c4);
      }
    }
    *(undefined1 *)((int)local_ac + local_c8) = 0;
    local_a8 = local_c8;
  }
  else {
    bVar3 = local_ac != local_a4;
    local_ac = local_cc;
    if (bVar3) {
      local_a8 = local_c8;
      local_a4[0] = local_c4[0];
      if (puVar1 != (uint *)0x0) {
        local_c4[0] = uVar2;
        local_cc = puVar1;
        goto LAB_2c57c266;
      }
    }
    local_a4[0] = local_c4[0];
    local_a8 = local_c8;
    local_cc = local_c4;
  }
LAB_2c57c266:
  local_c8 = 0;
  *(undefined1 *)local_cc = 0;
  if (local_cc != local_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  FUN_2c58c9d8(&local_cc,&local_b4);
  uVar2 = local_3c[0];
  puVar1 = local_44;
  if (local_cc == local_c4) {
    if (local_c8 != 0) {
      if (local_c8 == 1) {
        *(undefined1 *)local_44 = (undefined1)local_c4[0];
      }
      else {
        FUN_2c674668(local_44,local_c4);
      }
    }
    *(undefined1 *)((int)local_44 + local_c8) = 0;
    local_40 = local_c8;
  }
  else {
    bVar3 = local_44 != local_3c;
    local_44 = local_cc;
    if (bVar3) {
      local_40 = local_c8;
      local_3c[0] = local_c4[0];
      if (puVar1 != (uint *)0x0) {
        local_c4[0] = uVar2;
        local_cc = puVar1;
        goto LAB_2c57c2a4;
      }
    }
    local_3c[0] = local_c4[0];
    local_40 = local_c8;
    local_cc = local_c4;
  }
LAB_2c57c2a4:
  local_c8 = 0;
  *(undefined1 *)local_cc = 0;
  if (local_cc != local_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  FUN_2c58c9d8(&local_cc,&local_64);
  uVar2 = local_84[0];
  puVar1 = local_8c;
  if (local_cc == local_c4) {
    if (local_c8 != 0) {
      if (local_c8 == 1) {
        *(undefined1 *)local_8c = (undefined1)local_c4[0];
      }
      else {
        FUN_2c674668(local_8c,local_c4);
      }
    }
    *(undefined1 *)((int)local_8c + local_c8) = 0;
    local_88 = local_c8;
  }
  else {
    bVar3 = local_8c != local_84;
    local_8c = local_cc;
    if (bVar3) {
      local_88 = local_c8;
      local_84[0] = local_c4[0];
      if (puVar1 != (uint *)0x0) {
        local_c4[0] = uVar2;
        local_cc = puVar1;
        goto LAB_2c57c2e2;
      }
    }
    local_84[0] = local_c4[0];
    local_88 = local_c8;
    local_cc = local_c4;
  }
LAB_2c57c2e2:
  local_c8 = 0;
  *(undefined1 *)local_cc = 0;
  if (local_cc == local_c4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680();
}

