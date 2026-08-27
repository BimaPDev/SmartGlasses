/* FUN_2c56ceec @ 0x2c56ceec */

undefined4 FUN_2c56ceec(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *local_34;
  uint local_30;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  undefined2 uStack_20;
  undefined1 local_1e;
  undefined1 local_1d;
  int local_1c;
  
  local_1c = *DAT_2c56d1c0;
  local_30 = 0xf;
  uVar5 = *param_1;
  uVar7 = param_1[1];
  local_2c = *DAT_2c56d1c4;
  uStack_28 = DAT_2c56d1c4[1];
  uStack_24 = DAT_2c56d1c4[2];
  uStack_20 = (undefined2)DAT_2c56d1c4[3];
  local_1e = (undefined1)(DAT_2c56d1c4[3] >> 0x10);
  local_1d = 0;
  local_34 = &local_2c;
  iVar2 = FUN_2c56ca3c(uVar5,uVar7,DAT_2c56d1c8);
  if (iVar2 == 0) {
    FUN_2c56cd34(&local_34,0,0xf,DAT_2c56d218,0x12);
LAB_2c56d066:
    puVar1 = DAT_2c56d210;
    if (0x7fffffff - local_30 < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_2c658680(DAT_2c56d254);
    }
    uVar6 = local_30 + 6;
    uVar4 = local_2c;
    if (local_34 == &local_2c) {
      uVar4 = 0xf;
    }
    uVar3 = local_30;
    if (uVar6 <= uVar4) {
      *(undefined4 *)((int)local_34 + local_30) = *DAT_2c56d210;
      *(undefined2 *)((int)local_34 + local_30 + 4) = *(undefined2 *)(puVar1 + 1);
      goto LAB_2c56d090;
    }
  }
  else {
    iVar2 = FUN_2c56ca3c(uVar5,uVar7,DAT_2c56d1cc);
    if (iVar2 == 0) {
      FUN_2c56cd34(&local_34,0,0xf,DAT_2c56d214,0x11);
      goto LAB_2c56d066;
    }
    iVar2 = FUN_2c56ca3c(uVar5,uVar7,DAT_2c56d1d0);
    if (iVar2 == 0) {
      FUN_2c56cd34(&local_34,0,0xf,DAT_2c56d220,0x10);
      goto LAB_2c56d066;
    }
    iVar2 = FUN_2c56ca3c(uVar5,uVar7,DAT_2c56d1d4);
    if (iVar2 == 0) {
      FUN_2c56cd34(&local_34,0,0xf,DAT_2c56d224,0x12);
      goto LAB_2c56d066;
    }
    iVar2 = FUN_2c56ca3c(uVar5,uVar7,DAT_2c56d1d8);
    if (iVar2 == 0) {
      FUN_2c56cd34(&local_34,0,0xf,DAT_2c56d21c,0x15);
      goto LAB_2c56d066;
    }
    iVar2 = FUN_2c56ca3c(uVar5,uVar7,DAT_2c56d1dc);
    if (iVar2 == 0) {
      FUN_2c56cd34(&local_34,0,0xf,DAT_2c56d22c,0x12);
      goto LAB_2c56d066;
    }
    iVar2 = FUN_2c56ca3c(uVar5,uVar7,DAT_2c56d1e0);
    if (iVar2 == 0) {
      FUN_2c56cd34(&local_34,0,0xf,DAT_2c56d230,0x12);
      goto LAB_2c56d066;
    }
    iVar2 = FUN_2c56ca3c(uVar5,uVar7,DAT_2c56d1e4);
    if (iVar2 == 0) {
      FUN_2c56cd34(&local_34,0,0xf,DAT_2c56d228,0x15);
      goto LAB_2c56d066;
    }
    iVar2 = FUN_2c56ca3c(uVar5,uVar7,DAT_2c56d1e8);
    if (iVar2 == 0) {
      FUN_2c56cd34(&local_34,0,0xf,DAT_2c56d234,0x12);
      goto LAB_2c56d066;
    }
    iVar2 = FUN_2c56ca3c(uVar5,uVar7,DAT_2c56d1ec);
    if (iVar2 == 0) {
      FUN_2c56cd34(&local_34,0,0xf,DAT_2c56d238,0xd);
      goto LAB_2c56d066;
    }
    iVar2 = FUN_2c56ca3c(uVar5,uVar7,DAT_2c56d1f0);
    if (iVar2 == 0) {
      uVar7 = 0xe;
      uVar5 = DAT_2c56d23c;
      goto LAB_2c56d166;
    }
    iVar2 = FUN_2c56ca3c(uVar5,uVar7,DAT_2c56d1f4);
    if (iVar2 == 0) {
      FUN_2c56cd34(&local_34,0,0xf,DAT_2c56d240,0xf);
      goto LAB_2c56d066;
    }
    iVar2 = FUN_2c56ca3c(uVar5,uVar7,DAT_2c56d1f8);
    if (iVar2 == 0) {
      uVar7 = 0xc;
      uVar5 = DAT_2c56d244;
LAB_2c56d166:
      FUN_2c56cd34(&local_34,0,0xf,uVar5,uVar7);
      goto LAB_2c56d066;
    }
    iVar2 = FUN_2c56ca3c(uVar5,uVar7,DAT_2c56d1fc);
    if (iVar2 == 0) {
      uVar7 = 0xd;
      uVar5 = DAT_2c56d248;
      goto LAB_2c56d166;
    }
    iVar2 = FUN_2c56ca3c(uVar5,uVar7,DAT_2c56d200);
    if (iVar2 == 0) {
      uVar7 = 0x11;
      uVar5 = DAT_2c56d24c;
      goto LAB_2c56d166;
    }
    iVar2 = FUN_2c56ca3c(uVar5,uVar7,DAT_2c56d204);
    if (iVar2 == 0) {
      FUN_2c56cec8(&local_34,DAT_2c56d250);
      goto LAB_2c56d066;
    }
    iVar2 = FUN_2c56ca3c(uVar5,uVar7,DAT_2c56d208);
    if (iVar2 == 0) {
      FUN_2c56cec8(&local_34,DAT_2c56d1c4);
      goto LAB_2c56d066;
    }
    iVar2 = FUN_2c56ca3c(uVar5,uVar7,DAT_2c56d20c);
    if (iVar2 == 0) {
      FUN_2c56cec8(&local_34,DAT_2c56d240);
      goto LAB_2c56d066;
    }
    uVar6 = 0x15;
    uVar3 = 0xf;
  }
  FUN_2c52263c(&local_34,uVar3,0,DAT_2c56d210,6);
LAB_2c56d090:
  *(undefined1 *)((int)local_34 + uVar6) = 0;
  local_30 = uVar6;
  uVar5 = FUN_2c5e2e8c(local_34);
  if (local_34 != &local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c56d1c0 == local_1c) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

