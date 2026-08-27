/* FUN_2c5f1414 @ 0x2c5f1414 */

int FUN_2c5f1414(int param_1,undefined2 param_2)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x50) == 0) {
    *(undefined2 *)(param_1 + 0x50) = param_2;
  }
  iVar1 = FUN_2c5fefc8(DAT_2c5f1188,param_1);
  FUN_2c5ff0b8();
  FUN_2c627e28(iVar1,0);
  *(undefined1 *)(iVar1 + 0x25) = 8;
  lv_obj_add_flag_invalidate(iVar1,1);
  return iVar1;
}

