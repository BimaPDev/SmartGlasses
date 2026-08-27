/* FUN_2c516704 @ 0x2c516704 */

void FUN_2c516704(undefined4 *param_1)

{
  int iVar1;
  
  FUN_2c606d90(*param_1,0x4c,0x10);
  FUN_2c606d6c(*param_1,0xff,0);
  FUN_2c606d60(*param_1,0xff000000,0x10);
  iVar1 = FUN_2c606b94(param_1[2],1);
  if (iVar1 == 0) {
    return;
  }
  FUN_2c606abc(param_1[2],1);
  lv_obj_add_flag_invalidate(param_1[1],1);
  lv_obj_add_flag_invalidate(param_1[0x15],1);
  return;
}

