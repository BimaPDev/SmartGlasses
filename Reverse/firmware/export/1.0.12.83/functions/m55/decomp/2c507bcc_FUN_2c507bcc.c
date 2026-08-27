/* FUN_2c507bcc @ 0x2c507bcc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c507bcc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  
  uVar2 = _LAB_2c507c5c;
  piVar4 = (int *)(param_1 + 0x28);
  do {
    piVar5 = piVar4 + 1;
    FUN_2c5eba54(*(undefined4 *)(*piVar4 + 8),uVar2);
    piVar4 = piVar5;
  } while ((int *)(param_1 + 0x3c) != piVar5);
  if (*(int *)(param_1 + 0x18) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x18),1);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x1c),1);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x20),1);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x24),1);
  }
  FUN_2c50ed7c(param_1 + 0x50);
  FUN_2c50ed7c(param_1 + 0xec);
  FUN_2c50ed7c(param_1 + 0x188);
  FUN_2c50ed7c(param_1 + 0x224);
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_2c62be40();
  }
  FUN_2c60251c(*(undefined4 *)(param_1 + 0x24),_LAB_2c507c60);
  FUN_2c60251c(*(undefined4 *)(param_1 + 0x24),_LAB_2c507c64);
  iVar3 = FUN_2c504998();
  piVar5 = *(int **)(iVar3 + 0xc);
  piVar4 = *(int **)(iVar3 + 8);
  do {
    piVar1 = piVar4;
    if (piVar5 == piVar1) {
      return;
    }
    piVar4 = piVar1 + 1;
  } while (*piVar1 != param_1 + 0x10);
  if (piVar5 != piVar4) {
    FUN_2c673eb8(piVar1,piVar4,(int)piVar5 - (int)piVar4,piVar4,param_4,unaff_r4,unaff_r5,unaff_lr);
    piVar4 = *(int **)(iVar3 + 0xc);
  }
  *(int **)(iVar3 + 0xc) = piVar4 + -1;
  return;
}

