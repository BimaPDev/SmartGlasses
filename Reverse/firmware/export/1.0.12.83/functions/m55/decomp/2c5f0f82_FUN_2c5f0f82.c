/* FUN_2c5f0f82 @ 0x2c5f0f82 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5f0f82(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_2c637344();
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  lv_obj_add_flag_invalidate(uVar1,1);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5f0fe4,0x46,_LAB_2c5f0fe0,_LAB_2c5f0fdc,param_2);
}

