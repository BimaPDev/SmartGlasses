/* FUN_2c61c05c @ 0x2c61c05c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c61c05c(undefined4 param_1,int param_2)

{
  FUN_2c607048(param_2,0x2064);
  FUN_2c602454(param_2,_LAB_2c61c094,0);
  lv_obj_add_flag_invalidate(param_2,0x80);
  FUN_2c6049c4(param_2,3);
  FUN_2c606bc8();
  *(byte *)(*(int *)(param_2 + 8) + 0x18) = *(byte *)(*(int *)(param_2 + 8) + 0x18) & 0xcf | 0x30;
  return;
}

