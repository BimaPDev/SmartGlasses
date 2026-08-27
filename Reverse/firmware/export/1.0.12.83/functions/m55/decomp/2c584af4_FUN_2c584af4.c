/* FUN_2c584af4 @ 0x2c584af4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c584af4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined1 auStack_e0 [24];
  uint *local_c8;
  int local_c4;
  uint local_c0 [4];
  undefined4 local_b0;
  uint *local_ac;
  int local_a8;
  uint local_a4 [4];
  undefined1 local_94;
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
  uint *local_64;
  undefined1 *local_60;
  uint local_5c;
  undefined1 local_58 [16];
  undefined1 local_48;
  uint *local_44;
  int local_40;
  uint local_3c [4];
  undefined4 local_2c;
  
  piVar1 = DAT_2c584d88;
  local_2c = *DAT_2c584d84;
  if (*DAT_2c584d88 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar5 = (undefined4 *)FUN_2c47245c(0,0x1c);
  uVar2 = DAT_2c584d8c;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  *puVar5 = uVar2;
  FUN_2c5849d4(param_1,param_1 + 4,puVar5 + 1,*(undefined4 *)(param_1 + 0x28),2);
  puVar5[5] = 2;
  puVar5[6] = *(undefined4 *)(param_1 + 0x2c);
  puVar5[4] = *(undefined4 *)(param_1 + 0x28);
  FUN_2c58c9d8(auStack_e0,puVar5);
  local_a8 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  local_93 = 2;
  local_b0 = DAT_2c584d90;
  local_ac = local_a4;
  FUN_2c58c9d8(&local_64,puVar5);
  uVar4 = local_a4[0];
  puVar3 = local_ac;
  if (local_64 == &local_5c) {
    if (local_60 != (undefined1 *)0x0) {
      if (local_60 == (undefined1 *)0x1) {
        *(undefined1 *)local_ac = (undefined1)local_5c;
      }
      else {
        FUN_2c674668(local_ac,&local_5c);
      }
    }
    *(undefined1 *)((int)local_ac + (int)local_60) = 0;
    local_a8 = (int)local_60;
  }
  else {
    bVar6 = local_ac != local_a4;
    local_ac = local_64;
    if (bVar6) {
      local_a8 = (int)local_60;
      local_a4[0] = local_5c;
      if (puVar3 != (uint *)0x0) {
        local_5c = uVar4;
        local_64 = puVar3;
        goto LAB_2c584b92;
      }
    }
    local_a4[0] = local_5c;
    local_a8 = (int)local_60;
    local_64 = &local_5c;
  }
LAB_2c584b92:
  local_60 = (undefined1 *)0x0;
  *(undefined1 *)local_64 = 0;
  if (local_64 != &local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  local_94 = 0;
  local_60 = local_58;
  local_88 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  local_74 = 0;
  local_70 = 0;
  local_5c = 0;
  local_58[0] = 0;
  local_40 = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  local_90 = DAT_2c584da8;
  local_6c = 0xb;
  local_68 = 0xffffffff;
  local_64 = DAT_2c584dac;
  local_6a = 0x67;
  local_8c = local_84;
  local_44 = local_3c;
  FUN_2c58c9d8(&local_c8,&local_b0);
  uVar4 = local_3c[0];
  puVar3 = local_44;
  if (local_c8 == local_c0) {
    if (local_c4 != 0) {
      if (local_c4 == 1) {
        *(undefined1 *)local_44 = (undefined1)local_c0[0];
      }
      else {
        FUN_2c674668(local_44,local_c0);
      }
    }
    *(undefined1 *)((int)local_44 + local_c4) = 0;
    local_40 = local_c4;
  }
  else {
    bVar6 = local_44 != local_3c;
    local_44 = local_c8;
    if (bVar6) {
      local_40 = local_c4;
      local_3c[0] = local_c0[0];
      if (puVar3 != (uint *)0x0) {
        local_c0[0] = uVar4;
        local_c8 = puVar3;
        goto LAB_2c584c26;
      }
    }
    local_3c[0] = local_c0[0];
    local_40 = local_c4;
    local_c8 = local_c0;
  }
LAB_2c584c26:
  local_c4 = 0;
  *(undefined1 *)local_c8 = 0;
  if (local_c8 != local_c0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  local_48 = 2;
  FUN_2c58c9d8(&local_c8,&local_64);
  uVar4 = local_84[0];
  puVar3 = local_8c;
  if (local_c8 == local_c0) {
    if (local_c4 != 0) {
      if (local_c4 == 1) {
        *(undefined1 *)local_8c = (undefined1)local_c0[0];
      }
      else {
        FUN_2c674668(local_8c,local_c0);
      }
    }
    *(undefined1 *)((int)local_8c + local_c4) = 0;
    local_88 = local_c4;
  }
  else {
    bVar6 = local_8c != local_84;
    local_8c = local_c8;
    if (bVar6) {
      local_88 = local_c4;
      local_84[0] = local_c0[0];
      if (puVar3 != (uint *)0x0) {
        local_c0[0] = uVar4;
        local_c8 = puVar3;
        goto LAB_2c584c6a;
      }
    }
    local_84[0] = local_c0[0];
    local_88 = local_c4;
    local_c8 = local_c0;
  }
LAB_2c584c6a:
  local_c4 = 0;
  *(undefined1 *)local_c8 = 0;
  if (local_c8 == local_c0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680();
}

