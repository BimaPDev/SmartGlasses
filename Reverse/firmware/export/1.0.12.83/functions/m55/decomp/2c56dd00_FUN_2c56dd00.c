/* FUN_2c56dd00 @ 0x2c56dd00 */

undefined4 FUN_2c56dd00(undefined4 param_1,undefined4 *param_2)

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
  
  local_1c = *DAT_2c56dfd4;
  local_30 = 0xf;
  uVar5 = *param_2;
  uVar7 = param_2[1];
  local_2c = *DAT_2c56dfd8;
  uStack_28 = DAT_2c56dfd8[1];
  uStack_24 = DAT_2c56dfd8[2];
  uStack_20 = (undefined2)DAT_2c56dfd8[3];
  local_1e = (undefined1)(DAT_2c56dfd8[3] >> 0x10);
  local_1d = 0;
  local_34 = &local_2c;
  iVar2 = FUN_2c56d688(uVar5,uVar7,DAT_2c56dfdc);
  if (iVar2 == 0) {
    FUN_2c56db48(&local_34,0,0xf,DAT_2c56e02c,0x12);
LAB_2c56de7a:
    puVar1 = DAT_2c56e024;
    if (0x7fffffff - local_30 < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_2c658680(DAT_2c56e068);
    }
    uVar6 = local_30 + 6;
    uVar4 = local_2c;
    if (local_34 == &local_2c) {
      uVar4 = 0xf;
    }
    uVar3 = local_30;
    if (uVar6 <= uVar4) {
      *(undefined4 *)((int)local_34 + local_30) = *DAT_2c56e024;
      *(undefined2 *)((int)local_34 + local_30 + 4) = *(undefined2 *)(puVar1 + 1);
      goto LAB_2c56dea4;
    }
  }
  else {
    iVar2 = FUN_2c56d688(uVar5,uVar7,DAT_2c56dfe0);
    if (iVar2 == 0) {
      FUN_2c56db48(&local_34,0,0xf,DAT_2c56e028,0x11);
      goto LAB_2c56de7a;
    }
    iVar2 = FUN_2c56d688(uVar5,uVar7,DAT_2c56dfe4);
    if (iVar2 == 0) {
      FUN_2c56db48(&local_34,0,0xf,DAT_2c56e034,0x10);
      goto LAB_2c56de7a;
    }
    iVar2 = FUN_2c56d688(uVar5,uVar7,DAT_2c56dfe8);
    if (iVar2 == 0) {
      FUN_2c56db48(&local_34,0,0xf,DAT_2c56e038,0x12);
      goto LAB_2c56de7a;
    }
    iVar2 = FUN_2c56d688(uVar5,uVar7,DAT_2c56dfec);
    if (iVar2 == 0) {
      FUN_2c56db48(&local_34,0,0xf,DAT_2c56e030,0x15);
      goto LAB_2c56de7a;
    }
    iVar2 = FUN_2c56d688(uVar5,uVar7,DAT_2c56dff0);
    if (iVar2 == 0) {
      FUN_2c56db48(&local_34,0,0xf,DAT_2c56e040,0x12);
      goto LAB_2c56de7a;
    }
    iVar2 = FUN_2c56d688(uVar5,uVar7,DAT_2c56dff4);
    if (iVar2 == 0) {
      FUN_2c56db48(&local_34,0,0xf,DAT_2c56e044,0x12);
      goto LAB_2c56de7a;
    }
    iVar2 = FUN_2c56d688(uVar5,uVar7,DAT_2c56dff8);
    if (iVar2 == 0) {
      FUN_2c56db48(&local_34,0,0xf,DAT_2c56e03c,0x15);
      goto LAB_2c56de7a;
    }
    iVar2 = FUN_2c56d688(uVar5,uVar7,DAT_2c56dffc);
    if (iVar2 == 0) {
      FUN_2c56db48(&local_34,0,0xf,DAT_2c56e048,0x12);
      goto LAB_2c56de7a;
    }
    iVar2 = FUN_2c56d688(uVar5,uVar7,DAT_2c56e000);
    if (iVar2 == 0) {
      FUN_2c56db48(&local_34,0,0xf,DAT_2c56e04c,0xd);
      goto LAB_2c56de7a;
    }
    iVar2 = FUN_2c56d688(uVar5,uVar7,DAT_2c56e004);
    if (iVar2 == 0) {
      uVar7 = 0xe;
      uVar5 = DAT_2c56e050;
      goto LAB_2c56df7a;
    }
    iVar2 = FUN_2c56d688(uVar5,uVar7,DAT_2c56e008);
    if (iVar2 == 0) {
      FUN_2c56db48(&local_34,0,0xf,DAT_2c56e054,0xf);
      goto LAB_2c56de7a;
    }
    iVar2 = FUN_2c56d688(uVar5,uVar7,DAT_2c56e00c);
    if (iVar2 == 0) {
      uVar7 = 0xc;
      uVar5 = DAT_2c56e058;
LAB_2c56df7a:
      FUN_2c56db48(&local_34,0,0xf,uVar5,uVar7);
      goto LAB_2c56de7a;
    }
    iVar2 = FUN_2c56d688(uVar5,uVar7,DAT_2c56e010);
    if (iVar2 == 0) {
      uVar7 = 0xd;
      uVar5 = DAT_2c56e05c;
      goto LAB_2c56df7a;
    }
    iVar2 = FUN_2c56d688(uVar5,uVar7,DAT_2c56e014);
    if (iVar2 == 0) {
      uVar7 = 0x11;
      uVar5 = DAT_2c56e060;
      goto LAB_2c56df7a;
    }
    iVar2 = FUN_2c56d688(uVar5,uVar7,DAT_2c56e018);
    if (iVar2 == 0) {
      FUN_2c56dcdc(&local_34,DAT_2c56e064);
      goto LAB_2c56de7a;
    }
    iVar2 = FUN_2c56d688(uVar5,uVar7,DAT_2c56e01c);
    if (iVar2 == 0) {
      FUN_2c56dcdc(&local_34,DAT_2c56dfd8);
      goto LAB_2c56de7a;
    }
    iVar2 = FUN_2c56d688(uVar5,uVar7,DAT_2c56e020);
    if (iVar2 == 0) {
      FUN_2c56dcdc(&local_34,DAT_2c56e054);
      goto LAB_2c56de7a;
    }
    uVar6 = 0x15;
    uVar3 = 0xf;
  }
  FUN_2c52263c(&local_34,uVar3,0,DAT_2c56e024,6);
LAB_2c56dea4:
  *(undefined1 *)((int)local_34 + uVar6) = 0;
  local_30 = uVar6;
  uVar5 = FUN_2c5e2e8c(local_34);
  if (local_34 != &local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c56dfd4 == local_1c) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

