/* FUN_2c5b0ac4 @ 0x2c5b0ac4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5b0ac4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1 + 0xa4;
  iVar4 = param_1 + 0xac;
  iVar3 = param_1 + 0xb4;
  lv_style_init_or_reset(iVar2);
  iVar1 = param_1 + 0xbc;
  lv_style_init_or_reset(iVar4);
  lv_style_init_or_reset(iVar3);
  lv_style_init_or_reset(iVar1);
  FUN_2c62b03c(param_1 + 0x54,param_1 + 0x4a,_LAB_2c5b0ba8,0x96,100,0);
  FUN_2c62b03c(param_1 + 0x90,param_1 + 0x4a,_LAB_2c5b0ba8,0x96,100,0);
  lv_obj_set_style_prop_0x31(iVar2,0x4c);
  lv_obj_set_style_bg_opa(iVar2,0);
  FUN_2c62c818(iVar2,param_1 + 0x54);
  lv_obj_set_style_prop_0x31(iVar1,0xff);
  lv_obj_set_style_bg_opa(iVar1,0x19);
  FUN_2c62c818(iVar1,param_1 + 0x90);
  FUN_2c62b03c(param_1 + 0x68,param_1 + 0x50,_LAB_2c5b0bac,0x96,0x96,0);
  FUN_2c62b03c(param_1 + 0x7c,param_1 + 0x50,_LAB_2c5b0bb0,0x96,0,0);
  lv_obj_set_style_bg_opa(iVar4,0x19);
  FUN_2c62c818(iVar4,param_1 + 0x68);
  lv_obj_set_style_bg_opa(iVar3,0x4c);
  lv_obj_set_local_style_prop(iVar3,0x66,param_1 + 0x7c);
  return;
}

