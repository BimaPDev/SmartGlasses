/* FUN_2c5975bc @ 0x2c5975bc */

int * FUN_2c5975bc(int *param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint local_108;
  uint *local_104;
  int local_100;
  uint local_fc [4];
  int *local_ec;
  int local_e8;
  int local_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int *local_d4;
  int local_d0;
  int local_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  uint *local_bc;
  int local_b8;
  uint local_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  uint *local_a4;
  int local_a0;
  uint local_9c [4];
  int *local_8c;
  int local_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  uint *local_74;
  int local_70;
  uint local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  uint *local_5c;
  int local_58;
  uint local_54 [4];
  int *local_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  
  local_2c = *DAT_2c597888;
  local_108 = *(int *)(param_2 + 0xc) + 0xf;
  local_fc[0] = local_fc[0] & 0xffffff00;
  local_100 = 0;
  local_104 = local_fc;
  if (0xf < local_108) {
    puVar2 = (uint *)FUN_2c594808(&local_108,0xf);
    if (local_100 == 0) {
      *(char *)puVar2 = (char)*local_104;
    }
    else if (local_100 != -1) {
      FUN_2c674668();
    }
    if (local_104 != local_fc) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    local_fc[0] = local_108;
    local_104 = puVar2;
    if (0x7fffffffU - local_100 < 0xf) goto LAB_2c597940;
  }
  FUN_2c5392f4(&local_104,DAT_2c59788c,0xf);
  FUN_2c5392f4(&local_104,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
  if (0x7fffffffU - local_100 < 0x11) goto LAB_2c597940;
  piVar1 = (int *)FUN_2c5392f4(&local_104,DAT_2c597890,0x11);
  if ((int *)*piVar1 == piVar1 + 2) {
    local_e4 = piVar1[2];
    iStack_e0 = piVar1[3];
    iStack_dc = piVar1[4];
    iStack_d8 = piVar1[5];
    local_ec = &local_e4;
  }
  else {
    local_e4 = piVar1[2];
    local_ec = (int *)*piVar1;
  }
  local_e8 = piVar1[1];
  *piVar1 = (int)(piVar1 + 2);
  piVar1[1] = 0;
  *(undefined1 *)(piVar1 + 2) = 0;
  piVar1 = (int *)FUN_2c5392f4(&local_ec,*(undefined4 *)(param_2 + 0x20),
                               *(undefined4 *)(param_2 + 0x24));
  if ((int *)*piVar1 == piVar1 + 2) {
    local_cc = piVar1[2];
    iStack_c8 = piVar1[3];
    iStack_c4 = piVar1[4];
    iStack_c0 = piVar1[5];
    local_d4 = &local_cc;
  }
  else {
    local_cc = piVar1[2];
    local_d4 = (int *)*piVar1;
  }
  local_d0 = piVar1[1];
  *piVar1 = (int)(piVar1 + 2);
  piVar1[1] = 0;
  *(undefined1 *)(piVar1 + 2) = 0;
  if (0x7fffffffU - local_d0 < 0xf) goto LAB_2c597940;
  piVar1 = (int *)FUN_2c5392f4(&local_d4,DAT_2c597894,0xf);
  if ((uint *)*piVar1 == (uint *)(piVar1 + 2)) {
    local_b4 = piVar1[2];
    iStack_b0 = piVar1[3];
    iStack_ac = piVar1[4];
    iStack_a8 = piVar1[5];
    local_bc = &local_b4;
  }
  else {
    local_b4 = piVar1[2];
    local_bc = (uint *)*piVar1;
  }
  local_b8 = piVar1[1];
  *piVar1 = (int)(piVar1 + 2);
  piVar1[1] = 0;
  *(undefined1 *)(piVar1 + 2) = 0;
  FUN_2c5dcca4(&local_a4,*(undefined1 *)(param_2 + 4));
  uVar3 = local_b4;
  if (local_bc == &local_b4) {
    uVar3 = 0xf;
  }
  if (uVar3 < (uint)(local_b8 + local_a0)) {
    if (local_a4 == local_9c) {
      local_9c[0] = 0xf;
    }
    if (local_9c[0] < (uint)(local_b8 + local_a0)) goto LAB_2c5976e2;
    piVar1 = (int *)FUN_2c539348(&local_a4,0,0,local_bc,local_b8);
    piVar5 = piVar1 + 2;
    local_8c = (int *)*piVar1;
    if (local_8c == piVar5) goto LAB_2c5978c2;
LAB_2c5976fe:
    local_84 = piVar1[2];
  }
  else {
LAB_2c5976e2:
    piVar1 = (int *)FUN_2c5392f4(&local_bc);
    piVar5 = piVar1 + 2;
    local_8c = (int *)*piVar1;
    if (local_8c != piVar5) goto LAB_2c5976fe;
LAB_2c5978c2:
    local_8c = &local_84;
    local_84 = piVar1[2];
    iStack_80 = piVar5[1];
    iStack_7c = piVar5[2];
    iStack_78 = piVar5[3];
  }
  local_88 = piVar1[1];
  *piVar1 = (int)piVar5;
  piVar1[1] = 0;
  *(undefined1 *)(piVar1 + 2) = 0;
  if (0x7fffffffU - local_88 < 0xf) goto LAB_2c597940;
  piVar1 = (int *)FUN_2c5392f4(&local_8c,DAT_2c597898,0xf);
  local_74 = &local_6c;
  if ((uint *)*piVar1 == (uint *)(piVar1 + 2)) {
    local_6c = piVar1[2];
    iStack_68 = piVar1[3];
    iStack_64 = piVar1[4];
    iStack_60 = piVar1[5];
  }
  else {
    local_6c = piVar1[2];
    local_74 = (uint *)*piVar1;
  }
  local_70 = piVar1[1];
  *piVar1 = (int)(piVar1 + 2);
  piVar1[1] = 0;
  *(undefined1 *)(piVar1 + 2) = 0;
  FUN_2c5dcca4(&local_5c,*(undefined1 *)(param_2 + 0x38));
  uVar3 = local_6c;
  if (local_74 == &local_6c) {
    uVar3 = 0xf;
  }
  if (uVar3 < (uint)(local_70 + local_58)) {
    if (local_5c == local_54) {
      local_54[0] = 0xf;
    }
    if (local_54[0] < (uint)(local_70 + local_58)) goto LAB_2c59778e;
    piVar1 = (int *)FUN_2c539348(&local_5c,0,0,local_74,local_70);
    piVar5 = piVar1 + 2;
    local_44 = (int *)*piVar1;
    if (local_44 == piVar5) goto LAB_2c5978f6;
LAB_2c5977a6:
    local_3c = piVar1[2];
  }
  else {
LAB_2c59778e:
    piVar1 = (int *)FUN_2c5392f4(&local_74);
    piVar5 = piVar1 + 2;
    local_44 = (int *)*piVar1;
    if (local_44 != piVar5) goto LAB_2c5977a6;
LAB_2c5978f6:
    local_44 = &local_3c;
    local_3c = piVar1[2];
    iStack_38 = piVar5[1];
    iStack_34 = piVar5[2];
    iStack_30 = piVar5[3];
  }
  local_40 = piVar1[1];
  *piVar1 = (int)piVar5;
  piVar1[1] = 0;
  *(undefined1 *)(piVar1 + 2) = 0;
  if (1 < 0x7fffffffU - local_40) {
    piVar1 = (int *)FUN_2c5392f4(&local_44,DAT_2c59789c,2);
    *param_1 = (int)(param_1 + 2);
    if ((int *)*piVar1 == piVar1 + 2) {
      iVar7 = piVar1[3];
      iVar6 = piVar1[4];
      iVar4 = piVar1[5];
      param_1[2] = piVar1[2];
      param_1[3] = iVar7;
      param_1[4] = iVar6;
      param_1[5] = iVar4;
    }
    else {
      iVar4 = piVar1[2];
      *param_1 = *piVar1;
      param_1[2] = iVar4;
    }
    *piVar1 = (int)(piVar1 + 2);
    iVar4 = piVar1[1];
    piVar1[1] = 0;
    param_1[1] = iVar4;
    *(undefined1 *)(piVar1 + 2) = 0;
    if (local_44 != &local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680();
    }
    if (local_5c != local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_74 != &local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_8c != &local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_a4 != local_9c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_bc != &local_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_d4 != &local_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_ec != &local_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_104 != local_fc) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (*DAT_2c597888 == local_2c) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
LAB_2c597940:
                    /* WARNING: Subroutine does not return */
  FUN_2c658680(DAT_2c5979c4);
}

