/* FUN_2c5d80ec @ 0x2c5d80ec */

void FUN_2c5d80ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  
  iVar1 = FUN_2c602400();
  iVar2 = FUN_2c621084(param_1);
  if ((iVar2 != 0) && (iVar1 != 0)) {
    iVar2 = FUN_2c62107c();
    if (iVar2 != 0) {
      FUN_2c606abc();
      FUN_2c63140c(iVar1,iVar2,extraout_r2_00,param_4);
      return;
    }
    lv_obj_add_flag_invalidate(iVar1,1,extraout_r2,param_4);
    return;
  }
  return;
}

