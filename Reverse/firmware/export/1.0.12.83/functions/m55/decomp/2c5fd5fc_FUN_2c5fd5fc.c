/* FUN_2c5fd5fc @ 0x2c5fd5fc */

void FUN_2c5fd5fc(int param_1,ushort param_2,undefined1 *param_3,undefined4 param_4,
                 undefined1 *param_5,undefined4 param_6,undefined1 *param_7,undefined1 *param_8)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 auStack_7c [12];
  undefined4 local_70;
  undefined4 local_6c;
  int iStack_68;
  undefined4 local_64;
  undefined1 auStack_60 [12];
  undefined4 local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *puStack_3c;
  undefined1 auStack_38 [10];
  undefined1 local_2e;
  int local_2c;
  
  pcVar1 = DAT_2c5fd8dc;
  local_2c = *DAT_2c5fd8d8;
  if (*DAT_2c5fd8dc != '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x2c1,DAT_2c5fd904,DAT_2c5fd900,DAT_2c5fd90c,DAT_2c5fd8f8);
  }
  if (0xf < (param_2 & 0xff)) {
    if (*DAT_2c5fd8d8 == local_2c) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x2c5,DAT_2c5fd904,DAT_2c5fd900);
    }
    goto LAB_2c5fda04;
  }
  iVar3 = FUN_2c5fe700();
  if (iVar3 != 0) {
    uVar4 = FUN_2c5febec();
    puVar2 = DAT_2c5fd928;
    if (uVar4 < 9) {
      if (uVar4 != 0) goto LAB_2c5fd7dc;
      FUN_2c644044(*DAT_2c5fd928,0xffffffff);
      uVar5 = DAT_2c5fd8ec;
      if ((*DAT_2c5fd8e0 == 0) || (param_1 != *DAT_2c5fd8e0)) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x2e4,DAT_2c5fd904,DAT_2c5fd900,DAT_2c5fd91c,DAT_2c5fd918);
      }
      iVar3 = *(int *)(DAT_2c5fd8e4 + (short)param_2 * 4);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x2ea,DAT_2c5fda14,DAT_2c5fda10,DAT_2c5fda2c,DAT_2c5fda08);
      }
      if (*(char *)(iVar3 + 0x14) == '\0') {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x2ef,DAT_2c5fda14,DAT_2c5fda10,DAT_2c5fda0c,DAT_2c5fda08);
      }
      *DAT_2c5fd8e8 = *DAT_2c5fd8e8 + 1;
      FUN_2c66b4b8(auStack_38,uVar5);
      local_2e = 0;
      FUN_2c5fed48(auStack_60);
      local_50 = auStack_38;
      local_4c = *(undefined1 **)(*(int *)(DAT_2c5fd8e4 + (short)param_2 * 4) + 0x1c);
      if (param_5 == (undefined1 *)0x0) {
        param_5 = DAT_2c5fda34;
      }
      local_40 = param_7;
      if (param_7 != (undefined1 *)0x0) {
        local_40 = param_8;
      }
      puStack_3c = param_7;
      local_48 = param_3;
      local_44 = param_5;
      uVar5 = FUN_2c5fed6c(auStack_60);
      iVar3 = DAT_2c5fd8f0;
      iVar6 = FUN_2c5fee3c(*(undefined4 *)(DAT_2c5fd8f0 + 4),uVar5);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x309,DAT_2c5fda14,DAT_2c5fda10,DAT_2c5fda20,DAT_2c5fda08);
      }
      uVar7 = FUN_2c5fed9c(auStack_60,iVar6);
      if (*pcVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x30d,DAT_2c5fda14,DAT_2c5fda10,DAT_2c5fda24,uVar7,uVar5);
      }
      FUN_2c5fe0cc(auStack_7c);
      local_70 = 1;
      local_64 = DAT_2c5fd8f4;
      local_6c = uVar5;
      iStack_68 = iVar6;
      uVar5 = FUN_2c5fe0ec(auStack_7c);
      iVar8 = FUN_2c5fee3c(*(undefined4 *)(iVar3 + 4),uVar5);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x318,DAT_2c5fda14,DAT_2c5fda10,DAT_2c5fda28,DAT_2c5fda08);
      }
      uVar7 = FUN_2c5fe11c(auStack_7c,iVar8);
      if (*pcVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x31c,DAT_2c5fda14,DAT_2c5fda10,DAT_2c5fda30,uVar7,uVar5);
      }
      (**(code **)(*(int *)(iVar3 + 0x48) + 0x30))(iVar8,uVar5,0);
      FUN_2c5fee30(*(undefined4 *)(iVar3 + 4),iVar8);
      FUN_2c5fee30(*(undefined4 *)(iVar3 + 4),iVar6);
    }
    else {
      if (uVar4 != 100) {
        FUN_2c5febec();
        if (*DAT_2c5fd8d8 == local_2c) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x2d9,DAT_2c5fd904,DAT_2c5fd900);
        }
        goto LAB_2c5fda04;
      }
LAB_2c5fd7dc:
      FUN_2c644044(*DAT_2c5fd928,0xffffffff);
      iVar3 = DAT_2c5fd8e4;
      if ((*DAT_2c5fd8e0 == 0) || (param_1 != *DAT_2c5fd8e0)) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x659,DAT_2c5fd904,DAT_2c5fd900,DAT_2c5fd91c,DAT_2c5fd920);
      }
      iVar6 = *(int *)(DAT_2c5fd8e4 + (short)param_2 * 4);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x65e,DAT_2c5fda14,DAT_2c5fda10,DAT_2c5fda2c,DAT_2c5fda18);
      }
      if (*(char *)(iVar6 + 0x14) == '\0') {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x662,DAT_2c5fd904,DAT_2c5fd900,DAT_2c5fd924,DAT_2c5fd920);
      }
      FUN_2c5fec7c(auStack_60);
      local_40 = (undefined1 *)0x0;
      if (*DAT_2c5fd910 != 0x7fffffff) {
        local_40 = (undefined1 *)(*DAT_2c5fd910 + 1);
      }
      *DAT_2c5fd910 = (int)local_40;
      iVar6 = DAT_2c5fd8f0;
      local_54 = *(undefined4 *)(*(int *)(iVar3 + (short)param_2 * 4) + 0x1c);
      if (param_5 == (undefined1 *)0x0) {
        param_5 = DAT_2c5fda34;
      }
      local_48 = param_7;
      if (param_7 != (undefined1 *)0x0) {
        local_48 = param_8;
      }
      local_44 = param_7;
      local_50 = param_3;
      local_4c = param_5;
      uVar5 = FUN_2c5feca0(auStack_60);
      iVar3 = FUN_2c5fee3c(*(undefined4 *)(iVar6 + 4),uVar5);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x679,DAT_2c5fda14,DAT_2c5fda10,DAT_2c5fda1c,DAT_2c5fda18);
      }
      FUN_2c5fecd0(auStack_60,iVar3);
      (**(code **)(*(int *)(iVar6 + 0x48) + 0x30))(iVar3,uVar5,DAT_2c5fd914);
      FUN_2c5fee30(*(undefined4 *)(iVar6 + 4),iVar3);
    }
    FUN_2c644080(*puVar2);
  }
  if (*DAT_2c5fd8d8 == local_2c) {
    return;
  }
LAB_2c5fda04:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

