/* FUN_2c509f98 @ 0x2c509f98 */

void FUN_2c509f98(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 uVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 400) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 400),1);
    uVar1 = *(undefined4 *)(param_1 + 400);
  }
  FUN_2c606d6c(uVar1,0);
  FUN_2c60710c(*(undefined4 *)(param_1 + 0x198),0);
  FUN_2c6070bc(*(undefined4 *)(param_1 + 0x19c),0);
  FUN_2c509dec(param_1);
  FUN_2c50ec60(param_1 + 0x1a0,*(undefined4 *)(param_1 + 400));
  uVar1 = *(undefined4 *)(param_1 + 0x198);
  if (*(int *)(param_1 + 0x240) != 0) {
    uVar2 = extraout_r3;
    FUN_2c62e838(*(int *)(param_1 + 0x240),DAT_2c50ec94);
    if (*(int *)(param_1 + 0x240) != 0) {
      FUN_2c50e398(*(int *)(param_1 + 0x240),*(undefined1 *)(*(int *)(param_1 + 0x2d0) + 0x18),
                   *(undefined1 *)(*(int *)(param_1 + 0x2d0) + 8),1,uVar2,unaff_r4);
    }
  }
  *(undefined4 *)(param_1 + 0x240) = uVar1;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  FUN_2c62e8ec(param_1 + 0x248);
  return;
}

