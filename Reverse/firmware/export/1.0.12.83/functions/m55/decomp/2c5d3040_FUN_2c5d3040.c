/* FUN_2c5d3040 @ 0x2c5d3040 */

void FUN_2c5d3040(int param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined1 *)(param_1 + 0xe0)) {
  case 1:
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x1c),1);
    uVar1 = 0x10;
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x20),1);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x24),1);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x28),1);
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0xc),1);
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x14),1);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x18),1);
    FUN_2c608808(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x94),0x14,0x10,
                 0xfffffffc);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x10),1);
    break;
  case 2:
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x20),1);
    uVar1 = 0x12;
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x1c),1);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x24),1);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x28),1);
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0xc),1);
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x18),1);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x14),1);
    FUN_2c608808(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x94),0x11,0xfffffffb,10)
    ;
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x10),1);
    break;
  case 3:
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x24),1);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x1c),1);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x20),1);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x28),1);
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x14),1);
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x10),1);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0xc),1);
    FUN_2c608808(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x94),0xb,0,0xfffffff6);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x18),1);
    FUN_2c608808(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x94),0x14,0x10,
                 0xfffffffc);
    return;
  case 4:
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x28),1);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x1c),1);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x20),1);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x24),1);
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x18),1);
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x10),1);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0xc),1);
    FUN_2c608808(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x94),0xb,0,0xfffffff6);
    FUN_2c606abc(*(undefined4 *)(param_1 + 0x14),1);
    FUN_2c608808(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x94),0x11,0xfffffffb,10)
    ;
    return;
  default:
    goto switchD_2c5d3050_default;
  }
  FUN_2c608808(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x94),0xe,0xc,uVar1);
switchD_2c5d3050_default:
  return;
}

