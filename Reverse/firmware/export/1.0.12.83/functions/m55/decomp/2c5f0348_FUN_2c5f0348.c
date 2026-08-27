/* FUN_2c5f0348 @ 0x2c5f0348 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5f0348(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5f03ec,0x52,_LAB_2c5f03e8,_LAB_2c5f03e4,param_2);
  }
  uVar1 = FUN_2c637344();
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  lv_obj_add_flag_invalidate(uVar1,1);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5f03ec,0x4a,_LAB_2c5f03e8,_LAB_2c5f03e4,param_2);
}

