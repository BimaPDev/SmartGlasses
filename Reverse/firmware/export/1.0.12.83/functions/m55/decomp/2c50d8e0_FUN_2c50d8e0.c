/* FUN_2c50d8e0 @ 0x2c50d8e0 */

void FUN_2c50d8e0(int param_1)

{
  undefined4 unaff_r4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x10),1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x14),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c63f774,0xc5,DAT_2c63f778,DAT_2c63f770,1,unaff_r4);
}

