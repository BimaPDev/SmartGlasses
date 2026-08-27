/* FUN_2c5fddc4 @ 0x2c5fddc4 */

void FUN_2c5fddc4(uint param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 *local_8c;
  undefined1 *local_88;
  undefined4 local_84;
  undefined1 auStack_7c [12];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_60 [12];
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *puStack_3c;
  undefined1 auStack_38 [10];
  undefined1 local_2e;
  int local_2c;
  
  local_2c = *DAT_2c5fe028;
  iVar1 = FUN_2c5fe700();
  if (iVar1 != 0) {
    uVar2 = FUN_2c5febec();
    uVar3 = DAT_2c5fe034;
    if (uVar2 < 9) {
      if (uVar2 == 0) {
        if (param_1 == 1) {
          uVar8 = 0x151;
          local_88 = DAT_2c5fe02c;
          local_84 = 0x145;
          local_8c = DAT_2c5fe02c;
          uVar4 = DAT_2c5fe088;
          uVar6 = DAT_2c5fe08c;
        }
        else if (param_1 == 2) {
          uVar4 = DAT_2c5fe090;
          uVar6 = DAT_2c5fe094;
          if (*DAT_2c5fe05c == '\0') {
            local_88 = DAT_2c5fe060;
            uVar8 = 0x400;
            local_8c = DAT_2c5fe064;
            local_84 = 0x400;
          }
          else {
            uVar8 = 0x400;
            local_88 = DAT_2c5fe068;
            local_8c = DAT_2c5fe070;
            local_84 = 0x400;
          }
        }
        else {
          if (param_1 != 3) {
                    /* WARNING: Subroutine does not return */
            TRACE(4,0x35e,DAT_2c5fe050,DAT_2c5fe04c,DAT_2c5fe054,param_1);
          }
          uVar8 = 0x151;
          local_88 = DAT_2c5fe02c;
          local_84 = 0x145;
          local_8c = DAT_2c5fe02c;
          uVar4 = DAT_2c5fe080;
          uVar6 = DAT_2c5fe084;
        }
        *DAT_2c5fe030 = *DAT_2c5fe030 + 1;
        FUN_2c66b4b8(auStack_38,uVar3);
        local_2e = 0;
        FUN_2c5fed48(auStack_60);
        local_50 = auStack_38;
        local_4c = local_8c;
        local_48 = local_88;
        if (param_2 == (undefined1 *)0x0) {
          param_2 = DAT_2c5fe074;
        }
        local_44 = param_2;
        if (param_3 == (undefined1 *)0x0) {
          local_40 = (undefined1 *)0x0;
        }
        else {
          local_40 = param_4;
          if (((param_1 & 0xfffffffd) == 1) && (0xf2 < (int)param_4)) {
                    /* WARNING: Subroutine does not return */
            TRACE(4,0x370,DAT_2c5fe050,DAT_2c5fe04c,DAT_2c5fe07c);
          }
        }
        puStack_3c = param_3;
        FUN_2c5fed9c(auStack_60,uVar6);
        FUN_2c5fe0cc(auStack_7c);
        local_6c = local_84;
        local_70 = 1;
        local_64 = DAT_2c5fe038;
        local_68 = uVar6;
        FUN_2c5fe11c(auStack_7c,uVar4);
        iVar1 = FUN_2c478b68();
        (**(code **)(iVar1 + 0x38))(2,uVar4,uVar8,0);
        goto LAB_2c5fdde2;
      }
    }
    else if (uVar2 != 100) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x696,DAT_2c5fe050,DAT_2c5fe04c,DAT_2c5fe048);
    }
    uVar3 = DAT_2c5fe078;
    puVar5 = DAT_2c5fe02c;
    puVar7 = DAT_2c5fe02c;
    if (param_1 != 1) {
      if (param_1 == 2) {
        uVar3 = DAT_2c5fe06c;
        puVar5 = DAT_2c5fe070;
        puVar7 = DAT_2c5fe068;
        if (*DAT_2c5fe05c == '\0') {
          puVar5 = DAT_2c5fe064;
          puVar7 = DAT_2c5fe060;
        }
      }
      else {
        uVar3 = DAT_2c5fe03c;
        if (param_1 != 3) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x6bd,DAT_2c5fe050,DAT_2c5fe04c,DAT_2c5fe058,param_1);
        }
      }
    }
    FUN_2c5fec7c(auStack_60);
    if (*DAT_2c5fe040 == 0x7fffffff) {
      local_40 = (undefined1 *)0x0;
    }
    else {
      local_40 = (undefined1 *)(*DAT_2c5fe040 + 1);
    }
    *DAT_2c5fe040 = (int)local_40;
    if (param_2 == (undefined1 *)0x0) {
      param_2 = DAT_2c5fe074;
    }
    local_54 = puVar5;
    local_50 = puVar7;
    local_4c = param_2;
    if (param_3 == (undefined1 *)0x0) {
      local_48 = (undefined1 *)0x0;
    }
    else {
      local_48 = param_4;
      if (((param_1 & 0xfffffffd) == 1) && (0xf2 < (int)param_4)) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x6cc,DAT_2c5fe050,DAT_2c5fe04c,DAT_2c5fe07c);
      }
    }
    local_44 = param_3;
    uVar8 = FUN_2c5fecd0(auStack_60);
    iVar1 = FUN_2c478b68();
    (**(code **)(iVar1 + 0x38))(2,uVar3,uVar8,DAT_2c5fe044);
  }
LAB_2c5fdde2:
  if (*DAT_2c5fe028 != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

