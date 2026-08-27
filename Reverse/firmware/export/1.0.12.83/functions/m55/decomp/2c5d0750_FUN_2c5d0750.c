/* FUN_2c5d0750 @ 0x2c5d0750 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d0750(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1 + 0xe0;
  iVar4 = param_1 + 0xe8;
  iVar3 = param_1 + 0xf0;
  iVar1 = param_1 + 0xf8;
  lv_style_init_or_reset(iVar2);
  lv_style_init_or_reset(iVar4);
  lv_style_init_or_reset(iVar3);
  lv_style_init_or_reset(iVar1);
  FUN_2c62b03c(param_1 + 0x90,param_1 + 0x86,_LAB_2c5d08a8,200,0x96,0);
  FUN_2c62b03c(param_1 + 0xcc,param_1 + 0x86,_LAB_2c5d08a8,200,0x96,0);
  lv_obj_set_style_prop_0x31(iVar2,0x4c);
  lv_obj_set_style_bg_opa(iVar2,0);
  FUN_2c62c818(iVar2,param_1 + 0x90);
  lv_obj_set_style_prop_0x31(iVar1,0xff);
  lv_obj_set_style_bg_opa(iVar1,0x19);
  FUN_2c62c818(iVar1,param_1 + 0xcc);
  FUN_2c62b03c(param_1 + 0xa4,param_1 + 0x8c,_LAB_2c5d08a8,0x96,0x96,0);
  FUN_2c62b03c(param_1 + 0xb8,param_1 + 0x8c,_LAB_2c5d08a8,0x96,0,0);
  lv_obj_set_style_bg_opa(iVar4,0x19);
  iVar2 = param_1 + 300;
  FUN_2c62c818(iVar4,param_1 + 0xa4);
  lv_obj_set_style_bg_opa(iVar3,0x4c);
  iVar1 = param_1 + 0x134;
  FUN_2c62c818(iVar3,param_1 + 0xb8);
  lv_style_init_or_reset(iVar2);
  lv_style_init_or_reset(iVar1);
  FUN_2c62b03c(param_1 + 0x104,param_1 + 0x100,_LAB_2c5d08a8,200,0x96,0);
  func_0x2c62c7f8(iVar2,0);
  FUN_2c62c818(iVar2,param_1 + 0x104);
  FUN_2c62b03c(param_1 + 0x118,param_1 + 0x100,_LAB_2c5d08a8,200,0x96,0);
  func_0x2c62c7f8(iVar1,0xff);
  lv_obj_set_local_style_prop(iVar1,0x66,param_1 + 0x118);
  return;
}

