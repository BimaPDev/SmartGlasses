/* FUN_2c5a3660 @ 0x2c5a3660 */

undefined4 FUN_2c5a3660(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint *local_9c;
  uint local_94 [4];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint *local_74;
  uint local_70;
  uint local_6c [4];
  undefined4 local_5c;
  undefined4 uStack_58;
  uint *local_54;
  uint local_50;
  uint local_4c [4];
  uint *local_3c;
  uint local_38;
  uint local_34 [4];
  int local_24;
  
  local_24 = *DAT_2c5a3910;
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*DAT_2c5a3910 == local_24) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  FUN_2c5a2398();
  iVar2 = FUN_2c5a27bc();
  if (iVar2 == 0) {
    pcVar4 = (char *)**(undefined4 **)(param_1 + 0x18);
    if (((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) ||
       ((pcVar4 = (char *)(*(undefined4 **)(param_1 + 0x18))[1], pcVar4 != (char *)0x0 &&
        (*pcVar4 != '\0')))) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5a391c,0x16d,DAT_2c5a3918,DAT_2c5a3928);
    }
    goto LAB_2c5a36a0;
  }
  FUN_2c5a2398();
  FUN_2c5a240c();
  iVar2 = FUN_2c5a5be0();
  piVar1 = DAT_2c5a3930;
  local_74 = local_6c;
  local_84 = DAT_2c5a3920;
  local_80 = *(undefined4 *)(iVar2 + 4);
  local_7c = *(undefined4 *)(iVar2 + 8);
  local_78 = *(undefined4 *)(iVar2 + 0xc);
  puVar7 = *(undefined1 **)(iVar2 + 0x10);
  uVar5 = *(uint *)(iVar2 + 0x14);
  if ((puVar7 + uVar5 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) goto LAB_2c5a396e;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      local_6c[0] = CONCAT31(local_6c[0]._1_3_,*puVar7);
    }
    else if (uVar5 != 0) goto LAB_2c5a3818;
  }
  else {
    if ((int)uVar5 < 0) goto LAB_2c5a3968;
    if (*DAT_2c5a3930 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    local_74 = (uint *)FUN_2c47245c(0,uVar5 + 1);
    local_6c[0] = uVar5;
LAB_2c5a3818:
    FUN_2c674668(local_74,puVar7,uVar5);
  }
  piVar1 = DAT_2c5a3930;
  *(undefined1 *)((int)local_74 + uVar5) = 0;
  local_54 = local_4c;
  uStack_58 = *(undefined4 *)(iVar2 + 0x2c);
  puVar7 = *(undefined1 **)(iVar2 + 0x30);
  uVar6 = *(uint *)(iVar2 + 0x34);
  local_5c = DAT_2c5a3924;
  local_70 = uVar5;
  if ((puVar7 + uVar6 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) goto LAB_2c5a396e;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      local_4c[0] = CONCAT31(local_4c[0]._1_3_,*puVar7);
    }
    else if (uVar6 != 0) goto LAB_2c5a388c;
  }
  else {
    if ((int)uVar6 < 0) goto LAB_2c5a3968;
    if (*DAT_2c5a3930 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    local_54 = (uint *)FUN_2c47245c(0,uVar6 + 1);
    local_4c[0] = uVar6;
LAB_2c5a388c:
    FUN_2c674668(local_54,puVar7,uVar6);
  }
  piVar1 = DAT_2c5a3930;
  *(undefined1 *)((int)local_54 + uVar6) = 0;
  local_3c = local_34;
  puVar7 = *(undefined1 **)(iVar2 + 0x48);
  uVar5 = *(uint *)(iVar2 + 0x4c);
  local_50 = uVar6;
  if ((puVar7 + uVar5 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) goto LAB_2c5a396e;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      local_34[0] = CONCAT31(local_34[0]._1_3_,*puVar7);
    }
    else if (uVar5 != 0) goto LAB_2c5a38da;
  }
  else {
    if ((int)uVar5 < 0) goto LAB_2c5a3968;
    if (*DAT_2c5a3930 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    local_3c = (uint *)FUN_2c47245c(0,uVar5 + 1);
    local_34[0] = uVar5;
LAB_2c5a38da:
    FUN_2c674668(local_3c,puVar7,uVar5);
  }
  *(undefined1 *)((int)local_3c + uVar5) = 0;
  local_38 = uVar5;
  puVar3 = (undefined4 *)FUN_2c5a7378(&local_84);
  piVar1 = DAT_2c5a3930;
  puVar7 = (undefined1 *)*puVar3;
  uVar5 = puVar3[1];
  if ((puVar7 + uVar5 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) {
LAB_2c5a396e:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c5a397c);
  }
  if (uVar5 < 0x10) {
    local_9c = local_94;
    if (uVar5 == 1) {
      local_94[0] = CONCAT31(local_94[0]._1_3_,*puVar7);
    }
    else if (uVar5 != 0) goto LAB_2c5a38b4;
  }
  else {
    if ((int)uVar5 < 0) {
LAB_2c5a3968:
                    /* WARNING: Subroutine does not return */
      FUN_2c658680(DAT_2c5a3978);
    }
    if (*DAT_2c5a3930 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    local_9c = (uint *)FUN_2c47245c(0,uVar5 + 1);
    local_94[0] = uVar5;
LAB_2c5a38b4:
    FUN_2c674668(local_9c,puVar7,uVar5);
  }
  *(undefined1 *)((int)local_9c + uVar5) = 0;
  if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5a391c,0x162,DAT_2c5a3918,DAT_2c5a392c,local_9c);
  }
  pcVar4 = (char *)**(undefined4 **)(param_1 + 0x18);
  if (((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) ||
     ((pcVar4 = (char *)(*(undefined4 **)(param_1 + 0x18))[1], pcVar4 != (char *)0x0 &&
      (*pcVar4 != '\0')))) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5a391c,0x167,DAT_2c5a3918,DAT_2c5a3928);
  }
  if (local_9c != local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  FUN_2c5a73c8(&local_84);
LAB_2c5a36a0:
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5a391c,0x179,DAT_2c5a3918,DAT_2c5a3914);
}

