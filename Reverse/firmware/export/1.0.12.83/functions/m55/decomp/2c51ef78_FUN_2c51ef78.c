/* FUN_2c51ef78 @ 0x2c51ef78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c51ef78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    uVar1 = FUN_2c5e2e4c(_LAB_2c51efe0);
    FUN_2c63140c(iVar2,uVar1);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x18),1);
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != 0) {
    uVar1 = registry_lookup(_LAB_2c51efe4);
    FUN_2c638730(iVar2,uVar1);
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 != 0) {
    uVar1 = FUN_2c5e2e4c(DAT_2c51efe8);
    FUN_2c63140c(iVar2,uVar1);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_2c606abc(*(int *)(param_1 + 0x24),1);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_2c62be40();
    FUN_2c62be74(*(undefined4 *)(param_1 + 0x30));
    FUN_2c62be4c(*(undefined4 *)(param_1 + 0x30),extraout_r1,extraout_r2,param_4);
    return;
  }
  return;
}

