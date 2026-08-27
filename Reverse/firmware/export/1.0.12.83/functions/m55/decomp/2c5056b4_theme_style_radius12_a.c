/* theme_style_radius12_a @ 0x2c5056b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
theme_style_radius12_a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  FUN_2c5067f4();
  uVar1 = _LAB_2c505784;
  uVar5 = _LAB_2c505780;
  *param_1 = _LAB_2c505780;
  uVar2 = _LAB_2c505788;
  puVar4 = param_1 + 4;
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  param_1[0x1c] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_2c50eb88(param_1 + 0x20,uVar2,uVar1,uVar5,param_4);
  FUN_2c50eb88(param_1 + 0x47,_LAB_2c505788,_LAB_2c505784);
  FUN_2c50eb88(param_1 + 0x6e,_LAB_2c505790,_LAB_2c50578c);
  FUN_2c50eb88(param_1 + 0x95,_LAB_2c505798,_LAB_2c505794);
  FUN_2c50eb88(param_1 + 0xbc,_LAB_2c5057a0,_LAB_2c50579c);
  FUN_2c50eb88(param_1 + 0xe3,_LAB_2c5057a8,_LAB_2c5057a4);
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  uVar3 = FUN_2c5e33e4();
  *(undefined1 *)((int)param_1 + 0xd) = uVar3;
  lv_style_init_or_reset(puVar4);
  uVar5 = *_LAB_2c5057ac;
  lv_obj_set_style_bg_color(puVar4,uVar5);
  lv_obj_set_style_bg_opa(puVar4,0);
  lv_obj_set_style_prop_0x32(puVar4,1);
  lv_obj_set_style_prop_0x30(puVar4,uVar5);
  lv_obj_set_style_radius(puVar4,0xc);
  lv_obj_set_style_prop_0x31(puVar4,0x4c);
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}

