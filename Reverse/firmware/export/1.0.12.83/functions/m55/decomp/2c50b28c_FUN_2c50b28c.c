/* FUN_2c50b28c @ 0x2c50b28c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50b28c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 unaff_r4;
  int iVar3;
  undefined4 unaff_lr;
  
  uVar2 = _LAB_2c50b2e8;
  iVar3 = param_1;
  do {
    puVar1 = (undefined4 *)(iVar3 + 0x24);
    iVar3 = iVar3 + 0x48;
    FUN_2c5eba54(*puVar1,uVar2);
  } while (param_1 + 0x120 != iVar3);
  if (*(int *)(param_1 + 0x10) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x10),1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x14),1);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x18),1);
  }
  FUN_2c50ed7c(param_1 + 0x168);
  FUN_2c50ed7c(param_1 + 0x204);
  FUN_2c50ed7c(param_1 + 0x2a0);
  FUN_2c62e838(*(undefined4 *)(param_1 + 0x340),DAT_2c50ed9c,extraout_r2,param_4,unaff_r4,unaff_lr);
  FUN_2c62e838(*(undefined4 *)(param_1 + 0x344),DAT_2c50eda0);
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x344) = 0;
  return;
}

