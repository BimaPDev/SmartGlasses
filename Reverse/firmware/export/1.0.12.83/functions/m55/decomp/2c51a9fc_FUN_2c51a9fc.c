/* FUN_2c51a9fc @ 0x2c51a9fc */

void FUN_2c51a9fc(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_64 [64];
  int iStack_24;
  
  FUN_2c606b6c(*(undefined4 *)(param_1 + 0x20),2);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0xc),1);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x10),1);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x18),1);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x28),1);
  iStack_24 = *DAT_2c51a98c;
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c51a9b0,0x11d,DAT_2c51a9b8,DAT_2c51a9b4,DAT_2c51a9cc);
  }
  iVar2 = FUN_2c5efb5c(iVar1);
  piVar3 = (int *)FUN_2c5efbb4(iVar1);
  if ((iVar2 == 0) && (iVar2 = piVar3[2], iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c51a9b0,0x122,DAT_2c51a9b8,DAT_2c51a9b4,DAT_2c51a9bc);
  }
  iVar1 = FUN_2c5efbb0(iVar1);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 0xc) == '\0')) {
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x14));
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x20),1);
    FUN_2c608808(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc),0x14,0xc,0);
    if (piVar3[2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c51a9f8,0x14a,DAT_2c51a9f4,DAT_2c51a9f0,DAT_2c51a9ec);
    }
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = registry_lookup(DAT_2c51a990);
    FUN_2c638814(uVar6,DAT_2c51a994,uVar4,piVar3[2]);
    iVar1 = FUN_2c66c4ec(piVar3[2]);
    registry_lookup(DAT_2c51a998);
    iVar2 = FUN_2c66c4ec();
    if (0x3f < (uint)(iVar1 + iVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c51a9b0,0x14f,DAT_2c51a9b8,DAT_2c51a9b4,DAT_2c51a9ac);
    }
    FUN_2c674668(auStack_64,piVar3[2],iVar1);
    uVar4 = registry_lookup(DAT_2c51a998);
    FUN_2c674668(auStack_64 + iVar1,uVar4,iVar2);
    uVar4 = *(undefined4 *)(param_1 + 0x18);
    auStack_64[iVar1 + iVar2] = 0;
    FUN_2c4fee2c(uVar4,auStack_64);
    if (*piVar3 == 0) {
      FUN_2c4ff234(*(undefined4 *)(param_1 + 0x18),DAT_2c51a9c8,0);
    }
    else {
      FUN_2c4ff234(*(undefined4 *)(param_1 + 0x18),*piVar3,0);
    }
    iVar1 = FUN_2c606bb4(*(undefined4 *)(param_1 + 0x20),2);
    if (iVar1 != 0) {
      FUN_2c606b80(*(undefined4 *)(param_1 + 0x20),2);
    }
  }
  else {
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x14),1);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x20),1);
    FUN_2c608808(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc),0x13,0xc,0);
    FUN_2c608808(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0xc),0x15,0xc,0);
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = registry_lookup(DAT_2c51a9c0);
    FUN_2c638814(uVar6,DAT_2c51a994,uVar4,*(undefined4 *)(iVar1 + 8));
    uVar6 = *(undefined4 *)(param_1 + 0x14);
    uVar4 = registry_lookup(DAT_2c51a9c4);
    FUN_2c638814(uVar6,DAT_2c51a994,uVar4,iVar2);
    iVar2 = FUN_2c66c4ec(*(undefined4 *)(iVar1 + 8));
    registry_lookup(DAT_2c51a998);
    iVar5 = FUN_2c66c4ec();
    if (0x3f < (uint)(iVar2 + iVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c51a9b0,0x137,DAT_2c51a9b8,DAT_2c51a9b4,DAT_2c51a9ac);
    }
    FUN_2c674668(auStack_64,*(undefined4 *)(iVar1 + 8),iVar2);
    uVar4 = registry_lookup(DAT_2c51a998);
    FUN_2c674668(auStack_64 + iVar2,uVar4,iVar5);
    uVar4 = *(undefined4 *)(param_1 + 0x18);
    auStack_64[iVar2 + iVar5] = 0;
    FUN_2c4fee2c(uVar4,auStack_64);
    FUN_2c4ff234(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(iVar1 + 4),0);
    iVar1 = FUN_2c606bb4(*(undefined4 *)(param_1 + 0x20),2);
    if (iVar1 != 0) {
      iVar1 = FUN_2c606bb4(*(undefined4 *)(param_1 + 0x18),2);
      if (iVar1 != 0) {
        FUN_2c606b80(*(undefined4 *)(param_1 + 0x18),2);
      }
      goto LAB_2c51a7b2;
    }
  }
  iVar1 = FUN_2c606bb4(*(undefined4 *)(param_1 + 0x18),2);
  if (iVar1 == 0) {
    FUN_2c606b6c(*(undefined4 *)(param_1 + 0x18),2);
  }
LAB_2c51a7b2:
  uVar4 = FUN_2c4fefe4(*(undefined4 *)(param_1 + 0x18));
  iVar1 = FUN_2c4fefe8(*(undefined4 *)(param_1 + 0x18),uVar4);
  if (iVar1 == 0) {
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x1c),1);
    iVar1 = FUN_2c606bb4(*(undefined4 *)(param_1 + 0x18),2);
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      uVar6 = FUN_2c5e2e4c(DAT_2c51a9a8);
      FUN_2c63140c(uVar4,uVar6);
    }
    else {
      uVar6 = FUN_2c5e2e4c(DAT_2c51a9a4);
      FUN_2c63140c(uVar4,uVar6);
    }
  }
  else {
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x1c));
  }
  uVar6 = *(undefined4 *)(param_1 + 0x24);
  uVar4 = registry_lookup(DAT_2c51a99c);
  FUN_2c638730(uVar6,uVar4);
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = registry_lookup(DAT_2c51a9a0);
  FUN_2c638730(uVar6,uVar4);
  if (*DAT_2c51a98c != iStack_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

