/* FUN_2c5b6398 @ 0x2c5b6398 */

void FUN_2c5b6398(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_2c638730(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10),DAT_2c5b63d0);
  FUN_2c638730(*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),DAT_2c5b63d4);
  lv_obj_add_flag_invalidate(*(undefined4 *)(*(int *)(param_1 + 4) + 0xc),1);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  uVar1 = FUN_2c5e2e8c(DAT_2c5b63d8);
  FUN_2c63140c(uVar2,uVar1);
  return;
}

