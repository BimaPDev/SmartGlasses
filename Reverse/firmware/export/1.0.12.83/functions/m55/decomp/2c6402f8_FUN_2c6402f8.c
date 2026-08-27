/* FUN_2c6402f8 @ 0x2c6402f8 */

void FUN_2c6402f8(undefined4 param_1,short param_2)

{
  undefined4 uVar1;
  
  FUN_2c607df0();
  uVar1 = FUN_2c603170(param_1,0);
  lv_obj_set_local_style_prop(uVar1,0x6c,(int)param_2);
  if (*DAT_2c603c74 == '\0') {
    return;
  }
  FUN_2c603540(param_1,0,0x6c);
  return;
}

