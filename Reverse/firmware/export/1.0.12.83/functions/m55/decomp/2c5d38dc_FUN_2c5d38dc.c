/* FUN_2c5d38dc @ 0x2c5d38dc */

void FUN_2c5d38dc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  
  FUN_2c5c685c();
  iVar1 = FUN_2c5c6cbc();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    if (param_2 != 0) {
      lv_obj_add_flag_invalidate();
      return;
    }
    FUN_2c606abc(*(int *)(param_1 + 0x30),1,extraout_r2,param_4);
    return;
  }
  return;
}

