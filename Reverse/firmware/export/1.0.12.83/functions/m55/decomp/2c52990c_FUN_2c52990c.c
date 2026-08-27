/* FUN_2c52990c @ 0x2c52990c */

void FUN_2c52990c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_2c637344(param_2);
  *param_1 = uVar1;
  FUN_2c606e38(uVar1,param_5,0);
  FUN_2c606e20(*param_1,0xff00ff00,0);
  FUN_2c606e2c(*param_1,0xff,0);
  FUN_2c607048(*param_1,param_3,param_4);
  lv_obj_add_flag_invalidate(*param_1,1);
  FUN_2c6388dc(*param_1,1);
  return;
}

