/* FUN_2c603c40 @ 0x2c603c40 */

void FUN_2c603c40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_2c603170(param_1,param_4);
  lv_obj_set_local_style_prop(uVar1,param_2,param_3);
  if (*DAT_2c603c74 == '\0') {
    return;
  }
  FUN_2c603540(param_1,param_4,param_2);
  return;
}

