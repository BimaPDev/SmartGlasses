/* FUN_2c5d3908 @ 0x2c5d3908 */

void FUN_2c5d3908(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar2;
  undefined4 extraout_r2_01;
  
  if ((*(int *)(param_1 + 0x44) != 0) && (*(char *)(param_1 + 0x4c) != '\0')) {
    if (param_2 == 0) {
      FUN_2c606abc(*(int *)(param_1 + 0x44),1);
    }
    else {
      lv_obj_add_flag_invalidate();
    }
  }
  if ((*(int *)(param_1 + 0x54) == 0) || (*(char *)(param_1 + 100) == '\0')) {
    FUN_2c5d38dc(param_1,param_2);
    iVar1 = *(int *)(param_1 + 0x6c);
    if (iVar1 == 0) {
      return;
    }
    uVar2 = extraout_r2_00;
    if (param_2 == 0) goto LAB_2c5d3976;
  }
  else {
    if (param_2 == 0) {
      FUN_2c606abc(*(int *)(param_1 + 0x54),1);
      FUN_2c5d38dc(param_1,0);
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar2 = extraout_r2_01;
      if (iVar1 == 0) {
        return;
      }
LAB_2c5d3976:
      if (*(char *)(param_1 + 0x7c) == '\0') {
        return;
      }
      FUN_2c606abc(iVar1,1,uVar2,param_4);
      return;
    }
    lv_obj_add_flag_invalidate();
    FUN_2c5d38dc(param_1,1);
    iVar1 = *(int *)(param_1 + 0x6c);
    uVar2 = extraout_r2;
    if (iVar1 == 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x7c) == '\0') {
    return;
  }
  lv_obj_add_flag_invalidate(iVar1,1,uVar2,param_4);
  return;
}

