/* FUN_2c5f13d8 @ 0x2c5f13d8 */

int FUN_2c5f13d8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_2c5fefc8(DAT_2c5f1410,param_1);
  FUN_2c5ff0b8();
  FUN_2c627e28(iVar1,1);
  *(undefined1 *)(iVar1 + 0x25) = 7;
  *(undefined2 *)(iVar1 + 0x50) = 0;
  FUN_2c62c3b0(iVar1 + 0x28);
  lv_obj_add_flag_invalidate(iVar1,1);
  return iVar1;
}

