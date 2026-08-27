/* PATCH_radius12_b @ 0x2c509b9e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PATCH_radius12_b(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 in_stack_00000014;
  
  lv_obj_set_style_radius(param_1,0xc);
  lv_obj_set_style_prop_0x31(in_stack_00000014,0x4c);
  uVar1 = FUN_2c5e2e8c(_LAB_2c509c04);
  *(undefined4 *)(unaff_r4 + 0x50) = uVar1;
  *(char *)(unaff_r4 + 0x54) = (char)unaff_r5;
  *(undefined4 *)(unaff_r4 + 400) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x19c) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x194) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x198) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x2c) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x30) = unaff_r5;
  return;
}

