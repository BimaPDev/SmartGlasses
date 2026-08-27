/* FUN_2c628b44 @ 0x2c628b44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c628b44(undefined4 param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  FUN_2c603c40(param_1,*param_2,param_4,0);
  uVar1 = *_LAB_2c628b6c;
  uVar2 = FUN_2c603170(param_1,0);
  lv_obj_set_local_style_prop(uVar2,uVar1,param_3);
  if (*DAT_2c603c74 == '\0') {
    return;
  }
  FUN_2c603540(param_1,0,uVar1);
  return;
}

