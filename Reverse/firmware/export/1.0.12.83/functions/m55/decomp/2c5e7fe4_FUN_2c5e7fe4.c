/* FUN_2c5e7fe4 @ 0x2c5e7fe4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e7fe4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_2c5e72b8(4,0);
  if ((iVar1 != 0) && (iVar1 = FUN_2c6041dc(*_LAB_2c5e801c,0xffffffff), iVar1 != 0)) {
    lv_obj_add_flag_invalidate(iVar1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x2c5e7ffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_LAB_2c5e8018 + 0x4c))(0,param_1);
  return;
}

