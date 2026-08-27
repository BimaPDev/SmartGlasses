/* FUN_2c5eac6c @ 0x2c5eac6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5eac6c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = _DAT_2c5eaca4;
  piVar1 = _LAB_2c5eaca0;
  *_LAB_2c5eaca0 = param_1;
  FUN_2c603a04(param_1,0,uVar2,param_4,param_4);
  iVar3 = *piVar1;
  *(undefined4 *)(iVar3 + 0x10) = 1;
  FUN_2c607048(iVar3,0x144,0x27d1);
  lv_obj_add_flag_invalidate(*piVar1,1);
  func_0x2c5e9918(*piVar1);
  *(undefined1 *)(piVar1 + 4) = 4;
  return;
}

