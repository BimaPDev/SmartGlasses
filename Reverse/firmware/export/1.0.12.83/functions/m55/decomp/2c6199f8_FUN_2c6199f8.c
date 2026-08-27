/* FUN_2c6199f8 @ 0x2c6199f8 */

void FUN_2c6199f8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_2c6041d4(param_2);
  FUN_2c604458(param_2,*(undefined4 *)(iVar1 + 0x24));
  FUN_2c627e28(param_2,1);
  FUN_2c627e50(param_2,0,2);
  lv_obj_add_flag_invalidate(param_2,0x4000);
  return;
}

