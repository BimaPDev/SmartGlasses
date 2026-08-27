/* theme_style_radius12_c @ 0x2c50c808 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * theme_style_radius12_c(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  FUN_2c5067f4();
  uVar6 = _DAT_2c50c938;
  puVar3 = param_1 + 4;
  param_1[9] = 0;
  puVar5 = param_1 + 6;
  *param_1 = uVar6;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  lv_style_init_or_reset();
  lv_obj_set_style_prop_0x32(puVar3,1);
  uVar6 = *_LAB_2c50c93c;
  lv_obj_set_style_prop_0x30(puVar3,uVar6);
  lv_obj_set_style_prop_0x31(puVar3,0xff);
  lv_style_init_or_reset(puVar5);
  lv_obj_set_style_radius(puVar5,0xc);
  piVar1 = _LAB_2c50c940;
  lv_obj_set_style_bg_color(puVar5,uVar6);
  if (*piVar1 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar3 = (undefined4 *)FUN_2c47245c(0,0x10);
  uVar6 = _LAB_2c50c944;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = uVar6;
  iVar4 = *piVar1;
  puVar3[3] = _LAB_2c50c948;
  param_1[0xc] = puVar3;
  if (iVar4 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar3 = (undefined4 *)FUN_2c47245c(0,0x10);
  uVar6 = _LAB_2c50c94c;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = uVar6;
  iVar4 = *piVar1;
  puVar3[3] = _LAB_2c50c950;
  param_1[0xd] = puVar3;
  if (iVar4 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar3 = (undefined4 *)FUN_2c47245c(0,0x10);
  uVar6 = _LAB_2c50c954;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = uVar6;
  iVar4 = *piVar1;
  puVar3[3] = _LAB_2c50c958;
  param_1[0xe] = puVar3;
  if (iVar4 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar3 = (undefined4 *)FUN_2c47245c(0,0x10);
  uVar6 = _LAB_2c50c95c;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = uVar6;
  iVar4 = *piVar1;
  puVar3[3] = _LAB_2c50c960;
  param_1[0xf] = puVar3;
  if (iVar4 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar3 = (undefined4 *)FUN_2c47245c(0,0x10);
  uVar2 = _LAB_2c50c968;
  uVar6 = _LAB_2c50c964;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = uVar6;
  puVar3[3] = uVar2;
  param_1[0x10] = puVar3;
  return param_1;
}

