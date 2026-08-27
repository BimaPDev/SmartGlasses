/* FUN_2c5a40e4 @ 0x2c5a40e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5a40e4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  iVar1 = FUN_2c5a406c();
  if (iVar1 == 0) {
    pcVar3 = (char *)FUN_2c63736c(*(undefined4 *)(param_1 + 0x28));
    if ((*pcVar3 == ' ') && (pcVar3[1] == '\0')) {
      uVar6 = *(undefined4 *)(param_1 + 0x104);
      uVar2 = FUN_2c5e2e8c(_LAB_2c5a4190);
      FUN_2c63140c(uVar6,uVar2);
    }
    else {
      iVar1 = FUN_2c63180c(*(undefined4 *)(param_1 + 0x104));
      iVar4 = FUN_2c5e2e8c(_LAB_2c5a4190);
      if (iVar1 == iVar4) {
        uVar6 = *(undefined4 *)(param_1 + 0x104);
        uVar2 = FUN_2c5e2e8c(_LAB_2c5a4194);
        FUN_2c63140c(uVar6,uVar2);
      }
      FUN_2c606abc(*(undefined4 *)(param_1 + 0x28),1);
    }
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x104);
    uVar2 = FUN_2c5e2e8c(_LAB_2c5a4190);
    FUN_2c63140c(uVar6,uVar2);
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x28),1);
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0xf4),1);
  }
  if (((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 0x20) == 0)) ||
     (*(int *)(param_1 + 0x24) == 0)) {
    return;
  }
  func_0x2c5a47dc(*(int *)(param_1 + 4),param_2);
  func_0x2c5a46cc(*(undefined4 *)(param_1 + 4));
  iVar1 = *(int *)(param_1 + 4);
  iVar4 = *_LAB_2c5a47cc;
  if ((*(uint *)(iVar1 + 0x1c) < 2) && (*(int *)(iVar1 + (*(uint *)(iVar1 + 0x1c) + 8) * 4) != 0)) {
    FUN_2c62e7b4(&uStack_50);
    iStack_30 = (int)*(short *)(iVar1 + 0x12) - (int)*(short *)(iVar1 + 2);
    iStack_28 = iStack_30 - *(short *)(iVar1 + 2);
    uStack_50 = *(undefined4 *)(iVar1 + (*(int *)(iVar1 + 0x1c) + 8) * 4);
    uStack_24 = 0x96;
    uStack_44 = _LAB_2c5a47d4;
    uStack_34 = _LAB_2c5a47d8;
    uStack_4c = _LAB_2c5a47d0;
    iStack_38 = iVar1;
    iStack_2c = iStack_30;
    FUN_2c62e8ec(&uStack_50);
    iVar5 = *(int *)(iVar1 + 0x1c) + 1;
    if (*(int *)(iVar1 + 0x18) <= iVar5) {
      iVar5 = 0;
    }
    *(int *)(iVar1 + 0x1c) = iVar5;
    func_0x2c5a46cc(iVar1);
  }
  if (*_LAB_2c5a47cc == iVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

