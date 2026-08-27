/* FUN_2c51b6f4 @ 0x2c51b6f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c51b6f4(int param_1)

{
  undefined4 uVar1;
  
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0xc),1);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x10),1);
  uVar1 = _LAB_2c51b728;
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x14),1);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c51b730,0x2c,_LAB_2c51b72c,uVar1);
}

